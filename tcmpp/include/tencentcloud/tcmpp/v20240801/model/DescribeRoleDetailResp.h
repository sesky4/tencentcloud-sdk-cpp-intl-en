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

#ifndef TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEROLEDETAILRESP_H_
#define TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEROLEDETAILRESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcmpp
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * Role details
                */
                class DescribeRoleDetailResp : public AbstractModel
                {
                public:
                    DescribeRoleDetailResp();
                    ~DescribeRoleDetailResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleId Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleId Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleName Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleName Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamId() const;

                    /**
                     * 设置Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamId Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTeamId(const std::string& _teamId);

                    /**
                     * 判断参数 TeamId 是否已赋值
                     * @return TeamId 是否已赋值
                     * 
                     */
                    bool TeamIdHasBeenSet() const;

                    /**
                     * 获取Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Accessible menu list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ResourceIds Accessible menu list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Accessible menu list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _resourceIds Accessible menu list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Team ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamId;
                    bool m_teamIdHasBeenSet;

                    /**
                     * Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Accessible menu list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCMPP_V20240801_MODEL_DESCRIBEROLEDETAILRESP_H_
