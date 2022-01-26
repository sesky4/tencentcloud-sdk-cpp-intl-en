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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnAclGroup.h>
#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedScdnAclGroup.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN access control
                */
                class ScdnAclConfig : public AbstractModel
                {
                public:
                    ScdnAclConfig();
                    ~ScdnAclConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable. Valid values: `on` and `off`.
                     * @return Switch Whether to enable. Valid values: `on` and `off`.
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable. Valid values: `on` and `off`.
                     * @param Switch Whether to enable. Valid values: `on` and `off`.
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取This field is disused. Please use `AdvancedScriptData` instead.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ScriptData This field is disused. Please use `AdvancedScriptData` instead.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnAclGroup> GetScriptData() const;

                    /**
                     * 设置This field is disused. Please use `AdvancedScriptData` instead.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ScriptData This field is disused. Please use `AdvancedScriptData` instead.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetScriptData(const std::vector<ScdnAclGroup>& _scriptData);

                    /**
                     * 判断参数 ScriptData 是否已赋值
                     * @return ScriptData 是否已赋值
                     */
                    bool ScriptDataHasBeenSet() const;

                    /**
                     * 获取Error page configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return ErrorPage Error page configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ScdnErrorPage GetErrorPage() const;

                    /**
                     * 设置Error page configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param ErrorPage Error page configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetErrorPage(const ScdnErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取ACL rule group, which is required when the access control is on.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return AdvancedScriptData ACL rule group, which is required when the access control is on.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvancedScdnAclGroup> GetAdvancedScriptData() const;

                    /**
                     * 设置ACL rule group, which is required when the access control is on.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param AdvancedScriptData ACL rule group, which is required when the access control is on.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetAdvancedScriptData(const std::vector<AdvancedScdnAclGroup>& _advancedScriptData);

                    /**
                     * 判断参数 AdvancedScriptData 是否已赋值
                     * @return AdvancedScriptData 是否已赋值
                     */
                    bool AdvancedScriptDataHasBeenSet() const;

                private:

                    /**
                     * Whether to enable. Valid values: `on` and `off`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * This field is disused. Please use `AdvancedScriptData` instead.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ScdnAclGroup> m_scriptData;
                    bool m_scriptDataHasBeenSet;

                    /**
                     * Error page configuration
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    ScdnErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * ACL rule group, which is required when the access control is on.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<AdvancedScdnAclGroup> m_advancedScriptData;
                    bool m_advancedScriptDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLCONFIG_H_
