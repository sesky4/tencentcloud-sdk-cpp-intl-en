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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_USERINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The user information.
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SdkAppId The application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置The application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param SdkAppId The application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UserId The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取The username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name The username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置The username.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Name The username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The URL of profile photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Avatar The URL of profile photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置The URL of profile photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Avatar The URL of profile photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     */
                    bool AvatarHasBeenSet() const;

                private:

                    /**
                     * The application ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * The user ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * The username.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The URL of profile photo.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_USERINFO_H_
