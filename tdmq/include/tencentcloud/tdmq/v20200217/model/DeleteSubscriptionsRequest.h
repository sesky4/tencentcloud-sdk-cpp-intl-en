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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETESUBSCRIPTIONSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETESUBSCRIPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/SubscriptionTopic.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteSubscriptions request structure.
                */
                class DeleteSubscriptionsRequest : public AbstractModel
                {
                public:
                    DeleteSubscriptionsRequest();
                    ~DeleteSubscriptionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Set of subscriptions. Up to 20 subscriptions can be deleted at a time.
                     * @return SubscriptionTopicSets Set of subscriptions. Up to 20 subscriptions can be deleted at a time.
                     */
                    std::vector<SubscriptionTopic> GetSubscriptionTopicSets() const;

                    /**
                     * 设置Set of subscriptions. Up to 20 subscriptions can be deleted at a time.
                     * @param SubscriptionTopicSets Set of subscriptions. Up to 20 subscriptions can be deleted at a time.
                     */
                    void SetSubscriptionTopicSets(const std::vector<SubscriptionTopic>& _subscriptionTopicSets);

                    /**
                     * 判断参数 SubscriptionTopicSets 是否已赋值
                     * @return SubscriptionTopicSets 是否已赋值
                     */
                    bool SubscriptionTopicSetsHasBeenSet() const;

                    /**
                     * 获取Pulsar cluster ID.
                     * @return ClusterId Pulsar cluster ID.
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar cluster ID.
                     * @param ClusterId Pulsar cluster ID.
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Environment (namespace) name.
                     * @return EnvironmentId Environment (namespace) name.
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置Environment (namespace) name.
                     * @param EnvironmentId Environment (namespace) name.
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取Whether to force deletion. Default value: false
                     * @return Force Whether to force deletion. Default value: false
                     */
                    bool GetForce() const;

                    /**
                     * 设置Whether to force deletion. Default value: false
                     * @param Force Whether to force deletion. Default value: false
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * Set of subscriptions. Up to 20 subscriptions can be deleted at a time.
                     */
                    std::vector<SubscriptionTopic> m_subscriptionTopicSets;
                    bool m_subscriptionTopicSetsHasBeenSet;

                    /**
                     * Pulsar cluster ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Environment (namespace) name.
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * Whether to force deletion. Default value: false
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETESUBSCRIPTIONSREQUEST_H_