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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/HostTagInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeHostInfo response structure.
                */
                class DescribeHostInfoResponse : public AbstractModel
                {
                public:
                    DescribeHostInfoResponse();
                    ~DescribeHostInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Host and tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HostInfoList Host and tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<HostTagInfo> GetHostInfoList() const;

                    /**
                     * 判断参数 HostInfoList 是否已赋值
                     * @return HostInfoList 是否已赋值
                     * 
                     */
                    bool HostInfoListHasBeenSet() const;

                private:

                    /**
                     * Host and tag information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<HostTagInfo> m_hostInfoList;
                    bool m_hostInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEHOSTINFORESPONSE_H_
