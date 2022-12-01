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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DDOSSTATUSINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DDOSSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DDoS protection level
                */
                class DDoSStatusInfo : public AbstractModel
                {
                public:
                    DDoSStatusInfo();
                    ~DDoSStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The policy level. Values:
<li>`low`: Loose.</li>
<li>`middle`: Moderate</li>
<li>`high`: Strict</li>
                     * @return PlyLevel The policy level. Values:
<li>`low`: Loose.</li>
<li>`middle`: Moderate</li>
<li>`high`: Strict</li>
                     */
                    std::string GetPlyLevel() const;

                    /**
                     * 设置The policy level. Values:
<li>`low`: Loose.</li>
<li>`middle`: Moderate</li>
<li>`high`: Strict</li>
                     * @param PlyLevel The policy level. Values:
<li>`low`: Loose.</li>
<li>`middle`: Moderate</li>
<li>`high`: Strict</li>
                     */
                    void SetPlyLevel(const std::string& _plyLevel);

                    /**
                     * 判断参数 PlyLevel 是否已赋值
                     * @return PlyLevel 是否已赋值
                     */
                    bool PlyLevelHasBeenSet() const;

                private:

                    /**
                     * The policy level. Values:
<li>`low`: Loose.</li>
<li>`middle`: Moderate</li>
<li>`high`: Strict</li>
                     */
                    std::string m_plyLevel;
                    bool m_plyLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DDOSSTATUSINFO_H_