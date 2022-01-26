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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_SETSERVERRESERVEDREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_SETSERVERRESERVEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * SetServerReserved request structure.
                */
                class SetServerReservedRequest : public AbstractModel
                {
                public:
                    SetServerReservedRequest();
                    ~SetServerReservedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the fleet to be bound with the policy
                     * @return FleetId ID of the fleet to be bound with the policy
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置ID of the fleet to be bound with the policy
                     * @param FleetId ID of the fleet to be bound with the policy
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether the instance is retained. Valid values: 1 (retained), 0 (not retained). Default value: 0.
                     * @return ReserveValue Whether the instance is retained. Valid values: 1 (retained), 0 (not retained). Default value: 0.
                     */
                    int64_t GetReserveValue() const;

                    /**
                     * 设置Whether the instance is retained. Valid values: 1 (retained), 0 (not retained). Default value: 0.
                     * @param ReserveValue Whether the instance is retained. Valid values: 1 (retained), 0 (not retained). Default value: 0.
                     */
                    void SetReserveValue(const int64_t& _reserveValue);

                    /**
                     * 判断参数 ReserveValue 是否已赋值
                     * @return ReserveValue 是否已赋值
                     */
                    bool ReserveValueHasBeenSet() const;

                private:

                    /**
                     * ID of the fleet to be bound with the policy
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether the instance is retained. Valid values: 1 (retained), 0 (not retained). Default value: 0.
                     */
                    int64_t m_reserveValue;
                    bool m_reserveValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_SETSERVERRESERVEDREQUEST_H_
