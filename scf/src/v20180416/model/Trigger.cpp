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

#include <tencentcloud/scf/v20180416/model/Trigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

Trigger::Trigger() :
    m_modTimeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_triggerDescHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_customArgumentHasBeenSet(false),
    m_availableStatusHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_triggerAttributeHasBeenSet(false),
    m_qualifierHasBeenSet(false)
{
}

CoreInternalOutcome Trigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ModTime") && !value["ModTime"].IsNull())
    {
        if (!value["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(value["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TriggerDesc") && !value["TriggerDesc"].IsNull())
    {
        if (!value["TriggerDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.TriggerDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerDesc = string(value["TriggerDesc"].GetString());
        m_triggerDescHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("CustomArgument") && !value["CustomArgument"].IsNull())
    {
        if (!value["CustomArgument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.CustomArgument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customArgument = string(value["CustomArgument"].GetString());
        m_customArgumentHasBeenSet = true;
    }

    if (value.HasMember("AvailableStatus") && !value["AvailableStatus"].IsNull())
    {
        if (!value["AvailableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.AvailableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableStatus = string(value["AvailableStatus"].GetString());
        m_availableStatusHasBeenSet = true;
    }

    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.BindStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = string(value["BindStatus"].GetString());
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("TriggerAttribute") && !value["TriggerAttribute"].IsNull())
    {
        if (!value["TriggerAttribute"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.TriggerAttribute` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerAttribute = string(value["TriggerAttribute"].GetString());
        m_triggerAttributeHasBeenSet = true;
    }

    if (value.HasMember("Qualifier") && !value["Qualifier"].IsNull())
    {
        if (!value["Qualifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Trigger.Qualifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_qualifier = string(value["Qualifier"].GetString());
        m_qualifierHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Trigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_customArgumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomArgument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customArgument.c_str(), allocator).Move(), allocator);
    }

    if (m_availableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerAttributeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerAttribute";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerAttribute.c_str(), allocator).Move(), allocator);
    }

    if (m_qualifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qualifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_qualifier.c_str(), allocator).Move(), allocator);
    }

}


string Trigger::GetModTime() const
{
    return m_modTime;
}

void Trigger::SetModTime(const string& _modTime)
{
    m_modTime = _modTime;
    m_modTimeHasBeenSet = true;
}

bool Trigger::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}

string Trigger::GetType() const
{
    return m_type;
}

void Trigger::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Trigger::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Trigger::GetTriggerDesc() const
{
    return m_triggerDesc;
}

void Trigger::SetTriggerDesc(const string& _triggerDesc)
{
    m_triggerDesc = _triggerDesc;
    m_triggerDescHasBeenSet = true;
}

bool Trigger::TriggerDescHasBeenSet() const
{
    return m_triggerDescHasBeenSet;
}

string Trigger::GetTriggerName() const
{
    return m_triggerName;
}

void Trigger::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool Trigger::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string Trigger::GetAddTime() const
{
    return m_addTime;
}

void Trigger::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool Trigger::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

int64_t Trigger::GetEnable() const
{
    return m_enable;
}

void Trigger::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool Trigger::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string Trigger::GetCustomArgument() const
{
    return m_customArgument;
}

void Trigger::SetCustomArgument(const string& _customArgument)
{
    m_customArgument = _customArgument;
    m_customArgumentHasBeenSet = true;
}

bool Trigger::CustomArgumentHasBeenSet() const
{
    return m_customArgumentHasBeenSet;
}

string Trigger::GetAvailableStatus() const
{
    return m_availableStatus;
}

void Trigger::SetAvailableStatus(const string& _availableStatus)
{
    m_availableStatus = _availableStatus;
    m_availableStatusHasBeenSet = true;
}

bool Trigger::AvailableStatusHasBeenSet() const
{
    return m_availableStatusHasBeenSet;
}

string Trigger::GetResourceId() const
{
    return m_resourceId;
}

void Trigger::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool Trigger::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string Trigger::GetBindStatus() const
{
    return m_bindStatus;
}

void Trigger::SetBindStatus(const string& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool Trigger::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string Trigger::GetTriggerAttribute() const
{
    return m_triggerAttribute;
}

void Trigger::SetTriggerAttribute(const string& _triggerAttribute)
{
    m_triggerAttribute = _triggerAttribute;
    m_triggerAttributeHasBeenSet = true;
}

bool Trigger::TriggerAttributeHasBeenSet() const
{
    return m_triggerAttributeHasBeenSet;
}

string Trigger::GetQualifier() const
{
    return m_qualifier;
}

void Trigger::SetQualifier(const string& _qualifier)
{
    m_qualifier = _qualifier;
    m_qualifierHasBeenSet = true;
}

bool Trigger::QualifierHasBeenSet() const
{
    return m_qualifierHasBeenSet;
}

