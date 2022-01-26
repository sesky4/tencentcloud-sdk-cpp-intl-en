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

#include <tencentcloud/apigateway/v20180808/model/UsagePlanBindSecretStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

UsagePlanBindSecretStatus::UsagePlanBindSecretStatus() :
    m_totalCountHasBeenSet(false),
    m_accessKeyListHasBeenSet(false)
{
}

CoreInternalOutcome UsagePlanBindSecretStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UsagePlanBindSecretStatus.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("AccessKeyList") && !value["AccessKeyList"].IsNull())
    {
        if (!value["AccessKeyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UsagePlanBindSecretStatus.AccessKeyList` is not array type"));

        const rapidjson::Value &tmpValue = value["AccessKeyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UsagePlanBindSecret item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accessKeyList.push_back(item);
        }
        m_accessKeyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UsagePlanBindSecretStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_accessKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKeyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accessKeyList.begin(); itr != m_accessKeyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t UsagePlanBindSecretStatus::GetTotalCount() const
{
    return m_totalCount;
}

void UsagePlanBindSecretStatus::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool UsagePlanBindSecretStatus::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<UsagePlanBindSecret> UsagePlanBindSecretStatus::GetAccessKeyList() const
{
    return m_accessKeyList;
}

void UsagePlanBindSecretStatus::SetAccessKeyList(const vector<UsagePlanBindSecret>& _accessKeyList)
{
    m_accessKeyList = _accessKeyList;
    m_accessKeyListHasBeenSet = true;
}

bool UsagePlanBindSecretStatus::AccessKeyListHasBeenSet() const
{
    return m_accessKeyListHasBeenSet;
}

