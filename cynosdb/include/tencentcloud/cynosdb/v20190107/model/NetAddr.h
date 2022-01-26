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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Network information
                */
                class NetAddr : public AbstractModel
                {
                public:
                    NetAddr();
                    ~NetAddr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Private network IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vip Private network IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetVip() const;

                    /**
                     * 设置Private network IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Vip Private network IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取Private network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Vport Private network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置Private network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Vport Private network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取Public network domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WanDomain Public network domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetWanDomain() const;

                    /**
                     * 设置Public network domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param WanDomain Public network domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWanDomain(const std::string& _wanDomain);

                    /**
                     * 判断参数 WanDomain 是否已赋值
                     * @return WanDomain 是否已赋值
                     */
                    bool WanDomainHasBeenSet() const;

                    /**
                     * 获取Public network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return WanPort Public network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetWanPort() const;

                    /**
                     * 设置Public network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param WanPort Public network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetWanPort(const int64_t& _wanPort);

                    /**
                     * 判断参数 WanPort 是否已赋值
                     * @return WanPort 是否已赋值
                     */
                    bool WanPortHasBeenSet() const;

                    /**
                     * 获取Network type. Valid values: `ro` (read-only), `rw` or `ha` (read-write)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return NetType Network type. Valid values: `ro` (read-only), `rw` or `ha` (read-write)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置Network type. Valid values: `ro` (read-only), `rw` or `ha` (read-write)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param NetType Network type. Valid values: `ro` (read-only), `rw` or `ha` (read-write)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * Private network IP
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * Private network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * Public network domain name
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_wanDomain;
                    bool m_wanDomainHasBeenSet;

                    /**
                     * Public network port number
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_wanPort;
                    bool m_wanPortHasBeenSet;

                    /**
                     * Network type. Valid values: `ro` (read-only), `rw` or `ha` (read-write)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_NETADDR_H_
