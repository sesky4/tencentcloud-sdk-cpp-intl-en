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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_LISTENERHEALTH_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_LISTENERHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/RuleHealth.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * Listener health status
                */
                class ListenerHealth : public AbstractModel
                {
                public:
                    ListenerHealth();
                    ~ListenerHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListenerId Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ListenerId Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ListenerName Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ListenerName Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Protocol Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Protocol Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取Listener port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Port Listener port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Listener port
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Port Listener port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取List of forwarding rules of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Rules List of forwarding rules of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RuleHealth> GetRules() const;

                    /**
                     * 设置List of forwarding rules of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Rules List of forwarding rules of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRules(const std::vector<RuleHealth>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * Listener ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * Listener protocol
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * Listener port
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * List of forwarding rules of the listener
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<RuleHealth> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_LISTENERHEALTH_H_
