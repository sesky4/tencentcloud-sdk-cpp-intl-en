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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * CreateExport request structure.
                */
                class CreateExportRequest : public AbstractModel
                {
                public:
                    CreateExportRequest();
                    ~CreateExportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic
                     * @return TopicId Log topic
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic
                     * @param TopicId Log topic
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Log export search statement
                     * @return Query Log export search statement
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置Log export search statement
                     * @param Query Log export search statement
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取Number of logs to be exported. Maximum value: 10 million
                     * @return Count Number of logs to be exported. Maximum value: 10 million
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置Number of logs to be exported. Maximum value: 10 million
                     * @param Count Number of logs to be exported. Maximum value: 10 million
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Start time of the log to be exported, which is a timestamp in milliseconds
                     * @return From Start time of the log to be exported, which is a timestamp in milliseconds
                     */
                    int64_t GetFrom() const;

                    /**
                     * 设置Start time of the log to be exported, which is a timestamp in milliseconds
                     * @param From Start time of the log to be exported, which is a timestamp in milliseconds
                     */
                    void SetFrom(const int64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取End time of the log to be exported, which is a timestamp in milliseconds
                     * @return To End time of the log to be exported, which is a timestamp in milliseconds
                     */
                    int64_t GetTo() const;

                    /**
                     * 设置End time of the log to be exported, which is a timestamp in milliseconds
                     * @param To End time of the log to be exported, which is a timestamp in milliseconds
                     */
                    void SetTo(const int64_t& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * @return Order Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     * @param Order Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     * @return Format Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     * @param Format Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * Log topic
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Log export search statement
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * Number of logs to be exported. Maximum value: 10 million
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Start time of the log to be exported, which is a timestamp in milliseconds
                     */
                    int64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * End time of the log to be exported, which is a timestamp in milliseconds
                     */
                    int64_t m_to;
                    bool m_toHasBeenSet;

                    /**
                     * Exported log sorting order by time. Valid values: `asc`: ascending; `desc`: descending. Default value: `desc`
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Exported log data format. Valid values: `json`, `csv`. Default value: `json`
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATEEXPORTREQUEST_H_
