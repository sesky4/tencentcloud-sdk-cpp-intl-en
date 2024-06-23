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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BYTESSPEED_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BYTESSPEED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SpeedValue.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Real-time task synchronization speed Bytes/s
                */
                class BytesSpeed : public AbstractModel
                {
                public:
                    BytesSpeed();
                    ~BytesSpeed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeType Node TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置Node TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeType Node TypeNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return NodeName Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _nodeName Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Speed value list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Values Speed value list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<SpeedValue> GetValues() const;

                    /**
                     * 设置Speed value list
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _values Speed value list
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetValues(const std::vector<SpeedValue>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * Node TypeNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * Node nameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Speed value list
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<SpeedValue> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BYTESSPEED_H_
