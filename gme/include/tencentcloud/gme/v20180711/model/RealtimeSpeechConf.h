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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHCONF_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * Configuration information of Voice Chat
                */
                class RealtimeSpeechConf : public AbstractModel
                {
                public:
                    RealtimeSpeechConf();
                    ~RealtimeSpeechConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice Chat status. Valid values: `open`, `close`.
                     * @return Status Voice Chat status. Valid values: `open`, `close`.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Voice Chat status. Valid values: `open`, `close`.
                     * @param _status Voice Chat status. Valid values: `open`, `close`.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Voice Chat sound quality type. Valid values: `high` (HD), `ordinary` (SD).
                     * @return Quality Voice Chat sound quality type. Valid values: `high` (HD), `ordinary` (SD).
                     * 
                     */
                    std::string GetQuality() const;

                    /**
                     * 设置Voice Chat sound quality type. Valid values: `high` (HD), `ordinary` (SD).
                     * @param _quality Voice Chat sound quality type. Valid values: `high` (HD), `ordinary` (SD).
                     * 
                     */
                    void SetQuality(const std::string& _quality);

                    /**
                     * 判断参数 Quality 是否已赋值
                     * @return Quality 是否已赋值
                     * 
                     */
                    bool QualityHasBeenSet() const;

                private:

                    /**
                     * Voice Chat status. Valid values: `open`, `close`.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Voice Chat sound quality type. Valid values: `high` (HD), `ordinary` (SD).
                     */
                    std::string m_quality;
                    bool m_qualityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_REALTIMESPEECHCONF_H_
