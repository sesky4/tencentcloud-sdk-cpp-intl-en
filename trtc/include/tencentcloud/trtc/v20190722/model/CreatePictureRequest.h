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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEPICTUREREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEPICTUREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * CreatePicture request structure.
                */
                class CreatePictureRequest : public AbstractModel
                {
                public:
                    CreatePictureRequest();
                    ~CreatePictureRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID
                     * @return SdkAppId Application ID
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置Application ID
                     * @param SdkAppId Application ID
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取Base64-encoded image content
                     * @return Content Base64-encoded image content
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Base64-encoded image content
                     * @param Content Base64-encoded image content
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Image file extension
                     * @return Suffix Image file extension
                     */
                    std::string GetSuffix() const;

                    /**
                     * 设置Image file extension
                     * @param Suffix Image file extension
                     */
                    void SetSuffix(const std::string& _suffix);

                    /**
                     * 判断参数 Suffix 是否已赋值
                     * @return Suffix 是否已赋值
                     */
                    bool SuffixHasBeenSet() const;

                    /**
                     * 获取Image height
                     * @return Height Image height
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置Image height
                     * @param Height Image height
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取Image width
                     * @return Width Image width
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置Image width
                     * @param Width Image width
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取X-axis value of the image’s position
                     * @return XPosition X-axis value of the image’s position
                     */
                    uint64_t GetXPosition() const;

                    /**
                     * 设置X-axis value of the image’s position
                     * @param XPosition X-axis value of the image’s position
                     */
                    void SetXPosition(const uint64_t& _xPosition);

                    /**
                     * 判断参数 XPosition 是否已赋值
                     * @return XPosition 是否已赋值
                     */
                    bool XPositionHasBeenSet() const;

                    /**
                     * 获取Y-axis value of the image’s position
                     * @return YPosition Y-axis value of the image’s position
                     */
                    uint64_t GetYPosition() const;

                    /**
                     * 设置Y-axis value of the image’s position
                     * @param YPosition Y-axis value of the image’s position
                     */
                    void SetYPosition(const uint64_t& _yPosition);

                    /**
                     * 判断参数 YPosition 是否已赋值
                     * @return YPosition 是否已赋值
                     */
                    bool YPositionHasBeenSet() const;

                private:

                    /**
                     * Application ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * Base64-encoded image content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Image file extension
                     */
                    std::string m_suffix;
                    bool m_suffixHasBeenSet;

                    /**
                     * Image height
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * Image width
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * X-axis value of the image’s position
                     */
                    uint64_t m_xPosition;
                    bool m_xPositionHasBeenSet;

                    /**
                     * Y-axis value of the image’s position
                     */
                    uint64_t m_yPosition;
                    bool m_yPositionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CREATEPICTUREREQUEST_H_
