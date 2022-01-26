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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCFREQUENCYRULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCFREQUENCYRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyCCFrequencyRules request structure.
                */
                class ModifyCCFrequencyRulesRequest : public AbstractModel
                {
                public:
                    ModifyCCFrequencyRulesRequest();
                    ~ModifyCCFrequencyRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @return Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     * @param Business Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取CC access frequency control rule ID
                     * @return CCFrequencyRuleId CC access frequency control rule ID
                     */
                    std::string GetCCFrequencyRuleId() const;

                    /**
                     * 设置CC access frequency control rule ID
                     * @param CCFrequencyRuleId CC access frequency control rule ID
                     */
                    void SetCCFrequencyRuleId(const std::string& _cCFrequencyRuleId);

                    /**
                     * 判断参数 CCFrequencyRuleId 是否已赋值
                     * @return CCFrequencyRuleId 是否已赋值
                     */
                    bool CCFrequencyRuleIdHasBeenSet() const;

                    /**
                     * 获取Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     * @return Mode Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     * @param Mode Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取Reference period in seconds. Valid values: [10, 30, 60]
                     * @return Period Reference period in seconds. Valid values: [10, 30, 60]
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Reference period in seconds. Valid values: [10, 30, 60]
                     * @param Period Reference period in seconds. Valid values: [10, 30, 60]
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Number of access requests. Value range: [1-10000]
                     * @return ReqNumber Number of access requests. Value range: [1-10000]
                     */
                    uint64_t GetReqNumber() const;

                    /**
                     * 设置Number of access requests. Value range: [1-10000]
                     * @param ReqNumber Number of access requests. Value range: [1-10000]
                     */
                    void SetReqNumber(const uint64_t& _reqNumber);

                    /**
                     * 判断参数 ReqNumber 是否已赋值
                     * @return ReqNumber 是否已赋值
                     */
                    bool ReqNumberHasBeenSet() const;

                    /**
                     * 获取Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     * @return Act Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     */
                    std::string GetAct() const;

                    /**
                     * 设置Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     * @param Act Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     */
                    void SetAct(const std::string& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取Execution duration in seconds. Valid range: [1-900]
                     * @return ExeDuration Execution duration in seconds. Valid range: [1-900]
                     */
                    uint64_t GetExeDuration() const;

                    /**
                     * 设置Execution duration in seconds. Valid range: [1-900]
                     * @param ExeDuration Execution duration in seconds. Valid range: [1-900]
                     */
                    void SetExeDuration(const uint64_t& _exeDuration);

                    /**
                     * 判断参数 ExeDuration 是否已赋值
                     * @return ExeDuration 是否已赋值
                     */
                    bool ExeDurationHasBeenSet() const;

                    /**
                     * 获取URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     * @return Uri URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     */
                    std::string GetUri() const;

                    /**
                     * 设置URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     * @param Uri URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取`User-Agent` string. Length limit: 80
                     * @return UserAgent `User-Agent` string. Length limit: 80
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置`User-Agent` string. Length limit: 80
                     * @param UserAgent `User-Agent` string. Length limit: 80
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Cookie string. Length limit: 40
                     * @return Cookie Cookie string. Length limit: 40
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置Cookie string. Length limit: 40
                     * @param Cookie Cookie string. Length limit: 40
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service type. `bgpip`: Anti-DDoS Advanced; `net`: Anti-DDoS Ultimate
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * CC access frequency control rule ID
                     */
                    std::string m_cCFrequencyRuleId;
                    bool m_cCFrequencyRuleIdHasBeenSet;

                    /**
                     * Matching rule. Valid values: ["include" (prefix match), "equal" (exact match)]
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * Reference period in seconds. Valid values: [10, 30, 60]
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of access requests. Value range: [1-10000]
                     */
                    uint64_t m_reqNumber;
                    bool m_reqNumberHasBeenSet;

                    /**
                     * Action take. Valid values: ["alg" (CAPTCHA), "drop" (blocking)]
                     */
                    std::string m_act;
                    bool m_actHasBeenSet;

                    /**
                     * Execution duration in seconds. Valid range: [1-900]
                     */
                    uint64_t m_exeDuration;
                    bool m_exeDurationHasBeenSet;

                    /**
                     * URI string, which must start with `/`, such as `/abc/a.php`. Length limit: 31. If URI is `/`, only prefix match can be selected as the matching mode;
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * `User-Agent` string. Length limit: 80
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Cookie string. Length limit: 40
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYCCFREQUENCYRULESREQUEST_H_
