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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_PRIVATEDNSCLIENT_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_PRIVATEDNSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/privatedns/v20201028/model/CreatePrivateDNSAccountRequest.h>
#include <tencentcloud/privatedns/v20201028/model/CreatePrivateDNSAccountResponse.h>
#include <tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRequest.h>
#include <tencentcloud/privatedns/v20201028/model/CreatePrivateZoneResponse.h>
#include <tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRecordRequest.h>
#include <tencentcloud/privatedns/v20201028/model/CreatePrivateZoneRecordResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DeletePrivateDNSAccountRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DeletePrivateDNSAccountResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DeletePrivateZoneResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRecordRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DeletePrivateZoneRecordResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeAccountVpcListRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeAccountVpcListResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeAuditLogRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeAuditLogResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeDashboardRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeDashboardResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateDNSAccountListRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateDNSAccountListResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneListRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneListResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneRecordListRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneRecordListResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneServiceRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribePrivateZoneServiceResponse.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeRequestDataRequest.h>
#include <tencentcloud/privatedns/v20201028/model/DescribeRequestDataResponse.h>
#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRequest.h>
#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneResponse.h>
#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRecordRequest.h>
#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRecordResponse.h>
#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneVpcRequest.h>
#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneVpcResponse.h>
#include <tencentcloud/privatedns/v20201028/model/SubscribePrivateZoneServiceRequest.h>
#include <tencentcloud/privatedns/v20201028/model/SubscribePrivateZoneServiceResponse.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            class PrivatednsClient : public AbstractClient
            {
            public:
                PrivatednsClient(const Credential &credential, const std::string &region);
                PrivatednsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreatePrivateDNSAccountResponse> CreatePrivateDNSAccountOutcome;
                typedef std::future<CreatePrivateDNSAccountOutcome> CreatePrivateDNSAccountOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::CreatePrivateDNSAccountRequest&, CreatePrivateDNSAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateDNSAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateZoneResponse> CreatePrivateZoneOutcome;
                typedef std::future<CreatePrivateZoneOutcome> CreatePrivateZoneOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::CreatePrivateZoneRequest&, CreatePrivateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivateZoneRecordResponse> CreatePrivateZoneRecordOutcome;
                typedef std::future<CreatePrivateZoneRecordOutcome> CreatePrivateZoneRecordOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::CreatePrivateZoneRecordRequest&, CreatePrivateZoneRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivateZoneRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateDNSAccountResponse> DeletePrivateDNSAccountOutcome;
                typedef std::future<DeletePrivateDNSAccountOutcome> DeletePrivateDNSAccountOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DeletePrivateDNSAccountRequest&, DeletePrivateDNSAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateDNSAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateZoneResponse> DeletePrivateZoneOutcome;
                typedef std::future<DeletePrivateZoneOutcome> DeletePrivateZoneOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DeletePrivateZoneRequest&, DeletePrivateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePrivateZoneRecordResponse> DeletePrivateZoneRecordOutcome;
                typedef std::future<DeletePrivateZoneRecordOutcome> DeletePrivateZoneRecordOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DeletePrivateZoneRecordRequest&, DeletePrivateZoneRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePrivateZoneRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountVpcListResponse> DescribeAccountVpcListOutcome;
                typedef std::future<DescribeAccountVpcListOutcome> DescribeAccountVpcListOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribeAccountVpcListRequest&, DescribeAccountVpcListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountVpcListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditLogResponse> DescribeAuditLogOutcome;
                typedef std::future<DescribeAuditLogOutcome> DescribeAuditLogOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribeAuditLogRequest&, DescribeAuditLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditLogAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDashboardResponse> DescribeDashboardOutcome;
                typedef std::future<DescribeDashboardOutcome> DescribeDashboardOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribeDashboardRequest&, DescribeDashboardOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDashboardAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateDNSAccountListResponse> DescribePrivateDNSAccountListOutcome;
                typedef std::future<DescribePrivateDNSAccountListOutcome> DescribePrivateDNSAccountListOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribePrivateDNSAccountListRequest&, DescribePrivateDNSAccountListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateDNSAccountListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateZoneResponse> DescribePrivateZoneOutcome;
                typedef std::future<DescribePrivateZoneOutcome> DescribePrivateZoneOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribePrivateZoneRequest&, DescribePrivateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateZoneListResponse> DescribePrivateZoneListOutcome;
                typedef std::future<DescribePrivateZoneListOutcome> DescribePrivateZoneListOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribePrivateZoneListRequest&, DescribePrivateZoneListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateZoneListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateZoneRecordListResponse> DescribePrivateZoneRecordListOutcome;
                typedef std::future<DescribePrivateZoneRecordListOutcome> DescribePrivateZoneRecordListOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribePrivateZoneRecordListRequest&, DescribePrivateZoneRecordListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateZoneRecordListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrivateZoneServiceResponse> DescribePrivateZoneServiceOutcome;
                typedef std::future<DescribePrivateZoneServiceOutcome> DescribePrivateZoneServiceOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribePrivateZoneServiceRequest&, DescribePrivateZoneServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrivateZoneServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRequestDataResponse> DescribeRequestDataOutcome;
                typedef std::future<DescribeRequestDataOutcome> DescribeRequestDataOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::DescribeRequestDataRequest&, DescribeRequestDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRequestDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateZoneResponse> ModifyPrivateZoneOutcome;
                typedef std::future<ModifyPrivateZoneOutcome> ModifyPrivateZoneOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::ModifyPrivateZoneRequest&, ModifyPrivateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateZoneRecordResponse> ModifyPrivateZoneRecordOutcome;
                typedef std::future<ModifyPrivateZoneRecordOutcome> ModifyPrivateZoneRecordOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::ModifyPrivateZoneRecordRequest&, ModifyPrivateZoneRecordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateZoneRecordAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPrivateZoneVpcResponse> ModifyPrivateZoneVpcOutcome;
                typedef std::future<ModifyPrivateZoneVpcOutcome> ModifyPrivateZoneVpcOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::ModifyPrivateZoneVpcRequest&, ModifyPrivateZoneVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPrivateZoneVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::SubscribePrivateZoneServiceResponse> SubscribePrivateZoneServiceOutcome;
                typedef std::future<SubscribePrivateZoneServiceOutcome> SubscribePrivateZoneServiceOutcomeCallable;
                typedef std::function<void(const PrivatednsClient*, const Model::SubscribePrivateZoneServiceRequest&, SubscribePrivateZoneServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubscribePrivateZoneServiceAsyncHandler;



                /**
                 *This API is used to create a Private DNS account.
                 * @param req CreatePrivateDNSAccountRequest
                 * @return CreatePrivateDNSAccountOutcome
                 */
                CreatePrivateDNSAccountOutcome CreatePrivateDNSAccount(const Model::CreatePrivateDNSAccountRequest &request);
                void CreatePrivateDNSAccountAsync(const Model::CreatePrivateDNSAccountRequest& request, const CreatePrivateDNSAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateDNSAccountOutcomeCallable CreatePrivateDNSAccountCallable(const Model::CreatePrivateDNSAccountRequest& request);

                /**
                 *This API is used to create a private domain.
                 * @param req CreatePrivateZoneRequest
                 * @return CreatePrivateZoneOutcome
                 */
                CreatePrivateZoneOutcome CreatePrivateZone(const Model::CreatePrivateZoneRequest &request);
                void CreatePrivateZoneAsync(const Model::CreatePrivateZoneRequest& request, const CreatePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateZoneOutcomeCallable CreatePrivateZoneCallable(const Model::CreatePrivateZoneRequest& request);

                /**
                 *This API is used to add a DNS record for a private domain.
                 * @param req CreatePrivateZoneRecordRequest
                 * @return CreatePrivateZoneRecordOutcome
                 */
                CreatePrivateZoneRecordOutcome CreatePrivateZoneRecord(const Model::CreatePrivateZoneRecordRequest &request);
                void CreatePrivateZoneRecordAsync(const Model::CreatePrivateZoneRecordRequest& request, const CreatePrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivateZoneRecordOutcomeCallable CreatePrivateZoneRecordCallable(const Model::CreatePrivateZoneRecordRequest& request);

                /**
                 *This API is used to delete a Private DNS account.
                 * @param req DeletePrivateDNSAccountRequest
                 * @return DeletePrivateDNSAccountOutcome
                 */
                DeletePrivateDNSAccountOutcome DeletePrivateDNSAccount(const Model::DeletePrivateDNSAccountRequest &request);
                void DeletePrivateDNSAccountAsync(const Model::DeletePrivateDNSAccountRequest& request, const DeletePrivateDNSAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateDNSAccountOutcomeCallable DeletePrivateDNSAccountCallable(const Model::DeletePrivateDNSAccountRequest& request);

                /**
                 *This API is used to delete a private domain and stop DNS.
                 * @param req DeletePrivateZoneRequest
                 * @return DeletePrivateZoneOutcome
                 */
                DeletePrivateZoneOutcome DeletePrivateZone(const Model::DeletePrivateZoneRequest &request);
                void DeletePrivateZoneAsync(const Model::DeletePrivateZoneRequest& request, const DeletePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateZoneOutcomeCallable DeletePrivateZoneCallable(const Model::DeletePrivateZoneRequest& request);

                /**
                 *This API is used to delete a DNS record for a private domain.
                 * @param req DeletePrivateZoneRecordRequest
                 * @return DeletePrivateZoneRecordOutcome
                 */
                DeletePrivateZoneRecordOutcome DeletePrivateZoneRecord(const Model::DeletePrivateZoneRecordRequest &request);
                void DeletePrivateZoneRecordAsync(const Model::DeletePrivateZoneRecordRequest& request, const DeletePrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePrivateZoneRecordOutcomeCallable DeletePrivateZoneRecordCallable(const Model::DeletePrivateZoneRecordRequest& request);

                /**
                 *This API is used to get the VPC list of a Private DNS account.
                 * @param req DescribeAccountVpcListRequest
                 * @return DescribeAccountVpcListOutcome
                 */
                DescribeAccountVpcListOutcome DescribeAccountVpcList(const Model::DescribeAccountVpcListRequest &request);
                void DescribeAccountVpcListAsync(const Model::DescribeAccountVpcListRequest& request, const DescribeAccountVpcListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountVpcListOutcomeCallable DescribeAccountVpcListCallable(const Model::DescribeAccountVpcListRequest& request);

                /**
                 *This API is used to get the list of operation logs.
                 * @param req DescribeAuditLogRequest
                 * @return DescribeAuditLogOutcome
                 */
                DescribeAuditLogOutcome DescribeAuditLog(const Model::DescribeAuditLogRequest &request);
                void DescribeAuditLogAsync(const Model::DescribeAuditLogRequest& request, const DescribeAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditLogOutcomeCallable DescribeAuditLogCallable(const Model::DescribeAuditLogRequest& request);

                /**
                 *This API is used to get the overview of private DNS records.
                 * @param req DescribeDashboardRequest
                 * @return DescribeDashboardOutcome
                 */
                DescribeDashboardOutcome DescribeDashboard(const Model::DescribeDashboardRequest &request);
                void DescribeDashboardAsync(const Model::DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDashboardOutcomeCallable DescribeDashboardCallable(const Model::DescribeDashboardRequest& request);

                /**
                 *This API is used to get the list of Private DNS accounts.
                 * @param req DescribePrivateDNSAccountListRequest
                 * @return DescribePrivateDNSAccountListOutcome
                 */
                DescribePrivateDNSAccountListOutcome DescribePrivateDNSAccountList(const Model::DescribePrivateDNSAccountListRequest &request);
                void DescribePrivateDNSAccountListAsync(const Model::DescribePrivateDNSAccountListRequest& request, const DescribePrivateDNSAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateDNSAccountListOutcomeCallable DescribePrivateDNSAccountListCallable(const Model::DescribePrivateDNSAccountListRequest& request);

                /**
                 *This API is used to get the private domain information.
                 * @param req DescribePrivateZoneRequest
                 * @return DescribePrivateZoneOutcome
                 */
                DescribePrivateZoneOutcome DescribePrivateZone(const Model::DescribePrivateZoneRequest &request);
                void DescribePrivateZoneAsync(const Model::DescribePrivateZoneRequest& request, const DescribePrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateZoneOutcomeCallable DescribePrivateZoneCallable(const Model::DescribePrivateZoneRequest& request);

                /**
                 *This API is used to get the list of private domains.
                 * @param req DescribePrivateZoneListRequest
                 * @return DescribePrivateZoneListOutcome
                 */
                DescribePrivateZoneListOutcome DescribePrivateZoneList(const Model::DescribePrivateZoneListRequest &request);
                void DescribePrivateZoneListAsync(const Model::DescribePrivateZoneListRequest& request, const DescribePrivateZoneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateZoneListOutcomeCallable DescribePrivateZoneListCallable(const Model::DescribePrivateZoneListRequest& request);

                /**
                 *This API is used to get the list of records for a private domain.
                 * @param req DescribePrivateZoneRecordListRequest
                 * @return DescribePrivateZoneRecordListOutcome
                 */
                DescribePrivateZoneRecordListOutcome DescribePrivateZoneRecordList(const Model::DescribePrivateZoneRecordListRequest &request);
                void DescribePrivateZoneRecordListAsync(const Model::DescribePrivateZoneRecordListRequest& request, const DescribePrivateZoneRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateZoneRecordListOutcomeCallable DescribePrivateZoneRecordListCallable(const Model::DescribePrivateZoneRecordListRequest& request);

                /**
                 *This API is used to query the Private DNS activation status.
                 * @param req DescribePrivateZoneServiceRequest
                 * @return DescribePrivateZoneServiceOutcome
                 */
                DescribePrivateZoneServiceOutcome DescribePrivateZoneService(const Model::DescribePrivateZoneServiceRequest &request);
                void DescribePrivateZoneServiceAsync(const Model::DescribePrivateZoneServiceRequest& request, const DescribePrivateZoneServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrivateZoneServiceOutcomeCallable DescribePrivateZoneServiceCallable(const Model::DescribePrivateZoneServiceRequest& request);

                /**
                 *This API is used to get the DNS request volume of a private domain.
                 * @param req DescribeRequestDataRequest
                 * @return DescribeRequestDataOutcome
                 */
                DescribeRequestDataOutcome DescribeRequestData(const Model::DescribeRequestDataRequest &request);
                void DescribeRequestDataAsync(const Model::DescribeRequestDataRequest& request, const DescribeRequestDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRequestDataOutcomeCallable DescribeRequestDataCallable(const Model::DescribeRequestDataRequest& request);

                /**
                 *This API is used to modify a private domain.
                 * @param req ModifyPrivateZoneRequest
                 * @return ModifyPrivateZoneOutcome
                 */
                ModifyPrivateZoneOutcome ModifyPrivateZone(const Model::ModifyPrivateZoneRequest &request);
                void ModifyPrivateZoneAsync(const Model::ModifyPrivateZoneRequest& request, const ModifyPrivateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateZoneOutcomeCallable ModifyPrivateZoneCallable(const Model::ModifyPrivateZoneRequest& request);

                /**
                 *This API is used to modify a DNS record for a private domain.
                 * @param req ModifyPrivateZoneRecordRequest
                 * @return ModifyPrivateZoneRecordOutcome
                 */
                ModifyPrivateZoneRecordOutcome ModifyPrivateZoneRecord(const Model::ModifyPrivateZoneRecordRequest &request);
                void ModifyPrivateZoneRecordAsync(const Model::ModifyPrivateZoneRecordRequest& request, const ModifyPrivateZoneRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateZoneRecordOutcomeCallable ModifyPrivateZoneRecordCallable(const Model::ModifyPrivateZoneRecordRequest& request);

                /**
                 *This API is used to modify the VPC associated with a private domain.
                 * @param req ModifyPrivateZoneVpcRequest
                 * @return ModifyPrivateZoneVpcOutcome
                 */
                ModifyPrivateZoneVpcOutcome ModifyPrivateZoneVpc(const Model::ModifyPrivateZoneVpcRequest &request);
                void ModifyPrivateZoneVpcAsync(const Model::ModifyPrivateZoneVpcRequest& request, const ModifyPrivateZoneVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPrivateZoneVpcOutcomeCallable ModifyPrivateZoneVpcCallable(const Model::ModifyPrivateZoneVpcRequest& request);

                /**
                 *This API is used to activate the Private DNS service.
                 * @param req SubscribePrivateZoneServiceRequest
                 * @return SubscribePrivateZoneServiceOutcome
                 */
                SubscribePrivateZoneServiceOutcome SubscribePrivateZoneService(const Model::SubscribePrivateZoneServiceRequest &request);
                void SubscribePrivateZoneServiceAsync(const Model::SubscribePrivateZoneServiceRequest& request, const SubscribePrivateZoneServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubscribePrivateZoneServiceOutcomeCallable SubscribePrivateZoneServiceCallable(const Model::SubscribePrivateZoneServiceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_PRIVATEDNSCLIENT_H_
