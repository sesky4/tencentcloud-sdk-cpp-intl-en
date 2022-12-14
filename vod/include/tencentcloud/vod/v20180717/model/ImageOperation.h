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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ImageScale.h>
#include <tencentcloud/vod/v20180717/model/ImageCenterCut.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * An image operation.
                */
                class ImageOperation : public AbstractModel
                {
                public:
                    ImageOperation();
                    ~ImageOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The image processing type. Valid values:
<li>`Scale`: Scaling</li>
<li>`CenterCut`: Cropping</li>
                     * @return Type The image processing type. Valid values:
<li>`Scale`: Scaling</li>
<li>`CenterCut`: Cropping</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置The image processing type. Valid values:
<li>`Scale`: Scaling</li>
<li>`CenterCut`: Cropping</li>
                     * @param Type The image processing type. Valid values:
<li>`Scale`: Scaling</li>
<li>`CenterCut`: Cropping</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取The scaling details. This parameter is valid only if `Type` is `Scale`.
                     * @return Scale The scaling details. This parameter is valid only if `Type` is `Scale`.
                     */
                    ImageScale GetScale() const;

                    /**
                     * 设置The scaling details. This parameter is valid only if `Type` is `Scale`.
                     * @param Scale The scaling details. This parameter is valid only if `Type` is `Scale`.
                     */
                    void SetScale(const ImageScale& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取The cropping details. This parameter is valid only if `Type` is `CenterCut`.
                     * @return CenterCut The cropping details. This parameter is valid only if `Type` is `CenterCut`.
                     */
                    ImageCenterCut GetCenterCut() const;

                    /**
                     * 设置The cropping details. This parameter is valid only if `Type` is `CenterCut`.
                     * @param CenterCut The cropping details. This parameter is valid only if `Type` is `CenterCut`.
                     */
                    void SetCenterCut(const ImageCenterCut& _centerCut);

                    /**
                     * 判断参数 CenterCut 是否已赋值
                     * @return CenterCut 是否已赋值
                     */
                    bool CenterCutHasBeenSet() const;

                private:

                    /**
                     * The image processing type. Valid values:
<li>`Scale`: Scaling</li>
<li>`CenterCut`: Cropping</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The scaling details. This parameter is valid only if `Type` is `Scale`.
                     */
                    ImageScale m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * The cropping details. This parameter is valid only if `Type` is `CenterCut`.
                     */
                    ImageCenterCut m_centerCut;
                    bool m_centerCutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMAGEOPERATION_H_