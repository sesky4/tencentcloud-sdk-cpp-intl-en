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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETASKSTATUSREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETASKSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/TaskInput.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeTaskStatus request structure.
                */
                class DescribeTaskStatusRequest : public AbstractModel
                {
                public:
                    DescribeTaskStatusRequest();
                    ~DescribeTaskStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Task description.
                     * @return TaskSet Task description.
                     */
                    std::vector<TaskInput> GetTaskSet() const;

                    /**
                     * 设置Task description.
                     * @param TaskSet Task description.
                     */
                    void SetTaskSet(const std::vector<TaskInput>& _taskSet);

                    /**
                     * 判断参数 TaskSet 是否已赋值
                     * @return TaskSet 是否已赋值
                     */
                    bool TaskSetHasBeenSet() const;

                private:

                    /**
                     * Task description.
                     */
                    std::vector<TaskInput> m_taskSet;
                    bool m_taskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBETASKSTATUSREQUEST_H_
