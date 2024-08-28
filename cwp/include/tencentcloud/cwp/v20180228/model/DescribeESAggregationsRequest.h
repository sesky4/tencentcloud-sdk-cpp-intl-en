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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEESAGGREGATIONSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEESAGGREGATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeESAggregations request structure.
                */
                class DescribeESAggregationsRequest : public AbstractModel
                {
                public:
                    DescribeESAggregationsRequest();
                    ~DescribeESAggregationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES aggregation conditional JSON
                     * @return Query ES aggregation conditional JSON
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置ES aggregation conditional JSON
                     * @param _query ES aggregation conditional JSON
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                private:

                    /**
                     * ES aggregation conditional JSON
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEESAGGREGATIONSREQUEST_H_
