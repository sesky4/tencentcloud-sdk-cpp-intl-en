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

#include <tencentcloud/mdp/v20200527/model/UnbindCdnDomainWithChannelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mdp::V20200527::Model;
using namespace std;

UnbindCdnDomainWithChannelRequest::UnbindCdnDomainWithChannelRequest() :
    m_channelIdHasBeenSet(false),
    m_cdnDomainHasBeenSet(false)
{
}

string UnbindCdnDomainWithChannelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdnDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdnDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdnDomain.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnbindCdnDomainWithChannelRequest::GetChannelId() const
{
    return m_channelId;
}

void UnbindCdnDomainWithChannelRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool UnbindCdnDomainWithChannelRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string UnbindCdnDomainWithChannelRequest::GetCdnDomain() const
{
    return m_cdnDomain;
}

void UnbindCdnDomainWithChannelRequest::SetCdnDomain(const string& _cdnDomain)
{
    m_cdnDomain = _cdnDomain;
    m_cdnDomainHasBeenSet = true;
}

bool UnbindCdnDomainWithChannelRequest::CdnDomainHasBeenSet() const
{
    return m_cdnDomainHasBeenSet;
}


