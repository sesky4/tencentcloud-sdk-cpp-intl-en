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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Task Instance Basic Information
                */
                class TaskVersionInstance : public AbstractModel
                {
                public:
                    TaskVersionInstance();
                    ~TaskVersionInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Instance Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceVersion Instance Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置Instance Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceVersion Instance Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return VersionDesc Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetVersionDesc() const;

                    /**
                     * 设置Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _versionDesc Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetVersionDesc(const std::string& _versionDesc);

                    /**
                     * 判断参数 VersionDesc 是否已赋值
                     * @return VersionDesc 是否已赋值
                     * 
                     */
                    bool VersionDescHasBeenSet() const;

                    /**
                     * 获取0, "Add",1, "Modify"
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return ChangeType 0, "Add",1, "Modify"
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetChangeType() const;

                    /**
                     * 设置0, "Add",1, "Modify"
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _changeType 0, "Add",1, "Modify"
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetChangeType(const int64_t& _changeType);

                    /**
                     * 判断参数 ChangeType 是否已赋值
                     * @return ChangeType 是否已赋值
                     * 
                     */
                    bool ChangeTypeHasBeenSet() const;

                    /**
                     * 获取Version Submitter UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return SubmitterUin Version Submitter UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetSubmitterUin() const;

                    /**
                     * 设置Version Submitter UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _submitterUin Version Submitter UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetSubmitterUin(const std::string& _submitterUin);

                    /**
                     * 判断参数 SubmitterUin 是否已赋值
                     * @return SubmitterUin 是否已赋值
                     * 
                     */
                    bool SubmitterUinHasBeenSet() const;

                    /**
                     * 获取Submission Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceDate Submission Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetInstanceDate() const;

                    /**
                     * 设置Submission Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceDate Submission Date
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceDate(const std::string& _instanceDate);

                    /**
                     * 判断参数 InstanceDate 是否已赋值
                     * @return InstanceDate 是否已赋值
                     * 
                     */
                    bool InstanceDateHasBeenSet() const;

                    /**
                     * 获取0, "Disabled",1, "Enabled (Production)"
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return InstanceStatus 0, "Disabled",1, "Enabled (Production)"
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置0, "Disabled",1, "Enabled (Production)"
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _instanceStatus 0, "Disabled",1, "Enabled (Production)"
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * Instance Version Number
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * Instance Description
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_versionDesc;
                    bool m_versionDescHasBeenSet;

                    /**
                     * 0, "Add",1, "Modify"
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_changeType;
                    bool m_changeTypeHasBeenSet;

                    /**
                     * Version Submitter UIN
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_submitterUin;
                    bool m_submitterUinHasBeenSet;

                    /**
                     * Submission Date
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_instanceDate;
                    bool m_instanceDateHasBeenSet;

                    /**
                     * 0, "Disabled",1, "Enabled (Production)"
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKVERSIONINSTANCE_H_
