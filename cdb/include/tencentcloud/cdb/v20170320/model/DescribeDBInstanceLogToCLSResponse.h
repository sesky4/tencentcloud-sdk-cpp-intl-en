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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCELOGTOCLSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCELOGTOCLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/LogToCLSConfig.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceLogToCLS response structure.
                */
                class DescribeDBInstanceLogToCLSResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceLogToCLSResponse();
                    ~DescribeDBInstanceLogToCLSResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Configurations of sending error logs to CLS.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return ErrorLog Configurations of sending error logs to CLS.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    LogToCLSConfig GetErrorLog() const;

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取Configurations of sending slow logs to CLS.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * @return SlowLog Configurations of sending slow logs to CLS.
Note: The return value may be null, indicating that no valid data can be obtained.
                     * 
                     */
                    LogToCLSConfig GetSlowLog() const;

                    /**
                     * 判断参数 SlowLog 是否已赋值
                     * @return SlowLog 是否已赋值
                     * 
                     */
                    bool SlowLogHasBeenSet() const;

                private:

                    /**
                     * Configurations of sending error logs to CLS.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    LogToCLSConfig m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * Configurations of sending slow logs to CLS.
Note: The return value may be null, indicating that no valid data can be obtained.
                     */
                    LogToCLSConfig m_slowLog;
                    bool m_slowLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDBINSTANCELOGTOCLSRESPONSE_H_
