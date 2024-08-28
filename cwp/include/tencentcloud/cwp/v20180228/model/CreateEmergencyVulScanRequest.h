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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEEMERGENCYVULSCANREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEEMERGENCYVULSCANREQUEST_H_

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
                * CreateEmergencyVulScan request structure.
                */
                class CreateEmergencyVulScanRequest : public AbstractModel
                {
                public:
                    CreateEmergencyVulScanRequest();
                    ~CreateEmergencyVulScanRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取Array of host UUID strings. This parameter is valid for specified servers.
                     * @return Uuids Array of host UUID strings. This parameter is valid for specified servers.
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置Array of host UUID strings. This parameter is valid for specified servers.
                     * @param _uuids Array of host UUID strings. This parameter is valid for specified servers.
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取Scan timeout duration, in seconds.
                     * @return TimeoutPeriod Scan timeout duration, in seconds.
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置Scan timeout duration, in seconds.
                     * @param _timeoutPeriod Scan timeout duration, in seconds.
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                private:

                    /**
                     * Vulnerability ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * Array of host UUID strings. This parameter is valid for specified servers.
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * Scan timeout duration, in seconds.
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEEMERGENCYVULSCANREQUEST_H_
