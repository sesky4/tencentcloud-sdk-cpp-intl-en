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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaMetaData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * LiveRealTimeClip response structure.
                */
                class LiveRealTimeClipResponse : public AbstractModel
                {
                public:
                    LiveRealTimeClipResponse();
                    ~LiveRealTimeClipResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Playback URL of clipped video.
                     * @return Url Playback URL of clipped video.
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Unique media file ID of video generated by persistent clipping.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileId Unique media file ID of video generated by persistent clipping.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetFileId() const;

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Task flow ID of video generated by persistent clipping.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return VodTaskId Task flow ID of video generated by persistent clipping.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVodTaskId() const;

                    /**
                     * 判断参数 VodTaskId 是否已赋值
                     * @return VodTaskId 是否已赋值
                     */
                    bool VodTaskIdHasBeenSet() const;

                    /**
                     * 获取Metadata of clipped video.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MetaData Metadata of clipped video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                private:

                    /**
                     * Playback URL of clipped video.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Unique media file ID of video generated by persistent clipping.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Task flow ID of video generated by persistent clipping.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_vodTaskId;
                    bool m_vodTaskIdHasBeenSet;

                    /**
                     * Metadata of clipped video.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPRESPONSE_H_
