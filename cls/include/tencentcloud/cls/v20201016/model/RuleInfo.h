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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/FullTextInfo.h>
#include <tencentcloud/cls/v20201016/model/RuleKeyValueInfo.h>
#include <tencentcloud/cls/v20201016/model/RuleTagInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Index rule. At least one of the `FullText`, `KeyValue`, and `Tag` parameters must be valid.
                */
                class RuleInfo : public AbstractModel
                {
                public:
                    RuleInfo();
                    ~RuleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Full-Text index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return FullText Full-Text index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    FullTextInfo GetFullText() const;

                    /**
                     * 设置Full-Text index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param FullText Full-Text index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetFullText(const FullTextInfo& _fullText);

                    /**
                     * 判断参数 FullText 是否已赋值
                     * @return FullText 是否已赋值
                     */
                    bool FullTextHasBeenSet() const;

                    /**
                     * 获取Key-Value index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return KeyValue Key-Value index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleKeyValueInfo GetKeyValue() const;

                    /**
                     * 设置Key-Value index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param KeyValue Key-Value index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetKeyValue(const RuleKeyValueInfo& _keyValue);

                    /**
                     * 判断参数 KeyValue 是否已赋值
                     * @return KeyValue 是否已赋值
                     */
                    bool KeyValueHasBeenSet() const;

                    /**
                     * 获取Metafield index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Tag Metafield index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleTagInfo GetTag() const;

                    /**
                     * 设置Metafield index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Tag Metafield index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetTag(const RuleTagInfo& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     */
                    bool TagHasBeenSet() const;

                private:

                    /**
                     * Full-Text index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    FullTextInfo m_fullText;
                    bool m_fullTextHasBeenSet;

                    /**
                     * Key-Value index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleKeyValueInfo m_keyValue;
                    bool m_keyValueHasBeenSet;

                    /**
                     * Metafield index configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    RuleTagInfo m_tag;
                    bool m_tagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_RULEINFO_H_