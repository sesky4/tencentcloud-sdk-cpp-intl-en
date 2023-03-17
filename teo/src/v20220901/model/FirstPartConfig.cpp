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

#include <tencentcloud/teo/v20220901/model/FirstPartConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

FirstPartConfig::FirstPartConfig() :
    m_switchHasBeenSet(false),
    m_statTimeHasBeenSet(false)
{
}

CoreInternalOutcome FirstPartConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstPartConfig.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("StatTime") && !value["StatTime"].IsNull())
    {
        if (!value["StatTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FirstPartConfig.StatTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_statTime = value["StatTime"].GetUint64();
        m_statTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirstPartConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_statTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_statTime, allocator);
    }

}


string FirstPartConfig::GetSwitch() const
{
    return m_switch;
}

void FirstPartConfig::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool FirstPartConfig::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

uint64_t FirstPartConfig::GetStatTime() const
{
    return m_statTime;
}

void FirstPartConfig::SetStatTime(const uint64_t& _statTime)
{
    m_statTime = _statTime;
    m_statTimeHasBeenSet = true;
}

bool FirstPartConfig::StatTimeHasBeenSet() const
{
    return m_statTimeHasBeenSet;
}

