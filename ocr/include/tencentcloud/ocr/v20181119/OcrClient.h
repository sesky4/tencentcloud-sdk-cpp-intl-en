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

#ifndef TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
#define TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/BankCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralAccurateOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/GeneralBasicOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/HKIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDCardOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/MLIDPassportOCRResponse.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRRequest.h>
#include <tencentcloud/ocr/v20181119/model/TableOCRResponse.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            class OcrClient : public AbstractClient
            {
            public:
                OcrClient(const Credential &credential, const std::string &region);
                OcrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BankCardOCRResponse> BankCardOCROutcome;
                typedef std::future<BankCardOCROutcome> BankCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::BankCardOCRRequest&, BankCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> BankCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralAccurateOCRResponse> GeneralAccurateOCROutcome;
                typedef std::future<GeneralAccurateOCROutcome> GeneralAccurateOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralAccurateOCRRequest&, GeneralAccurateOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralAccurateOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::GeneralBasicOCRResponse> GeneralBasicOCROutcome;
                typedef std::future<GeneralBasicOCROutcome> GeneralBasicOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::GeneralBasicOCRRequest&, GeneralBasicOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> GeneralBasicOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::HKIDCardOCRResponse> HKIDCardOCROutcome;
                typedef std::future<HKIDCardOCROutcome> HKIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::HKIDCardOCRRequest&, HKIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> HKIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDCardOCRResponse> MLIDCardOCROutcome;
                typedef std::future<MLIDCardOCROutcome> MLIDCardOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDCardOCRRequest&, MLIDCardOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDCardOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::MLIDPassportOCRResponse> MLIDPassportOCROutcome;
                typedef std::future<MLIDPassportOCROutcome> MLIDPassportOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::MLIDPassportOCRRequest&, MLIDPassportOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> MLIDPassportOCRAsyncHandler;
                typedef Outcome<Core::Error, Model::TableOCRResponse> TableOCROutcome;
                typedef std::future<TableOCROutcome> TableOCROutcomeCallable;
                typedef std::function<void(const OcrClient*, const Model::TableOCRRequest&, TableOCROutcome, const std::shared_ptr<const AsyncCallerContext>&)> TableOCRAsyncHandler;



                /**
                 *This API is used to detect and recognize key fields such as the card number, bank information, and expiration date on mainstream bank cards in Mainland China.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req BankCardOCRRequest
                 * @return BankCardOCROutcome
                 */
                BankCardOCROutcome BankCardOCR(const Model::BankCardOCRRequest &request);
                void BankCardOCRAsync(const Model::BankCardOCRRequest& request, const BankCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BankCardOCROutcomeCallable BankCardOCRCallable(const Model::BankCardOCRRequest& request);

                /**
                 *This API is used to detect and recognize characters in an image. It can recognize Chinese, English, Chinese-English, digits, and special symbols and return the text box positions and characters.

It is suitable for scenarios with a lot of characters in complex layouts and requiring high recognition accuracy, such as examination papers, online images, signboards, and legal documents.

Strengths: compared with general print recognition, it provides higher-precision character recognition services. Its accuracy and recall rate are higher in difficult scenarios such as a large number of characters, long strings of digits, small characters, blurry characters, and tilted text.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req GeneralAccurateOCRRequest
                 * @return GeneralAccurateOCROutcome
                 */
                GeneralAccurateOCROutcome GeneralAccurateOCR(const Model::GeneralAccurateOCRRequest &request);
                void GeneralAccurateOCRAsync(const Model::GeneralAccurateOCRRequest& request, const GeneralAccurateOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralAccurateOCROutcomeCallable GeneralAccurateOCRCallable(const Model::GeneralAccurateOCRRequest& request);

                /**
                 *This API is used to detect and recognize characters in an image in the following 20 languages: Chinese, English, Japanese, Korean, Spanish, French, German, Portuguese, Vietnamese, Malay, Russian, Italian, Dutch, Swedish, Finnish, Danish, Norwegian, Hungarian, Thai, and Arabic. Mixed characters in English and each supported language can be recognized together.

It can recognize printed text in paper documents, online images, ads, signboards, menus, video titles, profile photos, etc.

Strengths: it can automatically recognize the text language, return the text box coordinate information, and automatically rotate tilted text to the upright direction.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req GeneralBasicOCRRequest
                 * @return GeneralBasicOCROutcome
                 */
                GeneralBasicOCROutcome GeneralBasicOCR(const Model::GeneralBasicOCRRequest &request);
                void GeneralBasicOCRAsync(const Model::GeneralBasicOCRRequest& request, const GeneralBasicOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GeneralBasicOCROutcomeCallable GeneralBasicOCRCallable(const Model::GeneralBasicOCRRequest& request);

                /**
                 *This API is used to recognize key fields on the photo side of a Hong Kong (China) identity card, including name in Chinese, name in English, telecode for name, date of birth, gender, document symbol, date of the first issue, date of the last receipt, identity card number, and permanent residency attribute. It can check for card authenticity and crop the identity photo.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).

                 * @param req HKIDCardOCRRequest
                 * @return HKIDCardOCROutcome
                 */
                HKIDCardOCROutcome HKIDCardOCR(const Model::HKIDCardOCRRequest &request);
                void HKIDCardOCRAsync(const Model::HKIDCardOCRRequest& request, const HKIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                HKIDCardOCROutcomeCallable HKIDCardOCRCallable(const Model::HKIDCardOCRRequest& request);

                /**
                 *This API is used to recognize a Malaysian identity card. Recognizable fields include identity card number, name, gender, and address. It has the features of cropping identity photos and alarming for photographed or photocopied documents.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req MLIDCardOCRRequest
                 * @return MLIDCardOCROutcome
                 */
                MLIDCardOCROutcome MLIDCardOCR(const Model::MLIDCardOCRRequest &request);
                void MLIDCardOCRAsync(const Model::MLIDCardOCRRequest& request, const MLIDCardOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDCardOCROutcomeCallable MLIDCardOCRCallable(const Model::MLIDCardOCRRequest& request);

                /**
                 *This API is used to recognize a passport issued in Hong Kong/Macao/Taiwan (China) or other countries/regions. Recognizable fields include passport ID, name, date of birth, gender, expiration date, issuing country/region, and nationality. It has the features of cropping identity photos and alarming for photographed or photocopied documents.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req MLIDPassportOCRRequest
                 * @return MLIDPassportOCROutcome
                 */
                MLIDPassportOCROutcome MLIDPassportOCR(const Model::MLIDPassportOCRRequest &request);
                void MLIDPassportOCRAsync(const Model::MLIDPassportOCRRequest& request, const MLIDPassportOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MLIDPassportOCROutcomeCallable MLIDPassportOCRCallable(const Model::MLIDPassportOCRRequest& request);

                /**
                 *This API is used to detect and recognize Chinese and English forms in images. It can return the text content of each cell and save the recognition result as Excel.

This API is not fully available for the time being. For more information, please contact your [Tencent Cloud sales rep](https://intl.cloud.tencent.com/contact-sales).
                 * @param req TableOCRRequest
                 * @return TableOCROutcome
                 */
                TableOCROutcome TableOCR(const Model::TableOCRRequest &request);
                void TableOCRAsync(const Model::TableOCRRequest& request, const TableOCRAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TableOCROutcomeCallable TableOCRCallable(const Model::TableOCRRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_OCRCLIENT_H_
