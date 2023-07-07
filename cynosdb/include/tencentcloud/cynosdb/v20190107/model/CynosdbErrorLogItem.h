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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBERRORLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBERRORLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Types of the returned error logs for an instance
                */
                class CynosdbErrorLogItem : public AbstractModel
                {
                public:
                    CynosdbErrorLogItem();
                    ~CynosdbErrorLogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Log timestamp Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Timestamp Log timestamp Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置Log timestamp Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timestamp Log timestamp Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取Log level Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Level Log level Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置Log level Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _level Log level Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取Log content Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Content Log content Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Log content Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _content Log content Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Log timestamp Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * Log level Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * Log content Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CYNOSDBERRORLOGITEM_H_
