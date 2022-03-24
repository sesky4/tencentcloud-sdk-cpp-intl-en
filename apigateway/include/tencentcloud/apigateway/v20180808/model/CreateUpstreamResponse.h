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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMRESPONSE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateUpstream response structure.
                */
                class CreateUpstreamResponse : public AbstractModel
                {
                public:
                    CreateUpstreamResponse();
                    ~CreateUpstreamResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique upstream IP returned
Note: This field may return `null`, indicating that no valid value was found.
                     * @return UpstreamId The unique upstream IP returned
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string GetUpstreamId() const;

                    /**
                     * 判断参数 UpstreamId 是否已赋值
                     * @return UpstreamId 是否已赋值
                     */
                    bool UpstreamIdHasBeenSet() const;

                private:

                    /**
                     * The unique upstream IP returned
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_upstreamId;
                    bool m_upstreamIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEUPSTREAMRESPONSE_H_
