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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_TASKOUTPUTMEDIAINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_TASKOUTPUTMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaBasicInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Output media file information of a video processing task.
                */
                class TaskOutputMediaInfo : public AbstractModel
                {
                public:
                    TaskOutputMediaInfo();
                    ~TaskOutputMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Media file ID.
                     * @return FileId Media file ID.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID.
                     * @param FileId Media file ID.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return MediaBasicInfo 
                     */
                    MediaBasicInfo GetMediaBasicInfo() const;

                    /**
                     * 设置
                     * @param MediaBasicInfo 
                     */
                    void SetMediaBasicInfo(const MediaBasicInfo& _mediaBasicInfo);

                    /**
                     * 判断参数 MediaBasicInfo 是否已赋值
                     * @return MediaBasicInfo 是否已赋值
                     */
                    bool MediaBasicInfoHasBeenSet() const;

                private:

                    /**
                     * Media file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    MediaBasicInfo m_mediaBasicInfo;
                    bool m_mediaBasicInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_TASKOUTPUTMEDIAINFO_H_
