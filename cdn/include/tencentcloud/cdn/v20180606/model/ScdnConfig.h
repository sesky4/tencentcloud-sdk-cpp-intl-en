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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnCCRules.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedCCRules.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CC attack defense configuration
                */
                class ScdnConfig : public AbstractModel
                {
                public:
                    ScdnConfig();
                    ~ScdnConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Valid values: `on` and `off`.
                     * @return Switch Valid values: `on` and `off`.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Valid values: `on` and `off`.
                     * @param Switch Valid values: `on` and `off`.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Rules Custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnCCRules> GetRules() const;

                    /**
                     * 设置Custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Rules Custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<ScdnCCRules>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取Advanced custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AdvancedRules Advanced custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvancedCCRules> GetAdvancedRules() const;

                    /**
                     * 设置Advanced custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AdvancedRules Advanced custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAdvancedRules(const std::vector<AdvancedCCRules>& _advancedRules);

                    /**
                     * 判断参数 AdvancedRules 是否已赋值
                     * @return AdvancedRules 是否已赋值
                     */
                    bool AdvancedRulesHasBeenSet() const;

                private:

                    /**
                     * Valid values: `on` and `off`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnCCRules> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * Advanced custom CC attack defense rule
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvancedCCRules> m_advancedRules;
                    bool m_advancedRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNCONFIG_H_