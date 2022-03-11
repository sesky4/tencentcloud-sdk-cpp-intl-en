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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETEROUTETABLEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETEROUTETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteRouteTable request structure.
                */
                class DeleteRouteTableRequest : public AbstractModel
                {
                public:
                    DeleteRouteTableRequest();
                    ~DeleteRouteTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Route table instance ID, such as `rtb-azd4dt1c`
                     * @return RouteTableId Route table instance ID, such as `rtb-azd4dt1c`
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Route table instance ID, such as `rtb-azd4dt1c`
                     * @param RouteTableId Route table instance ID, such as `rtb-azd4dt1c`
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                private:

                    /**
                     * Route table instance ID, such as `rtb-azd4dt1c`
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETEROUTETABLEREQUEST_H_
