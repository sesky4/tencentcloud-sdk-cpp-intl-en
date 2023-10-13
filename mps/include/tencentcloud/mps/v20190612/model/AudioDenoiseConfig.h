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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIODENOISECONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIODENOISECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The noise reduction configuration.
                */
                class AudioDenoiseConfig : public AbstractModel
                {
                public:
                    AudioDenoiseConfig();
                    ~AudioDenoiseConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable the feature. Valid values:
<li>`ON`</li>
<li>`OFF` </li>
Default value: `ON`.
                     * @return Switch Whether to enable the feature. Valid values:
<li>`ON`</li>
<li>`OFF` </li>
Default value: `ON`.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Whether to enable the feature. Valid values:
<li>`ON`</li>
<li>`OFF` </li>
Default value: `ON`.
                     * @param _switch Whether to enable the feature. Valid values:
<li>`ON`</li>
<li>`OFF` </li>
Default value: `ON`.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the feature. Valid values:
<li>`ON`</li>
<li>`OFF` </li>
Default value: `ON`.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIODENOISECONFIG_H_
