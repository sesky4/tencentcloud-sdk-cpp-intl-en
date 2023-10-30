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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CANVAS_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CANVAS_H_

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
                * Canvas information. When a video is composed, if the source material (video or image) cannot fill the output video window, the background will be drawn with the set canvas.
                */
                class Canvas : public AbstractModel
                {
                public:
                    Canvas();
                    ~Canvas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Background color. Valid values:
<li>Black: black background</li>
<li>White: white background</li>
Default value: Black.
                     * @return Color Background color. Valid values:
<li>Black: black background</li>
<li>White: white background</li>
Default value: Black.
                     * 
                     */
                    std::string GetColor() const;

                    /**
                     * 设置Background color. Valid values:
<li>Black: black background</li>
<li>White: white background</li>
Default value: Black.
                     * @param _color Background color. Valid values:
<li>Black: black background</li>
<li>White: white background</li>
Default value: Black.
                     * 
                     */
                    void SetColor(const std::string& _color);

                    /**
                     * 判断参数 Color 是否已赋值
                     * @return Color 是否已赋值
                     * 
                     */
                    bool ColorHasBeenSet() const;

                    /**
                     * 获取
                     * @return Width 
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置
                     * @param _width 
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取
                     * @return Height 
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置
                     * @param _height 
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * Background color. Valid values:
<li>Black: black background</li>
<li>White: white background</li>
Default value: Black.
                     */
                    std::string m_color;
                    bool m_colorHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CANVAS_H_
