/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/scf/v20180416/model/GetProvisionedConcurrencyConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

GetProvisionedConcurrencyConfigResponse::GetProvisionedConcurrencyConfigResponse() :
    m_unallocatedConcurrencyNumHasBeenSet(false),
    m_allocatedHasBeenSet(false)
{
}

CoreInternalOutcome GetProvisionedConcurrencyConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("UnallocatedConcurrencyNum") && !rsp["UnallocatedConcurrencyNum"].IsNull())
    {
        if (!rsp["UnallocatedConcurrencyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnallocatedConcurrencyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unallocatedConcurrencyNum = rsp["UnallocatedConcurrencyNum"].GetUint64();
        m_unallocatedConcurrencyNumHasBeenSet = true;
    }

    if (rsp.HasMember("Allocated") && !rsp["Allocated"].IsNull())
    {
        if (!rsp["Allocated"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Allocated` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Allocated"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VersionProvisionedConcurrencyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_allocated.push_back(item);
        }
        m_allocatedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetProvisionedConcurrencyConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_unallocatedConcurrencyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnallocatedConcurrencyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unallocatedConcurrencyNum, allocator);
    }

    if (m_allocatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Allocated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_allocated.begin(); itr != m_allocated.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t GetProvisionedConcurrencyConfigResponse::GetUnallocatedConcurrencyNum() const
{
    return m_unallocatedConcurrencyNum;
}

bool GetProvisionedConcurrencyConfigResponse::UnallocatedConcurrencyNumHasBeenSet() const
{
    return m_unallocatedConcurrencyNumHasBeenSet;
}

vector<VersionProvisionedConcurrencyInfo> GetProvisionedConcurrencyConfigResponse::GetAllocated() const
{
    return m_allocated;
}

bool GetProvisionedConcurrencyConfigResponse::AllocatedHasBeenSet() const
{
    return m_allocatedHasBeenSet;
}

