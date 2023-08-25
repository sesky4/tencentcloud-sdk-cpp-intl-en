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

#ifndef TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
#define TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentRequest.h>
#include <tencentcloud/car/v20220110/model/ApplyConcurrentResponse.h>
#include <tencentcloud/car/v20220110/model/CreateSessionRequest.h>
#include <tencentcloud/car/v20220110/model/CreateSessionResponse.h>
#include <tencentcloud/car/v20220110/model/DestroySessionRequest.h>
#include <tencentcloud/car/v20220110/model/DestroySessionResponse.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamRequest.h>
#include <tencentcloud/car/v20220110/model/StartPublishStreamResponse.h>
#include <tencentcloud/car/v20220110/model/StopPublishStreamRequest.h>
#include <tencentcloud/car/v20220110/model/StopPublishStreamResponse.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            class CarClient : public AbstractClient
            {
            public:
                CarClient(const Credential &credential, const std::string &region);
                CarClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ApplyConcurrentResponse> ApplyConcurrentOutcome;
                typedef std::future<ApplyConcurrentOutcome> ApplyConcurrentOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::ApplyConcurrentRequest&, ApplyConcurrentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyConcurrentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSessionResponse> CreateSessionOutcome;
                typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::CreateSessionRequest&, CreateSessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSessionAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroySessionResponse> DestroySessionOutcome;
                typedef std::future<DestroySessionOutcome> DestroySessionOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::DestroySessionRequest&, DestroySessionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroySessionAsyncHandler;
                typedef Outcome<Core::Error, Model::StartPublishStreamResponse> StartPublishStreamOutcome;
                typedef std::future<StartPublishStreamOutcome> StartPublishStreamOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StartPublishStreamRequest&, StartPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StartPublishStreamAsyncHandler;
                typedef Outcome<Core::Error, Model::StopPublishStreamResponse> StopPublishStreamOutcome;
                typedef std::future<StopPublishStreamOutcome> StopPublishStreamOutcomeCallable;
                typedef std::function<void(const CarClient*, const Model::StopPublishStreamRequest&, StopPublishStreamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StopPublishStreamAsyncHandler;



                /**
                 *This API is used to request a concurrency. The timeout period of the API is 20 seconds.
                 * @param req ApplyConcurrentRequest
                 * @return ApplyConcurrentOutcome
                 */
                ApplyConcurrentOutcome ApplyConcurrent(const Model::ApplyConcurrentRequest &request);
                void ApplyConcurrentAsync(const Model::ApplyConcurrentRequest& request, const ApplyConcurrentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyConcurrentOutcomeCallable ApplyConcurrentCallable(const Model::ApplyConcurrentRequest& request);

                /**
                 *This API is used to create a session. The timeout period of the API is 5 seconds.
                 * @param req CreateSessionRequest
                 * @return CreateSessionOutcome
                 */
                CreateSessionOutcome CreateSession(const Model::CreateSessionRequest &request);
                void CreateSessionAsync(const Model::CreateSessionRequest& request, const CreateSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSessionOutcomeCallable CreateSessionCallable(const Model::CreateSessionRequest& request);

                /**
                 *This API is used to terminate a session.
                 * @param req DestroySessionRequest
                 * @return DestroySessionOutcome
                 */
                DestroySessionOutcome DestroySession(const Model::DestroySessionRequest &request);
                void DestroySessionAsync(const Model::DestroySessionRequest& request, const DestroySessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroySessionOutcomeCallable DestroySessionCallable(const Model::DestroySessionRequest& request);

                /**
                 *This API is used to start stream push.
                 * @param req StartPublishStreamRequest
                 * @return StartPublishStreamOutcome
                 */
                StartPublishStreamOutcome StartPublishStream(const Model::StartPublishStreamRequest &request);
                void StartPublishStreamAsync(const Model::StartPublishStreamRequest& request, const StartPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StartPublishStreamOutcomeCallable StartPublishStreamCallable(const Model::StartPublishStreamRequest& request);

                /**
                 *This API is used to stop stream push.
                 * @param req StopPublishStreamRequest
                 * @return StopPublishStreamOutcome
                 */
                StopPublishStreamOutcome StopPublishStream(const Model::StopPublishStreamRequest &request);
                void StopPublishStreamAsync(const Model::StopPublishStreamRequest& request, const StopPublishStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StopPublishStreamOutcomeCallable StopPublishStreamCallable(const Model::StopPublishStreamRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_CARCLIENT_H_
