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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPORTRAITRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPORTRAITRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeSecurityPortraitRules request structure.
                */
                class DescribeSecurityPortraitRulesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPortraitRulesRequest();
                    ~DescribeSecurityPortraitRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Top-level domain name
                     * @return ZoneId Top-level domain name
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Top-level domain name
                     * @param ZoneId Top-level domain name
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Subdomain name/Application name
                     * @return Entity Subdomain name/Application name
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置Subdomain name/Application name
                     * @param Entity Subdomain name/Application name
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                private:

                    /**
                     * Top-level domain name
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Subdomain name/Application name
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPORTRAITRULESREQUEST_H_
