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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyWebHookReceiver request structure.
                */
                class ModifyWebHookReceiverRequest : public AbstractModel
                {
                public:
                    ModifyWebHookReceiverRequest();
                    ~ModifyWebHookReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Receiver name
                     * @return Name Receiver name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Receiver name
                     * @param _name Receiver name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取webhook URL
                     * @return Addr webhook URL
                     * 
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置webhook URL
                     * @param _addr webhook URL
                     * 
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     * 
                     */
                    bool AddrHasBeenSet() const;

                    /**
                     * 获取Whether to modify
                     * @return IsModify Whether to modify
                     * 
                     */
                    bool GetIsModify() const;

                    /**
                     * 设置Whether to modify
                     * @param _isModify Whether to modify
                     * 
                     */
                    void SetIsModify(const bool& _isModify);

                    /**
                     * 判断参数 IsModify 是否已赋值
                     * @return IsModify 是否已赋值
                     * 
                     */
                    bool IsModifyHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Receiver name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * webhook URL
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                    /**
                     * Whether to modify
                     */
                    bool m_isModify;
                    bool m_isModifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYWEBHOOKRECEIVERREQUEST_H_
