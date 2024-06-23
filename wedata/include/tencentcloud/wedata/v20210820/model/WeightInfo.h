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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_WEIGHTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_WEIGHTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Weight Information
                */
                class WeightInfo : public AbstractModel
                {
                public:
                    WeightInfo();
                    ~WeightInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Weight
                     * @return Weight Weight
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置Weight
                     * @param _weight Weight
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Dimension Type 1:Accuracy, 2:Uniqueness, 3:Integrity, 4:Consistency, 5:Timeliness, 6:Validity
                     * @return QualityDim Dimension Type 1:Accuracy, 2:Uniqueness, 3:Integrity, 4:Consistency, 5:Timeliness, 6:Validity
                     * 
                     */
                    int64_t GetQualityDim() const;

                    /**
                     * 设置Dimension Type 1:Accuracy, 2:Uniqueness, 3:Integrity, 4:Consistency, 5:Timeliness, 6:Validity
                     * @param _qualityDim Dimension Type 1:Accuracy, 2:Uniqueness, 3:Integrity, 4:Consistency, 5:Timeliness, 6:Validity
                     * 
                     */
                    void SetQualityDim(const int64_t& _qualityDim);

                    /**
                     * 判断参数 QualityDim 是否已赋值
                     * @return QualityDim 是否已赋值
                     * 
                     */
                    bool QualityDimHasBeenSet() const;

                private:

                    /**
                     * Weight
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Dimension Type 1:Accuracy, 2:Uniqueness, 3:Integrity, 4:Consistency, 5:Timeliness, 6:Validity
                     */
                    int64_t m_qualityDim;
                    bool m_qualityDimHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_WEIGHTINFO_H_
