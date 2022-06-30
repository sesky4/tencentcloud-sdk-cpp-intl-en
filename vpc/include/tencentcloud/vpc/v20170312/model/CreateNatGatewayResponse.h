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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NatGateway.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateNatGateway response structure.
                */
                class CreateNatGatewayResponse : public AbstractModel
                {
                public:
                    CreateNatGatewayResponse();
                    ~CreateNatGatewayResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT gateway object array.
                     * @return NatGatewaySet NAT gateway object array.
                     */
                    std::vector<NatGateway> GetNatGatewaySet() const;

                    /**
                     * 判断参数 NatGatewaySet 是否已赋值
                     * @return NatGatewaySet 是否已赋值
                     */
                    bool NatGatewaySetHasBeenSet() const;

                    /**
                     * 获取The number of eligible NAT gateway objects.
                     * @return TotalCount The number of eligible NAT gateway objects.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * NAT gateway object array.
                     */
                    std::vector<NatGateway> m_natGatewaySet;
                    bool m_natGatewaySetHasBeenSet;

                    /**
                     * The number of eligible NAT gateway objects.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENATGATEWAYRESPONSE_H_
