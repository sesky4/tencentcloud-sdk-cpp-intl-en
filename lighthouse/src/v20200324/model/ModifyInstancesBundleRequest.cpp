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

#include <tencentcloud/lighthouse/v20200324/model/ModifyInstancesBundleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

ModifyInstancesBundleRequest::ModifyInstancesBundleRequest() :
    m_instanceIdsHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_autoVoucherHasBeenSet(false)
{
}

string ModifyInstancesBundleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bundleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyInstancesBundleRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void ModifyInstancesBundleRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool ModifyInstancesBundleRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string ModifyInstancesBundleRequest::GetBundleId() const
{
    return m_bundleId;
}

void ModifyInstancesBundleRequest::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool ModifyInstancesBundleRequest::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

bool ModifyInstancesBundleRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void ModifyInstancesBundleRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool ModifyInstancesBundleRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}


