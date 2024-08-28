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

#include <tencentcloud/cwp/v20180228/model/DescribeExportMachinesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeExportMachinesRequest::DescribeExportMachinesRequest() :
    m_machineTypeHasBeenSet(false),
    m_machineRegionHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_projectIdsHasBeenSet(false)
{
}

string DescribeExportMachinesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_machineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineType.c_str(), allocator).Move(), allocator);
    }

    if (m_machineRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachineRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_machineRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeExportMachinesRequest::GetMachineType() const
{
    return m_machineType;
}

void DescribeExportMachinesRequest::SetMachineType(const string& _machineType)
{
    m_machineType = _machineType;
    m_machineTypeHasBeenSet = true;
}

bool DescribeExportMachinesRequest::MachineTypeHasBeenSet() const
{
    return m_machineTypeHasBeenSet;
}

string DescribeExportMachinesRequest::GetMachineRegion() const
{
    return m_machineRegion;
}

void DescribeExportMachinesRequest::SetMachineRegion(const string& _machineRegion)
{
    m_machineRegion = _machineRegion;
    m_machineRegionHasBeenSet = true;
}

bool DescribeExportMachinesRequest::MachineRegionHasBeenSet() const
{
    return m_machineRegionHasBeenSet;
}

uint64_t DescribeExportMachinesRequest::GetLimit() const
{
    return m_limit;
}

void DescribeExportMachinesRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeExportMachinesRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeExportMachinesRequest::GetOffset() const
{
    return m_offset;
}

void DescribeExportMachinesRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeExportMachinesRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<Filter> DescribeExportMachinesRequest::GetFilters() const
{
    return m_filters;
}

void DescribeExportMachinesRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeExportMachinesRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<uint64_t> DescribeExportMachinesRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeExportMachinesRequest::SetProjectIds(const vector<uint64_t>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeExportMachinesRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}


