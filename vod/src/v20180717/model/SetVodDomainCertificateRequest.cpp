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

#include <tencentcloud/vod/v20180717/model/SetVodDomainCertificateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SetVodDomainCertificateRequest::SetVodDomainCertificateRequest() :
    m_domainHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_certIDHasBeenSet(false)
{
}

string SetVodDomainCertificateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_certIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SetVodDomainCertificateRequest::GetDomain() const
{
    return m_domain;
}

void SetVodDomainCertificateRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SetVodDomainCertificateRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SetVodDomainCertificateRequest::GetOperation() const
{
    return m_operation;
}

void SetVodDomainCertificateRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool SetVodDomainCertificateRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

uint64_t SetVodDomainCertificateRequest::GetSubAppId() const
{
    return m_subAppId;
}

void SetVodDomainCertificateRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SetVodDomainCertificateRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string SetVodDomainCertificateRequest::GetCertID() const
{
    return m_certID;
}

void SetVodDomainCertificateRequest::SetCertID(const string& _certID)
{
    m_certID = _certID;
    m_certIDHasBeenSet = true;
}

bool SetVodDomainCertificateRequest::CertIDHasBeenSet() const
{
    return m_certIDHasBeenSet;
}


