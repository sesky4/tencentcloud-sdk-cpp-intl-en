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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_REFERER_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_REFERER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/RefererRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Referer blocklist/allowlist configuration. This is disabled by default.
                */
                class Referer : public AbstractModel
                {
                public:
                    Referer();
                    ~Referer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Referer blocklist/allowlist configuration switch
on: enabled
off: disabled
                     * @return Switch Referer blocklist/allowlist configuration switch
on: enabled
off: disabled
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Referer blocklist/allowlist configuration switch
on: enabled
off: disabled
                     * @param Switch Referer blocklist/allowlist configuration switch
on: enabled
off: disabled
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Referer blocklist/allowlist configuration rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return RefererRules Referer blocklist/allowlist configuration rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RefererRule> GetRefererRules() const;

                    /**
                     * 设置Referer blocklist/allowlist configuration rule
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param RefererRules Referer blocklist/allowlist configuration rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRefererRules(const std::vector<RefererRule>& _refererRules);

                    /**
                     * 判断参数 RefererRules 是否已赋值
                     * @return RefererRules 是否已赋值
                     */
                    bool RefererRulesHasBeenSet() const;

                private:

                    /**
                     * Referer blocklist/allowlist configuration switch
on: enabled
off: disabled
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Referer blocklist/allowlist configuration rule
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RefererRule> m_refererRules;
                    bool m_refererRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_REFERER_H_
