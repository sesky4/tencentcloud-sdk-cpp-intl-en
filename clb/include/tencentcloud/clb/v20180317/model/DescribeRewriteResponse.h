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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEREWRITERESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEREWRITERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/RuleOutput.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeRewrite response structure.
                */
                class DescribeRewriteResponse : public AbstractModel
                {
                public:
                    DescribeRewriteResponse();
                    ~DescribeRewriteResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of redirection forwarding rules. If there are no redirection rules, an empty array will be returned.
                     * @return RewriteSet Array of redirection forwarding rules. If there are no redirection rules, an empty array will be returned.
                     */
                    std::vector<RuleOutput> GetRewriteSet() const;

                    /**
                     * 判断参数 RewriteSet 是否已赋值
                     * @return RewriteSet 是否已赋值
                     */
                    bool RewriteSetHasBeenSet() const;

                private:

                    /**
                     * Array of redirection forwarding rules. If there are no redirection rules, an empty array will be returned.
                     */
                    std::vector<RuleOutput> m_rewriteSet;
                    bool m_rewriteSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEREWRITERESPONSE_H_
