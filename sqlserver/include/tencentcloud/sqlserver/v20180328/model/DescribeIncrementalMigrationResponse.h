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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINCREMENTALMIGRATIONRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINCREMENTALMIGRATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/Migration.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeIncrementalMigration response structure.
                */
                class DescribeIncrementalMigrationResponse : public AbstractModel
                {
                public:
                    DescribeIncrementalMigrationResponse();
                    ~DescribeIncrementalMigrationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of import tasks
                     * @return TotalCount Total number of import tasks
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Incremental import task set
                     * @return IncrementalMigrationSet Incremental import task set
                     */
                    std::vector<Migration> GetIncrementalMigrationSet() const;

                    /**
                     * 判断参数 IncrementalMigrationSet 是否已赋值
                     * @return IncrementalMigrationSet 是否已赋值
                     */
                    bool IncrementalMigrationSetHasBeenSet() const;

                private:

                    /**
                     * Total number of import tasks
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Incremental import task set
                     */
                    std::vector<Migration> m_incrementalMigrationSet;
                    bool m_incrementalMigrationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINCREMENTALMIGRATIONRESPONSE_H_
