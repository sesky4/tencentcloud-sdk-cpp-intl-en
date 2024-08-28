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

#include <tencentcloud/cwp/v20180228/model/WebHookReceiver.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

WebHookReceiver::WebHookReceiver() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_addrHasBeenSet(false)
{
}

CoreInternalOutcome WebHookReceiver::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookReceiver.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookReceiver.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Addr") && !value["Addr"].IsNull())
    {
        if (!value["Addr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WebHookReceiver.Addr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addr = string(value["Addr"].GetString());
        m_addrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WebHookReceiver::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_addrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Addr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addr.c_str(), allocator).Move(), allocator);
    }

}


int64_t WebHookReceiver::GetId() const
{
    return m_id;
}

void WebHookReceiver::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool WebHookReceiver::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string WebHookReceiver::GetName() const
{
    return m_name;
}

void WebHookReceiver::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool WebHookReceiver::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string WebHookReceiver::GetAddr() const
{
    return m_addr;
}

void WebHookReceiver::SetAddr(const string& _addr)
{
    m_addr = _addr;
    m_addrHasBeenSet = true;
}

bool WebHookReceiver::AddrHasBeenSet() const
{
    return m_addrHasBeenSet;
}

