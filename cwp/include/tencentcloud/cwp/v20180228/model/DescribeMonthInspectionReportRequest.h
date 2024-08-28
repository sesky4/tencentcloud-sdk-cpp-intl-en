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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMONTHINSPECTIONREPORTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMONTHINSPECTIONREPORTREQUEST_H_

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
                * DescribeMonthInspectionReport request structure.
                */
                class DescribeMonthInspectionReportRequest : public AbstractModel
                {
                public:
                    DescribeMonthInspectionReportRequest();
                    ~DescribeMonthInspectionReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pagination size
                     * @return Limit Pagination size
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Pagination size
                     * @param _limit Pagination size
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination step size
                     * @return Offset Pagination step size
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination step size
                     * @param _offset Pagination step size
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Pagination size
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination step size
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMONTHINSPECTIONREPORTREQUEST_H_
