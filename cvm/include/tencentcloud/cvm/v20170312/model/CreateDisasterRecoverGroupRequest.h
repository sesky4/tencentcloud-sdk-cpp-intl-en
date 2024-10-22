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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateDisasterRecoverGroup request structure.
                */
                class CreateDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    CreateDisasterRecoverGroupRequest();
                    ~CreateDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * @return Name Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     * @param _name Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
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
                     * 获取Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     * @return Type Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     * @param _type Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     * @return ClientToken A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     * @param _clientToken A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * Name of the spread placement group. The name must be 1-60 characters long and can contain both Chinese characters and English letters.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of a spread placement group. Valid values:<br><li>HOST: physical machine.</li><li>SW: switch.</li><li>RACK: rack.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * A string used to ensure the idempotency of the request, which is generated by the user and must be unique to each request. The maximum length is 64 ASCII characters. If this parameter is not specified, the idempotency of the request cannot be guaranteed. <br>For more information, see 'How to ensure idempotency'.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEDISASTERRECOVERGROUPREQUEST_H_
