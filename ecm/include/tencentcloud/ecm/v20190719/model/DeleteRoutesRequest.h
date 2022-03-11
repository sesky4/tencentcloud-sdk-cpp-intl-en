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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DELETEROUTESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DELETEROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Route.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteRoutes request structure.
                */
                class DeleteRoutesRequest : public AbstractModel
                {
                public:
                    DeleteRoutesRequest();
                    ~DeleteRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique route table ID.
                     * @return RouteTableId Unique route table ID.
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置Unique route table ID.
                     * @param RouteTableId Unique route table ID.
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取Routing policy object.
                     * @return Routes Routing policy object.
                     */
                    std::vector<Route> GetRoutes() const;

                    /**
                     * 设置Routing policy object.
                     * @param Routes Routing policy object.
                     */
                    void SetRoutes(const std::vector<Route>& _routes);

                    /**
                     * 判断参数 Routes 是否已赋值
                     * @return Routes 是否已赋值
                     */
                    bool RoutesHasBeenSet() const;

                private:

                    /**
                     * Unique route table ID.
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * Routing policy object.
                     */
                    std::vector<Route> m_routes;
                    bool m_routesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DELETEROUTESREQUEST_H_
