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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERAUTHENTICATIONOPTIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERAUTHENTICATIONOPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/ServiceAccountAuthenticationOptions.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ModifyClusterAuthenticationOptions request structure.
                */
                class ModifyClusterAuthenticationOptionsRequest : public AbstractModel
                {
                public:
                    ModifyClusterAuthenticationOptionsRequest();
                    ~ModifyClusterAuthenticationOptionsRequest() = default;
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
                     * 获取ServiceAccount authentication configuration
                     * @return ServiceAccounts ServiceAccount authentication configuration
                     */
                    ServiceAccountAuthenticationOptions GetServiceAccounts() const;

                    /**
                     * 设置ServiceAccount authentication configuration
                     * @param ServiceAccounts ServiceAccount authentication configuration
                     */
                    void SetServiceAccounts(const ServiceAccountAuthenticationOptions& _serviceAccounts);

                    /**
                     * 判断参数 ServiceAccounts 是否已赋值
                     * @return ServiceAccounts 是否已赋值
                     */
                    bool ServiceAccountsHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * ServiceAccount authentication configuration
                     */
                    ServiceAccountAuthenticationOptions m_serviceAccounts;
                    bool m_serviceAccountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MODIFYCLUSTERAUTHENTICATIONOPTIONSREQUEST_H_
