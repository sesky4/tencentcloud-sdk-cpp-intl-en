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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKSTATICLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKSTATICLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockStaticList request structure.
                */
                class DescribeBlockStaticListRequest : public AbstractModel
                {
                public:
                    DescribeBlockStaticListRequest();
                    ~DescribeBlockStaticListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Start time
                     * @return StartTime Start time
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time
                     * @param StartTime Start time
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time
                     * @return EndTime End time
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time
                     * @param EndTime End time
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取List type. Valid values: port, address, or IP
                     * @return QueryType List type. Valid values: port, address, or IP
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置List type. Valid values: port, address, or IP
                     * @param QueryType List type. Valid values: port, address, or IP
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取Number of top results returned
                     * @return Top Number of top results returned
                     */
                    int64_t GetTop() const;

                    /**
                     * 设置Number of top results returned
                     * @param Top Number of top results returned
                     */
                    void SetTop(const int64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取Search criteria
                     * @return SearchValue Search criteria
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置Search criteria
                     * @param SearchValue Search criteria
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     */
                    bool SearchValueHasBeenSet() const;

                private:

                    /**
                     * Start time
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * List type. Valid values: port, address, or IP
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * Number of top results returned
                     */
                    int64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * Search criteria
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKSTATICLISTREQUEST_H_