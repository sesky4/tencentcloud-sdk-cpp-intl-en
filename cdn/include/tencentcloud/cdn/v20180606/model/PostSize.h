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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_POSTSIZE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_POSTSIZE_H_

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
                * Maximum size of the file uploaded for streaming via a POST request
                */
                class PostSize : public AbstractModel
                {
                public:
                    PostSize();
                    ~PostSize() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Limit the size of POST requests. The default value is 32 MB.
off: Disable
on: Enable
                     * @return Switch Limit the size of POST requests. The default value is 32 MB.
off: Disable
on: Enable
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Limit the size of POST requests. The default value is 32 MB.
off: Disable
on: Enable
                     * @param Switch Limit the size of POST requests. The default value is 32 MB.
off: Disable
on: Enable
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Maximum size. Value range: 1 MB to 200 MB.
                     * @return MaxSize Maximum size. Value range: 1 MB to 200 MB.
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum size. Value range: 1 MB to 200 MB.
                     * @param MaxSize Maximum size. Value range: 1 MB to 200 MB.
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Limit the size of POST requests. The default value is 32 MB.
off: Disable
on: Enable
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Maximum size. Value range: 1 MB to 200 MB.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_POSTSIZE_H_
