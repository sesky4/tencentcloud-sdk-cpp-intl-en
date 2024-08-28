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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBHOOKRECEIVERUSAGEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBHOOKRECEIVERUSAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/WebHookReceiver.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeWebHookReceiverUsage request structure.
                */
                class DescribeWebHookReceiverUsageRequest : public AbstractModel
                {
                public:
                    DescribeWebHookReceiverUsageRequest();
                    ~DescribeWebHookReceiverUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm recipient list
                     * @return List Alarm recipient list
                     * 
                     */
                    std::vector<WebHookReceiver> GetList() const;

                    /**
                     * 设置Alarm recipient list
                     * @param _list Alarm recipient list
                     * 
                     */
                    void SetList(const std::vector<WebHookReceiver>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Alarm recipient list
                     */
                    std::vector<WebHookReceiver> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBHOOKRECEIVERUSAGEREQUEST_H_
