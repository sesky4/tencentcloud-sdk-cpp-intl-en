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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIAOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIAOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Information of video splitting output files.
                */
                class SplitMediaOutputConfig : public AbstractModel
                {
                public:
                    SplitMediaOutputConfig();
                    ~SplitMediaOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Name of an output file. This parameter can contain up to 64 characters, and will be generated by the system if it is left empty.
                     * @return MediaName Name of an output file. This parameter can contain up to 64 characters, and will be generated by the system if it is left empty.
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Name of an output file. This parameter can contain up to 64 characters, and will be generated by the system if it is left empty.
                     * @param MediaName Name of an output file. This parameter can contain up to 64 characters, and will be generated by the system if it is left empty.
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取Output file format. Valid values: mp4 (default), hls.
                     * @return Type Output file format. Valid values: mp4 (default), hls.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Output file format. Valid values: mp4 (default), hls.
                     * @param Type Output file format. Valid values: mp4 (default), hls.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Category ID, which is used to categorize the media file for management. You can use [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>Default value: 0, which means other categories.</li>
                     * @return ClassId Category ID, which is used to categorize the media file for management. You can use [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>Default value: 0, which means other categories.</li>
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, which is used to categorize the media file for management. You can use [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>Default value: 0, which means other categories.</li>
                     * @param ClassId Category ID, which is used to categorize the media file for management. You can use [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>Default value: 0, which means other categories.</li>
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Expiration time of an output file. After passing the expiration time, the file will be deleted. There is no expiration time set for a file by default. The time is in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @return ExpireTime Expiration time of an output file. After passing the expiration time, the file will be deleted. There is no expiration time set for a file by default. The time is in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of an output file. After passing the expiration time, the file will be deleted. There is no expiration time set for a file by default. The time is in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     * @param ExpireTime Expiration time of an output file. After passing the expiration time, the file will be deleted. There is no expiration time set for a file by default. The time is in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * Name of an output file. This parameter can contain up to 64 characters, and will be generated by the system if it is left empty.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * Output file format. Valid values: mp4 (default), hls.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Category ID, which is used to categorize the media file for management. You can use [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>Default value: 0, which means other categories.</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Expiration time of an output file. After passing the expiration time, the file will be deleted. There is no expiration time set for a file by default. The time is in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?lang=en&pg=).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIAOUTPUTCONFIG_H_
