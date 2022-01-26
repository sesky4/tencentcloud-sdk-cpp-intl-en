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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTINSTANCE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Blueprint.h>
#include <tencentcloud/lighthouse/v20200324/model/Software.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Image instance information.
                */
                class BlueprintInstance : public AbstractModel
                {
                public:
                    BlueprintInstance();
                    ~BlueprintInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Image information.
                     * @return Blueprint Image information.
                     */
                    Blueprint GetBlueprint() const;

                    /**
                     * 设置Image information.
                     * @param Blueprint Image information.
                     */
                    void SetBlueprint(const Blueprint& _blueprint);

                    /**
                     * 判断参数 Blueprint 是否已赋值
                     * @return Blueprint 是否已赋值
                     */
                    bool BlueprintHasBeenSet() const;

                    /**
                     * 获取Software list.
                     * @return SoftwareSet Software list.
                     */
                    std::vector<Software> GetSoftwareSet() const;

                    /**
                     * 设置Software list.
                     * @param SoftwareSet Software list.
                     */
                    void SetSoftwareSet(const std::vector<Software>& _softwareSet);

                    /**
                     * 判断参数 SoftwareSet 是否已赋值
                     * @return SoftwareSet 是否已赋值
                     */
                    bool SoftwareSetHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Image information.
                     */
                    Blueprint m_blueprint;
                    bool m_blueprintHasBeenSet;

                    /**
                     * Software list.
                     */
                    std::vector<Software> m_softwareSet;
                    bool m_softwareSetHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_BLUEPRINTINSTANCE_H_
