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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LOCKINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LOCKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * Domain lock information
                */
                class LockInfo : public AbstractModel
                {
                public:
                    LockInfo();
                    ~LockInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Domain ID
                     * @return DomainId Domain ID
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置Domain ID
                     * @param DomainId Domain ID
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取Domain unlock code
                     * @return LockCode Domain unlock code
                     */
                    std::string GetLockCode() const;

                    /**
                     * 设置Domain unlock code
                     * @param LockCode Domain unlock code
                     */
                    void SetLockCode(const std::string& _lockCode);

                    /**
                     * 判断参数 LockCode 是否已赋值
                     * @return LockCode 是否已赋值
                     */
                    bool LockCodeHasBeenSet() const;

                    /**
                     * 获取Automatic unlock date of the domain
                     * @return LockEnd Automatic unlock date of the domain
                     */
                    std::string GetLockEnd() const;

                    /**
                     * 设置Automatic unlock date of the domain
                     * @param LockEnd Automatic unlock date of the domain
                     */
                    void SetLockEnd(const std::string& _lockEnd);

                    /**
                     * 判断参数 LockEnd 是否已赋值
                     * @return LockEnd 是否已赋值
                     */
                    bool LockEndHasBeenSet() const;

                private:

                    /**
                     * Domain ID
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * Domain unlock code
                     */
                    std::string m_lockCode;
                    bool m_lockCodeHasBeenSet;

                    /**
                     * Automatic unlock date of the domain
                     */
                    std::string m_lockEnd;
                    bool m_lockEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LOCKINFO_H_