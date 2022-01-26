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

#ifndef TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOSELECTORINFO_H_
#define TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOSELECTORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mdl/v20200326/model/AudioPidSelectionInfo.h>


namespace TencentCloud
{
    namespace Mdl
    {
        namespace V20200326
        {
            namespace Model
            {
                /**
                * Audio selector.
                */
                class AudioSelectorInfo : public AbstractModel
                {
                public:
                    AudioSelectorInfo();
                    ~AudioSelectorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Audio name, which can contain 1-32 letters, digits, and underscores.
                     * @return Name Audio name, which can contain 1-32 letters, digits, and underscores.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Audio name, which can contain 1-32 letters, digits, and underscores.
                     * @param Name Audio name, which can contain 1-32 letters, digits, and underscores.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Audio `Pid` selection.
                     * @return AudioPidSelection Audio `Pid` selection.
                     */
                    AudioPidSelectionInfo GetAudioPidSelection() const;

                    /**
                     * 设置Audio `Pid` selection.
                     * @param AudioPidSelection Audio `Pid` selection.
                     */
                    void SetAudioPidSelection(const AudioPidSelectionInfo& _audioPidSelection);

                    /**
                     * 判断参数 AudioPidSelection 是否已赋值
                     * @return AudioPidSelection 是否已赋值
                     */
                    bool AudioPidSelectionHasBeenSet() const;

                private:

                    /**
                     * Audio name, which can contain 1-32 letters, digits, and underscores.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Audio `Pid` selection.
                     */
                    AudioPidSelectionInfo m_audioPidSelection;
                    bool m_audioPidSelectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MDL_V20200326_MODEL_AUDIOSELECTORINFO_H_
