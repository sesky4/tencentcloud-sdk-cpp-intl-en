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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPIPINSTANCESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPIPINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListBGPIPInstances request structure.
                */
                class DescribeListBGPIPInstancesRequest : public AbstractModel
                {
                public:
                    DescribeListBGPIPInstancesRequest();
                    ~DescribeListBGPIPInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @return Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @param Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * @return Limit Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     * @param Limit Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取IP filter
                     * @return FilterIp IP filter
                     */
                    std::string GetFilterIp() const;

                    /**
                     * 设置IP filter
                     * @param FilterIp IP filter
                     */
                    void SetFilterIp(const std::string& _filterIp);

                    /**
                     * 判断参数 FilterIp 是否已赋值
                     * @return FilterIp 是否已赋值
                     */
                    bool FilterIpHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS instance ID filter. For example, you can filter the Anti-DDoS Advanced instance ID by `bgpip-00000001`.
                     * @return FilterInstanceId Anti-DDoS instance ID filter. For example, you can filter the Anti-DDoS Advanced instance ID by `bgpip-00000001`.
                     */
                    std::string GetFilterInstanceId() const;

                    /**
                     * 设置Anti-DDoS instance ID filter. For example, you can filter the Anti-DDoS Advanced instance ID by `bgpip-00000001`.
                     * @param FilterInstanceId Anti-DDoS instance ID filter. For example, you can filter the Anti-DDoS Advanced instance ID by `bgpip-00000001`.
                     */
                    void SetFilterInstanceId(const std::string& _filterInstanceId);

                    /**
                     * 判断参数 FilterInstanceId 是否已赋值
                     * @return FilterInstanceId 是否已赋值
                     */
                    bool FilterInstanceIdHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS Advanced line filter. Valid values:
`1`: BGP line
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     * @return FilterLine Anti-DDoS Advanced line filter. Valid values:
`1`: BGP line
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     */
                    uint64_t GetFilterLine() const;

                    /**
                     * 设置Anti-DDoS Advanced line filter. Valid values:
`1`: BGP line
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     * @param FilterLine Anti-DDoS Advanced line filter. Valid values:
`1`: BGP line
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     */
                    void SetFilterLine(const uint64_t& _filterLine);

                    /**
                     * 判断参数 FilterLine 是否已赋值
                     * @return FilterLine 是否已赋值
                     */
                    bool FilterLineHasBeenSet() const;

                    /**
                     * 获取Region filter. For example, `ap-guangzhou`.
                     * @return FilterRegion Region filter. For example, `ap-guangzhou`.
                     */
                    std::string GetFilterRegion() const;

                    /**
                     * 设置Region filter. For example, `ap-guangzhou`.
                     * @param FilterRegion Region filter. For example, `ap-guangzhou`.
                     */
                    void SetFilterRegion(const std::string& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取Name filter
                     * @return FilterName Name filter
                     */
                    std::string GetFilterName() const;

                    /**
                     * 设置Name filter
                     * @param FilterName Name filter
                     */
                    void SetFilterName(const std::string& _filterName);

                    /**
                     * 判断参数 FilterName 是否已赋值
                     * @return FilterName 是否已赋值
                     */
                    bool FilterNameHasBeenSet() const;

                    /**
                     * 获取Whether to obtain only Anti-DDoS EIP instances. `1`: Yes; `0`: No.
                     * @return FilterEipType Whether to obtain only Anti-DDoS EIP instances. `1`: Yes; `0`: No.
                     */
                    int64_t GetFilterEipType() const;

                    /**
                     * 设置Whether to obtain only Anti-DDoS EIP instances. `1`: Yes; `0`: No.
                     * @param FilterEipType Whether to obtain only Anti-DDoS EIP instances. `1`: Yes; `0`: No.
                     */
                    void SetFilterEipType(const int64_t& _filterEipType);

                    /**
                     * 判断参数 FilterEipType 是否已赋值
                     * @return FilterEipType 是否已赋值
                     */
                    bool FilterEipTypeHasBeenSet() const;

                    /**
                     * 获取Anti-DDoS Advanced instance binding status filter. Valid values: `BINDING`, `BIND`, `UNBINDING`, `UNBIND`. This filter is only valid when `FilterEipType = 1`.
                     * @return FilterEipEipAddressStatus Anti-DDoS Advanced instance binding status filter. Valid values: `BINDING`, `BIND`, `UNBINDING`, `UNBIND`. This filter is only valid when `FilterEipType = 1`.
                     */
                    std::vector<std::string> GetFilterEipEipAddressStatus() const;

                    /**
                     * 设置Anti-DDoS Advanced instance binding status filter. Valid values: `BINDING`, `BIND`, `UNBINDING`, `UNBIND`. This filter is only valid when `FilterEipType = 1`.
                     * @param FilterEipEipAddressStatus Anti-DDoS Advanced instance binding status filter. Valid values: `BINDING`, `BIND`, `UNBINDING`, `UNBIND`. This filter is only valid when `FilterEipType = 1`.
                     */
                    void SetFilterEipEipAddressStatus(const std::vector<std::string>& _filterEipEipAddressStatus);

                    /**
                     * 判断参数 FilterEipEipAddressStatus 是否已赋值
                     * @return FilterEipEipAddressStatus 是否已赋值
                     */
                    bool FilterEipEipAddressStatusHasBeenSet() const;

                    /**
                     * 获取Whether to obtain only Anti-DDoS instances with Sec-MCA enabled. Valid values: `1` (only obtain Anti-DDoS instances with Sec-MCA enabled) and `0` (obtain other Anti-DDoS instances).
                     * @return FilterDamDDoSStatus Whether to obtain only Anti-DDoS instances with Sec-MCA enabled. Valid values: `1` (only obtain Anti-DDoS instances with Sec-MCA enabled) and `0` (obtain other Anti-DDoS instances).
                     */
                    int64_t GetFilterDamDDoSStatus() const;

                    /**
                     * 设置Whether to obtain only Anti-DDoS instances with Sec-MCA enabled. Valid values: `1` (only obtain Anti-DDoS instances with Sec-MCA enabled) and `0` (obtain other Anti-DDoS instances).
                     * @param FilterDamDDoSStatus Whether to obtain only Anti-DDoS instances with Sec-MCA enabled. Valid values: `1` (only obtain Anti-DDoS instances with Sec-MCA enabled) and `0` (obtain other Anti-DDoS instances).
                     */
                    void SetFilterDamDDoSStatus(const int64_t& _filterDamDDoSStatus);

                    /**
                     * 判断参数 FilterDamDDoSStatus 是否已赋值
                     * @return FilterDamDDoSStatus 是否已赋值
                     */
                    bool FilterDamDDoSStatusHasBeenSet() const;

                private:

                    /**
                     * Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items per page. The default value is 20 when `Limit = 0`. The maximum value is 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * IP filter
                     */
                    std::string m_filterIp;
                    bool m_filterIpHasBeenSet;

                    /**
                     * Anti-DDoS instance ID filter. For example, you can filter the Anti-DDoS Advanced instance ID by `bgpip-00000001`.
                     */
                    std::string m_filterInstanceId;
                    bool m_filterInstanceIdHasBeenSet;

                    /**
                     * Anti-DDoS Advanced line filter. Valid values:
`1`: BGP line
`2`: China Telecom
`3`: China Unicom
`4`: China Mobile
`99`: third-party line
]
                     */
                    uint64_t m_filterLine;
                    bool m_filterLineHasBeenSet;

                    /**
                     * Region filter. For example, `ap-guangzhou`.
                     */
                    std::string m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * Name filter
                     */
                    std::string m_filterName;
                    bool m_filterNameHasBeenSet;

                    /**
                     * Whether to obtain only Anti-DDoS EIP instances. `1`: Yes; `0`: No.
                     */
                    int64_t m_filterEipType;
                    bool m_filterEipTypeHasBeenSet;

                    /**
                     * Anti-DDoS Advanced instance binding status filter. Valid values: `BINDING`, `BIND`, `UNBINDING`, `UNBIND`. This filter is only valid when `FilterEipType = 1`.
                     */
                    std::vector<std::string> m_filterEipEipAddressStatus;
                    bool m_filterEipEipAddressStatusHasBeenSet;

                    /**
                     * Whether to obtain only Anti-DDoS instances with Sec-MCA enabled. Valid values: `1` (only obtain Anti-DDoS instances with Sec-MCA enabled) and `0` (obtain other Anti-DDoS instances).
                     */
                    int64_t m_filterDamDDoSStatus;
                    bool m_filterDamDDoSStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTBGPIPINSTANCESREQUEST_H_