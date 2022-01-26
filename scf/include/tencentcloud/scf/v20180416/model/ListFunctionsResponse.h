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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTFUNCTIONSRESPONSE_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTFUNCTIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Function.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListFunctions response structure.
                */
                class ListFunctionsResponse : public AbstractModel
                {
                public:
                    ListFunctionsResponse();
                    ~ListFunctionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Function list
                     * @return Functions Function list
                     */
                    std::vector<Function> GetFunctions() const;

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取Total number
                     * @return TotalCount Total number
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Function list
                     */
                    std::vector<Function> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * Total number
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTFUNCTIONSRESPONSE_H_
