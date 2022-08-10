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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SWITCHCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SWITCHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Web security configuration switch
                */
                class SwitchConfig : public AbstractModel
                {
                public:
                    SwitchConfig();
                    ~SwitchConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch that controls all web security configuration: basic web protection, custom rules, and rate limiting
                     * @return WebSwitch Switch that controls all web security configuration: basic web protection, custom rules, and rate limiting
                     */
                    std::string GetWebSwitch() const;

                    /**
                     * 设置Switch that controls all web security configuration: basic web protection, custom rules, and rate limiting
                     * @param WebSwitch Switch that controls all web security configuration: basic web protection, custom rules, and rate limiting
                     */
                    void SetWebSwitch(const std::string& _webSwitch);

                    /**
                     * 判断参数 WebSwitch 是否已赋值
                     * @return WebSwitch 是否已赋值
                     */
                    bool WebSwitchHasBeenSet() const;

                private:

                    /**
                     * Switch that controls all web security configuration: basic web protection, custom rules, and rate limiting
                     */
                    std::string m_webSwitch;
                    bool m_webSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SWITCHCONFIG_H_
