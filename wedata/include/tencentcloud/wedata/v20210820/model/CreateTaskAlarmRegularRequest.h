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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKALARMREGULARREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKALARMREGULARREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/TaskAlarmInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateTaskAlarmRegular request structure.
                */
                class CreateTaskAlarmRegularRequest : public AbstractModel
                {
                public:
                    CreateTaskAlarmRegularRequest();
                    ~CreateTaskAlarmRegularRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alert Configuration Information
                     * @return TaskAlarmInfo Alert Configuration Information
                     * 
                     */
                    TaskAlarmInfo GetTaskAlarmInfo() const;

                    /**
                     * 设置Alert Configuration Information
                     * @param _taskAlarmInfo Alert Configuration Information
                     * 
                     */
                    void SetTaskAlarmInfo(const TaskAlarmInfo& _taskAlarmInfo);

                    /**
                     * 判断参数 TaskAlarmInfo 是否已赋值
                     * @return TaskAlarmInfo 是否已赋值
                     * 
                     */
                    bool TaskAlarmInfoHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * Alert Configuration Information
                     */
                    TaskAlarmInfo m_taskAlarmInfo;
                    bool m_taskAlarmInfoHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATETASKALARMREGULARREQUEST_H_
