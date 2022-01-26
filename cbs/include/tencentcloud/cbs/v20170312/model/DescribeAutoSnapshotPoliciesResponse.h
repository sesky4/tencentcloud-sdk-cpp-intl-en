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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/AutoSnapshotPolicy.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAutoSnapshotPolicies response structure.
                */
                class DescribeAutoSnapshotPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeAutoSnapshotPoliciesResponse();
                    ~DescribeAutoSnapshotPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The quantity of valid scheduled snapshot policies.
                     * @return TotalCount The quantity of valid scheduled snapshot policies.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of scheduled snapshot policies.
                     * @return AutoSnapshotPolicySet List of scheduled snapshot policies.
                     */
                    std::vector<AutoSnapshotPolicy> GetAutoSnapshotPolicySet() const;

                    /**
                     * 判断参数 AutoSnapshotPolicySet 是否已赋值
                     * @return AutoSnapshotPolicySet 是否已赋值
                     */
                    bool AutoSnapshotPolicySetHasBeenSet() const;

                private:

                    /**
                     * The quantity of valid scheduled snapshot policies.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of scheduled snapshot policies.
                     */
                    std::vector<AutoSnapshotPolicy> m_autoSnapshotPolicySet;
                    bool m_autoSnapshotPolicySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSE_H_
