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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNDOMAINSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCDNDomains request structure.
                */
                class DescribeCDNDomainsRequest : public AbstractModel
                {
                public:
                    DescribeCDNDomainsRequest();
                    ~DescribeCDNDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of domain. If this field is left blank, all domain information will be listed by default.
                     * @return Domains List of domain. If this field is left blank, all domain information will be listed by default.
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置List of domain. If this field is left blank, all domain information will be listed by default.
                     * @param _domains List of domain. If this field is left blank, all domain information will be listed by default.
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取The maximum number of returned results for pagination fetching. Default value: 20.
                     * @return Limit The maximum number of returned results for pagination fetching. Default value: 20.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置The maximum number of returned results for pagination fetching. Default value: 20.
                     * @param _limit The maximum number of returned results for pagination fetching. Default value: 20.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取The starting offset of paged pull. Default value: 0.
                     * @return Offset The starting offset of paged pull. Default value: 0.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置The starting offset of paged pull. Default value: 0.
                     * @param _offset The starting offset of paged pull. Default value: 0.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取VOD [Subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.
                     * @return SubAppId VOD [Subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置VOD [Subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.
                     * @param _subAppId VOD [Subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * List of domain. If this field is left blank, all domain information will be listed by default.
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * The maximum number of returned results for pagination fetching. Default value: 20.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The starting offset of paged pull. Default value: 0.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * VOD [Subapplication](https://www.tencentcloud.com/zh/document/product/266/33987?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNDOMAINSREQUEST_H_
