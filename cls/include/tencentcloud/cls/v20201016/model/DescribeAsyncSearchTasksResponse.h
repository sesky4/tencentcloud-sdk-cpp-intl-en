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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHTASKSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHTASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/AsyncSearchTask.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeAsyncSearchTasks response structure.
                */
                class DescribeAsyncSearchTasksResponse : public AbstractModel
                {
                public:
                    DescribeAsyncSearchTasksResponse();
                    ~DescribeAsyncSearchTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Offline search task list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AsyncSearchTasks Offline search task list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AsyncSearchTask> GetAsyncSearchTasks() const;

                    /**
                     * 判断参数 AsyncSearchTasks 是否已赋值
                     * @return AsyncSearchTasks 是否已赋值
                     */
                    bool AsyncSearchTasksHasBeenSet() const;

                    /**
                     * 获取Total number of offline search tasks
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of offline search tasks
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Offline search task list
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AsyncSearchTask> m_asyncSearchTasks;
                    bool m_asyncSearchTasksHasBeenSet;

                    /**
                     * Total number of offline search tasks
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEASYNCSEARCHTASKSRESPONSE_H_
