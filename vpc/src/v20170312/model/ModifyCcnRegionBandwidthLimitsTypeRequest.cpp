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

#include <tencentcloud/vpc/v20170312/model/ModifyCcnRegionBandwidthLimitsTypeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyCcnRegionBandwidthLimitsTypeRequest::ModifyCcnRegionBandwidthLimitsTypeRequest() :
    m_ccnIdHasBeenSet(false),
    m_bandwidthLimitTypeHasBeenSet(false)
{
}

string ModifyCcnRegionBandwidthLimitsTypeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_bandwidthLimitTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthLimitType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthLimitType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCcnRegionBandwidthLimitsTypeRequest::GetCcnId() const
{
    return m_ccnId;
}

void ModifyCcnRegionBandwidthLimitsTypeRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool ModifyCcnRegionBandwidthLimitsTypeRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string ModifyCcnRegionBandwidthLimitsTypeRequest::GetBandwidthLimitType() const
{
    return m_bandwidthLimitType;
}

void ModifyCcnRegionBandwidthLimitsTypeRequest::SetBandwidthLimitType(const string& _bandwidthLimitType)
{
    m_bandwidthLimitType = _bandwidthLimitType;
    m_bandwidthLimitTypeHasBeenSet = true;
}

bool ModifyCcnRegionBandwidthLimitsTypeRequest::BandwidthLimitTypeHasBeenSet() const
{
    return m_bandwidthLimitTypeHasBeenSet;
}


