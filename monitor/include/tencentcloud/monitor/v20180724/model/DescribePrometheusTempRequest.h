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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTEMPREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTEMPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Filter.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusTemp request structure.
                */
                class DescribePrometheusTempRequest : public AbstractModel
                {
                public:
                    DescribePrometheusTempRequest();
                    ~DescribePrometheusTempRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Fuzzy filter. Valid values:
`Level`: Filter by template level
`Name`: Filter by name
`Describe`: Filter by description
`ID`: Filter by templateId
                     * @return Filters Fuzzy filter. Valid values:
`Level`: Filter by template level
`Name`: Filter by name
`Describe`: Filter by description
`ID`: Filter by templateId
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Fuzzy filter. Valid values:
`Level`: Filter by template level
`Name`: Filter by name
`Describe`: Filter by description
`ID`: Filter by templateId
                     * @param Filters Fuzzy filter. Valid values:
`Level`: Filter by template level
`Name`: Filter by name
`Describe`: Filter by description
`ID`: Filter by templateId
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Page offset
                     * @return Offset Page offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page offset
                     * @param Offset Page offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results per page
                     * @return Limit Number of results per page
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results per page
                     * @param Limit Number of results per page
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Fuzzy filter. Valid values:
`Level`: Filter by template level
`Name`: Filter by name
`Describe`: Filter by description
`ID`: Filter by templateId
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Page offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results per page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSTEMPREQUEST_H_
