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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEBASICINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEBASICINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineBasicInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineBasicInfo response structure.
                */
                class DescribeBaselineBasicInfoResponse : public AbstractModel
                {
                public:
                    DescribeBaselineBasicInfoResponse();
                    ~DescribeBaselineBasicInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Baseline basic information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BaselineBasicInfoList Baseline basic information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BaselineBasicInfo> GetBaselineBasicInfoList() const;

                    /**
                     * 判断参数 BaselineBasicInfoList 是否已赋值
                     * @return BaselineBasicInfoList 是否已赋值
                     * 
                     */
                    bool BaselineBasicInfoListHasBeenSet() const;

                private:

                    /**
                     * Baseline basic information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BaselineBasicInfo> m_baselineBasicInfoList;
                    bool m_baselineBasicInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINEBASICINFORESPONSE_H_
