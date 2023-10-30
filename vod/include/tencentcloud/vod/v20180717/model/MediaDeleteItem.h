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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIADELETEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIADELETEITEM_H_

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
                * 
                */
                class MediaDeleteItem : public AbstractModel
                {
                public:
                    MediaDeleteItem();
                    ~MediaDeleteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The type of files to delete. If this parameter is left empty, it will be invalid. Valid values:
<li>`OriginalFiles`: The original file. After deleting an original file, you can no longer perform operations such as transcoding or WeChat publishing on the file ID.</li>
<li>`TranscodeFiles`: Transcoding outputs</li>
<li>`AdaptiveDynamicStreamingFiles`: Adaptive bitrate outputs</li>
<li>`WechatPublishFiles`: The file for WeChat publishing</li>
                     * @return Type The type of files to delete. If this parameter is left empty, it will be invalid. Valid values:
<li>`OriginalFiles`: The original file. After deleting an original file, you can no longer perform operations such as transcoding or WeChat publishing on the file ID.</li>
<li>`TranscodeFiles`: Transcoding outputs</li>
<li>`AdaptiveDynamicStreamingFiles`: Adaptive bitrate outputs</li>
<li>`WechatPublishFiles`: The file for WeChat publishing</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The type of files to delete. If this parameter is left empty, it will be invalid. Valid values:
<li>`OriginalFiles`: The original file. After deleting an original file, you can no longer perform operations such as transcoding or WeChat publishing on the file ID.</li>
<li>`TranscodeFiles`: Transcoding outputs</li>
<li>`AdaptiveDynamicStreamingFiles`: Adaptive bitrate outputs</li>
<li>`WechatPublishFiles`: The file for WeChat publishing</li>
                     * @param _type The type of files to delete. If this parameter is left empty, it will be invalid. Valid values:
<li>`OriginalFiles`: The original file. After deleting an original file, you can no longer perform operations such as transcoding or WeChat publishing on the file ID.</li>
<li>`TranscodeFiles`: Transcoding outputs</li>
<li>`AdaptiveDynamicStreamingFiles`: Adaptive bitrate outputs</li>
<li>`WechatPublishFiles`: The file for WeChat publishing</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取ID of the template for which to delete the videos of the type specified by the `Type` parameter. For the template definition, please see [Transcoding Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
Default value: 0, which indicates to delete all videos of the type specified by the `Type` parameter.
                     * @return Definition ID of the template for which to delete the videos of the type specified by the `Type` parameter. For the template definition, please see [Transcoding Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
Default value: 0, which indicates to delete all videos of the type specified by the `Type` parameter.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置ID of the template for which to delete the videos of the type specified by the `Type` parameter. For the template definition, please see [Transcoding Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
Default value: 0, which indicates to delete all videos of the type specified by the `Type` parameter.
                     * @param _definition ID of the template for which to delete the videos of the type specified by the `Type` parameter. For the template definition, please see [Transcoding Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
Default value: 0, which indicates to delete all videos of the type specified by the `Type` parameter.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * The type of files to delete. If this parameter is left empty, it will be invalid. Valid values:
<li>`OriginalFiles`: The original file. After deleting an original file, you can no longer perform operations such as transcoding or WeChat publishing on the file ID.</li>
<li>`TranscodeFiles`: Transcoding outputs</li>
<li>`AdaptiveDynamicStreamingFiles`: Adaptive bitrate outputs</li>
<li>`WechatPublishFiles`: The file for WeChat publishing</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ID of the template for which to delete the videos of the type specified by the `Type` parameter. For the template definition, please see [Transcoding Template](https://intl.cloud.tencent.com/document/product/266/33478?from_cn_redirect=1#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF).
Default value: 0, which indicates to delete all videos of the type specified by the `Type` parameter.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIADELETEITEM_H_
