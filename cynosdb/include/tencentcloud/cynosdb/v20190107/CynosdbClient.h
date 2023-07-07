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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_CYNOSDBCLIENT_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_CYNOSDBCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cynosdb/v20190107/model/ActivateInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ActivateInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/AddClusterSlaveZoneRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/AddClusterSlaveZoneResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/AddInstancesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/AddInstancesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/BindClusterResourcePackagesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/BindClusterResourcePackagesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CloseAuditServiceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CloseAuditServiceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CloseClusterPasswordComplexityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CloseClusterPasswordComplexityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CloseWanRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CloseWanResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CopyClusterPasswordComplexityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CopyClusterPasswordComplexityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateAccountsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateAccountsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateAuditRuleTemplateRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateAuditRuleTemplateResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateBackupRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateBackupResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClusterDatabaseRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClusterDatabaseResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClustersRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateClustersResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateParamTemplateRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateParamTemplateResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateResourcePackageRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateResourcePackageResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteAccountsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteAccountsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteAuditRuleTemplatesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteAuditRuleTemplatesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteBackupRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteBackupResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteClusterDatabaseRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteClusterDatabaseResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteParamTemplateRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DeleteParamTemplateResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountPrivilegesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountPrivilegesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAccountsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAuditRuleTemplatesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAuditRuleTemplatesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAuditRuleWithInstanceIdsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeAuditRuleWithInstanceIdsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupConfigResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupDownloadUrlRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupDownloadUrlResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupListRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBackupListResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogDownloadUrlRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogDownloadUrlResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogSaveDaysRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogSaveDaysResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeBinlogsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailDatabasesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterDetailDatabasesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterInstanceGrpsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterInstanceGrpsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterParamsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterParamsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterPasswordComplexityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClusterPasswordComplexityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClustersRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeClustersResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeDBSecurityGroupsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeDBSecurityGroupsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeFlowRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeFlowResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceDetailRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceDetailResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceErrorLogsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceErrorLogsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceParamsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceParamsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSlowQueriesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSlowQueriesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstanceSpecsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstancesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeInstancesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeMaintainPeriodResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeParamTemplateDetailRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeParamTemplateDetailResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeParamTemplatesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeParamTemplatesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeProjectSecurityGroupsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeProjectSecurityGroupsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageDetailRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageDetailResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageListRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageListResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageSaleSpecRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcePackageSaleSpecResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcesByDealNameRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeResourcesByDealNameResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeRangeResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeRollbackTimeValidityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeZonesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/DescribeZonesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ExportInstanceErrorLogsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ExportInstanceErrorLogsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ExportInstanceSlowQueriesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ExportInstanceSlowQueriesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/InquirePriceCreateRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/InquirePriceCreateResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/InquirePriceRenewRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/InquirePriceRenewResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateClusterRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateClusterResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/IsolateInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountDescriptionRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountDescriptionResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountHostRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountHostResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountPrivilegesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAccountPrivilegesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAuditRuleTemplatesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAuditRuleTemplatesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAuditServiceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyAuditServiceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupConfigResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupNameRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBackupNameResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBinlogSaveDaysRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyBinlogSaveDaysResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterDatabaseRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterDatabaseResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterNameRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterNameResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterParamRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterParamResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterPasswordComplexityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterPasswordComplexityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterSlaveZoneRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyClusterSlaveZoneResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyDBInstanceSecurityGroupsRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyDBInstanceSecurityGroupsResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceNameRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceNameResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceParamRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyInstanceParamResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyMaintainPeriodConfigResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamTemplateRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyParamTemplateResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyResourcePackageClustersRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyResourcePackageClustersResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyResourcePackageNameRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyResourcePackageNameResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyVipVportRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ModifyVipVportResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineClusterRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineClusterResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OfflineInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenAuditServiceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenAuditServiceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenClusterPasswordComplexityRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenClusterPasswordComplexityResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenReadOnlyInstanceExclusiveAccessRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenReadOnlyInstanceExclusiveAccessResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenWanRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/OpenWanResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/PauseServerlessRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/PauseServerlessResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/RefundResourcePackageRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/RefundResourcePackageResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/RemoveClusterSlaveZoneRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/RemoveClusterSlaveZoneResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ResetAccountPasswordRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ResetAccountPasswordResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/RestartInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/RestartInstanceResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/ResumeServerlessRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/ResumeServerlessResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SearchClusterDatabasesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SearchClusterDatabasesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SearchClusterTablesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SearchClusterTablesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SetRenewFlagRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SetRenewFlagResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterVpcRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterVpcResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterZoneRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchClusterZoneResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchProxyVpcRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/SwitchProxyVpcResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/UnbindClusterResourcePackagesRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/UnbindClusterResourcePackagesResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeClusterVersionRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeClusterVersionResponse.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeInstanceRequest.h>
#include <tencentcloud/cynosdb/v20190107/model/UpgradeInstanceResponse.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            class CynosdbClient : public AbstractClient
            {
            public:
                CynosdbClient(const Credential &credential, const std::string &region);
                CynosdbClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateInstanceResponse> ActivateInstanceOutcome;
                typedef std::future<ActivateInstanceOutcome> ActivateInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ActivateInstanceRequest&, ActivateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::AddClusterSlaveZoneResponse> AddClusterSlaveZoneOutcome;
                typedef std::future<AddClusterSlaveZoneOutcome> AddClusterSlaveZoneOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::AddClusterSlaveZoneRequest&, AddClusterSlaveZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddClusterSlaveZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::AddInstancesResponse> AddInstancesOutcome;
                typedef std::future<AddInstancesOutcome> AddInstancesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::AddInstancesRequest&, AddInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::BindClusterResourcePackagesResponse> BindClusterResourcePackagesOutcome;
                typedef std::future<BindClusterResourcePackagesOutcome> BindClusterResourcePackagesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::BindClusterResourcePackagesRequest&, BindClusterResourcePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindClusterResourcePackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseAuditServiceResponse> CloseAuditServiceOutcome;
                typedef std::future<CloseAuditServiceOutcome> CloseAuditServiceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CloseAuditServiceRequest&, CloseAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseClusterPasswordComplexityResponse> CloseClusterPasswordComplexityOutcome;
                typedef std::future<CloseClusterPasswordComplexityOutcome> CloseClusterPasswordComplexityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CloseClusterPasswordComplexityRequest&, CloseClusterPasswordComplexityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseClusterPasswordComplexityAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseWanResponse> CloseWanOutcome;
                typedef std::future<CloseWanOutcome> CloseWanOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CloseWanRequest&, CloseWanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseWanAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyClusterPasswordComplexityResponse> CopyClusterPasswordComplexityOutcome;
                typedef std::future<CopyClusterPasswordComplexityOutcome> CopyClusterPasswordComplexityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CopyClusterPasswordComplexityRequest&, CopyClusterPasswordComplexityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyClusterPasswordComplexityAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAccountsResponse> CreateAccountsOutcome;
                typedef std::future<CreateAccountsOutcome> CreateAccountsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateAccountsRequest&, CreateAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAuditRuleTemplateResponse> CreateAuditRuleTemplateOutcome;
                typedef std::future<CreateAuditRuleTemplateOutcome> CreateAuditRuleTemplateOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateAuditRuleTemplateRequest&, CreateAuditRuleTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAuditRuleTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBackupResponse> CreateBackupOutcome;
                typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateBackupRequest&, CreateBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClusterDatabaseResponse> CreateClusterDatabaseOutcome;
                typedef std::future<CreateClusterDatabaseOutcome> CreateClusterDatabaseOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateClusterDatabaseRequest&, CreateClusterDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClusterDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateClustersResponse> CreateClustersOutcome;
                typedef std::future<CreateClustersOutcome> CreateClustersOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateClustersRequest&, CreateClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateParamTemplateResponse> CreateParamTemplateOutcome;
                typedef std::future<CreateParamTemplateOutcome> CreateParamTemplateOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateParamTemplateRequest&, CreateParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateResourcePackageResponse> CreateResourcePackageOutcome;
                typedef std::future<CreateResourcePackageOutcome> CreateResourcePackageOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::CreateResourcePackageRequest&, CreateResourcePackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateResourcePackageAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAccountsResponse> DeleteAccountsOutcome;
                typedef std::future<DeleteAccountsOutcome> DeleteAccountsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DeleteAccountsRequest&, DeleteAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAuditRuleTemplatesResponse> DeleteAuditRuleTemplatesOutcome;
                typedef std::future<DeleteAuditRuleTemplatesOutcome> DeleteAuditRuleTemplatesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DeleteAuditRuleTemplatesRequest&, DeleteAuditRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAuditRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteBackupResponse> DeleteBackupOutcome;
                typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DeleteBackupRequest&, DeleteBackupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteBackupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteClusterDatabaseResponse> DeleteClusterDatabaseOutcome;
                typedef std::future<DeleteClusterDatabaseOutcome> DeleteClusterDatabaseOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DeleteClusterDatabaseRequest&, DeleteClusterDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteClusterDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteParamTemplateResponse> DeleteParamTemplateOutcome;
                typedef std::future<DeleteParamTemplateOutcome> DeleteParamTemplateOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DeleteParamTemplateRequest&, DeleteParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountPrivilegesResponse> DescribeAccountPrivilegesOutcome;
                typedef std::future<DescribeAccountPrivilegesOutcome> DescribeAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeAccountPrivilegesRequest&, DescribeAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountsResponse> DescribeAccountsOutcome;
                typedef std::future<DescribeAccountsOutcome> DescribeAccountsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeAccountsRequest&, DescribeAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditRuleTemplatesResponse> DescribeAuditRuleTemplatesOutcome;
                typedef std::future<DescribeAuditRuleTemplatesOutcome> DescribeAuditRuleTemplatesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeAuditRuleTemplatesRequest&, DescribeAuditRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAuditRuleWithInstanceIdsResponse> DescribeAuditRuleWithInstanceIdsOutcome;
                typedef std::future<DescribeAuditRuleWithInstanceIdsOutcome> DescribeAuditRuleWithInstanceIdsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeAuditRuleWithInstanceIdsRequest&, DescribeAuditRuleWithInstanceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAuditRuleWithInstanceIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupConfigResponse> DescribeBackupConfigOutcome;
                typedef std::future<DescribeBackupConfigOutcome> DescribeBackupConfigOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBackupConfigRequest&, DescribeBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupDownloadUrlResponse> DescribeBackupDownloadUrlOutcome;
                typedef std::future<DescribeBackupDownloadUrlOutcome> DescribeBackupDownloadUrlOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBackupDownloadUrlRequest&, DescribeBackupDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBackupListResponse> DescribeBackupListOutcome;
                typedef std::future<DescribeBackupListOutcome> DescribeBackupListOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBackupListRequest&, DescribeBackupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBackupListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBinlogDownloadUrlResponse> DescribeBinlogDownloadUrlOutcome;
                typedef std::future<DescribeBinlogDownloadUrlOutcome> DescribeBinlogDownloadUrlOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBinlogDownloadUrlRequest&, DescribeBinlogDownloadUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogDownloadUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBinlogSaveDaysResponse> DescribeBinlogSaveDaysOutcome;
                typedef std::future<DescribeBinlogSaveDaysOutcome> DescribeBinlogSaveDaysOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBinlogSaveDaysRequest&, DescribeBinlogSaveDaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogSaveDaysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBinlogsResponse> DescribeBinlogsOutcome;
                typedef std::future<DescribeBinlogsOutcome> DescribeBinlogsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeBinlogsRequest&, DescribeBinlogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBinlogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailResponse> DescribeClusterDetailOutcome;
                typedef std::future<DescribeClusterDetailOutcome> DescribeClusterDetailOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterDetailRequest&, DescribeClusterDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterDetailDatabasesResponse> DescribeClusterDetailDatabasesOutcome;
                typedef std::future<DescribeClusterDetailDatabasesOutcome> DescribeClusterDetailDatabasesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterDetailDatabasesRequest&, DescribeClusterDetailDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterDetailDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterInstanceGrpsResponse> DescribeClusterInstanceGrpsOutcome;
                typedef std::future<DescribeClusterInstanceGrpsOutcome> DescribeClusterInstanceGrpsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterInstanceGrpsRequest&, DescribeClusterInstanceGrpsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterInstanceGrpsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterParamsResponse> DescribeClusterParamsOutcome;
                typedef std::future<DescribeClusterParamsOutcome> DescribeClusterParamsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterParamsRequest&, DescribeClusterParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPasswordComplexityResponse> DescribeClusterPasswordComplexityOutcome;
                typedef std::future<DescribeClusterPasswordComplexityOutcome> DescribeClusterPasswordComplexityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClusterPasswordComplexityRequest&, DescribeClusterPasswordComplexityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPasswordComplexityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClustersResponse> DescribeClustersOutcome;
                typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeClustersRequest&, DescribeClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDBSecurityGroupsResponse> DescribeDBSecurityGroupsOutcome;
                typedef std::future<DescribeDBSecurityGroupsOutcome> DescribeDBSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeDBSecurityGroupsRequest&, DescribeDBSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDBSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFlowResponse> DescribeFlowOutcome;
                typedef std::future<DescribeFlowOutcome> DescribeFlowOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeFlowRequest&, DescribeFlowOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFlowAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceDetailResponse> DescribeInstanceDetailOutcome;
                typedef std::future<DescribeInstanceDetailOutcome> DescribeInstanceDetailOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceDetailRequest&, DescribeInstanceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceErrorLogsResponse> DescribeInstanceErrorLogsOutcome;
                typedef std::future<DescribeInstanceErrorLogsOutcome> DescribeInstanceErrorLogsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceErrorLogsRequest&, DescribeInstanceErrorLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceErrorLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceParamsResponse> DescribeInstanceParamsOutcome;
                typedef std::future<DescribeInstanceParamsOutcome> DescribeInstanceParamsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceParamsRequest&, DescribeInstanceParamsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceParamsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSlowQueriesResponse> DescribeInstanceSlowQueriesOutcome;
                typedef std::future<DescribeInstanceSlowQueriesOutcome> DescribeInstanceSlowQueriesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceSlowQueriesRequest&, DescribeInstanceSlowQueriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSlowQueriesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceSpecsResponse> DescribeInstanceSpecsOutcome;
                typedef std::future<DescribeInstanceSpecsOutcome> DescribeInstanceSpecsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstanceSpecsRequest&, DescribeInstanceSpecsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceSpecsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstancesResponse> DescribeInstancesOutcome;
                typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeInstancesRequest&, DescribeInstancesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstancesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMaintainPeriodResponse> DescribeMaintainPeriodOutcome;
                typedef std::future<DescribeMaintainPeriodOutcome> DescribeMaintainPeriodOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeMaintainPeriodRequest&, DescribeMaintainPeriodOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMaintainPeriodAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamTemplateDetailResponse> DescribeParamTemplateDetailOutcome;
                typedef std::future<DescribeParamTemplateDetailOutcome> DescribeParamTemplateDetailOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeParamTemplateDetailRequest&, DescribeParamTemplateDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplateDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeParamTemplatesResponse> DescribeParamTemplatesOutcome;
                typedef std::future<DescribeParamTemplatesOutcome> DescribeParamTemplatesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeParamTemplatesRequest&, DescribeParamTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeParamTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectSecurityGroupsResponse> DescribeProjectSecurityGroupsOutcome;
                typedef std::future<DescribeProjectSecurityGroupsOutcome> DescribeProjectSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeProjectSecurityGroupsRequest&, DescribeProjectSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcePackageDetailResponse> DescribeResourcePackageDetailOutcome;
                typedef std::future<DescribeResourcePackageDetailOutcome> DescribeResourcePackageDetailOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeResourcePackageDetailRequest&, DescribeResourcePackageDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcePackageDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcePackageListResponse> DescribeResourcePackageListOutcome;
                typedef std::future<DescribeResourcePackageListOutcome> DescribeResourcePackageListOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeResourcePackageListRequest&, DescribeResourcePackageListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcePackageListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcePackageSaleSpecResponse> DescribeResourcePackageSaleSpecOutcome;
                typedef std::future<DescribeResourcePackageSaleSpecOutcome> DescribeResourcePackageSaleSpecOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeResourcePackageSaleSpecRequest&, DescribeResourcePackageSaleSpecOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcePackageSaleSpecAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByDealNameResponse> DescribeResourcesByDealNameOutcome;
                typedef std::future<DescribeResourcesByDealNameOutcome> DescribeResourcesByDealNameOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeResourcesByDealNameRequest&, DescribeResourcesByDealNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByDealNameAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeRangeResponse> DescribeRollbackTimeRangeOutcome;
                typedef std::future<DescribeRollbackTimeRangeOutcome> DescribeRollbackTimeRangeOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeRollbackTimeRangeRequest&, DescribeRollbackTimeRangeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeRangeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRollbackTimeValidityResponse> DescribeRollbackTimeValidityOutcome;
                typedef std::future<DescribeRollbackTimeValidityOutcome> DescribeRollbackTimeValidityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeRollbackTimeValidityRequest&, DescribeRollbackTimeValidityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRollbackTimeValidityAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZonesResponse> DescribeZonesOutcome;
                typedef std::future<DescribeZonesOutcome> DescribeZonesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::DescribeZonesRequest&, DescribeZonesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZonesAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportInstanceErrorLogsResponse> ExportInstanceErrorLogsOutcome;
                typedef std::future<ExportInstanceErrorLogsOutcome> ExportInstanceErrorLogsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ExportInstanceErrorLogsRequest&, ExportInstanceErrorLogsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportInstanceErrorLogsAsyncHandler;
                typedef Outcome<Core::Error, Model::ExportInstanceSlowQueriesResponse> ExportInstanceSlowQueriesOutcome;
                typedef std::future<ExportInstanceSlowQueriesOutcome> ExportInstanceSlowQueriesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ExportInstanceSlowQueriesRequest&, ExportInstanceSlowQueriesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExportInstanceSlowQueriesAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceCreateResponse> InquirePriceCreateOutcome;
                typedef std::future<InquirePriceCreateOutcome> InquirePriceCreateOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::InquirePriceCreateRequest&, InquirePriceCreateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceCreateAsyncHandler;
                typedef Outcome<Core::Error, Model::InquirePriceRenewResponse> InquirePriceRenewOutcome;
                typedef std::future<InquirePriceRenewOutcome> InquirePriceRenewOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::InquirePriceRenewRequest&, InquirePriceRenewOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InquirePriceRenewAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateClusterResponse> IsolateClusterOutcome;
                typedef std::future<IsolateClusterOutcome> IsolateClusterOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::IsolateClusterRequest&, IsolateClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::IsolateInstanceResponse> IsolateInstanceOutcome;
                typedef std::future<IsolateInstanceOutcome> IsolateInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::IsolateInstanceRequest&, IsolateInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> IsolateInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountDescriptionResponse> ModifyAccountDescriptionOutcome;
                typedef std::future<ModifyAccountDescriptionOutcome> ModifyAccountDescriptionOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyAccountDescriptionRequest&, ModifyAccountDescriptionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountDescriptionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountHostResponse> ModifyAccountHostOutcome;
                typedef std::future<ModifyAccountHostOutcome> ModifyAccountHostOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyAccountHostRequest&, ModifyAccountHostOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountHostAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAccountPrivilegesResponse> ModifyAccountPrivilegesOutcome;
                typedef std::future<ModifyAccountPrivilegesOutcome> ModifyAccountPrivilegesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyAccountPrivilegesRequest&, ModifyAccountPrivilegesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAccountPrivilegesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditRuleTemplatesResponse> ModifyAuditRuleTemplatesOutcome;
                typedef std::future<ModifyAuditRuleTemplatesOutcome> ModifyAuditRuleTemplatesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyAuditRuleTemplatesRequest&, ModifyAuditRuleTemplatesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditRuleTemplatesAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAuditServiceResponse> ModifyAuditServiceOutcome;
                typedef std::future<ModifyAuditServiceOutcome> ModifyAuditServiceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyAuditServiceRequest&, ModifyAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupConfigResponse> ModifyBackupConfigOutcome;
                typedef std::future<ModifyBackupConfigOutcome> ModifyBackupConfigOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyBackupConfigRequest&, ModifyBackupConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBackupNameResponse> ModifyBackupNameOutcome;
                typedef std::future<ModifyBackupNameOutcome> ModifyBackupNameOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyBackupNameRequest&, ModifyBackupNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBackupNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBinlogSaveDaysResponse> ModifyBinlogSaveDaysOutcome;
                typedef std::future<ModifyBinlogSaveDaysOutcome> ModifyBinlogSaveDaysOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyBinlogSaveDaysRequest&, ModifyBinlogSaveDaysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBinlogSaveDaysAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterDatabaseResponse> ModifyClusterDatabaseOutcome;
                typedef std::future<ModifyClusterDatabaseOutcome> ModifyClusterDatabaseOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyClusterDatabaseRequest&, ModifyClusterDatabaseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterDatabaseAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterNameResponse> ModifyClusterNameOutcome;
                typedef std::future<ModifyClusterNameOutcome> ModifyClusterNameOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyClusterNameRequest&, ModifyClusterNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterParamResponse> ModifyClusterParamOutcome;
                typedef std::future<ModifyClusterParamOutcome> ModifyClusterParamOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyClusterParamRequest&, ModifyClusterParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterPasswordComplexityResponse> ModifyClusterPasswordComplexityOutcome;
                typedef std::future<ModifyClusterPasswordComplexityOutcome> ModifyClusterPasswordComplexityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyClusterPasswordComplexityRequest&, ModifyClusterPasswordComplexityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterPasswordComplexityAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyClusterSlaveZoneResponse> ModifyClusterSlaveZoneOutcome;
                typedef std::future<ModifyClusterSlaveZoneOutcome> ModifyClusterSlaveZoneOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyClusterSlaveZoneRequest&, ModifyClusterSlaveZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyClusterSlaveZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyDBInstanceSecurityGroupsResponse> ModifyDBInstanceSecurityGroupsOutcome;
                typedef std::future<ModifyDBInstanceSecurityGroupsOutcome> ModifyDBInstanceSecurityGroupsOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyDBInstanceSecurityGroupsRequest&, ModifyDBInstanceSecurityGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDBInstanceSecurityGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceNameResponse> ModifyInstanceNameOutcome;
                typedef std::future<ModifyInstanceNameOutcome> ModifyInstanceNameOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyInstanceNameRequest&, ModifyInstanceNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyInstanceParamResponse> ModifyInstanceParamOutcome;
                typedef std::future<ModifyInstanceParamOutcome> ModifyInstanceParamOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyInstanceParamRequest&, ModifyInstanceParamOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyInstanceParamAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMaintainPeriodConfigResponse> ModifyMaintainPeriodConfigOutcome;
                typedef std::future<ModifyMaintainPeriodConfigOutcome> ModifyMaintainPeriodConfigOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyMaintainPeriodConfigRequest&, ModifyMaintainPeriodConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMaintainPeriodConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyParamTemplateResponse> ModifyParamTemplateOutcome;
                typedef std::future<ModifyParamTemplateOutcome> ModifyParamTemplateOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyParamTemplateRequest&, ModifyParamTemplateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyParamTemplateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourcePackageClustersResponse> ModifyResourcePackageClustersOutcome;
                typedef std::future<ModifyResourcePackageClustersOutcome> ModifyResourcePackageClustersOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyResourcePackageClustersRequest&, ModifyResourcePackageClustersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePackageClustersAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourcePackageNameResponse> ModifyResourcePackageNameOutcome;
                typedef std::future<ModifyResourcePackageNameOutcome> ModifyResourcePackageNameOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyResourcePackageNameRequest&, ModifyResourcePackageNameOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcePackageNameAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyVipVportResponse> ModifyVipVportOutcome;
                typedef std::future<ModifyVipVportOutcome> ModifyVipVportOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ModifyVipVportRequest&, ModifyVipVportOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyVipVportAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineClusterResponse> OfflineClusterOutcome;
                typedef std::future<OfflineClusterOutcome> OfflineClusterOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OfflineClusterRequest&, OfflineClusterOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineClusterAsyncHandler;
                typedef Outcome<Core::Error, Model::OfflineInstanceResponse> OfflineInstanceOutcome;
                typedef std::future<OfflineInstanceOutcome> OfflineInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OfflineInstanceRequest&, OfflineInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OfflineInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenAuditServiceResponse> OpenAuditServiceOutcome;
                typedef std::future<OpenAuditServiceOutcome> OpenAuditServiceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OpenAuditServiceRequest&, OpenAuditServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenAuditServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenClusterPasswordComplexityResponse> OpenClusterPasswordComplexityOutcome;
                typedef std::future<OpenClusterPasswordComplexityOutcome> OpenClusterPasswordComplexityOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OpenClusterPasswordComplexityRequest&, OpenClusterPasswordComplexityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenClusterPasswordComplexityAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenReadOnlyInstanceExclusiveAccessResponse> OpenReadOnlyInstanceExclusiveAccessOutcome;
                typedef std::future<OpenReadOnlyInstanceExclusiveAccessOutcome> OpenReadOnlyInstanceExclusiveAccessOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OpenReadOnlyInstanceExclusiveAccessRequest&, OpenReadOnlyInstanceExclusiveAccessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenReadOnlyInstanceExclusiveAccessAsyncHandler;
                typedef Outcome<Core::Error, Model::OpenWanResponse> OpenWanOutcome;
                typedef std::future<OpenWanOutcome> OpenWanOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::OpenWanRequest&, OpenWanOutcome, const std::shared_ptr<const AsyncCallerContext>&)> OpenWanAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseServerlessResponse> PauseServerlessOutcome;
                typedef std::future<PauseServerlessOutcome> PauseServerlessOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::PauseServerlessRequest&, PauseServerlessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseServerlessAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundResourcePackageResponse> RefundResourcePackageOutcome;
                typedef std::future<RefundResourcePackageOutcome> RefundResourcePackageOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::RefundResourcePackageRequest&, RefundResourcePackageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundResourcePackageAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveClusterSlaveZoneResponse> RemoveClusterSlaveZoneOutcome;
                typedef std::future<RemoveClusterSlaveZoneOutcome> RemoveClusterSlaveZoneOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::RemoveClusterSlaveZoneRequest&, RemoveClusterSlaveZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveClusterSlaveZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetAccountPasswordResponse> ResetAccountPasswordOutcome;
                typedef std::future<ResetAccountPasswordOutcome> ResetAccountPasswordOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ResetAccountPasswordRequest&, ResetAccountPasswordOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetAccountPasswordAsyncHandler;
                typedef Outcome<Core::Error, Model::RestartInstanceResponse> RestartInstanceOutcome;
                typedef std::future<RestartInstanceOutcome> RestartInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::RestartInstanceRequest&, RestartInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RestartInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeServerlessResponse> ResumeServerlessOutcome;
                typedef std::future<ResumeServerlessOutcome> ResumeServerlessOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::ResumeServerlessRequest&, ResumeServerlessOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeServerlessAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchClusterDatabasesResponse> SearchClusterDatabasesOutcome;
                typedef std::future<SearchClusterDatabasesOutcome> SearchClusterDatabasesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SearchClusterDatabasesRequest&, SearchClusterDatabasesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchClusterDatabasesAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchClusterTablesResponse> SearchClusterTablesOutcome;
                typedef std::future<SearchClusterTablesOutcome> SearchClusterTablesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SearchClusterTablesRequest&, SearchClusterTablesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchClusterTablesAsyncHandler;
                typedef Outcome<Core::Error, Model::SetRenewFlagResponse> SetRenewFlagOutcome;
                typedef std::future<SetRenewFlagOutcome> SetRenewFlagOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SetRenewFlagRequest&, SetRenewFlagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetRenewFlagAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchClusterVpcResponse> SwitchClusterVpcOutcome;
                typedef std::future<SwitchClusterVpcOutcome> SwitchClusterVpcOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SwitchClusterVpcRequest&, SwitchClusterVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchClusterVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchClusterZoneResponse> SwitchClusterZoneOutcome;
                typedef std::future<SwitchClusterZoneOutcome> SwitchClusterZoneOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SwitchClusterZoneRequest&, SwitchClusterZoneOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchClusterZoneAsyncHandler;
                typedef Outcome<Core::Error, Model::SwitchProxyVpcResponse> SwitchProxyVpcOutcome;
                typedef std::future<SwitchProxyVpcOutcome> SwitchProxyVpcOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::SwitchProxyVpcRequest&, SwitchProxyVpcOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwitchProxyVpcAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindClusterResourcePackagesResponse> UnbindClusterResourcePackagesOutcome;
                typedef std::future<UnbindClusterResourcePackagesOutcome> UnbindClusterResourcePackagesOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::UnbindClusterResourcePackagesRequest&, UnbindClusterResourcePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindClusterResourcePackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeClusterVersionResponse> UpgradeClusterVersionOutcome;
                typedef std::future<UpgradeClusterVersionOutcome> UpgradeClusterVersionOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::UpgradeClusterVersionRequest&, UpgradeClusterVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeClusterVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeInstanceResponse> UpgradeInstanceOutcome;
                typedef std::future<UpgradeInstanceOutcome> UpgradeInstanceOutcomeCallable;
                typedef std::function<void(const CynosdbClient*, const Model::UpgradeInstanceRequest&, UpgradeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeInstanceAsyncHandler;



                /**
                 *This API is used to remove the isolation of an instance to make it accessible again.
                 * @param req ActivateInstanceRequest
                 * @return ActivateInstanceOutcome
                 */
                ActivateInstanceOutcome ActivateInstance(const Model::ActivateInstanceRequest &request);
                void ActivateInstanceAsync(const Model::ActivateInstanceRequest& request, const ActivateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateInstanceOutcomeCallable ActivateInstanceCallable(const Model::ActivateInstanceRequest& request);

                /**
                 *This API is used to add the replica AZ.
                 * @param req AddClusterSlaveZoneRequest
                 * @return AddClusterSlaveZoneOutcome
                 */
                AddClusterSlaveZoneOutcome AddClusterSlaveZone(const Model::AddClusterSlaveZoneRequest &request);
                void AddClusterSlaveZoneAsync(const Model::AddClusterSlaveZoneRequest& request, const AddClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddClusterSlaveZoneOutcomeCallable AddClusterSlaveZoneCallable(const Model::AddClusterSlaveZoneRequest& request);

                /**
                 *This API is used to add an instance in a cluster.
                 * @param req AddInstancesRequest
                 * @return AddInstancesOutcome
                 */
                AddInstancesOutcome AddInstances(const Model::AddInstancesRequest &request);
                void AddInstancesAsync(const Model::AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddInstancesOutcomeCallable AddInstancesCallable(const Model::AddInstancesRequest& request);

                /**
                 *This API is used to bind a resource pack to a cluster.
                 * @param req BindClusterResourcePackagesRequest
                 * @return BindClusterResourcePackagesOutcome
                 */
                BindClusterResourcePackagesOutcome BindClusterResourcePackages(const Model::BindClusterResourcePackagesRequest &request);
                void BindClusterResourcePackagesAsync(const Model::BindClusterResourcePackagesRequest& request, const BindClusterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindClusterResourcePackagesOutcomeCallable BindClusterResourcePackagesCallable(const Model::BindClusterResourcePackagesRequest& request);

                /**
                 *This API is used to disable the audit service for a TDSQL-C for MySQL instance.
                 * @param req CloseAuditServiceRequest
                 * @return CloseAuditServiceOutcome
                 */
                CloseAuditServiceOutcome CloseAuditService(const Model::CloseAuditServiceRequest &request);
                void CloseAuditServiceAsync(const Model::CloseAuditServiceRequest& request, const CloseAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAuditServiceOutcomeCallable CloseAuditServiceCallable(const Model::CloseAuditServiceRequest& request);

                /**
                 *This API is used to disable the password complexity for a cluster.
                 * @param req CloseClusterPasswordComplexityRequest
                 * @return CloseClusterPasswordComplexityOutcome
                 */
                CloseClusterPasswordComplexityOutcome CloseClusterPasswordComplexity(const Model::CloseClusterPasswordComplexityRequest &request);
                void CloseClusterPasswordComplexityAsync(const Model::CloseClusterPasswordComplexityRequest& request, const CloseClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseClusterPasswordComplexityOutcomeCallable CloseClusterPasswordComplexityCallable(const Model::CloseClusterPasswordComplexityRequest& request);

                /**
                 *This API is used to disable the public network.
                 * @param req CloseWanRequest
                 * @return CloseWanOutcome
                 */
                CloseWanOutcome CloseWan(const Model::CloseWanRequest &request);
                void CloseWanAsync(const Model::CloseWanRequest& request, const CloseWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseWanOutcomeCallable CloseWanCallable(const Model::CloseWanRequest& request);

                /**
                 *This API is used to replicate the password complexity for a cluster.
                 * @param req CopyClusterPasswordComplexityRequest
                 * @return CopyClusterPasswordComplexityOutcome
                 */
                CopyClusterPasswordComplexityOutcome CopyClusterPasswordComplexity(const Model::CopyClusterPasswordComplexityRequest &request);
                void CopyClusterPasswordComplexityAsync(const Model::CopyClusterPasswordComplexityRequest& request, const CopyClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyClusterPasswordComplexityOutcomeCallable CopyClusterPasswordComplexityCallable(const Model::CopyClusterPasswordComplexityRequest& request);

                /**
                 *This API is used to create an account.
                 * @param req CreateAccountsRequest
                 * @return CreateAccountsOutcome
                 */
                CreateAccountsOutcome CreateAccounts(const Model::CreateAccountsRequest &request);
                void CreateAccountsAsync(const Model::CreateAccountsRequest& request, const CreateAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountsOutcomeCallable CreateAccountsCallable(const Model::CreateAccountsRequest& request);

                /**
                 *This API is used to create an audit rule template.
                 * @param req CreateAuditRuleTemplateRequest
                 * @return CreateAuditRuleTemplateOutcome
                 */
                CreateAuditRuleTemplateOutcome CreateAuditRuleTemplate(const Model::CreateAuditRuleTemplateRequest &request);
                void CreateAuditRuleTemplateAsync(const Model::CreateAuditRuleTemplateRequest& request, const CreateAuditRuleTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAuditRuleTemplateOutcomeCallable CreateAuditRuleTemplateCallable(const Model::CreateAuditRuleTemplateRequest& request);

                /**
                 *This API is used to create manual backup.
                 * @param req CreateBackupRequest
                 * @return CreateBackupOutcome
                 */
                CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest &request);
                void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request);

                /**
                 *This API is used to create a database.
                 * @param req CreateClusterDatabaseRequest
                 * @return CreateClusterDatabaseOutcome
                 */
                CreateClusterDatabaseOutcome CreateClusterDatabase(const Model::CreateClusterDatabaseRequest &request);
                void CreateClusterDatabaseAsync(const Model::CreateClusterDatabaseRequest& request, const CreateClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClusterDatabaseOutcomeCallable CreateClusterDatabaseCallable(const Model::CreateClusterDatabaseRequest& request);

                /**
                 *This API is used to create a cluster.
                 * @param req CreateClustersRequest
                 * @return CreateClustersOutcome
                 */
                CreateClustersOutcome CreateClusters(const Model::CreateClustersRequest &request);
                void CreateClustersAsync(const Model::CreateClustersRequest& request, const CreateClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateClustersOutcomeCallable CreateClustersCallable(const Model::CreateClustersRequest& request);

                /**
                 *This API is used to create a parameter template.
                 * @param req CreateParamTemplateRequest
                 * @return CreateParamTemplateOutcome
                 */
                CreateParamTemplateOutcome CreateParamTemplate(const Model::CreateParamTemplateRequest &request);
                void CreateParamTemplateAsync(const Model::CreateParamTemplateRequest& request, const CreateParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateParamTemplateOutcomeCallable CreateParamTemplateCallable(const Model::CreateParamTemplateRequest& request);

                /**
                 *This API is used to purchase a resource pack.
                 * @param req CreateResourcePackageRequest
                 * @return CreateResourcePackageOutcome
                 */
                CreateResourcePackageOutcome CreateResourcePackage(const Model::CreateResourcePackageRequest &request);
                void CreateResourcePackageAsync(const Model::CreateResourcePackageRequest& request, const CreateResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateResourcePackageOutcomeCallable CreateResourcePackageCallable(const Model::CreateResourcePackageRequest& request);

                /**
                 *This API is used to delete an account.
                 * @param req DeleteAccountsRequest
                 * @return DeleteAccountsOutcome
                 */
                DeleteAccountsOutcome DeleteAccounts(const Model::DeleteAccountsRequest &request);
                void DeleteAccountsAsync(const Model::DeleteAccountsRequest& request, const DeleteAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAccountsOutcomeCallable DeleteAccountsCallable(const Model::DeleteAccountsRequest& request);

                /**
                 *This API is used to delete an audit rule template.
                 * @param req DeleteAuditRuleTemplatesRequest
                 * @return DeleteAuditRuleTemplatesOutcome
                 */
                DeleteAuditRuleTemplatesOutcome DeleteAuditRuleTemplates(const Model::DeleteAuditRuleTemplatesRequest &request);
                void DeleteAuditRuleTemplatesAsync(const Model::DeleteAuditRuleTemplatesRequest& request, const DeleteAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAuditRuleTemplatesOutcomeCallable DeleteAuditRuleTemplatesCallable(const Model::DeleteAuditRuleTemplatesRequest& request);

                /**
                 *This API is used to delete the manual backup for a cluster. It cannot be used to delete the automatic backup.
                 * @param req DeleteBackupRequest
                 * @return DeleteBackupOutcome
                 */
                DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest &request);
                void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request);

                /**
                 *This API is used to delete a database.
                 * @param req DeleteClusterDatabaseRequest
                 * @return DeleteClusterDatabaseOutcome
                 */
                DeleteClusterDatabaseOutcome DeleteClusterDatabase(const Model::DeleteClusterDatabaseRequest &request);
                void DeleteClusterDatabaseAsync(const Model::DeleteClusterDatabaseRequest& request, const DeleteClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteClusterDatabaseOutcomeCallable DeleteClusterDatabaseCallable(const Model::DeleteClusterDatabaseRequest& request);

                /**
                 *This API is used to delete a parameter template.
                 * @param req DeleteParamTemplateRequest
                 * @return DeleteParamTemplateOutcome
                 */
                DeleteParamTemplateOutcome DeleteParamTemplate(const Model::DeleteParamTemplateRequest &request);
                void DeleteParamTemplateAsync(const Model::DeleteParamTemplateRequest& request, const DeleteParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteParamTemplateOutcomeCallable DeleteParamTemplateCallable(const Model::DeleteParamTemplateRequest& request);

                /**
                 *This API is used to query the existing permissions of an account.
                 * @param req DescribeAccountPrivilegesRequest
                 * @return DescribeAccountPrivilegesOutcome
                 */
                DescribeAccountPrivilegesOutcome DescribeAccountPrivileges(const Model::DescribeAccountPrivilegesRequest &request);
                void DescribeAccountPrivilegesAsync(const Model::DescribeAccountPrivilegesRequest& request, const DescribeAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountPrivilegesOutcomeCallable DescribeAccountPrivilegesCallable(const Model::DescribeAccountPrivilegesRequest& request);

                /**
                 *This API is used to query database management accounts.
                 * @param req DescribeAccountsRequest
                 * @return DescribeAccountsOutcome
                 */
                DescribeAccountsOutcome DescribeAccounts(const Model::DescribeAccountsRequest &request);
                void DescribeAccountsAsync(const Model::DescribeAccountsRequest& request, const DescribeAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountsOutcomeCallable DescribeAccountsCallable(const Model::DescribeAccountsRequest& request);

                /**
                 *This API is used to query audit rule templates.
                 * @param req DescribeAuditRuleTemplatesRequest
                 * @return DescribeAuditRuleTemplatesOutcome
                 */
                DescribeAuditRuleTemplatesOutcome DescribeAuditRuleTemplates(const Model::DescribeAuditRuleTemplatesRequest &request);
                void DescribeAuditRuleTemplatesAsync(const Model::DescribeAuditRuleTemplatesRequest& request, const DescribeAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditRuleTemplatesOutcomeCallable DescribeAuditRuleTemplatesCallable(const Model::DescribeAuditRuleTemplatesRequest& request);

                /**
                 *This API is used to get the audit rule templates of an instance.
                 * @param req DescribeAuditRuleWithInstanceIdsRequest
                 * @return DescribeAuditRuleWithInstanceIdsOutcome
                 */
                DescribeAuditRuleWithInstanceIdsOutcome DescribeAuditRuleWithInstanceIds(const Model::DescribeAuditRuleWithInstanceIdsRequest &request);
                void DescribeAuditRuleWithInstanceIdsAsync(const Model::DescribeAuditRuleWithInstanceIdsRequest& request, const DescribeAuditRuleWithInstanceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAuditRuleWithInstanceIdsOutcomeCallable DescribeAuditRuleWithInstanceIdsCallable(const Model::DescribeAuditRuleWithInstanceIdsRequest& request);

                /**
                 *This API is used to get the backup configuration information of the specified cluster, including the full backup time range and backup file retention period.
                 * @param req DescribeBackupConfigRequest
                 * @return DescribeBackupConfigOutcome
                 */
                DescribeBackupConfigOutcome DescribeBackupConfig(const Model::DescribeBackupConfigRequest &request);
                void DescribeBackupConfigAsync(const Model::DescribeBackupConfigRequest& request, const DescribeBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupConfigOutcomeCallable DescribeBackupConfigCallable(const Model::DescribeBackupConfigRequest& request);

                /**
                 *This API is used to query the download address of a cluster backup file.
                 * @param req DescribeBackupDownloadUrlRequest
                 * @return DescribeBackupDownloadUrlOutcome
                 */
                DescribeBackupDownloadUrlOutcome DescribeBackupDownloadUrl(const Model::DescribeBackupDownloadUrlRequest &request);
                void DescribeBackupDownloadUrlAsync(const Model::DescribeBackupDownloadUrlRequest& request, const DescribeBackupDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupDownloadUrlOutcomeCallable DescribeBackupDownloadUrlCallable(const Model::DescribeBackupDownloadUrlRequest& request);

                /**
                 *This API is used to query the list of backup files.
                 * @param req DescribeBackupListRequest
                 * @return DescribeBackupListOutcome
                 */
                DescribeBackupListOutcome DescribeBackupList(const Model::DescribeBackupListRequest &request);
                void DescribeBackupListAsync(const Model::DescribeBackupListRequest& request, const DescribeBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBackupListOutcomeCallable DescribeBackupListCallable(const Model::DescribeBackupListRequest& request);

                /**
                 *This API is used to query the download address of a binlog.
                 * @param req DescribeBinlogDownloadUrlRequest
                 * @return DescribeBinlogDownloadUrlOutcome
                 */
                DescribeBinlogDownloadUrlOutcome DescribeBinlogDownloadUrl(const Model::DescribeBinlogDownloadUrlRequest &request);
                void DescribeBinlogDownloadUrlAsync(const Model::DescribeBinlogDownloadUrlRequest& request, const DescribeBinlogDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogDownloadUrlOutcomeCallable DescribeBinlogDownloadUrlCallable(const Model::DescribeBinlogDownloadUrlRequest& request);

                /**
                 *This API is used to query the binlog retention period of a cluster in days.
                 * @param req DescribeBinlogSaveDaysRequest
                 * @return DescribeBinlogSaveDaysOutcome
                 */
                DescribeBinlogSaveDaysOutcome DescribeBinlogSaveDays(const Model::DescribeBinlogSaveDaysRequest &request);
                void DescribeBinlogSaveDaysAsync(const Model::DescribeBinlogSaveDaysRequest& request, const DescribeBinlogSaveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogSaveDaysOutcomeCallable DescribeBinlogSaveDaysCallable(const Model::DescribeBinlogSaveDaysRequest& request);

                /**
                 *This API is used to query the list of binlogs in a cluster.
                 * @param req DescribeBinlogsRequest
                 * @return DescribeBinlogsOutcome
                 */
                DescribeBinlogsOutcome DescribeBinlogs(const Model::DescribeBinlogsRequest &request);
                void DescribeBinlogsAsync(const Model::DescribeBinlogsRequest& request, const DescribeBinlogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBinlogsOutcomeCallable DescribeBinlogsCallable(const Model::DescribeBinlogsRequest& request);

                /**
                 *This API is used to show the details of an instance.
                 * @param req DescribeClusterDetailRequest
                 * @return DescribeClusterDetailOutcome
                 */
                DescribeClusterDetailOutcome DescribeClusterDetail(const Model::DescribeClusterDetailRequest &request);
                void DescribeClusterDetailAsync(const Model::DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailOutcomeCallable DescribeClusterDetailCallable(const Model::DescribeClusterDetailRequest& request);

                /**
                 *This API is used to query the database list.
                 * @param req DescribeClusterDetailDatabasesRequest
                 * @return DescribeClusterDetailDatabasesOutcome
                 */
                DescribeClusterDetailDatabasesOutcome DescribeClusterDetailDatabases(const Model::DescribeClusterDetailDatabasesRequest &request);
                void DescribeClusterDetailDatabasesAsync(const Model::DescribeClusterDetailDatabasesRequest& request, const DescribeClusterDetailDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterDetailDatabasesOutcomeCallable DescribeClusterDetailDatabasesCallable(const Model::DescribeClusterDetailDatabasesRequest& request);

                /**
                 *This API is used to query instance groups.
                 * @param req DescribeClusterInstanceGrpsRequest
                 * @return DescribeClusterInstanceGrpsOutcome
                 */
                DescribeClusterInstanceGrpsOutcome DescribeClusterInstanceGrps(const Model::DescribeClusterInstanceGrpsRequest &request);
                void DescribeClusterInstanceGrpsAsync(const Model::DescribeClusterInstanceGrpsRequest& request, const DescribeClusterInstanceGrpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterInstanceGrpsOutcomeCallable DescribeClusterInstanceGrpsCallable(const Model::DescribeClusterInstanceGrpsRequest& request);

                /**
                 *This API is used to query the parameters of a cluster.
                 * @param req DescribeClusterParamsRequest
                 * @return DescribeClusterParamsOutcome
                 */
                DescribeClusterParamsOutcome DescribeClusterParams(const Model::DescribeClusterParamsRequest &request);
                void DescribeClusterParamsAsync(const Model::DescribeClusterParamsRequest& request, const DescribeClusterParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterParamsOutcomeCallable DescribeClusterParamsCallable(const Model::DescribeClusterParamsRequest& request);

                /**
                 *This API is used to query the details of password complexity for a cluster.
                 * @param req DescribeClusterPasswordComplexityRequest
                 * @return DescribeClusterPasswordComplexityOutcome
                 */
                DescribeClusterPasswordComplexityOutcome DescribeClusterPasswordComplexity(const Model::DescribeClusterPasswordComplexityRequest &request);
                void DescribeClusterPasswordComplexityAsync(const Model::DescribeClusterPasswordComplexityRequest& request, const DescribeClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPasswordComplexityOutcomeCallable DescribeClusterPasswordComplexityCallable(const Model::DescribeClusterPasswordComplexityRequest& request);

                /**
                 *This API is used to the list of clusters.
                 * @param req DescribeClustersRequest
                 * @return DescribeClustersOutcome
                 */
                DescribeClustersOutcome DescribeClusters(const Model::DescribeClustersRequest &request);
                void DescribeClustersAsync(const Model::DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClustersOutcomeCallable DescribeClustersCallable(const Model::DescribeClustersRequest& request);

                /**
                 *This API is used to query the security group information of an instance.
                 * @param req DescribeDBSecurityGroupsRequest
                 * @return DescribeDBSecurityGroupsOutcome
                 */
                DescribeDBSecurityGroupsOutcome DescribeDBSecurityGroups(const Model::DescribeDBSecurityGroupsRequest &request);
                void DescribeDBSecurityGroupsAsync(const Model::DescribeDBSecurityGroupsRequest& request, const DescribeDBSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDBSecurityGroupsOutcomeCallable DescribeDBSecurityGroupsCallable(const Model::DescribeDBSecurityGroupsRequest& request);

                /**
                 *This API is used to query task flow information.
                 * @param req DescribeFlowRequest
                 * @return DescribeFlowOutcome
                 */
                DescribeFlowOutcome DescribeFlow(const Model::DescribeFlowRequest &request);
                void DescribeFlowAsync(const Model::DescribeFlowRequest& request, const DescribeFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFlowOutcomeCallable DescribeFlowCallable(const Model::DescribeFlowRequest& request);

                /**
                 *This API is used to query instance details.
                 * @param req DescribeInstanceDetailRequest
                 * @return DescribeInstanceDetailOutcome
                 */
                DescribeInstanceDetailOutcome DescribeInstanceDetail(const Model::DescribeInstanceDetailRequest &request);
                void DescribeInstanceDetailAsync(const Model::DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceDetailOutcomeCallable DescribeInstanceDetailCallable(const Model::DescribeInstanceDetailRequest& request);

                /**
                 *This API is used to query the list of error logs for an instance.
                 * @param req DescribeInstanceErrorLogsRequest
                 * @return DescribeInstanceErrorLogsOutcome
                 */
                DescribeInstanceErrorLogsOutcome DescribeInstanceErrorLogs(const Model::DescribeInstanceErrorLogsRequest &request);
                void DescribeInstanceErrorLogsAsync(const Model::DescribeInstanceErrorLogsRequest& request, const DescribeInstanceErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceErrorLogsOutcomeCallable DescribeInstanceErrorLogsCallable(const Model::DescribeInstanceErrorLogsRequest& request);

                /**
                 *This API is used to query the parameter list of an instance.
                 * @param req DescribeInstanceParamsRequest
                 * @return DescribeInstanceParamsOutcome
                 */
                DescribeInstanceParamsOutcome DescribeInstanceParams(const Model::DescribeInstanceParamsRequest &request);
                void DescribeInstanceParamsAsync(const Model::DescribeInstanceParamsRequest& request, const DescribeInstanceParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceParamsOutcomeCallable DescribeInstanceParamsCallable(const Model::DescribeInstanceParamsRequest& request);

                /**
                 *This API is used to query the slow query logs of an instance.
                 * @param req DescribeInstanceSlowQueriesRequest
                 * @return DescribeInstanceSlowQueriesOutcome
                 */
                DescribeInstanceSlowQueriesOutcome DescribeInstanceSlowQueries(const Model::DescribeInstanceSlowQueriesRequest &request);
                void DescribeInstanceSlowQueriesAsync(const Model::DescribeInstanceSlowQueriesRequest& request, const DescribeInstanceSlowQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSlowQueriesOutcomeCallable DescribeInstanceSlowQueriesCallable(const Model::DescribeInstanceSlowQueriesRequest& request);

                /**
                 *This API is used to query instance specifications.
                 * @param req DescribeInstanceSpecsRequest
                 * @return DescribeInstanceSpecsOutcome
                 */
                DescribeInstanceSpecsOutcome DescribeInstanceSpecs(const Model::DescribeInstanceSpecsRequest &request);
                void DescribeInstanceSpecsAsync(const Model::DescribeInstanceSpecsRequest& request, const DescribeInstanceSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceSpecsOutcomeCallable DescribeInstanceSpecsCallable(const Model::DescribeInstanceSpecsRequest& request);

                /**
                 *This API is used to query the list of instances.
                 * @param req DescribeInstancesRequest
                 * @return DescribeInstancesOutcome
                 */
                DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest &request);
                void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request);

                /**
                 *This API is used to query the instance maintenance window.
                 * @param req DescribeMaintainPeriodRequest
                 * @return DescribeMaintainPeriodOutcome
                 */
                DescribeMaintainPeriodOutcome DescribeMaintainPeriod(const Model::DescribeMaintainPeriodRequest &request);
                void DescribeMaintainPeriodAsync(const Model::DescribeMaintainPeriodRequest& request, const DescribeMaintainPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMaintainPeriodOutcomeCallable DescribeMaintainPeriodCallable(const Model::DescribeMaintainPeriodRequest& request);

                /**
                 *This API is used to query the details of a parameter template.
                 * @param req DescribeParamTemplateDetailRequest
                 * @return DescribeParamTemplateDetailOutcome
                 */
                DescribeParamTemplateDetailOutcome DescribeParamTemplateDetail(const Model::DescribeParamTemplateDetailRequest &request);
                void DescribeParamTemplateDetailAsync(const Model::DescribeParamTemplateDetailRequest& request, const DescribeParamTemplateDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplateDetailOutcomeCallable DescribeParamTemplateDetailCallable(const Model::DescribeParamTemplateDetailRequest& request);

                /**
                 *This API is used to query all parameter templates information of a user-specified product.
                 * @param req DescribeParamTemplatesRequest
                 * @return DescribeParamTemplatesOutcome
                 */
                DescribeParamTemplatesOutcome DescribeParamTemplates(const Model::DescribeParamTemplatesRequest &request);
                void DescribeParamTemplatesAsync(const Model::DescribeParamTemplatesRequest& request, const DescribeParamTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeParamTemplatesOutcomeCallable DescribeParamTemplatesCallable(const Model::DescribeParamTemplatesRequest& request);

                /**
                 *This API is used to query the security group information of a project.
                 * @param req DescribeProjectSecurityGroupsRequest
                 * @return DescribeProjectSecurityGroupsOutcome
                 */
                DescribeProjectSecurityGroupsOutcome DescribeProjectSecurityGroups(const Model::DescribeProjectSecurityGroupsRequest &request);
                void DescribeProjectSecurityGroupsAsync(const Model::DescribeProjectSecurityGroupsRequest& request, const DescribeProjectSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectSecurityGroupsOutcomeCallable DescribeProjectSecurityGroupsCallable(const Model::DescribeProjectSecurityGroupsRequest& request);

                /**
                 *This API is used to query the usage details of a resource pack.
                 * @param req DescribeResourcePackageDetailRequest
                 * @return DescribeResourcePackageDetailOutcome
                 */
                DescribeResourcePackageDetailOutcome DescribeResourcePackageDetail(const Model::DescribeResourcePackageDetailRequest &request);
                void DescribeResourcePackageDetailAsync(const Model::DescribeResourcePackageDetailRequest& request, const DescribeResourcePackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcePackageDetailOutcomeCallable DescribeResourcePackageDetailCallable(const Model::DescribeResourcePackageDetailRequest& request);

                /**
                 *This API is used to query the list of the resource packs.
                 * @param req DescribeResourcePackageListRequest
                 * @return DescribeResourcePackageListOutcome
                 */
                DescribeResourcePackageListOutcome DescribeResourcePackageList(const Model::DescribeResourcePackageListRequest &request);
                void DescribeResourcePackageListAsync(const Model::DescribeResourcePackageListRequest& request, const DescribeResourcePackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcePackageListOutcomeCallable DescribeResourcePackageListCallable(const Model::DescribeResourcePackageListRequest& request);

                /**
                 *This API is used to query the specifications of a resource pack.
                 * @param req DescribeResourcePackageSaleSpecRequest
                 * @return DescribeResourcePackageSaleSpecOutcome
                 */
                DescribeResourcePackageSaleSpecOutcome DescribeResourcePackageSaleSpec(const Model::DescribeResourcePackageSaleSpecRequest &request);
                void DescribeResourcePackageSaleSpecAsync(const Model::DescribeResourcePackageSaleSpecRequest& request, const DescribeResourcePackageSaleSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcePackageSaleSpecOutcomeCallable DescribeResourcePackageSaleSpecCallable(const Model::DescribeResourcePackageSaleSpecRequest& request);

                /**
                 *This API is used to query the list of resources by billing order ID.
                 * @param req DescribeResourcesByDealNameRequest
                 * @return DescribeResourcesByDealNameOutcome
                 */
                DescribeResourcesByDealNameOutcome DescribeResourcesByDealName(const Model::DescribeResourcesByDealNameRequest &request);
                void DescribeResourcesByDealNameAsync(const Model::DescribeResourcesByDealNameRequest& request, const DescribeResourcesByDealNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByDealNameOutcomeCallable DescribeResourcesByDealNameCallable(const Model::DescribeResourcesByDealNameRequest& request);

                /**
                 *This API is used to query the valid rollback time range for the specified cluster.
                 * @param req DescribeRollbackTimeRangeRequest
                 * @return DescribeRollbackTimeRangeOutcome
                 */
                DescribeRollbackTimeRangeOutcome DescribeRollbackTimeRange(const Model::DescribeRollbackTimeRangeRequest &request);
                void DescribeRollbackTimeRangeAsync(const Model::DescribeRollbackTimeRangeRequest& request, const DescribeRollbackTimeRangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeRangeOutcomeCallable DescribeRollbackTimeRangeCallable(const Model::DescribeRollbackTimeRangeRequest& request);

                /**
                 *This API is used to query whether rollback is possible based on the specified time and cluster.
                 * @param req DescribeRollbackTimeValidityRequest
                 * @return DescribeRollbackTimeValidityOutcome
                 */
                DescribeRollbackTimeValidityOutcome DescribeRollbackTimeValidity(const Model::DescribeRollbackTimeValidityRequest &request);
                void DescribeRollbackTimeValidityAsync(const Model::DescribeRollbackTimeValidityRequest& request, const DescribeRollbackTimeValidityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRollbackTimeValidityOutcomeCallable DescribeRollbackTimeValidityCallable(const Model::DescribeRollbackTimeValidityRequest& request);

                /**
                 *This API is used to query the AZ information in a purchasable region.
                 * @param req DescribeZonesRequest
                 * @return DescribeZonesOutcome
                 */
                DescribeZonesOutcome DescribeZones(const Model::DescribeZonesRequest &request);
                void DescribeZonesAsync(const Model::DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZonesOutcomeCallable DescribeZonesCallable(const Model::DescribeZonesRequest& request);

                /**
                 *This API is used to export the error logs of an instance.
                 * @param req ExportInstanceErrorLogsRequest
                 * @return ExportInstanceErrorLogsOutcome
                 */
                ExportInstanceErrorLogsOutcome ExportInstanceErrorLogs(const Model::ExportInstanceErrorLogsRequest &request);
                void ExportInstanceErrorLogsAsync(const Model::ExportInstanceErrorLogsRequest& request, const ExportInstanceErrorLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportInstanceErrorLogsOutcomeCallable ExportInstanceErrorLogsCallable(const Model::ExportInstanceErrorLogsRequest& request);

                /**
                 *This API is used to export the slow logs of an instance.
                 * @param req ExportInstanceSlowQueriesRequest
                 * @return ExportInstanceSlowQueriesOutcome
                 */
                ExportInstanceSlowQueriesOutcome ExportInstanceSlowQueries(const Model::ExportInstanceSlowQueriesRequest &request);
                void ExportInstanceSlowQueriesAsync(const Model::ExportInstanceSlowQueriesRequest& request, const ExportInstanceSlowQueriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExportInstanceSlowQueriesOutcomeCallable ExportInstanceSlowQueriesCallable(const Model::ExportInstanceSlowQueriesRequest& request);

                /**
                 *This API is used to query the purchasable price of a cluster.
                 * @param req InquirePriceCreateRequest
                 * @return InquirePriceCreateOutcome
                 */
                InquirePriceCreateOutcome InquirePriceCreate(const Model::InquirePriceCreateRequest &request);
                void InquirePriceCreateAsync(const Model::InquirePriceCreateRequest& request, const InquirePriceCreateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceCreateOutcomeCallable InquirePriceCreateCallable(const Model::InquirePriceCreateRequest& request);

                /**
                 *This API is used to query the renewal price of a cluster.
                 * @param req InquirePriceRenewRequest
                 * @return InquirePriceRenewOutcome
                 */
                InquirePriceRenewOutcome InquirePriceRenew(const Model::InquirePriceRenewRequest &request);
                void InquirePriceRenewAsync(const Model::InquirePriceRenewRequest& request, const InquirePriceRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InquirePriceRenewOutcomeCallable InquirePriceRenewCallable(const Model::InquirePriceRenewRequest& request);

                /**
                 *This API is used to isolate a cluster.
                 * @param req IsolateClusterRequest
                 * @return IsolateClusterOutcome
                 */
                IsolateClusterOutcome IsolateCluster(const Model::IsolateClusterRequest &request);
                void IsolateClusterAsync(const Model::IsolateClusterRequest& request, const IsolateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateClusterOutcomeCallable IsolateClusterCallable(const Model::IsolateClusterRequest& request);

                /**
                 *This API is used to isolate an instance.
                 * @param req IsolateInstanceRequest
                 * @return IsolateInstanceOutcome
                 */
                IsolateInstanceOutcome IsolateInstance(const Model::IsolateInstanceRequest &request);
                void IsolateInstanceAsync(const Model::IsolateInstanceRequest& request, const IsolateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                IsolateInstanceOutcomeCallable IsolateInstanceCallable(const Model::IsolateInstanceRequest& request);

                /**
                 *This API is used to modify the descriptions of a database account.
                 * @param req ModifyAccountDescriptionRequest
                 * @return ModifyAccountDescriptionOutcome
                 */
                ModifyAccountDescriptionOutcome ModifyAccountDescription(const Model::ModifyAccountDescriptionRequest &request);
                void ModifyAccountDescriptionAsync(const Model::ModifyAccountDescriptionRequest& request, const ModifyAccountDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountDescriptionOutcomeCallable ModifyAccountDescriptionCallable(const Model::ModifyAccountDescriptionRequest& request);

                /**
                 *This API is used to modify the account host.
                 * @param req ModifyAccountHostRequest
                 * @return ModifyAccountHostOutcome
                 */
                ModifyAccountHostOutcome ModifyAccountHost(const Model::ModifyAccountHostRequest &request);
                void ModifyAccountHostAsync(const Model::ModifyAccountHostRequest& request, const ModifyAccountHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountHostOutcomeCallable ModifyAccountHostCallable(const Model::ModifyAccountHostRequest& request);

                /**
                 *This API is used to modify the account permissions.
                 * @param req ModifyAccountPrivilegesRequest
                 * @return ModifyAccountPrivilegesOutcome
                 */
                ModifyAccountPrivilegesOutcome ModifyAccountPrivileges(const Model::ModifyAccountPrivilegesRequest &request);
                void ModifyAccountPrivilegesAsync(const Model::ModifyAccountPrivilegesRequest& request, const ModifyAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAccountPrivilegesOutcomeCallable ModifyAccountPrivilegesCallable(const Model::ModifyAccountPrivilegesRequest& request);

                /**
                 *This API is used to modify an audit rule template.
                 * @param req ModifyAuditRuleTemplatesRequest
                 * @return ModifyAuditRuleTemplatesOutcome
                 */
                ModifyAuditRuleTemplatesOutcome ModifyAuditRuleTemplates(const Model::ModifyAuditRuleTemplatesRequest &request);
                void ModifyAuditRuleTemplatesAsync(const Model::ModifyAuditRuleTemplatesRequest& request, const ModifyAuditRuleTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditRuleTemplatesOutcomeCallable ModifyAuditRuleTemplatesCallable(const Model::ModifyAuditRuleTemplatesRequest& request);

                /**
                 *This API is used to modify the audit configurations of an instance, such as audit log retention period and audit rule.
                 * @param req ModifyAuditServiceRequest
                 * @return ModifyAuditServiceOutcome
                 */
                ModifyAuditServiceOutcome ModifyAuditService(const Model::ModifyAuditServiceRequest &request);
                void ModifyAuditServiceAsync(const Model::ModifyAuditServiceRequest& request, const ModifyAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAuditServiceOutcomeCallable ModifyAuditServiceCallable(const Model::ModifyAuditServiceRequest& request);

                /**
                 *This API is used to modify the backup configuration of the specified cluster.
                 * @param req ModifyBackupConfigRequest
                 * @return ModifyBackupConfigOutcome
                 */
                ModifyBackupConfigOutcome ModifyBackupConfig(const Model::ModifyBackupConfigRequest &request);
                void ModifyBackupConfigAsync(const Model::ModifyBackupConfigRequest& request, const ModifyBackupConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupConfigOutcomeCallable ModifyBackupConfigCallable(const Model::ModifyBackupConfigRequest& request);

                /**
                 *This API is used to rename a backup file.
                 * @param req ModifyBackupNameRequest
                 * @return ModifyBackupNameOutcome
                 */
                ModifyBackupNameOutcome ModifyBackupName(const Model::ModifyBackupNameRequest &request);
                void ModifyBackupNameAsync(const Model::ModifyBackupNameRequest& request, const ModifyBackupNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBackupNameOutcomeCallable ModifyBackupNameCallable(const Model::ModifyBackupNameRequest& request);

                /**
                 *This API is used to modify the binlog retention period in days.
                 * @param req ModifyBinlogSaveDaysRequest
                 * @return ModifyBinlogSaveDaysOutcome
                 */
                ModifyBinlogSaveDaysOutcome ModifyBinlogSaveDays(const Model::ModifyBinlogSaveDaysRequest &request);
                void ModifyBinlogSaveDaysAsync(const Model::ModifyBinlogSaveDaysRequest& request, const ModifyBinlogSaveDaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBinlogSaveDaysOutcomeCallable ModifyBinlogSaveDaysCallable(const Model::ModifyBinlogSaveDaysRequest& request);

                /**
                 *This API is used to modify the database.
                 * @param req ModifyClusterDatabaseRequest
                 * @return ModifyClusterDatabaseOutcome
                 */
                ModifyClusterDatabaseOutcome ModifyClusterDatabase(const Model::ModifyClusterDatabaseRequest &request);
                void ModifyClusterDatabaseAsync(const Model::ModifyClusterDatabaseRequest& request, const ModifyClusterDatabaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterDatabaseOutcomeCallable ModifyClusterDatabaseCallable(const Model::ModifyClusterDatabaseRequest& request);

                /**
                 *This API is used to modify cluster name.
                 * @param req ModifyClusterNameRequest
                 * @return ModifyClusterNameOutcome
                 */
                ModifyClusterNameOutcome ModifyClusterName(const Model::ModifyClusterNameRequest &request);
                void ModifyClusterNameAsync(const Model::ModifyClusterNameRequest& request, const ModifyClusterNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterNameOutcomeCallable ModifyClusterNameCallable(const Model::ModifyClusterNameRequest& request);

                /**
                 *This API is used to modify the parameters of a cluster.
                 * @param req ModifyClusterParamRequest
                 * @return ModifyClusterParamOutcome
                 */
                ModifyClusterParamOutcome ModifyClusterParam(const Model::ModifyClusterParamRequest &request);
                void ModifyClusterParamAsync(const Model::ModifyClusterParamRequest& request, const ModifyClusterParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterParamOutcomeCallable ModifyClusterParamCallable(const Model::ModifyClusterParamRequest& request);

                /**
                 *This API is used to modify or enable the password complexity for a cluster.
                 * @param req ModifyClusterPasswordComplexityRequest
                 * @return ModifyClusterPasswordComplexityOutcome
                 */
                ModifyClusterPasswordComplexityOutcome ModifyClusterPasswordComplexity(const Model::ModifyClusterPasswordComplexityRequest &request);
                void ModifyClusterPasswordComplexityAsync(const Model::ModifyClusterPasswordComplexityRequest& request, const ModifyClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterPasswordComplexityOutcomeCallable ModifyClusterPasswordComplexityCallable(const Model::ModifyClusterPasswordComplexityRequest& request);

                /**
                 *This API is used to modify the replica AZ.
                 * @param req ModifyClusterSlaveZoneRequest
                 * @return ModifyClusterSlaveZoneOutcome
                 */
                ModifyClusterSlaveZoneOutcome ModifyClusterSlaveZone(const Model::ModifyClusterSlaveZoneRequest &request);
                void ModifyClusterSlaveZoneAsync(const Model::ModifyClusterSlaveZoneRequest& request, const ModifyClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyClusterSlaveZoneOutcomeCallable ModifyClusterSlaveZoneCallable(const Model::ModifyClusterSlaveZoneRequest& request);

                /**
                 *This API is used to modify the security groups bound to an instance.
                 * @param req ModifyDBInstanceSecurityGroupsRequest
                 * @return ModifyDBInstanceSecurityGroupsOutcome
                 */
                ModifyDBInstanceSecurityGroupsOutcome ModifyDBInstanceSecurityGroups(const Model::ModifyDBInstanceSecurityGroupsRequest &request);
                void ModifyDBInstanceSecurityGroupsAsync(const Model::ModifyDBInstanceSecurityGroupsRequest& request, const ModifyDBInstanceSecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDBInstanceSecurityGroupsOutcomeCallable ModifyDBInstanceSecurityGroupsCallable(const Model::ModifyDBInstanceSecurityGroupsRequest& request);

                /**
                 *This API is used to modify instance name.
                 * @param req ModifyInstanceNameRequest
                 * @return ModifyInstanceNameOutcome
                 */
                ModifyInstanceNameOutcome ModifyInstanceName(const Model::ModifyInstanceNameRequest &request);
                void ModifyInstanceNameAsync(const Model::ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceNameOutcomeCallable ModifyInstanceNameCallable(const Model::ModifyInstanceNameRequest& request);

                /**
                 *This API is used to modify the instance parameters.
                 * @param req ModifyInstanceParamRequest
                 * @return ModifyInstanceParamOutcome
                 */
                ModifyInstanceParamOutcome ModifyInstanceParam(const Model::ModifyInstanceParamRequest &request);
                void ModifyInstanceParamAsync(const Model::ModifyInstanceParamRequest& request, const ModifyInstanceParamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyInstanceParamOutcomeCallable ModifyInstanceParamCallable(const Model::ModifyInstanceParamRequest& request);

                /**
                 *This API is used to modify the maintenance time configuration.
                 * @param req ModifyMaintainPeriodConfigRequest
                 * @return ModifyMaintainPeriodConfigOutcome
                 */
                ModifyMaintainPeriodConfigOutcome ModifyMaintainPeriodConfig(const Model::ModifyMaintainPeriodConfigRequest &request);
                void ModifyMaintainPeriodConfigAsync(const Model::ModifyMaintainPeriodConfigRequest& request, const ModifyMaintainPeriodConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMaintainPeriodConfigOutcomeCallable ModifyMaintainPeriodConfigCallable(const Model::ModifyMaintainPeriodConfigRequest& request);

                /**
                 *This API is used to modify a parameter template.
                 * @param req ModifyParamTemplateRequest
                 * @return ModifyParamTemplateOutcome
                 */
                ModifyParamTemplateOutcome ModifyParamTemplate(const Model::ModifyParamTemplateRequest &request);
                void ModifyParamTemplateAsync(const Model::ModifyParamTemplateRequest& request, const ModifyParamTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyParamTemplateOutcomeCallable ModifyParamTemplateCallable(const Model::ModifyParamTemplateRequest& request);

                /**
                 *This API is used to bind a resource pack to a cluster.
                 * @param req ModifyResourcePackageClustersRequest
                 * @return ModifyResourcePackageClustersOutcome
                 */
                ModifyResourcePackageClustersOutcome ModifyResourcePackageClusters(const Model::ModifyResourcePackageClustersRequest &request);
                void ModifyResourcePackageClustersAsync(const Model::ModifyResourcePackageClustersRequest& request, const ModifyResourcePackageClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourcePackageClustersOutcomeCallable ModifyResourcePackageClustersCallable(const Model::ModifyResourcePackageClustersRequest& request);

                /**
                 *This API is used to modify the name of a resource pack.
                 * @param req ModifyResourcePackageNameRequest
                 * @return ModifyResourcePackageNameOutcome
                 */
                ModifyResourcePackageNameOutcome ModifyResourcePackageName(const Model::ModifyResourcePackageNameRequest &request);
                void ModifyResourcePackageNameAsync(const Model::ModifyResourcePackageNameRequest& request, const ModifyResourcePackageNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourcePackageNameOutcomeCallable ModifyResourcePackageNameCallable(const Model::ModifyResourcePackageNameRequest& request);

                /**
                 *This API is used to modify the IP and port of an instance group.
                 * @param req ModifyVipVportRequest
                 * @return ModifyVipVportOutcome
                 */
                ModifyVipVportOutcome ModifyVipVport(const Model::ModifyVipVportRequest &request);
                void ModifyVipVportAsync(const Model::ModifyVipVportRequest& request, const ModifyVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyVipVportOutcomeCallable ModifyVipVportCallable(const Model::ModifyVipVportRequest& request);

                /**
                 *This API is used to deactivate a cluster.
                 * @param req OfflineClusterRequest
                 * @return OfflineClusterOutcome
                 */
                OfflineClusterOutcome OfflineCluster(const Model::OfflineClusterRequest &request);
                void OfflineClusterAsync(const Model::OfflineClusterRequest& request, const OfflineClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineClusterOutcomeCallable OfflineClusterCallable(const Model::OfflineClusterRequest& request);

                /**
                 *This API is used to deactivate an instance.
                 * @param req OfflineInstanceRequest
                 * @return OfflineInstanceOutcome
                 */
                OfflineInstanceOutcome OfflineInstance(const Model::OfflineInstanceRequest &request);
                void OfflineInstanceAsync(const Model::OfflineInstanceRequest& request, const OfflineInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OfflineInstanceOutcomeCallable OfflineInstanceCallable(const Model::OfflineInstanceRequest& request);

                /**
                 *This API is used to enable the audit service for a TDSQL-C for MySQL instance.
                 * @param req OpenAuditServiceRequest
                 * @return OpenAuditServiceOutcome
                 */
                OpenAuditServiceOutcome OpenAuditService(const Model::OpenAuditServiceRequest &request);
                void OpenAuditServiceAsync(const Model::OpenAuditServiceRequest& request, const OpenAuditServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenAuditServiceOutcomeCallable OpenAuditServiceCallable(const Model::OpenAuditServiceRequest& request);

                /**
                 *This API is used to enable the password complexity for a cluster.
                 * @param req OpenClusterPasswordComplexityRequest
                 * @return OpenClusterPasswordComplexityOutcome
                 */
                OpenClusterPasswordComplexityOutcome OpenClusterPasswordComplexity(const Model::OpenClusterPasswordComplexityRequest &request);
                void OpenClusterPasswordComplexityAsync(const Model::OpenClusterPasswordComplexityRequest& request, const OpenClusterPasswordComplexityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenClusterPasswordComplexityOutcomeCallable OpenClusterPasswordComplexityCallable(const Model::OpenClusterPasswordComplexityRequest& request);

                /**
                 *This API is used to enable the dedicated access group for a read-only instance.
                 * @param req OpenReadOnlyInstanceExclusiveAccessRequest
                 * @return OpenReadOnlyInstanceExclusiveAccessOutcome
                 */
                OpenReadOnlyInstanceExclusiveAccessOutcome OpenReadOnlyInstanceExclusiveAccess(const Model::OpenReadOnlyInstanceExclusiveAccessRequest &request);
                void OpenReadOnlyInstanceExclusiveAccessAsync(const Model::OpenReadOnlyInstanceExclusiveAccessRequest& request, const OpenReadOnlyInstanceExclusiveAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenReadOnlyInstanceExclusiveAccessOutcomeCallable OpenReadOnlyInstanceExclusiveAccessCallable(const Model::OpenReadOnlyInstanceExclusiveAccessRequest& request);

                /**
                 *This API is used to enable the public network.
                 * @param req OpenWanRequest
                 * @return OpenWanOutcome
                 */
                OpenWanOutcome OpenWan(const Model::OpenWanRequest &request);
                void OpenWanAsync(const Model::OpenWanRequest& request, const OpenWanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                OpenWanOutcomeCallable OpenWanCallable(const Model::OpenWanRequest& request);

                /**
                 *This API is used to pause a serverless cluster.
                 * @param req PauseServerlessRequest
                 * @return PauseServerlessOutcome
                 */
                PauseServerlessOutcome PauseServerless(const Model::PauseServerlessRequest &request);
                void PauseServerlessAsync(const Model::PauseServerlessRequest& request, const PauseServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseServerlessOutcomeCallable PauseServerlessCallable(const Model::PauseServerlessRequest& request);

                /**
                 *This API is used to refund a resource pack.
                 * @param req RefundResourcePackageRequest
                 * @return RefundResourcePackageOutcome
                 */
                RefundResourcePackageOutcome RefundResourcePackage(const Model::RefundResourcePackageRequest &request);
                void RefundResourcePackageAsync(const Model::RefundResourcePackageRequest& request, const RefundResourcePackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundResourcePackageOutcomeCallable RefundResourcePackageCallable(const Model::RefundResourcePackageRequest& request);

                /**
                 *This API is used to delete the replica AZ.
                 * @param req RemoveClusterSlaveZoneRequest
                 * @return RemoveClusterSlaveZoneOutcome
                 */
                RemoveClusterSlaveZoneOutcome RemoveClusterSlaveZone(const Model::RemoveClusterSlaveZoneRequest &request);
                void RemoveClusterSlaveZoneAsync(const Model::RemoveClusterSlaveZoneRequest& request, const RemoveClusterSlaveZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveClusterSlaveZoneOutcomeCallable RemoveClusterSlaveZoneCallable(const Model::RemoveClusterSlaveZoneRequest& request);

                /**
                 *This API is used to reset the password of a TencentDB instance account.
                 * @param req ResetAccountPasswordRequest
                 * @return ResetAccountPasswordOutcome
                 */
                ResetAccountPasswordOutcome ResetAccountPassword(const Model::ResetAccountPasswordRequest &request);
                void ResetAccountPasswordAsync(const Model::ResetAccountPasswordRequest& request, const ResetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetAccountPasswordOutcomeCallable ResetAccountPasswordCallable(const Model::ResetAccountPasswordRequest& request);

                /**
                 *This API is used to restart an instance.
                 * @param req RestartInstanceRequest
                 * @return RestartInstanceOutcome
                 */
                RestartInstanceOutcome RestartInstance(const Model::RestartInstanceRequest &request);
                void RestartInstanceAsync(const Model::RestartInstanceRequest& request, const RestartInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RestartInstanceOutcomeCallable RestartInstanceCallable(const Model::RestartInstanceRequest& request);

                /**
                 *This API is used to resume a serverless cluster.
                 * @param req ResumeServerlessRequest
                 * @return ResumeServerlessOutcome
                 */
                ResumeServerlessOutcome ResumeServerless(const Model::ResumeServerlessRequest &request);
                void ResumeServerlessAsync(const Model::ResumeServerlessRequest& request, const ResumeServerlessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeServerlessOutcomeCallable ResumeServerlessCallable(const Model::ResumeServerlessRequest& request);

                /**
                 *This API is used to search the list of cluster databases.
                 * @param req SearchClusterDatabasesRequest
                 * @return SearchClusterDatabasesOutcome
                 */
                SearchClusterDatabasesOutcome SearchClusterDatabases(const Model::SearchClusterDatabasesRequest &request);
                void SearchClusterDatabasesAsync(const Model::SearchClusterDatabasesRequest& request, const SearchClusterDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchClusterDatabasesOutcomeCallable SearchClusterDatabasesCallable(const Model::SearchClusterDatabasesRequest& request);

                /**
                 *This API is used to search the list of cluster data tables.
                 * @param req SearchClusterTablesRequest
                 * @return SearchClusterTablesOutcome
                 */
                SearchClusterTablesOutcome SearchClusterTables(const Model::SearchClusterTablesRequest &request);
                void SearchClusterTablesAsync(const Model::SearchClusterTablesRequest& request, const SearchClusterTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchClusterTablesOutcomeCallable SearchClusterTablesCallable(const Model::SearchClusterTablesRequest& request);

                /**
                 *This API is used to set auto-renewal for an instance.
                 * @param req SetRenewFlagRequest
                 * @return SetRenewFlagOutcome
                 */
                SetRenewFlagOutcome SetRenewFlag(const Model::SetRenewFlagRequest &request);
                void SetRenewFlagAsync(const Model::SetRenewFlagRequest& request, const SetRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetRenewFlagOutcomeCallable SetRenewFlagCallable(const Model::SetRenewFlagRequest& request);

                /**
                 *This API is used to modify the cluster VPC.
                 * @param req SwitchClusterVpcRequest
                 * @return SwitchClusterVpcOutcome
                 */
                SwitchClusterVpcOutcome SwitchClusterVpc(const Model::SwitchClusterVpcRequest &request);
                void SwitchClusterVpcAsync(const Model::SwitchClusterVpcRequest& request, const SwitchClusterVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchClusterVpcOutcomeCallable SwitchClusterVpcCallable(const Model::SwitchClusterVpcRequest& request);

                /**
                 *This API is used to switch to the replica AZ.
                 * @param req SwitchClusterZoneRequest
                 * @return SwitchClusterZoneOutcome
                 */
                SwitchClusterZoneOutcome SwitchClusterZone(const Model::SwitchClusterZoneRequest &request);
                void SwitchClusterZoneAsync(const Model::SwitchClusterZoneRequest& request, const SwitchClusterZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchClusterZoneOutcomeCallable SwitchClusterZoneCallable(const Model::SwitchClusterZoneRequest& request);

                /**
                 *This API is used to modify the database proxy VPC.
                 * @param req SwitchProxyVpcRequest
                 * @return SwitchProxyVpcOutcome
                 */
                SwitchProxyVpcOutcome SwitchProxyVpc(const Model::SwitchProxyVpcRequest &request);
                void SwitchProxyVpcAsync(const Model::SwitchProxyVpcRequest& request, const SwitchProxyVpcAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwitchProxyVpcOutcomeCallable SwitchProxyVpcCallable(const Model::SwitchProxyVpcRequest& request);

                /**
                 *This API is used to unbind a TDSQL-C for MySQL resource pack.
                 * @param req UnbindClusterResourcePackagesRequest
                 * @return UnbindClusterResourcePackagesOutcome
                 */
                UnbindClusterResourcePackagesOutcome UnbindClusterResourcePackages(const Model::UnbindClusterResourcePackagesRequest &request);
                void UnbindClusterResourcePackagesAsync(const Model::UnbindClusterResourcePackagesRequest& request, const UnbindClusterResourcePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindClusterResourcePackagesOutcomeCallable UnbindClusterResourcePackagesCallable(const Model::UnbindClusterResourcePackagesRequest& request);

                /**
                 *This API is used to upgrade the kernel version of a TDSQL-C for MySQL cluster.
                 * @param req UpgradeClusterVersionRequest
                 * @return UpgradeClusterVersionOutcome
                 */
                UpgradeClusterVersionOutcome UpgradeClusterVersion(const Model::UpgradeClusterVersionRequest &request);
                void UpgradeClusterVersionAsync(const Model::UpgradeClusterVersionRequest& request, const UpgradeClusterVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeClusterVersionOutcomeCallable UpgradeClusterVersionCallable(const Model::UpgradeClusterVersionRequest& request);

                /**
                 *This API is used to upgrade an instance.
                 * @param req UpgradeInstanceRequest
                 * @return UpgradeInstanceOutcome
                 */
                UpgradeInstanceOutcome UpgradeInstance(const Model::UpgradeInstanceRequest &request);
                void UpgradeInstanceAsync(const Model::UpgradeInstanceRequest& request, const UpgradeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeInstanceOutcomeCallable UpgradeInstanceCallable(const Model::UpgradeInstanceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_CYNOSDBCLIENT_H_
