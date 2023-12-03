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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUERESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * DescribeLogTagValue response structure.
                */
                class DescribeLogTagValueResponse : public AbstractModel
                {
                public:
                    DescribeLogTagValueResponse();
                    ~DescribeLogTagValueResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Query searching metric value. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * @return Results Query searching metric value. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * Query searching metric value. 
Note: This field may return·null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_DESCRIBELOGTAGVALUERESPONSE_H_
