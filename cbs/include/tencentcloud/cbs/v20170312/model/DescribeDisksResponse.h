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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Disk.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDisks response structure.
                */
                class DescribeDisksResponse : public AbstractModel
                {
                public:
                    DescribeDisksResponse();
                    ~DescribeDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The quantity of cloud disks meeting the conditions.
                     * @return TotalCount The quantity of cloud disks meeting the conditions.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of cloud disk details.
                     * @return DiskSet List of cloud disk details.
                     */
                    std::vector<Disk> GetDiskSet() const;

                    /**
                     * 判断参数 DiskSet 是否已赋值
                     * @return DiskSet 是否已赋值
                     */
                    bool DiskSetHasBeenSet() const;

                private:

                    /**
                     * The quantity of cloud disks meeting the conditions.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of cloud disk details.
                     */
                    std::vector<Disk> m_diskSet;
                    bool m_diskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKSRESPONSE_H_
