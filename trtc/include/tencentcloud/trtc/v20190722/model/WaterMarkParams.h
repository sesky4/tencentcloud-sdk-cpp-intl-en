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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Watermark parameters for On-Cloud MixTranscoding
                */
                class WaterMarkParams : public AbstractModel
                {
                public:
                    WaterMarkParams();
                    ~WaterMarkParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image ID of the watermark, which is generated after the image is uploaded to the TRTC console
                     * @return WaterMarkId Image ID of the watermark, which is generated after the image is uploaded to the TRTC console
                     */
                    uint64_t GetWaterMarkId() const;

                    /**
                     * 设置Image ID of the watermark, which is generated after the image is uploaded to the TRTC console
                     * @param WaterMarkId Image ID of the watermark, which is generated after the image is uploaded to the TRTC console
                     */
                    void SetWaterMarkId(const uint64_t& _waterMarkId);

                    /**
                     * 判断参数 WaterMarkId 是否已赋值
                     * @return WaterMarkId 是否已赋值
                     */
                    bool WaterMarkIdHasBeenSet() const;

                    /**
                     * 获取Width (px) of the watermark for On-Cloud MixTranscoding
                     * @return WaterMarkWidth Width (px) of the watermark for On-Cloud MixTranscoding
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置Width (px) of the watermark for On-Cloud MixTranscoding
                     * @param WaterMarkWidth Width (px) of the watermark for On-Cloud MixTranscoding
                     */
                    void SetWaterMarkWidth(const uint64_t& _waterMarkWidth);

                    /**
                     * 判断参数 WaterMarkWidth 是否已赋值
                     * @return WaterMarkWidth 是否已赋值
                     */
                    bool WaterMarkWidthHasBeenSet() const;

                    /**
                     * 获取Height (px) of the watermark for On-Cloud MixTranscoding
                     * @return WaterMarkHeight Height (px) of the watermark for On-Cloud MixTranscoding
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置Height (px) of the watermark for On-Cloud MixTranscoding
                     * @param WaterMarkHeight Height (px) of the watermark for On-Cloud MixTranscoding
                     */
                    void SetWaterMarkHeight(const uint64_t& _waterMarkHeight);

                    /**
                     * 判断参数 WaterMarkHeight 是否已赋值
                     * @return WaterMarkHeight 是否已赋值
                     */
                    bool WaterMarkHeightHasBeenSet() const;

                    /**
                     * 获取Horizontal offset (px) of the watermark
                     * @return LocationX Horizontal offset (px) of the watermark
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置Horizontal offset (px) of the watermark
                     * @param LocationX Horizontal offset (px) of the watermark
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取Vertical offset (px) of the watermark
                     * @return LocationY Vertical offset (px) of the watermark
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置Vertical offset (px) of the watermark
                     * @param LocationY Vertical offset (px) of the watermark
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取URL of the watermark image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `WaterMarkUrl` and `WaterMarkId` are specified, the former will be used. The watermark image cannot exceed 10 MB.
                     * @return WaterMarkUrl URL of the watermark image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `WaterMarkUrl` and `WaterMarkId` are specified, the former will be used. The watermark image cannot exceed 10 MB.
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置URL of the watermark image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `WaterMarkUrl` and `WaterMarkId` are specified, the former will be used. The watermark image cannot exceed 10 MB.
                     * @param WaterMarkUrl URL of the watermark image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `WaterMarkUrl` and `WaterMarkId` are specified, the former will be used. The watermark image cannot exceed 10 MB.
                     */
                    void SetWaterMarkUrl(const std::string& _waterMarkUrl);

                    /**
                     * 判断参数 WaterMarkUrl 是否已赋值
                     * @return WaterMarkUrl 是否已赋值
                     */
                    bool WaterMarkUrlHasBeenSet() const;

                private:

                    /**
                     * Image ID of the watermark, which is generated after the image is uploaded to the TRTC console
                     */
                    uint64_t m_waterMarkId;
                    bool m_waterMarkIdHasBeenSet;

                    /**
                     * Width (px) of the watermark for On-Cloud MixTranscoding
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * Height (px) of the watermark for On-Cloud MixTranscoding
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * Horizontal offset (px) of the watermark
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * Vertical offset (px) of the watermark
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * URL of the watermark image for the mixed stream, which can be in PNG, JPG, JPEG, or BMP format and does not support the alpha channel. The URL must not exceed 512 bytes. When both `WaterMarkUrl` and `WaterMarkId` are specified, the former will be used. The watermark image cannot exceed 10 MB.
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKPARAMS_H_