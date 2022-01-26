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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEVPCCNINETWORKTYPEREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEVPCCNINETWORKTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * EnableVpcCniNetworkType request structure.
                */
                class EnableVpcCniNetworkTypeRequest : public AbstractModel
                {
                public:
                    EnableVpcCniNetworkTypeRequest();
                    ~EnableVpcCniNetworkTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取The VPC-CNI mode. `tke-route-eni`: Multi-IP ENI, `tke-direct-eni`: Independent ENI
                     * @return VpcCniType The VPC-CNI mode. `tke-route-eni`: Multi-IP ENI, `tke-direct-eni`: Independent ENI
                     */
                    std::string GetVpcCniType() const;

                    /**
                     * 设置The VPC-CNI mode. `tke-route-eni`: Multi-IP ENI, `tke-direct-eni`: Independent ENI
                     * @param VpcCniType The VPC-CNI mode. `tke-route-eni`: Multi-IP ENI, `tke-direct-eni`: Independent ENI
                     */
                    void SetVpcCniType(const std::string& _vpcCniType);

                    /**
                     * 判断参数 VpcCniType 是否已赋值
                     * @return VpcCniType 是否已赋值
                     */
                    bool VpcCniTypeHasBeenSet() const;

                    /**
                     * 获取Whether to enable static IP address
                     * @return EnableStaticIp Whether to enable static IP address
                     */
                    bool GetEnableStaticIp() const;

                    /**
                     * 设置Whether to enable static IP address
                     * @param EnableStaticIp Whether to enable static IP address
                     */
                    void SetEnableStaticIp(const bool& _enableStaticIp);

                    /**
                     * 判断参数 EnableStaticIp 是否已赋值
                     * @return EnableStaticIp 是否已赋值
                     */
                    bool EnableStaticIpHasBeenSet() const;

                    /**
                     * 获取The container subnet being used
                     * @return Subnets The container subnet being used
                     */
                    std::vector<std::string> GetSubnets() const;

                    /**
                     * 设置The container subnet being used
                     * @param Subnets The container subnet being used
                     */
                    void SetSubnets(const std::vector<std::string>& _subnets);

                    /**
                     * 判断参数 Subnets 是否已赋值
                     * @return Subnets 是否已赋值
                     */
                    bool SubnetsHasBeenSet() const;

                    /**
                     * 获取Specifies when to release the IP after the Pod termination in static IP mode. It must be longer than 300 seconds. If this parameter is left empty, the IP address will never be released.
                     * @return ExpiredSeconds Specifies when to release the IP after the Pod termination in static IP mode. It must be longer than 300 seconds. If this parameter is left empty, the IP address will never be released.
                     */
                    uint64_t GetExpiredSeconds() const;

                    /**
                     * 设置Specifies when to release the IP after the Pod termination in static IP mode. It must be longer than 300 seconds. If this parameter is left empty, the IP address will never be released.
                     * @param ExpiredSeconds Specifies when to release the IP after the Pod termination in static IP mode. It must be longer than 300 seconds. If this parameter is left empty, the IP address will never be released.
                     */
                    void SetExpiredSeconds(const uint64_t& _expiredSeconds);

                    /**
                     * 判断参数 ExpiredSeconds 是否已赋值
                     * @return ExpiredSeconds 是否已赋值
                     */
                    bool ExpiredSecondsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The VPC-CNI mode. `tke-route-eni`: Multi-IP ENI, `tke-direct-eni`: Independent ENI
                     */
                    std::string m_vpcCniType;
                    bool m_vpcCniTypeHasBeenSet;

                    /**
                     * Whether to enable static IP address
                     */
                    bool m_enableStaticIp;
                    bool m_enableStaticIpHasBeenSet;

                    /**
                     * The container subnet being used
                     */
                    std::vector<std::string> m_subnets;
                    bool m_subnetsHasBeenSet;

                    /**
                     * Specifies when to release the IP after the Pod termination in static IP mode. It must be longer than 300 seconds. If this parameter is left empty, the IP address will never be released.
                     */
                    uint64_t m_expiredSeconds;
                    bool m_expiredSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ENABLEVPCCNINETWORKTYPEREQUEST_H_
