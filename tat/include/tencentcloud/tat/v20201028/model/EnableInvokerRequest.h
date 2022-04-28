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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_ENABLEINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_ENABLEINVOKERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * EnableInvoker request structure.
                */
                class EnableInvokerRequest : public AbstractModel
                {
                public:
                    EnableInvokerRequest();
                    ~EnableInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the invoker to be enabled.
                     * @return InvokerId ID of the invoker to be enabled.
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置ID of the invoker to be enabled.
                     * @param InvokerId ID of the invoker to be enabled.
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     */
                    bool InvokerIdHasBeenSet() const;

                private:

                    /**
                     * ID of the invoker to be enabled.
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_ENABLEINVOKERREQUEST_H_