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

#include <tencentcloud/lcic/v20220817/model/RoomInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

RoomInfo::RoomInfo() :
    m_nameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_resolutionHasBeenSet(false),
    m_maxMicNumberHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_teacherIdHasBeenSet(false),
    m_autoMicHasBeenSet(false),
    m_turnOffMicHasBeenSet(false),
    m_audioQualityHasBeenSet(false),
    m_disableRecordHasBeenSet(false),
    m_assistantsHasBeenSet(false),
    m_rTCAudienceNumberHasBeenSet(false),
    m_audienceTypeHasBeenSet(false),
    m_recordLayoutHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome RoomInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = value["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Resolution") && !value["Resolution"].IsNull())
    {
        if (!value["Resolution"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.Resolution` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_resolution = value["Resolution"].GetUint64();
        m_resolutionHasBeenSet = true;
    }

    if (value.HasMember("MaxMicNumber") && !value["MaxMicNumber"].IsNull())
    {
        if (!value["MaxMicNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.MaxMicNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMicNumber = value["MaxMicNumber"].GetUint64();
        m_maxMicNumberHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("TeacherId") && !value["TeacherId"].IsNull())
    {
        if (!value["TeacherId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.TeacherId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_teacherId = string(value["TeacherId"].GetString());
        m_teacherIdHasBeenSet = true;
    }

    if (value.HasMember("AutoMic") && !value["AutoMic"].IsNull())
    {
        if (!value["AutoMic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.AutoMic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoMic = value["AutoMic"].GetUint64();
        m_autoMicHasBeenSet = true;
    }

    if (value.HasMember("TurnOffMic") && !value["TurnOffMic"].IsNull())
    {
        if (!value["TurnOffMic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.TurnOffMic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_turnOffMic = value["TurnOffMic"].GetUint64();
        m_turnOffMicHasBeenSet = true;
    }

    if (value.HasMember("AudioQuality") && !value["AudioQuality"].IsNull())
    {
        if (!value["AudioQuality"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.AudioQuality` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audioQuality = value["AudioQuality"].GetUint64();
        m_audioQualityHasBeenSet = true;
    }

    if (value.HasMember("DisableRecord") && !value["DisableRecord"].IsNull())
    {
        if (!value["DisableRecord"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.DisableRecord` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_disableRecord = value["DisableRecord"].GetUint64();
        m_disableRecordHasBeenSet = true;
    }

    if (value.HasMember("Assistants") && !value["Assistants"].IsNull())
    {
        if (!value["Assistants"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoomInfo.Assistants` is not array type"));

        const rapidjson::Value &tmpValue = value["Assistants"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_assistants.push_back((*itr).GetString());
        }
        m_assistantsHasBeenSet = true;
    }

    if (value.HasMember("RTCAudienceNumber") && !value["RTCAudienceNumber"].IsNull())
    {
        if (!value["RTCAudienceNumber"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.RTCAudienceNumber` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rTCAudienceNumber = value["RTCAudienceNumber"].GetUint64();
        m_rTCAudienceNumberHasBeenSet = true;
    }

    if (value.HasMember("AudienceType") && !value["AudienceType"].IsNull())
    {
        if (!value["AudienceType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.AudienceType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_audienceType = value["AudienceType"].GetUint64();
        m_audienceTypeHasBeenSet = true;
    }

    if (value.HasMember("RecordLayout") && !value["RecordLayout"].IsNull())
    {
        if (!value["RecordLayout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.RecordLayout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordLayout = value["RecordLayout"].GetUint64();
        m_recordLayoutHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_resolutionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Resolution";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resolution, allocator);
    }

    if (m_maxMicNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMicNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMicNumber, allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
    }

    if (m_teacherIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeacherId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_teacherId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoMic, allocator);
    }

    if (m_turnOffMicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TurnOffMic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_turnOffMic, allocator);
    }

    if (m_audioQualityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioQuality";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioQuality, allocator);
    }

    if (m_disableRecordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableRecord";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableRecord, allocator);
    }

    if (m_assistantsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Assistants";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_assistants.begin(); itr != m_assistants.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rTCAudienceNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTCAudienceNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rTCAudienceNumber, allocator);
    }

    if (m_audienceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudienceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audienceType, allocator);
    }

    if (m_recordLayoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordLayout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordLayout, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

}


string RoomInfo::GetName() const
{
    return m_name;
}

void RoomInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RoomInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t RoomInfo::GetStartTime() const
{
    return m_startTime;
}

void RoomInfo::SetStartTime(const uint64_t& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool RoomInfo::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t RoomInfo::GetEndTime() const
{
    return m_endTime;
}

void RoomInfo::SetEndTime(const uint64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool RoomInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t RoomInfo::GetResolution() const
{
    return m_resolution;
}

void RoomInfo::SetResolution(const uint64_t& _resolution)
{
    m_resolution = _resolution;
    m_resolutionHasBeenSet = true;
}

bool RoomInfo::ResolutionHasBeenSet() const
{
    return m_resolutionHasBeenSet;
}

uint64_t RoomInfo::GetMaxMicNumber() const
{
    return m_maxMicNumber;
}

void RoomInfo::SetMaxMicNumber(const uint64_t& _maxMicNumber)
{
    m_maxMicNumber = _maxMicNumber;
    m_maxMicNumberHasBeenSet = true;
}

bool RoomInfo::MaxMicNumberHasBeenSet() const
{
    return m_maxMicNumberHasBeenSet;
}

string RoomInfo::GetSubType() const
{
    return m_subType;
}

void RoomInfo::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool RoomInfo::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string RoomInfo::GetTeacherId() const
{
    return m_teacherId;
}

void RoomInfo::SetTeacherId(const string& _teacherId)
{
    m_teacherId = _teacherId;
    m_teacherIdHasBeenSet = true;
}

bool RoomInfo::TeacherIdHasBeenSet() const
{
    return m_teacherIdHasBeenSet;
}

uint64_t RoomInfo::GetAutoMic() const
{
    return m_autoMic;
}

void RoomInfo::SetAutoMic(const uint64_t& _autoMic)
{
    m_autoMic = _autoMic;
    m_autoMicHasBeenSet = true;
}

bool RoomInfo::AutoMicHasBeenSet() const
{
    return m_autoMicHasBeenSet;
}

uint64_t RoomInfo::GetTurnOffMic() const
{
    return m_turnOffMic;
}

void RoomInfo::SetTurnOffMic(const uint64_t& _turnOffMic)
{
    m_turnOffMic = _turnOffMic;
    m_turnOffMicHasBeenSet = true;
}

bool RoomInfo::TurnOffMicHasBeenSet() const
{
    return m_turnOffMicHasBeenSet;
}

uint64_t RoomInfo::GetAudioQuality() const
{
    return m_audioQuality;
}

void RoomInfo::SetAudioQuality(const uint64_t& _audioQuality)
{
    m_audioQuality = _audioQuality;
    m_audioQualityHasBeenSet = true;
}

bool RoomInfo::AudioQualityHasBeenSet() const
{
    return m_audioQualityHasBeenSet;
}

uint64_t RoomInfo::GetDisableRecord() const
{
    return m_disableRecord;
}

void RoomInfo::SetDisableRecord(const uint64_t& _disableRecord)
{
    m_disableRecord = _disableRecord;
    m_disableRecordHasBeenSet = true;
}

bool RoomInfo::DisableRecordHasBeenSet() const
{
    return m_disableRecordHasBeenSet;
}

vector<string> RoomInfo::GetAssistants() const
{
    return m_assistants;
}

void RoomInfo::SetAssistants(const vector<string>& _assistants)
{
    m_assistants = _assistants;
    m_assistantsHasBeenSet = true;
}

bool RoomInfo::AssistantsHasBeenSet() const
{
    return m_assistantsHasBeenSet;
}

uint64_t RoomInfo::GetRTCAudienceNumber() const
{
    return m_rTCAudienceNumber;
}

void RoomInfo::SetRTCAudienceNumber(const uint64_t& _rTCAudienceNumber)
{
    m_rTCAudienceNumber = _rTCAudienceNumber;
    m_rTCAudienceNumberHasBeenSet = true;
}

bool RoomInfo::RTCAudienceNumberHasBeenSet() const
{
    return m_rTCAudienceNumberHasBeenSet;
}

uint64_t RoomInfo::GetAudienceType() const
{
    return m_audienceType;
}

void RoomInfo::SetAudienceType(const uint64_t& _audienceType)
{
    m_audienceType = _audienceType;
    m_audienceTypeHasBeenSet = true;
}

bool RoomInfo::AudienceTypeHasBeenSet() const
{
    return m_audienceTypeHasBeenSet;
}

uint64_t RoomInfo::GetRecordLayout() const
{
    return m_recordLayout;
}

void RoomInfo::SetRecordLayout(const uint64_t& _recordLayout)
{
    m_recordLayout = _recordLayout;
    m_recordLayoutHasBeenSet = true;
}

bool RoomInfo::RecordLayoutHasBeenSet() const
{
    return m_recordLayoutHasBeenSet;
}

string RoomInfo::GetGroupId() const
{
    return m_groupId;
}

void RoomInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RoomInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

