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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEPLATFORMAUDITREQUEST_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEPLATFORMAUDITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreatePlatformAudit request structure.
                */
                class CreatePlatformAuditRequest : public AbstractModel
                {
                public:
                    CreatePlatformAuditRequest();
                    ~CreatePlatformAuditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Mini program version ID
                     * @return MNPVersionId Mini program version ID
                     * 
                     */
                    int64_t GetMNPVersionId() const;

                    /**
                     * 设置Mini program version ID
                     * @param _mNPVersionId Mini program version ID
                     * 
                     */
                    void SetMNPVersionId(const int64_t& _mNPVersionId);

                    /**
                     * 判断参数 MNPVersionId 是否已赋值
                     * @return MNPVersionId 是否已赋值
                     * 
                     */
                    bool MNPVersionIdHasBeenSet() const;

                    /**
                     * 获取submit - submit the review ticket, cancel - cancel the review ticket
                     * @return ApplyAction submit - submit the review ticket, cancel - cancel the review ticket
                     * 
                     */
                    std::string GetApplyAction() const;

                    /**
                     * 设置submit - submit the review ticket, cancel - cancel the review ticket
                     * @param _applyAction submit - submit the review ticket, cancel - cancel the review ticket
                     * 
                     */
                    void SetApplyAction(const std::string& _applyAction);

                    /**
                     * 判断参数 ApplyAction 是否已赋值
                     * @return ApplyAction 是否已赋值
                     * 
                     */
                    bool ApplyActionHasBeenSet() const;

                    /**
                     * 获取Platform ID
                     * @return PlatformId Platform ID
                     * 
                     */
                    std::string GetPlatformId() const;

                    /**
                     * 设置Platform ID
                     * @param _platformId Platform ID
                     * 
                     */
                    void SetPlatformId(const std::string& _platformId);

                    /**
                     * 判断参数 PlatformId 是否已赋值
                     * @return PlatformId 是否已赋值
                     * 
                     */
                    bool PlatformIdHasBeenSet() const;

                private:

                    /**
                     * Mini program version ID
                     */
                    int64_t m_mNPVersionId;
                    bool m_mNPVersionIdHasBeenSet;

                    /**
                     * submit - submit the review ticket, cancel - cancel the review ticket
                     */
                    std::string m_applyAction;
                    bool m_applyActionHasBeenSet;

                    /**
                     * Platform ID
                     */
                    std::string m_platformId;
                    bool m_platformIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_CREATEPLATFORMAUDITREQUEST_H_
