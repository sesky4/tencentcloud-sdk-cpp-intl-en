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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCERESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * UpgradeInstance response structure.
                */
                class UpgradeInstanceResponse : public AbstractModel
                {
                public:
                    UpgradeInstanceResponse();
                    ~UpgradeInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Freezing transaction ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TranId Freezing transaction ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTranId() const;

                    /**
                     * 判断参数 TranId 是否已赋值
                     * @return TranId 是否已赋值
                     */
                    bool TranIdHasBeenSet() const;

                    /**
                     * 获取Big order ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BigDealIds Big order ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     */
                    bool BigDealIdsHasBeenSet() const;

                    /**
                     * 获取Order ID
                     * @return DealNames Order ID
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * Freezing transaction ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_tranId;
                    bool m_tranIdHasBeenSet;

                    /**
                     * Big order ID.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                    /**
                     * Order ID
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_UPGRADEINSTANCERESPONSE_H_
