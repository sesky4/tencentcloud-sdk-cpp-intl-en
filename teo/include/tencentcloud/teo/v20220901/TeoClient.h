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

#ifndef TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
#define TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/teo/v20220901/model/BindSecurityTemplateToEntityRequest.h>
#include <tencentcloud/teo/v20220901/model/BindSecurityTemplateToEntityResponse.h>
#include <tencentcloud/teo/v20220901/model/BindSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/BindSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/BindZoneToPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/BindZoneToPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/CheckCnameStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/CheckCnameStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateAccelerationDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateAccelerationDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCLSIndexRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCLSIndexResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateConfigGroupVersionRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateConfigGroupVersionResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateCustomizeErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateCustomizeErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePlanForZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePrefetchTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreatePurgeTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateRealtimeLogDeliveryTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/CreateSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/CreateZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteAccelerationDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteAccelerationDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteCustomErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteCustomErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRealtimeLogDeliveryTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteSharedCNAMERequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteSharedCNAMEResponse.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/DeleteZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/DeployConfigGroupVersionRequest.h>
#include <tencentcloud/teo/v20220901/model/DeployConfigGroupVersionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAccelerationDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAccelerationDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAliasDomainsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeApplicationProxiesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeAvailablePlansResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeBillingDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionDetailRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionDetailResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeConfigGroupVersionsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeContentQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeCustomErrorPagesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeCustomErrorPagesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackEventResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDDoSAttackTopDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDefaultCertificatesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeDeployHistoryRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeDeployHistoryResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeEnvironmentsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeEnvironmentsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeHostsSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIPRegionRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIPRegionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeIdentificationsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginProtectionRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOriginProtectionResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeOverviewL7DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePrefetchTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribePurgeTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRealtimeLogDeliveryTasksRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRealtimeLogDeliveryTasksResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeRulesSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupInfoRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityIPGroupInfoResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityTemplateBindingsRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeSecurityTemplateBindingsResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL4DataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL4DataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTimingL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7AnalysisDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7AnalysisDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7CacheDataRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeTopL7CacheDataResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesRequest.h>
#include <tencentcloud/teo/v20220901/model/DescribeZonesResponse.h>
#include <tencentcloud/teo/v20220901/model/DestroyPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/DestroyPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL4LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsRequest.h>
#include <tencentcloud/teo/v20220901/model/DownloadL7LogsResponse.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/IdentifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/IncreasePlanQuotaRequest.h>
#include <tencentcloud/teo/v20220901/model/IncreasePlanQuotaResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainStatusesRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAccelerationDomainStatusesResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyRuleStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyApplicationProxyStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyCustomErrorPageRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyCustomErrorPageResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyHostsCertificateResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyRulesStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyL4ProxyStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyOriginGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRealtimeLogDeliveryTaskRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRealtimeLogDeliveryTaskResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyRuleResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityIPGroupRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityIPGroupResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifySecurityPolicyResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneSettingResponse.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusRequest.h>
#include <tencentcloud/teo/v20220901/model/ModifyZoneStatusResponse.h>
#include <tencentcloud/teo/v20220901/model/RenewPlanRequest.h>
#include <tencentcloud/teo/v20220901/model/RenewPlanResponse.h>
#include <tencentcloud/teo/v20220901/model/UpgradePlanRequest.h>
#include <tencentcloud/teo/v20220901/model/UpgradePlanResponse.h>
#include <tencentcloud/teo/v20220901/model/VerifyOwnershipRequest.h>
#include <tencentcloud/teo/v20220901/model/VerifyOwnershipResponse.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            class TeoClient : public AbstractClient
            {
            public:
                TeoClient(const Credential &credential, const std::string &region);
                TeoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BindSecurityTemplateToEntityResponse> BindSecurityTemplateToEntityOutcome;
                typedef std::future<BindSecurityTemplateToEntityOutcome> BindSecurityTemplateToEntityOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::BindSecurityTemplateToEntityRequest&, BindSecurityTemplateToEntityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSecurityTemplateToEntityAsyncHandler;
                typedef Outcome<Core::Error, Model::BindSharedCNAMEResponse> BindSharedCNAMEOutcome;
                typedef std::future<BindSharedCNAMEOutcome> BindSharedCNAMEOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::BindSharedCNAMERequest&, BindSharedCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindSharedCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::BindZoneToPlanResponse> BindZoneToPlanOutcome;
                typedef std::future<BindZoneToPlanOutcome> BindZoneToPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::BindZoneToPlanRequest&, BindZoneToPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindZoneToPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckCnameStatusResponse> CheckCnameStatusOutcome;
                typedef std::future<CheckCnameStatusOutcome> CheckCnameStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CheckCnameStatusRequest&, CheckCnameStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckCnameStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccelerationDomainResponse> CreateAccelerationDomainOutcome;
                typedef std::future<CreateAccelerationDomainOutcome> CreateAccelerationDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateAccelerationDomainRequest&, CreateAccelerationDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccelerationDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAliasDomainResponse> CreateAliasDomainOutcome;
                typedef std::future<CreateAliasDomainOutcome> CreateAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateAliasDomainRequest&, CreateAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyResponse> CreateApplicationProxyOutcome;
                typedef std::future<CreateApplicationProxyOutcome> CreateApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRequest&, CreateApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateApplicationProxyRuleResponse> CreateApplicationProxyRuleOutcome;
                typedef std::future<CreateApplicationProxyRuleOutcome> CreateApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateApplicationProxyRuleRequest&, CreateApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCLSIndexResponse> CreateCLSIndexOutcome;
                typedef std::future<CreateCLSIndexOutcome> CreateCLSIndexOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCLSIndexRequest&, CreateCLSIndexOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCLSIndexAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateConfigGroupVersionResponse> CreateConfigGroupVersionOutcome;
                typedef std::future<CreateConfigGroupVersionOutcome> CreateConfigGroupVersionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateConfigGroupVersionRequest&, CreateConfigGroupVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateConfigGroupVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomizeErrorPageResponse> CreateCustomizeErrorPageOutcome;
                typedef std::future<CreateCustomizeErrorPageOutcome> CreateCustomizeErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateCustomizeErrorPageRequest&, CreateCustomizeErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomizeErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4ProxyResponse> CreateL4ProxyOutcome;
                typedef std::future<CreateL4ProxyOutcome> CreateL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateL4ProxyRequest&, CreateL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateL4ProxyRulesResponse> CreateL4ProxyRulesOutcome;
                typedef std::future<CreateL4ProxyRulesOutcome> CreateL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateL4ProxyRulesRequest&, CreateL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOriginGroupResponse> CreateOriginGroupOutcome;
                typedef std::future<CreateOriginGroupOutcome> CreateOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateOriginGroupRequest&, CreateOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlanResponse> CreatePlanOutcome;
                typedef std::future<CreatePlanOutcome> CreatePlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePlanRequest&, CreatePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePlanForZoneResponse> CreatePlanForZoneOutcome;
                typedef std::future<CreatePlanForZoneOutcome> CreatePlanForZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePlanForZoneRequest&, CreatePlanForZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePlanForZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrefetchTaskResponse> CreatePrefetchTaskOutcome;
                typedef std::future<CreatePrefetchTaskOutcome> CreatePrefetchTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePrefetchTaskRequest&, CreatePrefetchTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrefetchTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePurgeTaskResponse> CreatePurgeTaskOutcome;
                typedef std::future<CreatePurgeTaskOutcome> CreatePurgeTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreatePurgeTaskRequest&, CreatePurgeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePurgeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRealtimeLogDeliveryTaskResponse> CreateRealtimeLogDeliveryTaskOutcome;
                typedef std::future<CreateRealtimeLogDeliveryTaskOutcome> CreateRealtimeLogDeliveryTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateRealtimeLogDeliveryTaskRequest&, CreateRealtimeLogDeliveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRealtimeLogDeliveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRuleResponse> CreateRuleOutcome;
                typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateRuleRequest&, CreateRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSecurityIPGroupResponse> CreateSecurityIPGroupOutcome;
                typedef std::future<CreateSecurityIPGroupOutcome> CreateSecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateSecurityIPGroupRequest&, CreateSecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSharedCNAMEResponse> CreateSharedCNAMEOutcome;
                typedef std::future<CreateSharedCNAMEOutcome> CreateSharedCNAMEOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateSharedCNAMERequest&, CreateSharedCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSharedCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateZoneResponse> CreateZoneOutcome;
                typedef std::future<CreateZoneOutcome> CreateZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::CreateZoneRequest&, CreateZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccelerationDomainsResponse> DeleteAccelerationDomainsOutcome;
                typedef std::future<DeleteAccelerationDomainsOutcome> DeleteAccelerationDomainsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteAccelerationDomainsRequest&, DeleteAccelerationDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccelerationDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAliasDomainResponse> DeleteAliasDomainOutcome;
                typedef std::future<DeleteAliasDomainOutcome> DeleteAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteAliasDomainRequest&, DeleteAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyResponse> DeleteApplicationProxyOutcome;
                typedef std::future<DeleteApplicationProxyOutcome> DeleteApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRequest&, DeleteApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteApplicationProxyRuleResponse> DeleteApplicationProxyRuleOutcome;
                typedef std::future<DeleteApplicationProxyRuleOutcome> DeleteApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteApplicationProxyRuleRequest&, DeleteApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomErrorPageResponse> DeleteCustomErrorPageOutcome;
                typedef std::future<DeleteCustomErrorPageOutcome> DeleteCustomErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteCustomErrorPageRequest&, DeleteCustomErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL4ProxyResponse> DeleteL4ProxyOutcome;
                typedef std::future<DeleteL4ProxyOutcome> DeleteL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteL4ProxyRequest&, DeleteL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteL4ProxyRulesResponse> DeleteL4ProxyRulesOutcome;
                typedef std::future<DeleteL4ProxyRulesOutcome> DeleteL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteL4ProxyRulesRequest&, DeleteL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOriginGroupResponse> DeleteOriginGroupOutcome;
                typedef std::future<DeleteOriginGroupOutcome> DeleteOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteOriginGroupRequest&, DeleteOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRealtimeLogDeliveryTaskResponse> DeleteRealtimeLogDeliveryTaskOutcome;
                typedef std::future<DeleteRealtimeLogDeliveryTaskOutcome> DeleteRealtimeLogDeliveryTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteRealtimeLogDeliveryTaskRequest&, DeleteRealtimeLogDeliveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRealtimeLogDeliveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteRulesResponse> DeleteRulesOutcome;
                typedef std::future<DeleteRulesOutcome> DeleteRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteRulesRequest&, DeleteRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSecurityIPGroupResponse> DeleteSecurityIPGroupOutcome;
                typedef std::future<DeleteSecurityIPGroupOutcome> DeleteSecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteSecurityIPGroupRequest&, DeleteSecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteSharedCNAMEResponse> DeleteSharedCNAMEOutcome;
                typedef std::future<DeleteSharedCNAMEOutcome> DeleteSharedCNAMEOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteSharedCNAMERequest&, DeleteSharedCNAMEOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSharedCNAMEAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteZoneResponse> DeleteZoneOutcome;
                typedef std::future<DeleteZoneOutcome> DeleteZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeleteZoneRequest&, DeleteZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::DeployConfigGroupVersionResponse> DeployConfigGroupVersionOutcome;
                typedef std::future<DeployConfigGroupVersionOutcome> DeployConfigGroupVersionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DeployConfigGroupVersionRequest&, DeployConfigGroupVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeployConfigGroupVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccelerationDomainsResponse> DescribeAccelerationDomainsOutcome;
                typedef std::future<DescribeAccelerationDomainsOutcome> DescribeAccelerationDomainsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAccelerationDomainsRequest&, DescribeAccelerationDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccelerationDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAliasDomainsResponse> DescribeAliasDomainsOutcome;
                typedef std::future<DescribeAliasDomainsOutcome> DescribeAliasDomainsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAliasDomainsRequest&, DescribeAliasDomainsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAliasDomainsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeApplicationProxiesResponse> DescribeApplicationProxiesOutcome;
                typedef std::future<DescribeApplicationProxiesOutcome> DescribeApplicationProxiesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeApplicationProxiesRequest&, DescribeApplicationProxiesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeApplicationProxiesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailablePlansResponse> DescribeAvailablePlansOutcome;
                typedef std::future<DescribeAvailablePlansOutcome> DescribeAvailablePlansOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeAvailablePlansRequest&, DescribeAvailablePlansOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailablePlansAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBillingDataResponse> DescribeBillingDataOutcome;
                typedef std::future<DescribeBillingDataOutcome> DescribeBillingDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeBillingDataRequest&, DescribeBillingDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBillingDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigGroupVersionDetailResponse> DescribeConfigGroupVersionDetailOutcome;
                typedef std::future<DescribeConfigGroupVersionDetailOutcome> DescribeConfigGroupVersionDetailOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeConfigGroupVersionDetailRequest&, DescribeConfigGroupVersionDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigGroupVersionDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeConfigGroupVersionsResponse> DescribeConfigGroupVersionsOutcome;
                typedef std::future<DescribeConfigGroupVersionsOutcome> DescribeConfigGroupVersionsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeConfigGroupVersionsRequest&, DescribeConfigGroupVersionsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeConfigGroupVersionsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeContentQuotaResponse> DescribeContentQuotaOutcome;
                typedef std::future<DescribeContentQuotaOutcome> DescribeContentQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeContentQuotaRequest&, DescribeContentQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeContentQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCustomErrorPagesResponse> DescribeCustomErrorPagesOutcome;
                typedef std::future<DescribeCustomErrorPagesOutcome> DescribeCustomErrorPagesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeCustomErrorPagesRequest&, DescribeCustomErrorPagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCustomErrorPagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackDataResponse> DescribeDDoSAttackDataOutcome;
                typedef std::future<DescribeDDoSAttackDataOutcome> DescribeDDoSAttackDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackDataRequest&, DescribeDDoSAttackDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackEventResponse> DescribeDDoSAttackEventOutcome;
                typedef std::future<DescribeDDoSAttackEventOutcome> DescribeDDoSAttackEventOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackEventRequest&, DescribeDDoSAttackEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDDoSAttackTopDataResponse> DescribeDDoSAttackTopDataOutcome;
                typedef std::future<DescribeDDoSAttackTopDataOutcome> DescribeDDoSAttackTopDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDDoSAttackTopDataRequest&, DescribeDDoSAttackTopDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDDoSAttackTopDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDefaultCertificatesResponse> DescribeDefaultCertificatesOutcome;
                typedef std::future<DescribeDefaultCertificatesOutcome> DescribeDefaultCertificatesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDefaultCertificatesRequest&, DescribeDefaultCertificatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDefaultCertificatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeployHistoryResponse> DescribeDeployHistoryOutcome;
                typedef std::future<DescribeDeployHistoryOutcome> DescribeDeployHistoryOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeDeployHistoryRequest&, DescribeDeployHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeployHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeEnvironmentsResponse> DescribeEnvironmentsOutcome;
                typedef std::future<DescribeEnvironmentsOutcome> DescribeEnvironmentsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeEnvironmentsRequest&, DescribeEnvironmentsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeEnvironmentsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHostsSettingResponse> DescribeHostsSettingOutcome;
                typedef std::future<DescribeHostsSettingOutcome> DescribeHostsSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeHostsSettingRequest&, DescribeHostsSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHostsSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIPRegionResponse> DescribeIPRegionOutcome;
                typedef std::future<DescribeIPRegionOutcome> DescribeIPRegionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIPRegionRequest&, DescribeIPRegionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIPRegionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeIdentificationsResponse> DescribeIdentificationsOutcome;
                typedef std::future<DescribeIdentificationsOutcome> DescribeIdentificationsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeIdentificationsRequest&, DescribeIdentificationsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeIdentificationsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4ProxyResponse> DescribeL4ProxyOutcome;
                typedef std::future<DescribeL4ProxyOutcome> DescribeL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeL4ProxyRequest&, DescribeL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeL4ProxyRulesResponse> DescribeL4ProxyRulesOutcome;
                typedef std::future<DescribeL4ProxyRulesOutcome> DescribeL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeL4ProxyRulesRequest&, DescribeL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginGroupResponse> DescribeOriginGroupOutcome;
                typedef std::future<DescribeOriginGroupOutcome> DescribeOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginGroupRequest&, DescribeOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOriginProtectionResponse> DescribeOriginProtectionOutcome;
                typedef std::future<DescribeOriginProtectionOutcome> DescribeOriginProtectionOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOriginProtectionRequest&, DescribeOriginProtectionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOriginProtectionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOverviewL7DataResponse> DescribeOverviewL7DataOutcome;
                typedef std::future<DescribeOverviewL7DataOutcome> DescribeOverviewL7DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeOverviewL7DataRequest&, DescribeOverviewL7DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOverviewL7DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePrefetchTasksResponse> DescribePrefetchTasksOutcome;
                typedef std::future<DescribePrefetchTasksOutcome> DescribePrefetchTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePrefetchTasksRequest&, DescribePrefetchTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePrefetchTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePurgeTasksResponse> DescribePurgeTasksOutcome;
                typedef std::future<DescribePurgeTasksOutcome> DescribePurgeTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribePurgeTasksRequest&, DescribePurgeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePurgeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRealtimeLogDeliveryTasksResponse> DescribeRealtimeLogDeliveryTasksOutcome;
                typedef std::future<DescribeRealtimeLogDeliveryTasksOutcome> DescribeRealtimeLogDeliveryTasksOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRealtimeLogDeliveryTasksRequest&, DescribeRealtimeLogDeliveryTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRealtimeLogDeliveryTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesResponse> DescribeRulesOutcome;
                typedef std::future<DescribeRulesOutcome> DescribeRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesRequest&, DescribeRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRulesSettingResponse> DescribeRulesSettingOutcome;
                typedef std::future<DescribeRulesSettingOutcome> DescribeRulesSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeRulesSettingRequest&, DescribeRulesSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRulesSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityIPGroupResponse> DescribeSecurityIPGroupOutcome;
                typedef std::future<DescribeSecurityIPGroupOutcome> DescribeSecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityIPGroupRequest&, DescribeSecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityIPGroupInfoResponse> DescribeSecurityIPGroupInfoOutcome;
                typedef std::future<DescribeSecurityIPGroupInfoOutcome> DescribeSecurityIPGroupInfoOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityIPGroupInfoRequest&, DescribeSecurityIPGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityIPGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSecurityTemplateBindingsResponse> DescribeSecurityTemplateBindingsOutcome;
                typedef std::future<DescribeSecurityTemplateBindingsOutcome> DescribeSecurityTemplateBindingsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeSecurityTemplateBindingsRequest&, DescribeSecurityTemplateBindingsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSecurityTemplateBindingsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL4DataResponse> DescribeTimingL4DataOutcome;
                typedef std::future<DescribeTimingL4DataOutcome> DescribeTimingL4DataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL4DataRequest&, DescribeTimingL4DataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL4DataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL7AnalysisDataResponse> DescribeTimingL7AnalysisDataOutcome;
                typedef std::future<DescribeTimingL7AnalysisDataOutcome> DescribeTimingL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL7AnalysisDataRequest&, DescribeTimingL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTimingL7CacheDataResponse> DescribeTimingL7CacheDataOutcome;
                typedef std::future<DescribeTimingL7CacheDataOutcome> DescribeTimingL7CacheDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTimingL7CacheDataRequest&, DescribeTimingL7CacheDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTimingL7CacheDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopL7AnalysisDataResponse> DescribeTopL7AnalysisDataOutcome;
                typedef std::future<DescribeTopL7AnalysisDataOutcome> DescribeTopL7AnalysisDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTopL7AnalysisDataRequest&, DescribeTopL7AnalysisDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopL7AnalysisDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopL7CacheDataResponse> DescribeTopL7CacheDataOutcome;
                typedef std::future<DescribeTopL7CacheDataOutcome> DescribeTopL7CacheDataOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeTopL7CacheDataRequest&, DescribeTopL7CacheDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopL7CacheDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneSettingResponse> DescribeZoneSettingOutcome;
                typedef std::future<DescribeZoneSettingOutcome> DescribeZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZoneSettingRequest&, DescribeZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::DestroyPlanResponse> DestroyPlanOutcome;
                typedef std::future<DestroyPlanOutcome> DestroyPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DestroyPlanRequest&, DestroyPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DestroyPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL4LogsResponse> DownloadL4LogsOutcome;
                typedef std::future<DownloadL4LogsOutcome> DownloadL4LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL4LogsRequest&, DownloadL4LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL4LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadL7LogsResponse> DownloadL7LogsOutcome;
                typedef std::future<DownloadL7LogsOutcome> DownloadL7LogsOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::DownloadL7LogsRequest&, DownloadL7LogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadL7LogsAsyncHandler;
                typedef Outcome<Core::Error, Model::IdentifyZoneResponse> IdentifyZoneOutcome;
                typedef std::future<IdentifyZoneOutcome> IdentifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IdentifyZoneRequest&, IdentifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IdentifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::IncreasePlanQuotaResponse> IncreasePlanQuotaOutcome;
                typedef std::future<IncreasePlanQuotaOutcome> IncreasePlanQuotaOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::IncreasePlanQuotaRequest&, IncreasePlanQuotaOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IncreasePlanQuotaAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccelerationDomainResponse> ModifyAccelerationDomainOutcome;
                typedef std::future<ModifyAccelerationDomainOutcome> ModifyAccelerationDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAccelerationDomainRequest&, ModifyAccelerationDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccelerationDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccelerationDomainStatusesResponse> ModifyAccelerationDomainStatusesOutcome;
                typedef std::future<ModifyAccelerationDomainStatusesOutcome> ModifyAccelerationDomainStatusesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAccelerationDomainStatusesRequest&, ModifyAccelerationDomainStatusesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccelerationDomainStatusesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAliasDomainResponse> ModifyAliasDomainOutcome;
                typedef std::future<ModifyAliasDomainOutcome> ModifyAliasDomainOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAliasDomainRequest&, ModifyAliasDomainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAliasDomainAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAliasDomainStatusResponse> ModifyAliasDomainStatusOutcome;
                typedef std::future<ModifyAliasDomainStatusOutcome> ModifyAliasDomainStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyAliasDomainStatusRequest&, ModifyAliasDomainStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAliasDomainStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyResponse> ModifyApplicationProxyOutcome;
                typedef std::future<ModifyApplicationProxyOutcome> ModifyApplicationProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRequest&, ModifyApplicationProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyRuleResponse> ModifyApplicationProxyRuleOutcome;
                typedef std::future<ModifyApplicationProxyRuleOutcome> ModifyApplicationProxyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRuleRequest&, ModifyApplicationProxyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyRuleStatusResponse> ModifyApplicationProxyRuleStatusOutcome;
                typedef std::future<ModifyApplicationProxyRuleStatusOutcome> ModifyApplicationProxyRuleStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyRuleStatusRequest&, ModifyApplicationProxyRuleStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyRuleStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationProxyStatusResponse> ModifyApplicationProxyStatusOutcome;
                typedef std::future<ModifyApplicationProxyStatusOutcome> ModifyApplicationProxyStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyApplicationProxyStatusRequest&, ModifyApplicationProxyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationProxyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomErrorPageResponse> ModifyCustomErrorPageOutcome;
                typedef std::future<ModifyCustomErrorPageOutcome> ModifyCustomErrorPageOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyCustomErrorPageRequest&, ModifyCustomErrorPageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomErrorPageAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyHostsCertificateResponse> ModifyHostsCertificateOutcome;
                typedef std::future<ModifyHostsCertificateOutcome> ModifyHostsCertificateOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyHostsCertificateRequest&, ModifyHostsCertificateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyHostsCertificateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyResponse> ModifyL4ProxyOutcome;
                typedef std::future<ModifyL4ProxyOutcome> ModifyL4ProxyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyRequest&, ModifyL4ProxyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyRulesResponse> ModifyL4ProxyRulesOutcome;
                typedef std::future<ModifyL4ProxyRulesOutcome> ModifyL4ProxyRulesOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyRulesRequest&, ModifyL4ProxyRulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyRulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyRulesStatusResponse> ModifyL4ProxyRulesStatusOutcome;
                typedef std::future<ModifyL4ProxyRulesStatusOutcome> ModifyL4ProxyRulesStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyRulesStatusRequest&, ModifyL4ProxyRulesStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyRulesStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyL4ProxyStatusResponse> ModifyL4ProxyStatusOutcome;
                typedef std::future<ModifyL4ProxyStatusOutcome> ModifyL4ProxyStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyL4ProxyStatusRequest&, ModifyL4ProxyStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyL4ProxyStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyOriginGroupResponse> ModifyOriginGroupOutcome;
                typedef std::future<ModifyOriginGroupOutcome> ModifyOriginGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyOriginGroupRequest&, ModifyOriginGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyOriginGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPlanResponse> ModifyPlanOutcome;
                typedef std::future<ModifyPlanOutcome> ModifyPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyPlanRequest&, ModifyPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRealtimeLogDeliveryTaskResponse> ModifyRealtimeLogDeliveryTaskOutcome;
                typedef std::future<ModifyRealtimeLogDeliveryTaskOutcome> ModifyRealtimeLogDeliveryTaskOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRealtimeLogDeliveryTaskRequest&, ModifyRealtimeLogDeliveryTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRealtimeLogDeliveryTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyRuleResponse> ModifyRuleOutcome;
                typedef std::future<ModifyRuleOutcome> ModifyRuleOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyRuleRequest&, ModifyRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityIPGroupResponse> ModifySecurityIPGroupOutcome;
                typedef std::future<ModifySecurityIPGroupOutcome> ModifySecurityIPGroupOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityIPGroupRequest&, ModifySecurityIPGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityIPGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySecurityPolicyResponse> ModifySecurityPolicyOutcome;
                typedef std::future<ModifySecurityPolicyOutcome> ModifySecurityPolicyOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifySecurityPolicyRequest&, ModifySecurityPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySecurityPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneResponse> ModifyZoneOutcome;
                typedef std::future<ModifyZoneOutcome> ModifyZoneOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneRequest&, ModifyZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneSettingResponse> ModifyZoneSettingOutcome;
                typedef std::future<ModifyZoneSettingOutcome> ModifyZoneSettingOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneSettingRequest&, ModifyZoneSettingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneSettingAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyZoneStatusResponse> ModifyZoneStatusOutcome;
                typedef std::future<ModifyZoneStatusOutcome> ModifyZoneStatusOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::ModifyZoneStatusRequest&, ModifyZoneStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyZoneStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::RenewPlanResponse> RenewPlanOutcome;
                typedef std::future<RenewPlanOutcome> RenewPlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::RenewPlanRequest&, RenewPlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RenewPlanAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradePlanResponse> UpgradePlanOutcome;
                typedef std::future<UpgradePlanOutcome> UpgradePlanOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::UpgradePlanRequest&, UpgradePlanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradePlanAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyOwnershipResponse> VerifyOwnershipOutcome;
                typedef std::future<VerifyOwnershipOutcome> VerifyOwnershipOutcomeCallable;
                typedef std::function<void(const TeoClient*, const Model::VerifyOwnershipRequest&, VerifyOwnershipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyOwnershipAsyncHandler;



                /**
                 *This API is used to bind/unbind a domain name to/from a specific policy template. 
                 * @param req BindSecurityTemplateToEntityRequest
                 * @return BindSecurityTemplateToEntityOutcome
                 */
                BindSecurityTemplateToEntityOutcome BindSecurityTemplateToEntity(const Model::BindSecurityTemplateToEntityRequest &request);
                void BindSecurityTemplateToEntityAsync(const Model::BindSecurityTemplateToEntityRequest& request, const BindSecurityTemplateToEntityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSecurityTemplateToEntityOutcomeCallable BindSecurityTemplateToEntityCallable(const Model::BindSecurityTemplateToEntityRequest& request);

                /**
                 *This API is used to bind/unbind a domain name to/from a shared CNAME. It is now only available to beta users.
                 * @param req BindSharedCNAMERequest
                 * @return BindSharedCNAMEOutcome
                 */
                BindSharedCNAMEOutcome BindSharedCNAME(const Model::BindSharedCNAMERequest &request);
                void BindSharedCNAMEAsync(const Model::BindSharedCNAMERequest& request, const BindSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindSharedCNAMEOutcomeCallable BindSharedCNAMECallable(const Model::BindSharedCNAMERequest& request);

                /**
                 *This API is used to bind a site to a plan.
                 * @param req BindZoneToPlanRequest
                 * @return BindZoneToPlanOutcome
                 */
                BindZoneToPlanOutcome BindZoneToPlan(const Model::BindZoneToPlanRequest &request);
                void BindZoneToPlanAsync(const Model::BindZoneToPlanRequest& request, const BindZoneToPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindZoneToPlanOutcomeCallable BindZoneToPlanCallable(const Model::BindZoneToPlanRequest& request);

                /**
                 *This API is used to query the CNAME status of a domain name.
                 * @param req CheckCnameStatusRequest
                 * @return CheckCnameStatusOutcome
                 */
                CheckCnameStatusOutcome CheckCnameStatus(const Model::CheckCnameStatusRequest &request);
                void CheckCnameStatusAsync(const Model::CheckCnameStatusRequest& request, const CheckCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckCnameStatusOutcomeCallable CheckCnameStatusCallable(const Model::CheckCnameStatusRequest& request);

                /**
                 *This API is used to create an acceleration domain name. 

For sites connected via the CNAME, if you have not verified the ownership of the domain name, the ownership verification information of the domain name is returned. To verify your ownership of the domain name, see [Ownership Verification](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1).
                 * @param req CreateAccelerationDomainRequest
                 * @return CreateAccelerationDomainOutcome
                 */
                CreateAccelerationDomainOutcome CreateAccelerationDomain(const Model::CreateAccelerationDomainRequest &request);
                void CreateAccelerationDomainAsync(const Model::CreateAccelerationDomainRequest& request, const CreateAccelerationDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccelerationDomainOutcomeCallable CreateAccelerationDomainCallable(const Model::CreateAccelerationDomainRequest& request);

                /**
                 *This API is used to create an alias domain name.
                 * @param req CreateAliasDomainRequest
                 * @return CreateAliasDomainOutcome
                 */
                CreateAliasDomainOutcome CreateAliasDomain(const Model::CreateAliasDomainRequest &request);
                void CreateAliasDomainAsync(const Model::CreateAliasDomainRequest& request, const CreateAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAliasDomainOutcomeCallable CreateAliasDomainCallable(const Model::CreateAliasDomainRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version [CreateL4Proxy] (https://intl.cloud.tencent.com/document/product/1552/103417?from_cn_redirect=1).
                 * @param req CreateApplicationProxyRequest
                 * @return CreateApplicationProxyOutcome
                 */
                CreateApplicationProxyOutcome CreateApplicationProxy(const Model::CreateApplicationProxyRequest &request);
                void CreateApplicationProxyAsync(const Model::CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyOutcomeCallable CreateApplicationProxyCallable(const Model::CreateApplicationProxyRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [CreateL4ProxyRules] (https://intl.cloud.tencent.com/document/product/1552/103416?from_cn_redirect=1).
                 * @param req CreateApplicationProxyRuleRequest
                 * @return CreateApplicationProxyRuleOutcome
                 */
                CreateApplicationProxyRuleOutcome CreateApplicationProxyRule(const Model::CreateApplicationProxyRuleRequest &request);
                void CreateApplicationProxyRuleAsync(const Model::CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateApplicationProxyRuleOutcomeCallable CreateApplicationProxyRuleCallable(const Model::CreateApplicationProxyRuleRequest& request);

                /**
                 *This API is used to create key-value indexes for relevant delivered log fields in the corresponding Tencent Cloud CLS log topic for a specified real-time log delivery task (task-id). If such indexes have been created in CLS, this API will append indexes through merging.
                 * @param req CreateCLSIndexRequest
                 * @return CreateCLSIndexOutcome
                 */
                CreateCLSIndexOutcome CreateCLSIndex(const Model::CreateCLSIndexRequest &request);
                void CreateCLSIndexAsync(const Model::CreateCLSIndexRequest& request, const CreateCLSIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCLSIndexOutcomeCallable CreateCLSIndexCallable(const Model::CreateCLSIndexRequest& request);

                /**
                 *This API is used to create a new version for the specified configuration group in version management mode. The version management feature is currently undergoing beta testing and is accessible only to users on the whitelist.
                 * @param req CreateConfigGroupVersionRequest
                 * @return CreateConfigGroupVersionOutcome
                 */
                CreateConfigGroupVersionOutcome CreateConfigGroupVersion(const Model::CreateConfigGroupVersionRequest &request);
                void CreateConfigGroupVersionAsync(const Model::CreateConfigGroupVersionRequest& request, const CreateConfigGroupVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateConfigGroupVersionOutcomeCallable CreateConfigGroupVersionCallable(const Model::CreateConfigGroupVersionRequest& request);

                /**
                 *This API is used to create a custom response page.
                 * @param req CreateCustomizeErrorPageRequest
                 * @return CreateCustomizeErrorPageOutcome
                 */
                CreateCustomizeErrorPageOutcome CreateCustomizeErrorPage(const Model::CreateCustomizeErrorPageRequest &request);
                void CreateCustomizeErrorPageAsync(const Model::CreateCustomizeErrorPageRequest& request, const CreateCustomizeErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomizeErrorPageOutcomeCallable CreateCustomizeErrorPageCallable(const Model::CreateCustomizeErrorPageRequest& request);

                /**
                 *This API is used to create Layer 4 proxy instances.
                 * @param req CreateL4ProxyRequest
                 * @return CreateL4ProxyOutcome
                 */
                CreateL4ProxyOutcome CreateL4Proxy(const Model::CreateL4ProxyRequest &request);
                void CreateL4ProxyAsync(const Model::CreateL4ProxyRequest& request, const CreateL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4ProxyOutcomeCallable CreateL4ProxyCallable(const Model::CreateL4ProxyRequest& request);

                /**
                 *This API is used to create Layer 4 proxy instance rules, supporting both individual and batch creation.
                 * @param req CreateL4ProxyRulesRequest
                 * @return CreateL4ProxyRulesOutcome
                 */
                CreateL4ProxyRulesOutcome CreateL4ProxyRules(const Model::CreateL4ProxyRulesRequest &request);
                void CreateL4ProxyRulesAsync(const Model::CreateL4ProxyRulesRequest& request, const CreateL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateL4ProxyRulesOutcomeCallable CreateL4ProxyRulesCallable(const Model::CreateL4ProxyRulesRequest& request);

                /**
                 *This API is used to create an origin group for easy management. The created origin server group can be used for **adding acceleration domain names** and **layer-4 proxy configuration**.
                 * @param req CreateOriginGroupRequest
                 * @return CreateOriginGroupOutcome
                 */
                CreateOriginGroupOutcome CreateOriginGroup(const Model::CreateOriginGroupRequest &request);
                void CreateOriginGroupAsync(const Model::CreateOriginGroupRequest& request, const CreateOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOriginGroupOutcomeCallable CreateOriginGroupCallable(const Model::CreateOriginGroupRequest& request);

                /**
                 *If you need to use the EdgeOne product, you must create a billing plan through this interface.
> After creating a plan, you need to complete the process of creating a site and binding the plan through [CreateZone](https://intl.cloud.tencent.com/document/product/1552/80719?from_cn_redirect=1), so that the EdgeOne can provide services properly.
                 * @param req CreatePlanRequest
                 * @return CreatePlanOutcome
                 */
                CreatePlanOutcome CreatePlan(const Model::CreatePlanRequest &request);
                void CreatePlanAsync(const Model::CreatePlanRequest& request, const CreatePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePlanOutcomeCallable CreatePlanCallable(const Model::CreatePlanRequest& request);

                /**
                 *This API is used to purchase a plan for a new site.
                 * @param req CreatePlanForZoneRequest
                 * @return CreatePlanForZoneOutcome
                 */
                CreatePlanForZoneOutcome CreatePlanForZone(const Model::CreatePlanForZoneRequest &request);
                void CreatePlanForZoneAsync(const Model::CreatePlanForZoneRequest& request, const CreatePlanForZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePlanForZoneOutcomeCallable CreatePlanForZoneCallable(const Model::CreatePlanForZoneRequest& request);

                /**
                 *This API is used to create a pre-warming task.
                 * @param req CreatePrefetchTaskRequest
                 * @return CreatePrefetchTaskOutcome
                 */
                CreatePrefetchTaskOutcome CreatePrefetchTask(const Model::CreatePrefetchTaskRequest &request);
                void CreatePrefetchTaskAsync(const Model::CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrefetchTaskOutcomeCallable CreatePrefetchTaskCallable(const Model::CreatePrefetchTaskRequest& request);

                /**
                 *When there are resources updated on the origin with the TTL remaining valid, users cannot access the latest resources. In this case, you can purge the cache using this API. There are two methods: <li>Delete: This method deletes the node cache without verification and retrieves the latest resources from the origin when receiving a request.</li><li>Invalidate: This method marks the node cache as invalid and sends a request with the If-None-Match and If-Modified-Since headers to the origin. If the origin responses with 200, the latest resources are retrieved to be cached on the node. If a 304 response is returned, the latest resources are not cached on the node.

</li>For more details, see [Cache Purge](https://intl.cloud.tencent.com/document/product/1552/70759?from_cn_redirect=1). </li>
                 * @param req CreatePurgeTaskRequest
                 * @return CreatePurgeTaskOutcome
                 */
                CreatePurgeTaskOutcome CreatePurgeTask(const Model::CreatePurgeTaskRequest &request);
                void CreatePurgeTaskAsync(const Model::CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePurgeTaskOutcomeCallable CreatePurgeTaskCallable(const Model::CreatePurgeTaskRequest& request);

                /**
                 *This API is used to create a real-time log delivery task. The following limits apply:
An entity (a Layer 7 domain name or a Layer 4 proxy instance) under the combination of the same data delivery type (LogType) and data delivery area (Area) can be added to only one real-time log delivery task. It is recommended to first query the real-time log delivery task list by entity through the [DescribeRealtimeLogDeliveryTasks](https://intl.cloud.tencent.com/document/product/1552/104110?from_cn_redirect=1) API to check whether the entity has been added to another real-time log delivery task.
                 * @param req CreateRealtimeLogDeliveryTaskRequest
                 * @return CreateRealtimeLogDeliveryTaskOutcome
                 */
                CreateRealtimeLogDeliveryTaskOutcome CreateRealtimeLogDeliveryTask(const Model::CreateRealtimeLogDeliveryTaskRequest &request);
                void CreateRealtimeLogDeliveryTaskAsync(const Model::CreateRealtimeLogDeliveryTaskRequest& request, const CreateRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRealtimeLogDeliveryTaskOutcomeCallable CreateRealtimeLogDeliveryTaskCallable(const Model::CreateRealtimeLogDeliveryTaskRequest& request);

                /**
                 *This API is used to create a rule in the rule engine.
                 * @param req CreateRuleRequest
                 * @return CreateRuleOutcome
                 */
                CreateRuleOutcome CreateRule(const Model::CreateRuleRequest &request);
                void CreateRuleAsync(const Model::CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRuleOutcomeCallable CreateRuleCallable(const Model::CreateRuleRequest& request);

                /**
                 *This API is used to create a security IP group.
                 * @param req CreateSecurityIPGroupRequest
                 * @return CreateSecurityIPGroupOutcome
                 */
                CreateSecurityIPGroupOutcome CreateSecurityIPGroup(const Model::CreateSecurityIPGroupRequest &request);
                void CreateSecurityIPGroupAsync(const Model::CreateSecurityIPGroupRequest& request, const CreateSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSecurityIPGroupOutcomeCallable CreateSecurityIPGroupCallable(const Model::CreateSecurityIPGroupRequest& request);

                /**
                 *This API is used to create a shared CNAME. It is now only available to beta users.
                 * @param req CreateSharedCNAMERequest
                 * @return CreateSharedCNAMEOutcome
                 */
                CreateSharedCNAMEOutcome CreateSharedCNAME(const Model::CreateSharedCNAMERequest &request);
                void CreateSharedCNAMEAsync(const Model::CreateSharedCNAMERequest& request, const CreateSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSharedCNAMEOutcomeCallable CreateSharedCNAMECallable(const Model::CreateSharedCNAMERequest& request);

                /**
                 *This API is used to create a site. After you create the site, you can connect it to EdgeOne via the CNAME or NS (see [Quick Start](https://intl.cloud.tencent.com/document/product/1552/87601?from_cn_redirect=1)), or connect it without a domain name (see [Quick Access to L4 Proxy Service](https://intl.cloud.tencent.com/document/product/1552/96051?from_cn_redirect=1)).

If there are already EdgeOne plans under the current account, it is recommended to pass in the `PlanId` to bind the site with the plan directly. If `PlanId` is not passed in, the created site is not activated. You need to call [BindZoneToPlan](https://intl.cloud.tencent.com/document/product/1552/83042?from_cn_redirect=1) to bind the site with a plan. To purchase a plan, please go to the EdgeOne console.
                 * @param req CreateZoneRequest
                 * @return CreateZoneOutcome
                 */
                CreateZoneOutcome CreateZone(const Model::CreateZoneRequest &request);
                void CreateZoneAsync(const Model::CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateZoneOutcomeCallable CreateZoneCallable(const Model::CreateZoneRequest& request);

                /**
                 *This API is used to batch remove accelerated domain names.
                 * @param req DeleteAccelerationDomainsRequest
                 * @return DeleteAccelerationDomainsOutcome
                 */
                DeleteAccelerationDomainsOutcome DeleteAccelerationDomains(const Model::DeleteAccelerationDomainsRequest &request);
                void DeleteAccelerationDomainsAsync(const Model::DeleteAccelerationDomainsRequest& request, const DeleteAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccelerationDomainsOutcomeCallable DeleteAccelerationDomainsCallable(const Model::DeleteAccelerationDomainsRequest& request);

                /**
                 *This API is used to delete an alias domain name.
                 * @param req DeleteAliasDomainRequest
                 * @return DeleteAliasDomainOutcome
                 */
                DeleteAliasDomainOutcome DeleteAliasDomain(const Model::DeleteAliasDomainRequest &request);
                void DeleteAliasDomainAsync(const Model::DeleteAliasDomainRequest& request, const DeleteAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAliasDomainOutcomeCallable DeleteAliasDomainCallable(const Model::DeleteAliasDomainRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [DeleteL4Proxy] (https://intl.cloud.tencent.com/document/product/1552/103415?from_cn_redirect=1).
                 * @param req DeleteApplicationProxyRequest
                 * @return DeleteApplicationProxyOutcome
                 */
                DeleteApplicationProxyOutcome DeleteApplicationProxy(const Model::DeleteApplicationProxyRequest &request);
                void DeleteApplicationProxyAsync(const Model::DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyOutcomeCallable DeleteApplicationProxyCallable(const Model::DeleteApplicationProxyRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [DeleteL4ProxyRules] (https://intl.cloud.tencent.com/document/product/1552/103414?from_cn_redirect=1).
                 * @param req DeleteApplicationProxyRuleRequest
                 * @return DeleteApplicationProxyRuleOutcome
                 */
                DeleteApplicationProxyRuleOutcome DeleteApplicationProxyRule(const Model::DeleteApplicationProxyRuleRequest &request);
                void DeleteApplicationProxyRuleAsync(const Model::DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteApplicationProxyRuleOutcomeCallable DeleteApplicationProxyRuleCallable(const Model::DeleteApplicationProxyRuleRequest& request);

                /**
                 *This API is used to delete a custom response page.
                 * @param req DeleteCustomErrorPageRequest
                 * @return DeleteCustomErrorPageOutcome
                 */
                DeleteCustomErrorPageOutcome DeleteCustomErrorPage(const Model::DeleteCustomErrorPageRequest &request);
                void DeleteCustomErrorPageAsync(const Model::DeleteCustomErrorPageRequest& request, const DeleteCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomErrorPageOutcomeCallable DeleteCustomErrorPageCallable(const Model::DeleteCustomErrorPageRequest& request);

                /**
                 *This API is used to delete a Layer 4 proxy instance.
                 * @param req DeleteL4ProxyRequest
                 * @return DeleteL4ProxyOutcome
                 */
                DeleteL4ProxyOutcome DeleteL4Proxy(const Model::DeleteL4ProxyRequest &request);
                void DeleteL4ProxyAsync(const Model::DeleteL4ProxyRequest& request, const DeleteL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL4ProxyOutcomeCallable DeleteL4ProxyCallable(const Model::DeleteL4ProxyRequest& request);

                /**
                 *This API is used to delete Layer 4 proxy forwarding rules, supporting both individual and batch operation.
                 * @param req DeleteL4ProxyRulesRequest
                 * @return DeleteL4ProxyRulesOutcome
                 */
                DeleteL4ProxyRulesOutcome DeleteL4ProxyRules(const Model::DeleteL4ProxyRulesRequest &request);
                void DeleteL4ProxyRulesAsync(const Model::DeleteL4ProxyRulesRequest& request, const DeleteL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteL4ProxyRulesOutcomeCallable DeleteL4ProxyRulesCallable(const Model::DeleteL4ProxyRulesRequest& request);

                /**
                 *This API is used to delete an origin group. Note that an origin group can not be deleted if it is referenced by services (e.g. L4 Proxy, domain name service, load balancing, rule engines). 
                 * @param req DeleteOriginGroupRequest
                 * @return DeleteOriginGroupOutcome
                 */
                DeleteOriginGroupOutcome DeleteOriginGroup(const Model::DeleteOriginGroupRequest &request);
                void DeleteOriginGroupAsync(const Model::DeleteOriginGroupRequest& request, const DeleteOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOriginGroupOutcomeCallable DeleteOriginGroupCallable(const Model::DeleteOriginGroupRequest& request);

                /**
                 *This API is used to delete a real-time log delivery task.
                 * @param req DeleteRealtimeLogDeliveryTaskRequest
                 * @return DeleteRealtimeLogDeliveryTaskOutcome
                 */
                DeleteRealtimeLogDeliveryTaskOutcome DeleteRealtimeLogDeliveryTask(const Model::DeleteRealtimeLogDeliveryTaskRequest &request);
                void DeleteRealtimeLogDeliveryTaskAsync(const Model::DeleteRealtimeLogDeliveryTaskRequest& request, const DeleteRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRealtimeLogDeliveryTaskOutcomeCallable DeleteRealtimeLogDeliveryTaskCallable(const Model::DeleteRealtimeLogDeliveryTaskRequest& request);

                /**
                 *This API is used to batch delete rules from the rule engine.
                 * @param req DeleteRulesRequest
                 * @return DeleteRulesOutcome
                 */
                DeleteRulesOutcome DeleteRules(const Model::DeleteRulesRequest &request);
                void DeleteRulesAsync(const Model::DeleteRulesRequest& request, const DeleteRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteRulesOutcomeCallable DeleteRulesCallable(const Model::DeleteRulesRequest& request);

                /**
                 *This API is used to delete a specified security IP group. Note that the security IP group cannot be deleted if it is referenced in a rule.
                 * @param req DeleteSecurityIPGroupRequest
                 * @return DeleteSecurityIPGroupOutcome
                 */
                DeleteSecurityIPGroupOutcome DeleteSecurityIPGroup(const Model::DeleteSecurityIPGroupRequest &request);
                void DeleteSecurityIPGroupAsync(const Model::DeleteSecurityIPGroupRequest& request, const DeleteSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSecurityIPGroupOutcomeCallable DeleteSecurityIPGroupCallable(const Model::DeleteSecurityIPGroupRequest& request);

                /**
                 *This API is used to delete a shared CNAME. It is now only available to beta users.
                 * @param req DeleteSharedCNAMERequest
                 * @return DeleteSharedCNAMEOutcome
                 */
                DeleteSharedCNAMEOutcome DeleteSharedCNAME(const Model::DeleteSharedCNAMERequest &request);
                void DeleteSharedCNAMEAsync(const Model::DeleteSharedCNAMERequest& request, const DeleteSharedCNAMEAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteSharedCNAMEOutcomeCallable DeleteSharedCNAMECallable(const Model::DeleteSharedCNAMERequest& request);

                /**
                 *This API is used to delete a site.
                 * @param req DeleteZoneRequest
                 * @return DeleteZoneOutcome
                 */
                DeleteZoneOutcome DeleteZone(const Model::DeleteZoneRequest &request);
                void DeleteZoneAsync(const Model::DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteZoneOutcomeCallable DeleteZoneCallable(const Model::DeleteZoneRequest& request);

                /**
                 *This API is used to release versions in version management mode. Users can deploy the version to either the testing environment or the production environment by specifying the EnvId parameter. The version management feature is currently undergoing beta testing and is accessible only to users on the whitelist.
                 * @param req DeployConfigGroupVersionRequest
                 * @return DeployConfigGroupVersionOutcome
                 */
                DeployConfigGroupVersionOutcome DeployConfigGroupVersion(const Model::DeployConfigGroupVersionRequest &request);
                void DeployConfigGroupVersionAsync(const Model::DeployConfigGroupVersionRequest& request, const DeployConfigGroupVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeployConfigGroupVersionOutcomeCallable DeployConfigGroupVersionCallable(const Model::DeployConfigGroupVersionRequest& request);

                /**
                 *This API is used to query domain name information of a site, including the acceleration domain name, origin, and domain name status. You can query the information of all domain names, or specific domain names by specifying filters information.
                 * @param req DescribeAccelerationDomainsRequest
                 * @return DescribeAccelerationDomainsOutcome
                 */
                DescribeAccelerationDomainsOutcome DescribeAccelerationDomains(const Model::DescribeAccelerationDomainsRequest &request);
                void DescribeAccelerationDomainsAsync(const Model::DescribeAccelerationDomainsRequest& request, const DescribeAccelerationDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccelerationDomainsOutcomeCallable DescribeAccelerationDomainsCallable(const Model::DescribeAccelerationDomainsRequest& request);

                /**
                 *This API is used to query the information of alias domain names.
                 * @param req DescribeAliasDomainsRequest
                 * @return DescribeAliasDomainsOutcome
                 */
                DescribeAliasDomainsOutcome DescribeAliasDomains(const Model::DescribeAliasDomainsRequest &request);
                void DescribeAliasDomainsAsync(const Model::DescribeAliasDomainsRequest& request, const DescribeAliasDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAliasDomainsOutcomeCallable DescribeAliasDomainsCallable(const Model::DescribeAliasDomainsRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. In the latest version, this API has been split into two APIs: one for querying the Layer 4 proxy instance list and the other for querying Layer 4 forwarding rules. For details, see [DescribeL4Proxy] (https://intl.cloud.tencent.com/document/product/1552/103413?from_cn_redirect=1) and [DescribeL4ProxyRules] (https://intl.cloud.tencent.com/document/product/1552/103412?from_cn_redirect=1).
                 * @param req DescribeApplicationProxiesRequest
                 * @return DescribeApplicationProxiesOutcome
                 */
                DescribeApplicationProxiesOutcome DescribeApplicationProxies(const Model::DescribeApplicationProxiesRequest &request);
                void DescribeApplicationProxiesAsync(const Model::DescribeApplicationProxiesRequest& request, const DescribeApplicationProxiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeApplicationProxiesOutcomeCallable DescribeApplicationProxiesCallable(const Model::DescribeApplicationProxiesRequest& request);

                /**
                 *This API is used to query plan options available for purchase.
                 * @param req DescribeAvailablePlansRequest
                 * @return DescribeAvailablePlansOutcome
                 */
                DescribeAvailablePlansOutcome DescribeAvailablePlans(const Model::DescribeAvailablePlansRequest &request);
                void DescribeAvailablePlansAsync(const Model::DescribeAvailablePlansRequest& request, const DescribeAvailablePlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailablePlansOutcomeCallable DescribeAvailablePlansCallable(const Model::DescribeAvailablePlansRequest& request);

                /**
                 *This API is used to query billing data.
                 * @param req DescribeBillingDataRequest
                 * @return DescribeBillingDataOutcome
                 */
                DescribeBillingDataOutcome DescribeBillingData(const Model::DescribeBillingDataRequest &request);
                void DescribeBillingDataAsync(const Model::DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBillingDataOutcomeCallable DescribeBillingDataCallable(const Model::DescribeBillingDataRequest& request);

                /**
                 *This API is used to obtain detailed information about a version in version management mode. The response includes the version ID, description, status, creation time, configuration group information, and the content of the version configuration file. The version management feature is currently undergoing beta testing and is accessible only to users on the whitelist.
                 * @param req DescribeConfigGroupVersionDetailRequest
                 * @return DescribeConfigGroupVersionDetailOutcome
                 */
                DescribeConfigGroupVersionDetailOutcome DescribeConfigGroupVersionDetail(const Model::DescribeConfigGroupVersionDetailRequest &request);
                void DescribeConfigGroupVersionDetailAsync(const Model::DescribeConfigGroupVersionDetailRequest& request, const DescribeConfigGroupVersionDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigGroupVersionDetailOutcomeCallable DescribeConfigGroupVersionDetailCallable(const Model::DescribeConfigGroupVersionDetailRequest& request);

                /**
                 *This API is used to query the version list for the specified configuration group in version management mode. The version management feature is currently undergoing beta testing and is accessible only to users on the whitelist.
                 * @param req DescribeConfigGroupVersionsRequest
                 * @return DescribeConfigGroupVersionsOutcome
                 */
                DescribeConfigGroupVersionsOutcome DescribeConfigGroupVersions(const Model::DescribeConfigGroupVersionsRequest &request);
                void DescribeConfigGroupVersionsAsync(const Model::DescribeConfigGroupVersionsRequest& request, const DescribeConfigGroupVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeConfigGroupVersionsOutcomeCallable DescribeConfigGroupVersionsCallable(const Model::DescribeConfigGroupVersionsRequest& request);

                /**
                 *This API is used to query content management quotas.
                 * @param req DescribeContentQuotaRequest
                 * @return DescribeContentQuotaOutcome
                 */
                DescribeContentQuotaOutcome DescribeContentQuota(const Model::DescribeContentQuotaRequest &request);
                void DescribeContentQuotaAsync(const Model::DescribeContentQuotaRequest& request, const DescribeContentQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeContentQuotaOutcomeCallable DescribeContentQuotaCallable(const Model::DescribeContentQuotaRequest& request);

                /**
                 *This API is used to query the custom response page list.
                 * @param req DescribeCustomErrorPagesRequest
                 * @return DescribeCustomErrorPagesOutcome
                 */
                DescribeCustomErrorPagesOutcome DescribeCustomErrorPages(const Model::DescribeCustomErrorPagesRequest &request);
                void DescribeCustomErrorPagesAsync(const Model::DescribeCustomErrorPagesRequest& request, const DescribeCustomErrorPagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCustomErrorPagesOutcomeCallable DescribeCustomErrorPagesCallable(const Model::DescribeCustomErrorPagesRequest& request);

                /**
                 *This API is used to query the time-series data of DDoS attacks.
                 * @param req DescribeDDoSAttackDataRequest
                 * @return DescribeDDoSAttackDataOutcome
                 */
                DescribeDDoSAttackDataOutcome DescribeDDoSAttackData(const Model::DescribeDDoSAttackDataRequest &request);
                void DescribeDDoSAttackDataAsync(const Model::DescribeDDoSAttackDataRequest& request, const DescribeDDoSAttackDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackDataOutcomeCallable DescribeDDoSAttackDataCallable(const Model::DescribeDDoSAttackDataRequest& request);

                /**
                 *This API is used to query DDoS attack events.
                 * @param req DescribeDDoSAttackEventRequest
                 * @return DescribeDDoSAttackEventOutcome
                 */
                DescribeDDoSAttackEventOutcome DescribeDDoSAttackEvent(const Model::DescribeDDoSAttackEventRequest &request);
                void DescribeDDoSAttackEventAsync(const Model::DescribeDDoSAttackEventRequest& request, const DescribeDDoSAttackEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackEventOutcomeCallable DescribeDDoSAttackEventCallable(const Model::DescribeDDoSAttackEventRequest& request);

                /**
                 *This API is used to query the top-ranked DDoS attack data.
                 * @param req DescribeDDoSAttackTopDataRequest
                 * @return DescribeDDoSAttackTopDataOutcome
                 */
                DescribeDDoSAttackTopDataOutcome DescribeDDoSAttackTopData(const Model::DescribeDDoSAttackTopDataRequest &request);
                void DescribeDDoSAttackTopDataAsync(const Model::DescribeDDoSAttackTopDataRequest& request, const DescribeDDoSAttackTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDDoSAttackTopDataOutcomeCallable DescribeDDoSAttackTopDataCallable(const Model::DescribeDDoSAttackTopDataRequest& request);

                /**
                 *This API is used to query a list of default certificates.
                 * @param req DescribeDefaultCertificatesRequest
                 * @return DescribeDefaultCertificatesOutcome
                 */
                DescribeDefaultCertificatesOutcome DescribeDefaultCertificates(const Model::DescribeDefaultCertificatesRequest &request);
                void DescribeDefaultCertificatesAsync(const Model::DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDefaultCertificatesOutcomeCallable DescribeDefaultCertificatesCallable(const Model::DescribeDefaultCertificatesRequest& request);

                /**
                 *This API is used to query the release history of versions in the production or test environment in version management mode. The version management feature is currently undergoing beta testing and is accessible only to users on the whitelist.
                 * @param req DescribeDeployHistoryRequest
                 * @return DescribeDeployHistoryOutcome
                 */
                DescribeDeployHistoryOutcome DescribeDeployHistory(const Model::DescribeDeployHistoryRequest &request);
                void DescribeDeployHistoryAsync(const Model::DescribeDeployHistoryRequest& request, const DescribeDeployHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeployHistoryOutcomeCallable DescribeDeployHistoryCallable(const Model::DescribeDeployHistoryRequest& request);

                /**
                 *This API is used to query environment information in version management mode. The response includes the environment ID, type, and current effective version. The version management feature is currently undergoing beta testing and is accessible only to users on the whitelist.
                 * @param req DescribeEnvironmentsRequest
                 * @return DescribeEnvironmentsOutcome
                 */
                DescribeEnvironmentsOutcome DescribeEnvironments(const Model::DescribeEnvironmentsRequest &request);
                void DescribeEnvironmentsAsync(const Model::DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeEnvironmentsOutcomeCallable DescribeEnvironmentsCallable(const Model::DescribeEnvironmentsRequest& request);

                /**
                 *This API is used to query detailed domain name configuration.
                 * @param req DescribeHostsSettingRequest
                 * @return DescribeHostsSettingOutcome
                 */
                DescribeHostsSettingOutcome DescribeHostsSetting(const Model::DescribeHostsSettingRequest &request);
                void DescribeHostsSettingAsync(const Model::DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHostsSettingOutcomeCallable DescribeHostsSettingCallable(const Model::DescribeHostsSettingRequest& request);

                /**
                 *This API is used to check if the IP is an EdgeOne IP.
                 * @param req DescribeIPRegionRequest
                 * @return DescribeIPRegionOutcome
                 */
                DescribeIPRegionOutcome DescribeIPRegion(const Model::DescribeIPRegionRequest &request);
                void DescribeIPRegionAsync(const Model::DescribeIPRegionRequest& request, const DescribeIPRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIPRegionOutcomeCallable DescribeIPRegionCallable(const Model::DescribeIPRegionRequest& request);

                /**
                 *This API is used to query the verification information of a site.
                 * @param req DescribeIdentificationsRequest
                 * @return DescribeIdentificationsOutcome
                 */
                DescribeIdentificationsOutcome DescribeIdentifications(const Model::DescribeIdentificationsRequest &request);
                void DescribeIdentificationsAsync(const Model::DescribeIdentificationsRequest& request, const DescribeIdentificationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeIdentificationsOutcomeCallable DescribeIdentificationsCallable(const Model::DescribeIdentificationsRequest& request);

                /**
                 *This API is used to query a Layer 4 proxy instance list.
                 * @param req DescribeL4ProxyRequest
                 * @return DescribeL4ProxyOutcome
                 */
                DescribeL4ProxyOutcome DescribeL4Proxy(const Model::DescribeL4ProxyRequest &request);
                void DescribeL4ProxyAsync(const Model::DescribeL4ProxyRequest& request, const DescribeL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4ProxyOutcomeCallable DescribeL4ProxyCallable(const Model::DescribeL4ProxyRequest& request);

                /**
                 *This API is used to query the forwarding rule list under a Layer 4 proxy instance.
                 * @param req DescribeL4ProxyRulesRequest
                 * @return DescribeL4ProxyRulesOutcome
                 */
                DescribeL4ProxyRulesOutcome DescribeL4ProxyRules(const Model::DescribeL4ProxyRulesRequest &request);
                void DescribeL4ProxyRulesAsync(const Model::DescribeL4ProxyRulesRequest& request, const DescribeL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeL4ProxyRulesOutcomeCallable DescribeL4ProxyRulesCallable(const Model::DescribeL4ProxyRulesRequest& request);

                /**
                 *This API is used to obtain a list of origin groups.
                 * @param req DescribeOriginGroupRequest
                 * @return DescribeOriginGroupOutcome
                 */
                DescribeOriginGroupOutcome DescribeOriginGroup(const Model::DescribeOriginGroupRequest &request);
                void DescribeOriginGroupAsync(const Model::DescribeOriginGroupRequest& request, const DescribeOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginGroupOutcomeCallable DescribeOriginGroupCallable(const Model::DescribeOriginGroupRequest& request);

                /**
                 *This API is used to query the origin protection configuration.
                 * @param req DescribeOriginProtectionRequest
                 * @return DescribeOriginProtectionOutcome
                 */
                DescribeOriginProtectionOutcome DescribeOriginProtection(const Model::DescribeOriginProtectionRequest &request);
                void DescribeOriginProtectionAsync(const Model::DescribeOriginProtectionRequest& request, const DescribeOriginProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOriginProtectionOutcomeCallable DescribeOriginProtectionCallable(const Model::DescribeOriginProtectionRequest& request);

                /**
                 *This API is used to query the time sequence traffic data of the monitoring category in L7. This API is to be discarded. Please use the API <a href="https://intl.cloud.tencent.com/document/product/1552/80648?from_cn_redirect=1">DescribeTimingL7AnalysisData</a>.
                 * @param req DescribeOverviewL7DataRequest
                 * @return DescribeOverviewL7DataOutcome
                 */
                DescribeOverviewL7DataOutcome DescribeOverviewL7Data(const Model::DescribeOverviewL7DataRequest &request);
                void DescribeOverviewL7DataAsync(const Model::DescribeOverviewL7DataRequest& request, const DescribeOverviewL7DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOverviewL7DataOutcomeCallable DescribeOverviewL7DataCallable(const Model::DescribeOverviewL7DataRequest& request);

                /**
                 *DescribePrefetchTasks is used to query the submission history and execution progress of preheating tasks. This interface can be used to query the tasks submitted by the CreatePrefetchTasks interface.
                 * @param req DescribePrefetchTasksRequest
                 * @return DescribePrefetchTasksOutcome
                 */
                DescribePrefetchTasksOutcome DescribePrefetchTasks(const Model::DescribePrefetchTasksRequest &request);
                void DescribePrefetchTasksAsync(const Model::DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePrefetchTasksOutcomeCallable DescribePrefetchTasksCallable(const Model::DescribePrefetchTasksRequest& request);

                /**
                 *DescribePurgeTasks is used to query the submitted URL refreshing and directory refreshing records and execution progress. This interface can be used to query the tasks submitted by the CreatePurgeTasks API.
                 * @param req DescribePurgeTasksRequest
                 * @return DescribePurgeTasksOutcome
                 */
                DescribePurgeTasksOutcome DescribePurgeTasks(const Model::DescribePurgeTasksRequest &request);
                void DescribePurgeTasksAsync(const Model::DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePurgeTasksOutcomeCallable DescribePurgeTasksCallable(const Model::DescribePurgeTasksRequest& request);

                /**
                 *This API is used to query the real-time log delivery task list.
                 * @param req DescribeRealtimeLogDeliveryTasksRequest
                 * @return DescribeRealtimeLogDeliveryTasksOutcome
                 */
                DescribeRealtimeLogDeliveryTasksOutcome DescribeRealtimeLogDeliveryTasks(const Model::DescribeRealtimeLogDeliveryTasksRequest &request);
                void DescribeRealtimeLogDeliveryTasksAsync(const Model::DescribeRealtimeLogDeliveryTasksRequest& request, const DescribeRealtimeLogDeliveryTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRealtimeLogDeliveryTasksOutcomeCallable DescribeRealtimeLogDeliveryTasksCallable(const Model::DescribeRealtimeLogDeliveryTasksRequest& request);

                /**
                 *This API is used to query the rules in the rule engine.
                 * @param req DescribeRulesRequest
                 * @return DescribeRulesOutcome
                 */
                DescribeRulesOutcome DescribeRules(const Model::DescribeRulesRequest &request);
                void DescribeRulesAsync(const Model::DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesOutcomeCallable DescribeRulesCallable(const Model::DescribeRulesRequest& request);

                /**
                 *This API is used to return the list of the settings of the rule engine that can be used for request match and their detailed recommended configuration information.
                 * @param req DescribeRulesSettingRequest
                 * @return DescribeRulesSettingOutcome
                 */
                DescribeRulesSettingOutcome DescribeRulesSetting(const Model::DescribeRulesSettingRequest &request);
                void DescribeRulesSettingAsync(const Model::DescribeRulesSettingRequest& request, const DescribeRulesSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRulesSettingOutcomeCallable DescribeRulesSettingCallable(const Model::DescribeRulesSettingRequest& request);

                /**
                 *This API is used to query the configuration information of a security IP group, including the ID, name, and content of the security IP group.
                 * @param req DescribeSecurityIPGroupRequest
                 * @return DescribeSecurityIPGroupOutcome
                 */
                DescribeSecurityIPGroupOutcome DescribeSecurityIPGroup(const Model::DescribeSecurityIPGroupRequest &request);
                void DescribeSecurityIPGroupAsync(const Model::DescribeSecurityIPGroupRequest& request, const DescribeSecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityIPGroupOutcomeCallable DescribeSecurityIPGroupCallable(const Model::DescribeSecurityIPGroupRequest& request);

                /**
                 *The API is deprecated and will be discontinued on June 30, 2024. Please use the API [DescribeSecurityIPGroup
](https://intl.cloud.tencent.com/document/product/1552/105866?from_cn_redirect=1).

This API is used to query the configuration information of an IP group, including the IP group name, IP group content, and the site the IP group belongs to.
                 * @param req DescribeSecurityIPGroupInfoRequest
                 * @return DescribeSecurityIPGroupInfoOutcome
                 */
                DescribeSecurityIPGroupInfoOutcome DescribeSecurityIPGroupInfo(const Model::DescribeSecurityIPGroupInfoRequest &request);
                void DescribeSecurityIPGroupInfoAsync(const Model::DescribeSecurityIPGroupInfoRequest& request, const DescribeSecurityIPGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityIPGroupInfoOutcomeCallable DescribeSecurityIPGroupInfoCallable(const Model::DescribeSecurityIPGroupInfoRequest& request);

                /**
                 *This API is used to query bindings of a policy template.
                 * @param req DescribeSecurityTemplateBindingsRequest
                 * @return DescribeSecurityTemplateBindingsOutcome
                 */
                DescribeSecurityTemplateBindingsOutcome DescribeSecurityTemplateBindings(const Model::DescribeSecurityTemplateBindingsRequest &request);
                void DescribeSecurityTemplateBindingsAsync(const Model::DescribeSecurityTemplateBindingsRequest& request, const DescribeSecurityTemplateBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSecurityTemplateBindingsOutcomeCallable DescribeSecurityTemplateBindingsCallable(const Model::DescribeSecurityTemplateBindingsRequest& request);

                /**
                 *This API is used to query the list of L4 traffic data recorded over time.
                 * @param req DescribeTimingL4DataRequest
                 * @return DescribeTimingL4DataOutcome
                 */
                DescribeTimingL4DataOutcome DescribeTimingL4Data(const Model::DescribeTimingL4DataRequest &request);
                void DescribeTimingL4DataAsync(const Model::DescribeTimingL4DataRequest& request, const DescribeTimingL4DataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL4DataOutcomeCallable DescribeTimingL4DataCallable(const Model::DescribeTimingL4DataRequest& request);

                /**
                 *This API is used to query the L7 data recorded over time.
                 * @param req DescribeTimingL7AnalysisDataRequest
                 * @return DescribeTimingL7AnalysisDataOutcome
                 */
                DescribeTimingL7AnalysisDataOutcome DescribeTimingL7AnalysisData(const Model::DescribeTimingL7AnalysisDataRequest &request);
                void DescribeTimingL7AnalysisDataAsync(const Model::DescribeTimingL7AnalysisDataRequest& request, const DescribeTimingL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7AnalysisDataOutcomeCallable DescribeTimingL7AnalysisDataCallable(const Model::DescribeTimingL7AnalysisDataRequest& request);

                /**
                 *This API is used to query the time-series L7 cached data.
                 * @param req DescribeTimingL7CacheDataRequest
                 * @return DescribeTimingL7CacheDataOutcome
                 */
                DescribeTimingL7CacheDataOutcome DescribeTimingL7CacheData(const Model::DescribeTimingL7CacheDataRequest &request);
                void DescribeTimingL7CacheDataAsync(const Model::DescribeTimingL7CacheDataRequest& request, const DescribeTimingL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTimingL7CacheDataOutcomeCallable DescribeTimingL7CacheDataCallable(const Model::DescribeTimingL7CacheDataRequest& request);

                /**
                 *This API is used to query the top-ranked L7 traffic data.
                 * @param req DescribeTopL7AnalysisDataRequest
                 * @return DescribeTopL7AnalysisDataOutcome
                 */
                DescribeTopL7AnalysisDataOutcome DescribeTopL7AnalysisData(const Model::DescribeTopL7AnalysisDataRequest &request);
                void DescribeTopL7AnalysisDataAsync(const Model::DescribeTopL7AnalysisDataRequest& request, const DescribeTopL7AnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7AnalysisDataOutcomeCallable DescribeTopL7AnalysisDataCallable(const Model::DescribeTopL7AnalysisDataRequest& request);

                /**
                 *This API is used to query the cached L7 top-ranked data.
                 * @param req DescribeTopL7CacheDataRequest
                 * @return DescribeTopL7CacheDataOutcome
                 */
                DescribeTopL7CacheDataOutcome DescribeTopL7CacheData(const Model::DescribeTopL7CacheDataRequest &request);
                void DescribeTopL7CacheDataAsync(const Model::DescribeTopL7CacheDataRequest& request, const DescribeTopL7CacheDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopL7CacheDataOutcomeCallable DescribeTopL7CacheDataCallable(const Model::DescribeTopL7CacheDataRequest& request);

                /**
                 *This API is used to query the site configuration.
                 * @param req DescribeZoneSettingRequest
                 * @return DescribeZoneSettingOutcome
                 */
                DescribeZoneSettingOutcome DescribeZoneSetting(const Model::DescribeZoneSettingRequest &request);
                void DescribeZoneSettingAsync(const Model::DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneSettingOutcomeCallable DescribeZoneSettingCallable(const Model::DescribeZoneSettingRequest& request);

                /**
                 *This API is used to query the information of sites that you have access to. You can filter sites based on different query criteria.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *To stop billing for your EdgeOne plan, you can use this interface to terminate the billing plan.
> Terminating a billing plan requires the following conditions:
    1. The plan has expired (except for the Enterprise Edition Plan);
    2. All sites under the plan have been either shut down or deleted.

> The site status can be queried through the [Query Site List](https://intl.cloud.tencent.com/document/product/1552/80713?from_cn_redirect=1) interface.
A site can be deactivated by switching the site to a closed status through the [Switch Site Status](https://intl.cloud.tencent.com/document/product/1552/80707?from_cn_redirect=1) interface.
A site can be deleted by using the [Delete Site](https://intl.cloud.tencent.com/document/product/1552/80717?from_cn_redirect=1) interface.
                 * @param req DestroyPlanRequest
                 * @return DestroyPlanOutcome
                 */
                DestroyPlanOutcome DestroyPlan(const Model::DestroyPlanRequest &request);
                void DestroyPlanAsync(const Model::DestroyPlanRequest& request, const DestroyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DestroyPlanOutcomeCallable DestroyPlanCallable(const Model::DestroyPlanRequest& request);

                /**
                 *This API is used to download L4 logs.
                 * @param req DownloadL4LogsRequest
                 * @return DownloadL4LogsOutcome
                 */
                DownloadL4LogsOutcome DownloadL4Logs(const Model::DownloadL4LogsRequest &request);
                void DownloadL4LogsAsync(const Model::DownloadL4LogsRequest& request, const DownloadL4LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL4LogsOutcomeCallable DownloadL4LogsCallable(const Model::DownloadL4LogsRequest& request);

                /**
                 *This API is used to download L7 logs.
                 * @param req DownloadL7LogsRequest
                 * @return DownloadL7LogsOutcome
                 */
                DownloadL7LogsOutcome DownloadL7Logs(const Model::DownloadL7LogsRequest &request);
                void DownloadL7LogsAsync(const Model::DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadL7LogsOutcomeCallable DownloadL7LogsCallable(const Model::DownloadL7LogsRequest& request);

                /**
                 *This API is used to verify ownership of the site.
                 * @param req IdentifyZoneRequest
                 * @return IdentifyZoneOutcome
                 */
                IdentifyZoneOutcome IdentifyZone(const Model::IdentifyZoneRequest &request);
                void IdentifyZoneAsync(const Model::IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IdentifyZoneOutcomeCallable IdentifyZoneCallable(const Model::IdentifyZoneRequest& request);

                /**
                 *When the number of sites bound to your plan, the number of rules under "Web Protection - Custom Rules - Precision Matching Policy", or the number of rules under "Web Protection - Rate Limiting - Precision Rate Limiting Module" reaches the plan's quota, you can use this interface to purchase additional quotas.
> This interface only supports the Enterprise Edition Plan.
                 * @param req IncreasePlanQuotaRequest
                 * @return IncreasePlanQuotaOutcome
                 */
                IncreasePlanQuotaOutcome IncreasePlanQuota(const Model::IncreasePlanQuotaRequest &request);
                void IncreasePlanQuotaAsync(const Model::IncreasePlanQuotaRequest& request, const IncreasePlanQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IncreasePlanQuotaOutcomeCallable IncreasePlanQuotaCallable(const Model::IncreasePlanQuotaRequest& request);

                /**
                 *This API is used to modify an accelerated domain name.
                 * @param req ModifyAccelerationDomainRequest
                 * @return ModifyAccelerationDomainOutcome
                 */
                ModifyAccelerationDomainOutcome ModifyAccelerationDomain(const Model::ModifyAccelerationDomainRequest &request);
                void ModifyAccelerationDomainAsync(const Model::ModifyAccelerationDomainRequest& request, const ModifyAccelerationDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccelerationDomainOutcomeCallable ModifyAccelerationDomainCallable(const Model::ModifyAccelerationDomainRequest& request);

                /**
                 *This API is used to batch modify the status of accelerated domains.
                 * @param req ModifyAccelerationDomainStatusesRequest
                 * @return ModifyAccelerationDomainStatusesOutcome
                 */
                ModifyAccelerationDomainStatusesOutcome ModifyAccelerationDomainStatuses(const Model::ModifyAccelerationDomainStatusesRequest &request);
                void ModifyAccelerationDomainStatusesAsync(const Model::ModifyAccelerationDomainStatusesRequest& request, const ModifyAccelerationDomainStatusesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccelerationDomainStatusesOutcomeCallable ModifyAccelerationDomainStatusesCallable(const Model::ModifyAccelerationDomainStatusesRequest& request);

                /**
                 *This API is used to modify an alias domain name.
                 * @param req ModifyAliasDomainRequest
                 * @return ModifyAliasDomainOutcome
                 */
                ModifyAliasDomainOutcome ModifyAliasDomain(const Model::ModifyAliasDomainRequest &request);
                void ModifyAliasDomainAsync(const Model::ModifyAliasDomainRequest& request, const ModifyAliasDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAliasDomainOutcomeCallable ModifyAliasDomainCallable(const Model::ModifyAliasDomainRequest& request);

                /**
                 *This API is used to modify the status of an alias domain name.
                 * @param req ModifyAliasDomainStatusRequest
                 * @return ModifyAliasDomainStatusOutcome
                 */
                ModifyAliasDomainStatusOutcome ModifyAliasDomainStatus(const Model::ModifyAliasDomainStatusRequest &request);
                void ModifyAliasDomainStatusAsync(const Model::ModifyAliasDomainStatusRequest& request, const ModifyAliasDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAliasDomainStatusOutcomeCallable ModifyAliasDomainStatusCallable(const Model::ModifyAliasDomainStatusRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [ModifyL4Proxy
] (https://intl.cloud.tencent.com/document/product/1552/103411?from_cn_redirect=1).
                 * @param req ModifyApplicationProxyRequest
                 * @return ModifyApplicationProxyOutcome
                 */
                ModifyApplicationProxyOutcome ModifyApplicationProxy(const Model::ModifyApplicationProxyRequest &request);
                void ModifyApplicationProxyAsync(const Model::ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyOutcomeCallable ModifyApplicationProxyCallable(const Model::ModifyApplicationProxyRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [ModifyL4ProxyRules] (https://intl.cloud.tencent.com/document/product/1552/103410?from_cn_redirect=1).
                 * @param req ModifyApplicationProxyRuleRequest
                 * @return ModifyApplicationProxyRuleOutcome
                 */
                ModifyApplicationProxyRuleOutcome ModifyApplicationProxyRule(const Model::ModifyApplicationProxyRuleRequest &request);
                void ModifyApplicationProxyRuleAsync(const Model::ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleOutcomeCallable ModifyApplicationProxyRuleCallable(const Model::ModifyApplicationProxyRuleRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [ModifyL4ProxyRulesStatus
] (https://intl.cloud.tencent.com/document/product/1552/103409?from_cn_redirect=1).
                 * @param req ModifyApplicationProxyRuleStatusRequest
                 * @return ModifyApplicationProxyRuleStatusOutcome
                 */
                ModifyApplicationProxyRuleStatusOutcome ModifyApplicationProxyRuleStatus(const Model::ModifyApplicationProxyRuleStatusRequest &request);
                void ModifyApplicationProxyRuleStatusAsync(const Model::ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyRuleStatusOutcomeCallable ModifyApplicationProxyRuleStatusCallable(const Model::ModifyApplicationProxyRuleStatusRequest& request);

                /**
                 *This API is on an earlier version. If you want to call it, please switch to the latest version. For details, see [ModifyL4ProxyStatus] (https://intl.cloud.tencent.com/document/product/1552/103408?from_cn_redirect=1).
                 * @param req ModifyApplicationProxyStatusRequest
                 * @return ModifyApplicationProxyStatusOutcome
                 */
                ModifyApplicationProxyStatusOutcome ModifyApplicationProxyStatus(const Model::ModifyApplicationProxyStatusRequest &request);
                void ModifyApplicationProxyStatusAsync(const Model::ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationProxyStatusOutcomeCallable ModifyApplicationProxyStatusCallable(const Model::ModifyApplicationProxyStatusRequest& request);

                /**
                 *This API is used to modify a custom response page.
                 * @param req ModifyCustomErrorPageRequest
                 * @return ModifyCustomErrorPageOutcome
                 */
                ModifyCustomErrorPageOutcome ModifyCustomErrorPage(const Model::ModifyCustomErrorPageRequest &request);
                void ModifyCustomErrorPageAsync(const Model::ModifyCustomErrorPageRequest& request, const ModifyCustomErrorPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomErrorPageOutcomeCallable ModifyCustomErrorPageCallable(const Model::ModifyCustomErrorPageRequest& request);

                /**
                 *This API is used to configure the certificate of a site. You can use your own certificate or [apply for a free certificate](https://intl.cloud.tencent.com/document/product/1552/90437?from_cn_redirect=1).
To use an external certificate, upload the certificate to [SSL Certificates Console](https://console.cloud.tencent.com/certoview) first, and then input the certificate ID in this API. For details, see [Deploying Own Certificates to EdgeOne Domains](https://intl.cloud.tencent.com/document/product/1552/88874?from_cn_redirect=1).
 
                 * @param req ModifyHostsCertificateRequest
                 * @return ModifyHostsCertificateOutcome
                 */
                ModifyHostsCertificateOutcome ModifyHostsCertificate(const Model::ModifyHostsCertificateRequest &request);
                void ModifyHostsCertificateAsync(const Model::ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyHostsCertificateOutcomeCallable ModifyHostsCertificateCallable(const Model::ModifyHostsCertificateRequest& request);

                /**
                 *This API is used to modify the configuration of a Layer 4 proxy instance.
                 * @param req ModifyL4ProxyRequest
                 * @return ModifyL4ProxyOutcome
                 */
                ModifyL4ProxyOutcome ModifyL4Proxy(const Model::ModifyL4ProxyRequest &request);
                void ModifyL4ProxyAsync(const Model::ModifyL4ProxyRequest& request, const ModifyL4ProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyOutcomeCallable ModifyL4ProxyCallable(const Model::ModifyL4ProxyRequest& request);

                /**
                 *This API is used to modify Layer 4 proxy forwarding rules, supporting both individual and batch modification.
                 * @param req ModifyL4ProxyRulesRequest
                 * @return ModifyL4ProxyRulesOutcome
                 */
                ModifyL4ProxyRulesOutcome ModifyL4ProxyRules(const Model::ModifyL4ProxyRulesRequest &request);
                void ModifyL4ProxyRulesAsync(const Model::ModifyL4ProxyRulesRequest& request, const ModifyL4ProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyRulesOutcomeCallable ModifyL4ProxyRulesCallable(const Model::ModifyL4ProxyRulesRequest& request);

                /**
                 *This API is used to start or stop Layer 4 proxy forwarding rules, supporting both individual and batch operation.
                 * @param req ModifyL4ProxyRulesStatusRequest
                 * @return ModifyL4ProxyRulesStatusOutcome
                 */
                ModifyL4ProxyRulesStatusOutcome ModifyL4ProxyRulesStatus(const Model::ModifyL4ProxyRulesStatusRequest &request);
                void ModifyL4ProxyRulesStatusAsync(const Model::ModifyL4ProxyRulesStatusRequest& request, const ModifyL4ProxyRulesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyRulesStatusOutcomeCallable ModifyL4ProxyRulesStatusCallable(const Model::ModifyL4ProxyRulesStatusRequest& request);

                /**
                 *This API is used to enable or disable a Layer 4 proxy instance.
                 * @param req ModifyL4ProxyStatusRequest
                 * @return ModifyL4ProxyStatusOutcome
                 */
                ModifyL4ProxyStatusOutcome ModifyL4ProxyStatus(const Model::ModifyL4ProxyStatusRequest &request);
                void ModifyL4ProxyStatusAsync(const Model::ModifyL4ProxyStatusRequest& request, const ModifyL4ProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyL4ProxyStatusOutcomeCallable ModifyL4ProxyStatusCallable(const Model::ModifyL4ProxyStatusRequest& request);

                /**
                 *This API is used to modify the configuration of an origin group. The original configuration will be overwritten. 
                 * @param req ModifyOriginGroupRequest
                 * @return ModifyOriginGroupOutcome
                 */
                ModifyOriginGroupOutcome ModifyOriginGroup(const Model::ModifyOriginGroupRequest &request);
                void ModifyOriginGroupAsync(const Model::ModifyOriginGroupRequest& request, const ModifyOriginGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyOriginGroupOutcomeCallable ModifyOriginGroupCallable(const Model::ModifyOriginGroupRequest& request);

                /**
                 *Modify the plan settings. Currently, only the auto-renewal switch of prepaid plans can be modified.
                 * @param req ModifyPlanRequest
                 * @return ModifyPlanOutcome
                 */
                ModifyPlanOutcome ModifyPlan(const Model::ModifyPlanRequest &request);
                void ModifyPlanAsync(const Model::ModifyPlanRequest& request, const ModifyPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPlanOutcomeCallable ModifyPlanCallable(const Model::ModifyPlanRequest& request);

                /**
                 *This API is used to modify the real-time log delivery task configuration. This API has the following restrictions:<li>Does not support modifying the destination type of the real-time log delivery task (TaskType);</li><li>Does not support modifying the data delivery type (LogType)</li><li>Does not support modifying the data delivery area (Area)</li><li>Does not support modifying the detailed destination configuration, such as log set and log topic, when the destination of the original real-time log delivery task is Tencent Cloud CLS.</li>
                 * @param req ModifyRealtimeLogDeliveryTaskRequest
                 * @return ModifyRealtimeLogDeliveryTaskOutcome
                 */
                ModifyRealtimeLogDeliveryTaskOutcome ModifyRealtimeLogDeliveryTask(const Model::ModifyRealtimeLogDeliveryTaskRequest &request);
                void ModifyRealtimeLogDeliveryTaskAsync(const Model::ModifyRealtimeLogDeliveryTaskRequest& request, const ModifyRealtimeLogDeliveryTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRealtimeLogDeliveryTaskOutcomeCallable ModifyRealtimeLogDeliveryTaskCallable(const Model::ModifyRealtimeLogDeliveryTaskRequest& request);

                /**
                 *This API is used to modify a rule in the rule engine.
                 * @param req ModifyRuleRequest
                 * @return ModifyRuleOutcome
                 */
                ModifyRuleOutcome ModifyRule(const Model::ModifyRuleRequest &request);
                void ModifyRuleAsync(const Model::ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyRuleOutcomeCallable ModifyRuleCallable(const Model::ModifyRuleRequest& request);

                /**
                 *This API is used to modify a security IP group.
                 * @param req ModifySecurityIPGroupRequest
                 * @return ModifySecurityIPGroupOutcome
                 */
                ModifySecurityIPGroupOutcome ModifySecurityIPGroup(const Model::ModifySecurityIPGroupRequest &request);
                void ModifySecurityIPGroupAsync(const Model::ModifySecurityIPGroupRequest& request, const ModifySecurityIPGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityIPGroupOutcomeCallable ModifySecurityIPGroupCallable(const Model::ModifySecurityIPGroupRequest& request);

                /**
                 *This API is used to modify the web and bot security configurations.
                 * @param req ModifySecurityPolicyRequest
                 * @return ModifySecurityPolicyOutcome
                 */
                ModifySecurityPolicyOutcome ModifySecurityPolicy(const Model::ModifySecurityPolicyRequest &request);
                void ModifySecurityPolicyAsync(const Model::ModifySecurityPolicyRequest& request, const ModifySecurityPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySecurityPolicyOutcomeCallable ModifySecurityPolicyCallable(const Model::ModifySecurityPolicyRequest& request);

                /**
                 *This API is used to modify a site.
                 * @param req ModifyZoneRequest
                 * @return ModifyZoneOutcome
                 */
                ModifyZoneOutcome ModifyZone(const Model::ModifyZoneRequest &request);
                void ModifyZoneAsync(const Model::ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneOutcomeCallable ModifyZoneCallable(const Model::ModifyZoneRequest& request);

                /**
                 *This API is used to modify the site configuration.
                 * @param req ModifyZoneSettingRequest
                 * @return ModifyZoneSettingOutcome
                 */
                ModifyZoneSettingOutcome ModifyZoneSetting(const Model::ModifyZoneSettingRequest &request);
                void ModifyZoneSettingAsync(const Model::ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneSettingOutcomeCallable ModifyZoneSettingCallable(const Model::ModifyZoneSettingRequest& request);

                /**
                 *This API is used to change the site status.
                 * @param req ModifyZoneStatusRequest
                 * @return ModifyZoneStatusOutcome
                 */
                ModifyZoneStatusOutcome ModifyZoneStatus(const Model::ModifyZoneStatusRequest &request);
                void ModifyZoneStatusAsync(const Model::ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyZoneStatusOutcomeCallable ModifyZoneStatusCallable(const Model::ModifyZoneStatusRequest& request);

                /**
                 *When your plan needs to be extended, you can use this interface to renew it. Plan renewal is only supported for the Personal, Basic, and Standard Editions.
> For cost details, refer to [Plan Fees](https://intl.cloud.tencent.com/document/product/1552/94158?from_cn_redirect=1).
                 * @param req RenewPlanRequest
                 * @return RenewPlanOutcome
                 */
                RenewPlanOutcome RenewPlan(const Model::RenewPlanRequest &request);
                void RenewPlanAsync(const Model::RenewPlanRequest& request, const RenewPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RenewPlanOutcomeCallable RenewPlanCallable(const Model::RenewPlanRequest& request);

                /**
                 *When you need features available only in higher-tier plans, you can upgrade your plan through this interface. Upgrades are only supported for Personal and Basic Edition Plans.
> For differences between EdgeOne billing plans, refer to [Comparison of EdgeOne Plans](https://intl.cloud.tencent.com/document/product/1552/94165?from_cn_redirect=1).
For EdgeOne plan upgrade rules and pricing details, refer to [EdgeOne Plan Upgrade Guide](https://intl.cloud.tencent.com/document/product/1552/95291?from_cn_redirect=1).
If your plan needs to upgrade to the Enterprise Edition, [Contact Us](https://intl.cloud.tencent.com/online?from_cn_redirect=1-service).
                 * @param req UpgradePlanRequest
                 * @return UpgradePlanOutcome
                 */
                UpgradePlanOutcome UpgradePlan(const Model::UpgradePlanRequest &request);
                void UpgradePlanAsync(const Model::UpgradePlanRequest& request, const UpgradePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradePlanOutcomeCallable UpgradePlanCallable(const Model::UpgradePlanRequest& request);

                /**
                 *This API is used to verify your ownership of a site or domain name. It's required in the CNAME access mode. After a site is verified, you don't need to verify the ownership again for domain names added to it in the future. For details, see [Ownership Verification](https://intl.cloud.tencent.com/document/product/1552/70789?from_cn_redirect=1).

For sites connected via the NS, you can query whether the NS is successfully switched through this API. For details, see [Modifying DNS Servers](https://intl.cloud.tencent.com/document/product/1552/90452?from_cn_redirect=1).
                 * @param req VerifyOwnershipRequest
                 * @return VerifyOwnershipOutcome
                 */
                VerifyOwnershipOutcome VerifyOwnership(const Model::VerifyOwnershipRequest &request);
                void VerifyOwnershipAsync(const Model::VerifyOwnershipRequest& request, const VerifyOwnershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyOwnershipOutcomeCallable VerifyOwnershipCallable(const Model::VerifyOwnershipRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_TEOCLIENT_H_
