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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/DatabaseTable.h>
#include <tencentcloud/dcdb/v20180411/model/DatabaseView.h>
#include <tencentcloud/dcdb/v20180411/model/DatabaseProcedure.h>
#include <tencentcloud/dcdb/v20180411/model/DatabaseFunction.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDatabaseObjects response structure.
                */
                class DescribeDatabaseObjectsResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseObjectsResponse();
                    ~DescribeDatabaseObjectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Passed through from the input parameters.
                     * @return InstanceId Passed through from the input parameters.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Database name.
                     * @return DbName Database name.
                     */
                    std::string GetDbName() const;

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取List of tables.
                     * @return Tables List of tables.
                     */
                    std::vector<DatabaseTable> GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取List of views.
                     * @return Views List of views.
                     */
                    std::vector<DatabaseView> GetViews() const;

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取List of stored procedures.
                     * @return Procs List of stored procedures.
                     */
                    std::vector<DatabaseProcedure> GetProcs() const;

                    /**
                     * 判断参数 Procs 是否已赋值
                     * @return Procs 是否已赋值
                     */
                    bool ProcsHasBeenSet() const;

                    /**
                     * 获取List of functions.
                     * @return Funcs List of functions.
                     */
                    std::vector<DatabaseFunction> GetFuncs() const;

                    /**
                     * 判断参数 Funcs 是否已赋值
                     * @return Funcs 是否已赋值
                     */
                    bool FuncsHasBeenSet() const;

                private:

                    /**
                     * Passed through from the input parameters.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Database name.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * List of tables.
                     */
                    std::vector<DatabaseTable> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * List of views.
                     */
                    std::vector<DatabaseView> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * List of stored procedures.
                     */
                    std::vector<DatabaseProcedure> m_procs;
                    bool m_procsHasBeenSet;

                    /**
                     * List of functions.
                     */
                    std::vector<DatabaseFunction> m_funcs;
                    bool m_funcsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDATABASEOBJECTSRESPONSE_H_
