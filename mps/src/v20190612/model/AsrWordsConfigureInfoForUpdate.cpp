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

#include <tencentcloud/mps/v20190612/model/AsrWordsConfigureInfoForUpdate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

AsrWordsConfigureInfoForUpdate::AsrWordsConfigureInfoForUpdate() :
    m_switchHasBeenSet(false),
    m_labelSetHasBeenSet(false)
{
}

CoreInternalOutcome AsrWordsConfigureInfoForUpdate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Switch") && !value["Switch"].IsNull())
    {
        if (!value["Switch"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrWordsConfigureInfoForUpdate.Switch` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_switch = string(value["Switch"].GetString());
        m_switchHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AsrWordsConfigureInfoForUpdate.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AsrWordsConfigureInfoForUpdate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_switch.c_str(), allocator).Move(), allocator);
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AsrWordsConfigureInfoForUpdate::GetSwitch() const
{
    return m_switch;
}

void AsrWordsConfigureInfoForUpdate::SetSwitch(const string& _switch)
{
    m_switch = _switch;
    m_switchHasBeenSet = true;
}

bool AsrWordsConfigureInfoForUpdate::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

vector<string> AsrWordsConfigureInfoForUpdate::GetLabelSet() const
{
    return m_labelSet;
}

void AsrWordsConfigureInfoForUpdate::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool AsrWordsConfigureInfoForUpdate::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

