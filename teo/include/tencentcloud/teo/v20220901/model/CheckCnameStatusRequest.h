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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCNAMESTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCNAMESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CheckCnameStatus request structure.
                */
                class CheckCnameStatusRequest : public AbstractModel
                {
                public:
                    CheckCnameStatusRequest();
                    ~CheckCnameStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Site ID.
                     * @return ZoneId Site ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Site ID.
                     * @param _zoneId Site ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取List of accelerated domain names.
                     * @return RecordNames List of accelerated domain names.
                     * 
                     */
                    std::vector<std::string> GetRecordNames() const;

                    /**
                     * 设置List of accelerated domain names.
                     * @param _recordNames List of accelerated domain names.
                     * 
                     */
                    void SetRecordNames(const std::vector<std::string>& _recordNames);

                    /**
                     * 判断参数 RecordNames 是否已赋值
                     * @return RecordNames 是否已赋值
                     * 
                     */
                    bool RecordNamesHasBeenSet() const;

                private:

                    /**
                     * Site ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * List of accelerated domain names.
                     */
                    std::vector<std::string> m_recordNames;
                    bool m_recordNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CHECKCNAMESTATUSREQUEST_H_
