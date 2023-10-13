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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIATRACK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIATRACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeMediaItem.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The track information of a video editing/compositing task.
                */
                class ComposeMediaTrack : public AbstractModel
                {
                public:
                    ComposeMediaTrack();
                    ~ComposeMediaTrack() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The track type. Valid values:<ul><li>`Video`: Video track. A video track can consist of the following elements:</li><ul><li>Video</li><li>Image</li><li>Transition</li><li>Empty</li></ul><li>`Audio`: Audio track. An audio track can consist of the following elements:</li><ul><li>Audio</li><li>Transition</li><li>Empty</li></ul><li>`Title`: Text track. A text track can consist of the following elements: </li><ul><li>Subtitle</li></ul>
                     * @return Type The track type. Valid values:<ul><li>`Video`: Video track. A video track can consist of the following elements:</li><ul><li>Video</li><li>Image</li><li>Transition</li><li>Empty</li></ul><li>`Audio`: Audio track. An audio track can consist of the following elements:</li><ul><li>Audio</li><li>Transition</li><li>Empty</li></ul><li>`Title`: Text track. A text track can consist of the following elements: </li><ul><li>Subtitle</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The track type. Valid values:<ul><li>`Video`: Video track. A video track can consist of the following elements:</li><ul><li>Video</li><li>Image</li><li>Transition</li><li>Empty</li></ul><li>`Audio`: Audio track. An audio track can consist of the following elements:</li><ul><li>Audio</li><li>Transition</li><li>Empty</li></ul><li>`Title`: Text track. A text track can consist of the following elements: </li><ul><li>Subtitle</li></ul>
                     * @param _type The track type. Valid values:<ul><li>`Video`: Video track. A video track can consist of the following elements:</li><ul><li>Video</li><li>Image</li><li>Transition</li><li>Empty</li></ul><li>`Audio`: Audio track. An audio track can consist of the following elements:</li><ul><li>Audio</li><li>Transition</li><li>Empty</li></ul><li>`Title`: Text track. A text track can consist of the following elements: </li><ul><li>Subtitle</li></ul>
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
                     * 获取The elements of a track.
                     * @return Items The elements of a track.
                     * 
                     */
                    std::vector<ComposeMediaItem> GetItems() const;

                    /**
                     * 设置The elements of a track.
                     * @param _items The elements of a track.
                     * 
                     */
                    void SetItems(const std::vector<ComposeMediaItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * The track type. Valid values:<ul><li>`Video`: Video track. A video track can consist of the following elements:</li><ul><li>Video</li><li>Image</li><li>Transition</li><li>Empty</li></ul><li>`Audio`: Audio track. An audio track can consist of the following elements:</li><ul><li>Audio</li><li>Transition</li><li>Empty</li></ul><li>`Title`: Text track. A text track can consist of the following elements: </li><ul><li>Subtitle</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The elements of a track.
                     */
                    std::vector<ComposeMediaItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSEMEDIATRACK_H_
