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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECTREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDatabaseCT request structure.
                */
                class ModifyDatabaseCTRequest : public AbstractModel
                {
                public:
                    ModifyDatabaseCTRequest();
                    ~ModifyDatabaseCTRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Array of database names
                     * @return DBNames Array of database names
                     */
                    std::vector<std::string> GetDBNames() const;

                    /**
                     * 设置Array of database names
                     * @param DBNames Array of database names
                     */
                    void SetDBNames(const std::vector<std::string>& _dBNames);

                    /**
                     * 判断参数 DBNames 是否已赋值
                     * @return DBNames 是否已赋值
                     */
                    bool DBNamesHasBeenSet() const;

                    /**
                     * 获取Enable or disable CT. Valid values: `enable`, `disable`
                     * @return ModifyType Enable or disable CT. Valid values: `enable`, `disable`
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置Enable or disable CT. Valid values: `enable`, `disable`
                     * @param ModifyType Enable or disable CT. Valid values: `enable`, `disable`
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param InstanceId Instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Retention period (in days) of change tracking information when CT is enabled. Value range: 3-30. Default value: `3`
                     * @return ChangeRetentionDay Retention period (in days) of change tracking information when CT is enabled. Value range: 3-30. Default value: `3`
                     */
                    int64_t GetChangeRetentionDay() const;

                    /**
                     * 设置Retention period (in days) of change tracking information when CT is enabled. Value range: 3-30. Default value: `3`
                     * @param ChangeRetentionDay Retention period (in days) of change tracking information when CT is enabled. Value range: 3-30. Default value: `3`
                     */
                    void SetChangeRetentionDay(const int64_t& _changeRetentionDay);

                    /**
                     * 判断参数 ChangeRetentionDay 是否已赋值
                     * @return ChangeRetentionDay 是否已赋值
                     */
                    bool ChangeRetentionDayHasBeenSet() const;

                private:

                    /**
                     * Array of database names
                     */
                    std::vector<std::string> m_dBNames;
                    bool m_dBNamesHasBeenSet;

                    /**
                     * Enable or disable CT. Valid values: `enable`, `disable`
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Retention period (in days) of change tracking information when CT is enabled. Value range: 3-30. Default value: `3`
                     */
                    int64_t m_changeRetentionDay;
                    bool m_changeRetentionDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDATABASECTREQUEST_H_
