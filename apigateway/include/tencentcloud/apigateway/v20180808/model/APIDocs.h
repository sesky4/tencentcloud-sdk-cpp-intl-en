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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/APIDoc.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * API document list
                */
                class APIDocs : public AbstractModel
                {
                public:
                    APIDocs();
                    ~APIDocs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Number of API documents
                     * @return TotalCount Number of API documents
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置Number of API documents
                     * @param TotalCount Number of API documents
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Basic information of API document
                     * @return APIDocSet Basic information of API document
                     */
                    std::vector<APIDoc> GetAPIDocSet() const;

                    /**
                     * 设置Basic information of API document
                     * @param APIDocSet Basic information of API document
                     */
                    void SetAPIDocSet(const std::vector<APIDoc>& _aPIDocSet);

                    /**
                     * 判断参数 APIDocSet 是否已赋值
                     * @return APIDocSet 是否已赋值
                     */
                    bool APIDocSetHasBeenSet() const;

                private:

                    /**
                     * Number of API documents
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Basic information of API document
                     */
                    std::vector<APIDoc> m_aPIDocSet;
                    bool m_aPIDocSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_APIDOCS_H_
