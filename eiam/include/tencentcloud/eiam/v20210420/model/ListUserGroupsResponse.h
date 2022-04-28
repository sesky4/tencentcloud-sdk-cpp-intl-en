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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/UserGroupInformation.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListUserGroups response structure.
                */
                class ListUserGroupsResponse : public AbstractModel
                {
                public:
                    ListUserGroupsResponse();
                    ~ListUserGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Returned user group list.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupList Returned user group list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserGroupInformation> GetUserGroupList() const;

                    /**
                     * 判断参数 UserGroupList 是否已赋值
                     * @return UserGroupList 是否已赋值
                     */
                    bool UserGroupListHasBeenSet() const;

                    /**
                     * 获取Total number of returned user group information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total number of returned user group information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Returned user group list.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<UserGroupInformation> m_userGroupList;
                    bool m_userGroupListHasBeenSet;

                    /**
                     * Total number of returned user group information items.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTUSERGROUPSRESPONSE_H_