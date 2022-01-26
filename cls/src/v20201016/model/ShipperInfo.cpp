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

#include <tencentcloud/cls/v20201016/model/ShipperInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

ShipperInfo::ShipperInfo() :
    m_shipperIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_shipperNameHasBeenSet(false),
    m_intervalHasBeenSet(false),
    m_maxSizeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_filterRulesHasBeenSet(false),
    m_partitionHasBeenSet(false),
    m_compressHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome ShipperInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ShipperId") && !value["ShipperId"].IsNull())
    {
        if (!value["ShipperId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.ShipperId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shipperId = string(value["ShipperId"].GetString());
        m_shipperIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("Bucket") && !value["Bucket"].IsNull())
    {
        if (!value["Bucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Bucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucket = string(value["Bucket"].GetString());
        m_bucketHasBeenSet = true;
    }

    if (value.HasMember("Prefix") && !value["Prefix"].IsNull())
    {
        if (!value["Prefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Prefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prefix = string(value["Prefix"].GetString());
        m_prefixHasBeenSet = true;
    }

    if (value.HasMember("ShipperName") && !value["ShipperName"].IsNull())
    {
        if (!value["ShipperName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.ShipperName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shipperName = string(value["ShipperName"].GetString());
        m_shipperNameHasBeenSet = true;
    }

    if (value.HasMember("Interval") && !value["Interval"].IsNull())
    {
        if (!value["Interval"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Interval` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_interval = value["Interval"].GetUint64();
        m_intervalHasBeenSet = true;
    }

    if (value.HasMember("MaxSize") && !value["MaxSize"].IsNull())
    {
        if (!value["MaxSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.MaxSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSize = value["MaxSize"].GetUint64();
        m_maxSizeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Status` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetBool();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("FilterRules") && !value["FilterRules"].IsNull())
    {
        if (!value["FilterRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.FilterRules` is not array type"));

        const rapidjson::Value &tmpValue = value["FilterRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterRuleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterRules.push_back(item);
        }
        m_filterRulesHasBeenSet = true;
    }

    if (value.HasMember("Partition") && !value["Partition"].IsNull())
    {
        if (!value["Partition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Partition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_partition = string(value["Partition"].GetString());
        m_partitionHasBeenSet = true;
    }

    if (value.HasMember("Compress") && !value["Compress"].IsNull())
    {
        if (!value["Compress"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Compress` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compress.Deserialize(value["Compress"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.Content` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_content.Deserialize(value["Content"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_contentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShipperInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShipperInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_shipperIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShipperId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shipperId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
    }

    if (m_prefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Prefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prefix.c_str(), allocator).Move(), allocator);
    }

    if (m_shipperNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShipperName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shipperName.c_str(), allocator).Move(), allocator);
    }

    if (m_intervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_interval, allocator);
    }

    if (m_maxSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSize, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_filterRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterRules.begin(); itr != m_filterRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_partitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_partition.c_str(), allocator).Move(), allocator);
    }

    if (m_compressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Compress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compress.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_content.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string ShipperInfo::GetShipperId() const
{
    return m_shipperId;
}

void ShipperInfo::SetShipperId(const string& _shipperId)
{
    m_shipperId = _shipperId;
    m_shipperIdHasBeenSet = true;
}

bool ShipperInfo::ShipperIdHasBeenSet() const
{
    return m_shipperIdHasBeenSet;
}

string ShipperInfo::GetTopicId() const
{
    return m_topicId;
}

void ShipperInfo::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool ShipperInfo::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string ShipperInfo::GetBucket() const
{
    return m_bucket;
}

void ShipperInfo::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool ShipperInfo::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

string ShipperInfo::GetPrefix() const
{
    return m_prefix;
}

void ShipperInfo::SetPrefix(const string& _prefix)
{
    m_prefix = _prefix;
    m_prefixHasBeenSet = true;
}

bool ShipperInfo::PrefixHasBeenSet() const
{
    return m_prefixHasBeenSet;
}

string ShipperInfo::GetShipperName() const
{
    return m_shipperName;
}

void ShipperInfo::SetShipperName(const string& _shipperName)
{
    m_shipperName = _shipperName;
    m_shipperNameHasBeenSet = true;
}

bool ShipperInfo::ShipperNameHasBeenSet() const
{
    return m_shipperNameHasBeenSet;
}

uint64_t ShipperInfo::GetInterval() const
{
    return m_interval;
}

void ShipperInfo::SetInterval(const uint64_t& _interval)
{
    m_interval = _interval;
    m_intervalHasBeenSet = true;
}

bool ShipperInfo::IntervalHasBeenSet() const
{
    return m_intervalHasBeenSet;
}

uint64_t ShipperInfo::GetMaxSize() const
{
    return m_maxSize;
}

void ShipperInfo::SetMaxSize(const uint64_t& _maxSize)
{
    m_maxSize = _maxSize;
    m_maxSizeHasBeenSet = true;
}

bool ShipperInfo::MaxSizeHasBeenSet() const
{
    return m_maxSizeHasBeenSet;
}

bool ShipperInfo::GetStatus() const
{
    return m_status;
}

void ShipperInfo::SetStatus(const bool& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ShipperInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<FilterRuleInfo> ShipperInfo::GetFilterRules() const
{
    return m_filterRules;
}

void ShipperInfo::SetFilterRules(const vector<FilterRuleInfo>& _filterRules)
{
    m_filterRules = _filterRules;
    m_filterRulesHasBeenSet = true;
}

bool ShipperInfo::FilterRulesHasBeenSet() const
{
    return m_filterRulesHasBeenSet;
}

string ShipperInfo::GetPartition() const
{
    return m_partition;
}

void ShipperInfo::SetPartition(const string& _partition)
{
    m_partition = _partition;
    m_partitionHasBeenSet = true;
}

bool ShipperInfo::PartitionHasBeenSet() const
{
    return m_partitionHasBeenSet;
}

CompressInfo ShipperInfo::GetCompress() const
{
    return m_compress;
}

void ShipperInfo::SetCompress(const CompressInfo& _compress)
{
    m_compress = _compress;
    m_compressHasBeenSet = true;
}

bool ShipperInfo::CompressHasBeenSet() const
{
    return m_compressHasBeenSet;
}

ContentInfo ShipperInfo::GetContent() const
{
    return m_content;
}

void ShipperInfo::SetContent(const ContentInfo& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ShipperInfo::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ShipperInfo::GetCreateTime() const
{
    return m_createTime;
}

void ShipperInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ShipperInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

