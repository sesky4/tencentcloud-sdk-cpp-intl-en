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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateReceiver request structure.
                */
                class CreateReceiverRequest : public AbstractModel
                {
                public:
                    CreateReceiverRequest();
                    ~CreateReceiverRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Recipient group name
                     * @return ReceiversName Recipient group name
                     */
                    std::string GetReceiversName() const;

                    /**
                     * 设置Recipient group name
                     * @param ReceiversName Recipient group name
                     */
                    void SetReceiversName(const std::string& _receiversName);

                    /**
                     * 判断参数 ReceiversName 是否已赋值
                     * @return ReceiversName 是否已赋值
                     */
                    bool ReceiversNameHasBeenSet() const;

                    /**
                     * 获取Recipient group description
                     * @return Desc Recipient group description
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Recipient group description
                     * @param Desc Recipient group description
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * Recipient group name
                     */
                    std::string m_receiversName;
                    bool m_receiversNameHasBeenSet;

                    /**
                     * Recipient group description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERREQUEST_H_
