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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RETRYVULFIXREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RETRYVULFIXREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * RetryVulFix request structure.
                */
                class RetryVulFixRequest : public AbstractModel
                {
                public:
                    RetryVulFixRequest();
                    ~RetryVulFixRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Vulnerability ID
                     * @return FixId Vulnerability ID
                     * 
                     */
                    uint64_t GetFixId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _fixId Vulnerability ID
                     * 
                     */
                    void SetFixId(const uint64_t& _fixId);

                    /**
                     * 判断参数 FixId 是否已赋值
                     * @return FixId 是否已赋值
                     * 
                     */
                    bool FixIdHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Vulnerability ID
                     * @return VulId Vulnerability ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置Vulnerability ID
                     * @param _vulId Vulnerability ID
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_fixId;
                    bool m_fixIdHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RETRYVULFIXREQUEST_H_
