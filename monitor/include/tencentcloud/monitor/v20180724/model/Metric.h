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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/MetricConfig.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * Metric, which can be used to set alarms and query data
                */
                class Metric : public AbstractModel
                {
                public:
                    Metric();
                    ~Metric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Alarm policy type
                     * @return Namespace Alarm policy type
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Alarm policy type
                     * @param Namespace Alarm policy type
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Metric name
                     * @return MetricName Metric name
                     */
                    std::string GetMetricName() const;

                    /**
                     * 设置Metric name
                     * @param MetricName Metric name
                     */
                    void SetMetricName(const std::string& _metricName);

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取Metric display name
                     * @return Description Metric display name
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Metric display name
                     * @param Description Metric display name
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Minimum value
                     * @return Min Minimum value
                     */
                    double GetMin() const;

                    /**
                     * 设置Minimum value
                     * @param Min Minimum value
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取Maximum value
                     * @return Max Maximum value
                     */
                    double GetMax() const;

                    /**
                     * 设置Maximum value
                     * @param Max Maximum value
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取Dimension list
                     * @return Dimensions Dimension list
                     */
                    std::vector<std::string> GetDimensions() const;

                    /**
                     * 设置Dimension list
                     * @param Dimensions Dimension list
                     */
                    void SetDimensions(const std::vector<std::string>& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取Unit
                     * @return Unit Unit
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置Unit
                     * @param Unit Unit
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MetricConfig Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MetricConfig GetMetricConfig() const;

                    /**
                     * 设置Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MetricConfig Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMetricConfig(const MetricConfig& _metricConfig);

                    /**
                     * 判断参数 MetricConfig 是否已赋值
                     * @return MetricConfig 是否已赋值
                     */
                    bool MetricConfigHasBeenSet() const;

                private:

                    /**
                     * Alarm policy type
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Metric name
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * Metric display name
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Minimum value
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * Maximum value
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * Dimension list
                     */
                    std::vector<std::string> m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * Unit
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * Metric configuration
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MetricConfig m_metricConfig;
                    bool m_metricConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_METRIC_H_