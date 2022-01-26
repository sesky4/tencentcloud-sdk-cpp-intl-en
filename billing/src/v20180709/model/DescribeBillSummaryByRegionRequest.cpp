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

#include <tencentcloud/billing/v20180709/model/DescribeBillSummaryByRegionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

DescribeBillSummaryByRegionRequest::DescribeBillSummaryByRegionRequest() :
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_payerUinHasBeenSet(false)
{
}

string DescribeBillSummaryByRegionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_payerUin.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBillSummaryByRegionRequest::GetBeginTime() const
{
    return m_beginTime;
}

void DescribeBillSummaryByRegionRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DescribeBillSummaryByRegionRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

string DescribeBillSummaryByRegionRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBillSummaryByRegionRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBillSummaryByRegionRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBillSummaryByRegionRequest::GetPayerUin() const
{
    return m_payerUin;
}

void DescribeBillSummaryByRegionRequest::SetPayerUin(const string& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool DescribeBillSummaryByRegionRequest::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}


