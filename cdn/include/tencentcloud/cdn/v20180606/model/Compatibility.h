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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_COMPATIBILITY_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_COMPATIBILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Old configuration compatibility check
                */
                class Compatibility : public AbstractModel
                {
                public:
                    Compatibility();
                    ~Compatibility() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Compatibility flag status code.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Code Compatibility flag status code.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t GetCode() const;

                    /**
                     * 设置Compatibility flag status code.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param Code Compatibility flag status code.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    void SetCode(const int64_t& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * Compatibility flag status code.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COMPATIBILITY_H_
