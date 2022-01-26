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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Callback address
                */
                class WebCallback : public AbstractModel
                {
                public:
                    WebCallback();
                    ~WebCallback() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Callback address
                     * @return Url Callback address
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置Callback address
                     * @param Url Callback address
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Callback type. Valid values:
<br><li> WeCom
<br><li> Http
                     * @return CallbackType Callback type. Valid values:
<br><li> WeCom
<br><li> Http
                     */
                    std::string GetCallbackType() const;

                    /**
                     * 设置Callback type. Valid values:
<br><li> WeCom
<br><li> Http
                     * @param CallbackType Callback type. Valid values:
<br><li> WeCom
<br><li> Http
                     */
                    void SetCallbackType(const std::string& _callbackType);

                    /**
                     * 判断参数 CallbackType 是否已赋值
                     * @return CallbackType 是否已赋值
                     */
                    bool CallbackTypeHasBeenSet() const;

                    /**
                     * 获取Callback method. Valid values:
<br><li> POST
<br><li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Method Callback method. Valid values:
<br><li> POST
<br><li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Callback method. Valid values:
<br><li> POST
<br><li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Method Callback method. Valid values:
<br><li> POST
<br><li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Request header
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Headers Request header
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetHeaders() const;

                    /**
                     * 设置Request header
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Headers Request header
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetHeaders(const std::vector<std::string>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取Request content, which is required when `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Body Request content, which is required when `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string GetBody() const;

                    /**
                     * 设置Request content, which is required when `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param Body Request content, which is required when `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    void SetBody(const std::string& _body);

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取Number
                     * @return Index Number
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置Number
                     * @param Index Number
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * Callback address
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Callback type. Valid values:
<br><li> WeCom
<br><li> Http
                     */
                    std::string m_callbackType;
                    bool m_callbackTypeHasBeenSet;

                    /**
                     * Callback method. Valid values:
<br><li> POST
<br><li> PUT
Default value: `POST`. This parameter is required if `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Request header
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * Request content, which is required when `CallbackType` is `Http`.
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * Number
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_WEBCALLBACK_H_
