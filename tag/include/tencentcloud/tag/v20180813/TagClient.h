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

#ifndef TENCENTCLOUD_TAG_V20180813_TAGCLIENT_H_
#define TENCENTCLOUD_TAG_V20180813_TAGCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tag/v20180813/model/AddResourceTagRequest.h>
#include <tencentcloud/tag/v20180813/model/AddResourceTagResponse.h>
#include <tencentcloud/tag/v20180813/model/AttachResourcesTagRequest.h>
#include <tencentcloud/tag/v20180813/model/AttachResourcesTagResponse.h>
#include <tencentcloud/tag/v20180813/model/CreateTagRequest.h>
#include <tencentcloud/tag/v20180813/model/CreateTagResponse.h>
#include <tencentcloud/tag/v20180813/model/CreateTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/CreateTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/DeleteResourceTagRequest.h>
#include <tencentcloud/tag/v20180813/model/DeleteResourceTagResponse.h>
#include <tencentcloud/tag/v20180813/model/DeleteTagRequest.h>
#include <tencentcloud/tag/v20180813/model/DeleteTagResponse.h>
#include <tencentcloud/tag/v20180813/model/DeleteTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/DeleteTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeProjectsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeProjectsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsSeqRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByResourceIdsSeqResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByTagKeysRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourceTagsByTagKeysResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourcesByTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourcesByTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourcesByTagsUnionRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeResourcesByTagsUnionResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagKeysRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagKeysResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagValuesRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagValuesResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagValuesSeqRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagValuesSeqResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagsSeqRequest.h>
#include <tencentcloud/tag/v20180813/model/DescribeTagsSeqResponse.h>
#include <tencentcloud/tag/v20180813/model/DetachResourcesTagRequest.h>
#include <tencentcloud/tag/v20180813/model/DetachResourcesTagResponse.h>
#include <tencentcloud/tag/v20180813/model/GetResourcesRequest.h>
#include <tencentcloud/tag/v20180813/model/GetResourcesResponse.h>
#include <tencentcloud/tag/v20180813/model/GetTagKeysRequest.h>
#include <tencentcloud/tag/v20180813/model/GetTagKeysResponse.h>
#include <tencentcloud/tag/v20180813/model/GetTagValuesRequest.h>
#include <tencentcloud/tag/v20180813/model/GetTagValuesResponse.h>
#include <tencentcloud/tag/v20180813/model/GetTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/GetTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/ModifyResourceTagsRequest.h>
#include <tencentcloud/tag/v20180813/model/ModifyResourceTagsResponse.h>
#include <tencentcloud/tag/v20180813/model/ModifyResourcesTagValueRequest.h>
#include <tencentcloud/tag/v20180813/model/ModifyResourcesTagValueResponse.h>
#include <tencentcloud/tag/v20180813/model/TagResourcesRequest.h>
#include <tencentcloud/tag/v20180813/model/TagResourcesResponse.h>
#include <tencentcloud/tag/v20180813/model/UnTagResourcesRequest.h>
#include <tencentcloud/tag/v20180813/model/UnTagResourcesResponse.h>
#include <tencentcloud/tag/v20180813/model/UpdateResourceTagValueRequest.h>
#include <tencentcloud/tag/v20180813/model/UpdateResourceTagValueResponse.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            class TagClient : public AbstractClient
            {
            public:
                TagClient(const Credential &credential, const std::string &region);
                TagClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddResourceTagResponse> AddResourceTagOutcome;
                typedef std::future<AddResourceTagOutcome> AddResourceTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::AddResourceTagRequest&, AddResourceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddResourceTagAsyncHandler;
                typedef Outcome<Core::Error, Model::AttachResourcesTagResponse> AttachResourcesTagOutcome;
                typedef std::future<AttachResourcesTagOutcome> AttachResourcesTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::AttachResourcesTagRequest&, AttachResourcesTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AttachResourcesTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagResponse> CreateTagOutcome;
                typedef std::future<CreateTagOutcome> CreateTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::CreateTagRequest&, CreateTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTagsResponse> CreateTagsOutcome;
                typedef std::future<CreateTagsOutcome> CreateTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::CreateTagsRequest&, CreateTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteResourceTagResponse> DeleteResourceTagOutcome;
                typedef std::future<DeleteResourceTagOutcome> DeleteResourceTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DeleteResourceTagRequest&, DeleteResourceTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteResourceTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagResponse> DeleteTagOutcome;
                typedef std::future<DeleteTagOutcome> DeleteTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DeleteTagRequest&, DeleteTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTagsResponse> DeleteTagsOutcome;
                typedef std::future<DeleteTagsOutcome> DeleteTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DeleteTagsRequest&, DeleteTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectsResponse> DescribeProjectsOutcome;
                typedef std::future<DescribeProjectsOutcome> DescribeProjectsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeProjectsRequest&, DescribeProjectsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTagsResponse> DescribeResourceTagsOutcome;
                typedef std::future<DescribeResourceTagsOutcome> DescribeResourceTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourceTagsRequest&, DescribeResourceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTagsByResourceIdsResponse> DescribeResourceTagsByResourceIdsOutcome;
                typedef std::future<DescribeResourceTagsByResourceIdsOutcome> DescribeResourceTagsByResourceIdsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourceTagsByResourceIdsRequest&, DescribeResourceTagsByResourceIdsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTagsByResourceIdsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTagsByResourceIdsSeqResponse> DescribeResourceTagsByResourceIdsSeqOutcome;
                typedef std::future<DescribeResourceTagsByResourceIdsSeqOutcome> DescribeResourceTagsByResourceIdsSeqOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourceTagsByResourceIdsSeqRequest&, DescribeResourceTagsByResourceIdsSeqOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTagsByResourceIdsSeqAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourceTagsByTagKeysResponse> DescribeResourceTagsByTagKeysOutcome;
                typedef std::future<DescribeResourceTagsByTagKeysOutcome> DescribeResourceTagsByTagKeysOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourceTagsByTagKeysRequest&, DescribeResourceTagsByTagKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourceTagsByTagKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByTagsResponse> DescribeResourcesByTagsOutcome;
                typedef std::future<DescribeResourcesByTagsOutcome> DescribeResourcesByTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourcesByTagsRequest&, DescribeResourcesByTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeResourcesByTagsUnionResponse> DescribeResourcesByTagsUnionOutcome;
                typedef std::future<DescribeResourcesByTagsUnionOutcome> DescribeResourcesByTagsUnionOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeResourcesByTagsUnionRequest&, DescribeResourcesByTagsUnionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeResourcesByTagsUnionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagKeysResponse> DescribeTagKeysOutcome;
                typedef std::future<DescribeTagKeysOutcome> DescribeTagKeysOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagKeysRequest&, DescribeTagKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagValuesResponse> DescribeTagValuesOutcome;
                typedef std::future<DescribeTagValuesOutcome> DescribeTagValuesOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagValuesRequest&, DescribeTagValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagValuesSeqResponse> DescribeTagValuesSeqOutcome;
                typedef std::future<DescribeTagValuesSeqOutcome> DescribeTagValuesSeqOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagValuesSeqRequest&, DescribeTagValuesSeqOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagValuesSeqAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsResponse> DescribeTagsOutcome;
                typedef std::future<DescribeTagsOutcome> DescribeTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagsRequest&, DescribeTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTagsSeqResponse> DescribeTagsSeqOutcome;
                typedef std::future<DescribeTagsSeqOutcome> DescribeTagsSeqOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DescribeTagsSeqRequest&, DescribeTagsSeqOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTagsSeqAsyncHandler;
                typedef Outcome<Core::Error, Model::DetachResourcesTagResponse> DetachResourcesTagOutcome;
                typedef std::future<DetachResourcesTagOutcome> DetachResourcesTagOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::DetachResourcesTagRequest&, DetachResourcesTagOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetachResourcesTagAsyncHandler;
                typedef Outcome<Core::Error, Model::GetResourcesResponse> GetResourcesOutcome;
                typedef std::future<GetResourcesOutcome> GetResourcesOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::GetResourcesRequest&, GetResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTagKeysResponse> GetTagKeysOutcome;
                typedef std::future<GetTagKeysOutcome> GetTagKeysOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::GetTagKeysRequest&, GetTagKeysOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTagKeysAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTagValuesResponse> GetTagValuesOutcome;
                typedef std::future<GetTagValuesOutcome> GetTagValuesOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::GetTagValuesRequest&, GetTagValuesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTagValuesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTagsResponse> GetTagsOutcome;
                typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::GetTagsRequest&, GetTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourceTagsResponse> ModifyResourceTagsOutcome;
                typedef std::future<ModifyResourceTagsOutcome> ModifyResourceTagsOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::ModifyResourceTagsRequest&, ModifyResourceTagsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourceTagsAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyResourcesTagValueResponse> ModifyResourcesTagValueOutcome;
                typedef std::future<ModifyResourcesTagValueOutcome> ModifyResourcesTagValueOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::ModifyResourcesTagValueRequest&, ModifyResourcesTagValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyResourcesTagValueAsyncHandler;
                typedef Outcome<Core::Error, Model::TagResourcesResponse> TagResourcesOutcome;
                typedef std::future<TagResourcesOutcome> TagResourcesOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::TagResourcesRequest&, TagResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TagResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnTagResourcesResponse> UnTagResourcesOutcome;
                typedef std::future<UnTagResourcesOutcome> UnTagResourcesOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::UnTagResourcesRequest&, UnTagResourcesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnTagResourcesAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateResourceTagValueResponse> UpdateResourceTagValueOutcome;
                typedef std::future<UpdateResourceTagValueOutcome> UpdateResourceTagValueOutcomeCallable;
                typedef std::function<void(const TagClient*, const Model::UpdateResourceTagValueRequest&, UpdateResourceTagValueOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateResourceTagValueAsyncHandler;



                /**
                 *This API is used to associate resources with tags.
                 * @param req AddResourceTagRequest
                 * @return AddResourceTagOutcome
                 */
                AddResourceTagOutcome AddResourceTag(const Model::AddResourceTagRequest &request);
                void AddResourceTagAsync(const Model::AddResourceTagRequest& request, const AddResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddResourceTagOutcomeCallable AddResourceTagCallable(const Model::AddResourceTagRequest& request);

                /**
                 *This API is used to associate a tag with multiple resources.
                 * @param req AttachResourcesTagRequest
                 * @return AttachResourcesTagOutcome
                 */
                AttachResourcesTagOutcome AttachResourcesTag(const Model::AttachResourcesTagRequest &request);
                void AttachResourcesTagAsync(const Model::AttachResourcesTagRequest& request, const AttachResourcesTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AttachResourcesTagOutcomeCallable AttachResourcesTagCallable(const Model::AttachResourcesTagRequest& request);

                /**
                 *This API is used to create a tag key and tag value pair.
                 * @param req CreateTagRequest
                 * @return CreateTagOutcome
                 */
                CreateTagOutcome CreateTag(const Model::CreateTagRequest &request);
                void CreateTagAsync(const Model::CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagOutcomeCallable CreateTagCallable(const Model::CreateTagRequest& request);

                /**
                 *This API is used to create multiple tag key-value pairs.
                 * @param req CreateTagsRequest
                 * @return CreateTagsOutcome
                 */
                CreateTagsOutcome CreateTags(const Model::CreateTagsRequest &request);
                void CreateTagsAsync(const Model::CreateTagsRequest& request, const CreateTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTagsOutcomeCallable CreateTagsCallable(const Model::CreateTagsRequest& request);

                /**
                 *This API is used to unassociate tags and resources.
                 * @param req DeleteResourceTagRequest
                 * @return DeleteResourceTagOutcome
                 */
                DeleteResourceTagOutcome DeleteResourceTag(const Model::DeleteResourceTagRequest &request);
                void DeleteResourceTagAsync(const Model::DeleteResourceTagRequest& request, const DeleteResourceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteResourceTagOutcomeCallable DeleteResourceTagCallable(const Model::DeleteResourceTagRequest& request);

                /**
                 *This API is used to delete a tag key and tag value pair.
                 * @param req DeleteTagRequest
                 * @return DeleteTagOutcome
                 */
                DeleteTagOutcome DeleteTag(const Model::DeleteTagRequest &request);
                void DeleteTagAsync(const Model::DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagOutcomeCallable DeleteTagCallable(const Model::DeleteTagRequest& request);

                /**
                 *This API is used to delete tag keys and tag values in batches.
                 * @param req DeleteTagsRequest
                 * @return DeleteTagsOutcome
                 */
                DeleteTagsOutcome DeleteTags(const Model::DeleteTagsRequest &request);
                void DeleteTagsAsync(const Model::DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTagsOutcomeCallable DeleteTagsCallable(const Model::DeleteTagsRequest& request);

                /**
                 *This API is used to get project lists.
                 * @param req DescribeProjectsRequest
                 * @return DescribeProjectsOutcome
                 */
                DescribeProjectsOutcome DescribeProjects(const Model::DescribeProjectsRequest &request);
                void DescribeProjectsAsync(const Model::DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectsOutcomeCallable DescribeProjectsCallable(const Model::DescribeProjectsRequest& request);

                /**
                 *This API is used to query the tags associated with a resource.
                 * @param req DescribeResourceTagsRequest
                 * @return DescribeResourceTagsOutcome
                 */
                DescribeResourceTagsOutcome DescribeResourceTags(const Model::DescribeResourceTagsRequest &request);
                void DescribeResourceTagsAsync(const Model::DescribeResourceTagsRequest& request, const DescribeResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTagsOutcomeCallable DescribeResourceTagsCallable(const Model::DescribeResourceTagsRequest& request);

                /**
                 *This API is used to query the tag key-value pairs associated with an existing resource.
                 * @param req DescribeResourceTagsByResourceIdsRequest
                 * @return DescribeResourceTagsByResourceIdsOutcome
                 */
                DescribeResourceTagsByResourceIdsOutcome DescribeResourceTagsByResourceIds(const Model::DescribeResourceTagsByResourceIdsRequest &request);
                void DescribeResourceTagsByResourceIdsAsync(const Model::DescribeResourceTagsByResourceIdsRequest& request, const DescribeResourceTagsByResourceIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTagsByResourceIdsOutcomeCallable DescribeResourceTagsByResourceIdsCallable(const Model::DescribeResourceTagsByResourceIdsRequest& request);

                /**
                 *This API is used to view the tags associated with a resource in sequence.
                 * @param req DescribeResourceTagsByResourceIdsSeqRequest
                 * @return DescribeResourceTagsByResourceIdsSeqOutcome
                 */
                DescribeResourceTagsByResourceIdsSeqOutcome DescribeResourceTagsByResourceIdsSeq(const Model::DescribeResourceTagsByResourceIdsSeqRequest &request);
                void DescribeResourceTagsByResourceIdsSeqAsync(const Model::DescribeResourceTagsByResourceIdsSeqRequest& request, const DescribeResourceTagsByResourceIdsSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTagsByResourceIdsSeqOutcomeCallable DescribeResourceTagsByResourceIdsSeqCallable(const Model::DescribeResourceTagsByResourceIdsSeqRequest& request);

                /**
                 *This API is used to get resource tags based on tag keys.
                 * @param req DescribeResourceTagsByTagKeysRequest
                 * @return DescribeResourceTagsByTagKeysOutcome
                 */
                DescribeResourceTagsByTagKeysOutcome DescribeResourceTagsByTagKeys(const Model::DescribeResourceTagsByTagKeysRequest &request);
                void DescribeResourceTagsByTagKeysAsync(const Model::DescribeResourceTagsByTagKeysRequest& request, const DescribeResourceTagsByTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourceTagsByTagKeysOutcomeCallable DescribeResourceTagsByTagKeysCallable(const Model::DescribeResourceTagsByTagKeysRequest& request);

                /**
                 *This API is used to query resources by tags.
                 * @param req DescribeResourcesByTagsRequest
                 * @return DescribeResourcesByTagsOutcome
                 */
                DescribeResourcesByTagsOutcome DescribeResourcesByTags(const Model::DescribeResourcesByTagsRequest &request);
                void DescribeResourcesByTagsAsync(const Model::DescribeResourcesByTagsRequest& request, const DescribeResourcesByTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByTagsOutcomeCallable DescribeResourcesByTagsCallable(const Model::DescribeResourcesByTagsRequest& request);

                /**
                 *This API is used to query resource list by tags.
                 * @param req DescribeResourcesByTagsUnionRequest
                 * @return DescribeResourcesByTagsUnionOutcome
                 */
                DescribeResourcesByTagsUnionOutcome DescribeResourcesByTagsUnion(const Model::DescribeResourcesByTagsUnionRequest &request);
                void DescribeResourcesByTagsUnionAsync(const Model::DescribeResourcesByTagsUnionRequest& request, const DescribeResourcesByTagsUnionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeResourcesByTagsUnionOutcomeCallable DescribeResourcesByTagsUnionCallable(const Model::DescribeResourcesByTagsUnionRequest& request);

                /**
                 *This API is used to query tag keys in the list of created tags.
                 * @param req DescribeTagKeysRequest
                 * @return DescribeTagKeysOutcome
                 */
                DescribeTagKeysOutcome DescribeTagKeys(const Model::DescribeTagKeysRequest &request);
                void DescribeTagKeysAsync(const Model::DescribeTagKeysRequest& request, const DescribeTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagKeysOutcomeCallable DescribeTagKeysCallable(const Model::DescribeTagKeysRequest& request);

                /**
                 *This API is used to query tag values in an existing tag list.
                 * @param req DescribeTagValuesRequest
                 * @return DescribeTagValuesOutcome
                 */
                DescribeTagValuesOutcome DescribeTagValues(const Model::DescribeTagValuesRequest &request);
                void DescribeTagValuesAsync(const Model::DescribeTagValuesRequest& request, const DescribeTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagValuesOutcomeCallable DescribeTagValuesCallable(const Model::DescribeTagValuesRequest& request);

                /**
                 *This API is used to query tag values in a created tag list.
                 * @param req DescribeTagValuesSeqRequest
                 * @return DescribeTagValuesSeqOutcome
                 */
                DescribeTagValuesSeqOutcome DescribeTagValuesSeq(const Model::DescribeTagValuesSeqRequest &request);
                void DescribeTagValuesSeqAsync(const Model::DescribeTagValuesSeqRequest& request, const DescribeTagValuesSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagValuesSeqOutcomeCallable DescribeTagValuesSeqCallable(const Model::DescribeTagValuesSeqRequest& request);

                /**
                 *This API is used to query the list of created tags.
                 * @param req DescribeTagsRequest
                 * @return DescribeTagsOutcome
                 */
                DescribeTagsOutcome DescribeTags(const Model::DescribeTagsRequest &request);
                void DescribeTagsAsync(const Model::DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsOutcomeCallable DescribeTagsCallable(const Model::DescribeTagsRequest& request);

                /**
                 *This API is used to query the created tag lists.

                 * @param req DescribeTagsSeqRequest
                 * @return DescribeTagsSeqOutcome
                 */
                DescribeTagsSeqOutcome DescribeTagsSeq(const Model::DescribeTagsSeqRequest &request);
                void DescribeTagsSeqAsync(const Model::DescribeTagsSeqRequest& request, const DescribeTagsSeqAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTagsSeqOutcomeCallable DescribeTagsSeqCallable(const Model::DescribeTagsSeqRequest& request);

                /**
                 *This API is used to unbind a tag from multiple resources.
                 * @param req DetachResourcesTagRequest
                 * @return DetachResourcesTagOutcome
                 */
                DetachResourcesTagOutcome DetachResourcesTag(const Model::DetachResourcesTagRequest &request);
                void DetachResourcesTagAsync(const Model::DetachResourcesTagRequest& request, const DetachResourcesTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetachResourcesTagOutcomeCallable DetachResourcesTagCallable(const Model::DetachResourcesTagRequest& request);

                /**
                 *This API is used to query the list of resources associated with a tag.
                 * @param req GetResourcesRequest
                 * @return GetResourcesOutcome
                 */
                GetResourcesOutcome GetResources(const Model::GetResourcesRequest &request);
                void GetResourcesAsync(const Model::GetResourcesRequest& request, const GetResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetResourcesOutcomeCallable GetResourcesCallable(const Model::GetResourcesRequest& request);

                /**
                 *This API is used to query the list of tag keys.
                 * @param req GetTagKeysRequest
                 * @return GetTagKeysOutcome
                 */
                GetTagKeysOutcome GetTagKeys(const Model::GetTagKeysRequest &request);
                void GetTagKeysAsync(const Model::GetTagKeysRequest& request, const GetTagKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTagKeysOutcomeCallable GetTagKeysCallable(const Model::GetTagKeysRequest& request);

                /**
                 *This API is used to query tag values in the list of created tags.
                 * @param req GetTagValuesRequest
                 * @return GetTagValuesOutcome
                 */
                GetTagValuesOutcome GetTagValues(const Model::GetTagValuesRequest &request);
                void GetTagValuesAsync(const Model::GetTagValuesRequest& request, const GetTagValuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTagValuesOutcomeCallable GetTagValuesCallable(const Model::GetTagValuesRequest& request);

                /**
                 *This API is used to get the list of created tags.
                 * @param req GetTagsRequest
                 * @return GetTagsOutcome
                 */
                GetTagsOutcome GetTags(const Model::GetTagsRequest &request);
                void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request);

                /**
                 *This API is used to modify all tags associated with a resource.
                 * @param req ModifyResourceTagsRequest
                 * @return ModifyResourceTagsOutcome
                 */
                ModifyResourceTagsOutcome ModifyResourceTags(const Model::ModifyResourceTagsRequest &request);
                void ModifyResourceTagsAsync(const Model::ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourceTagsOutcomeCallable ModifyResourceTagsCallable(const Model::ModifyResourceTagsRequest& request);

                /**
                 *This API is used to modify the tag value corresponding to a tag key associated with multiple resources.
                 * @param req ModifyResourcesTagValueRequest
                 * @return ModifyResourcesTagValueOutcome
                 */
                ModifyResourcesTagValueOutcome ModifyResourcesTagValue(const Model::ModifyResourcesTagValueRequest &request);
                void ModifyResourcesTagValueAsync(const Model::ModifyResourcesTagValueRequest& request, const ModifyResourcesTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyResourcesTagValueOutcomeCallable ModifyResourcesTagValueCallable(const Model::ModifyResourcesTagValueRequest& request);

                /**
                 *This API is used to create and bind a tag uniformly to multiple specified resources of multiple Tencent Cloud services.
                 * @param req TagResourcesRequest
                 * @return TagResourcesOutcome
                 */
                TagResourcesOutcome TagResources(const Model::TagResourcesRequest &request);
                void TagResourcesAsync(const Model::TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TagResourcesOutcomeCallable TagResourcesCallable(const Model::TagResourcesRequest& request);

                /**
                 *This API is used to unbind a tag uniformly from multiple specified resources of multiple Tencent Cloud services.
                 * @param req UnTagResourcesRequest
                 * @return UnTagResourcesOutcome
                 */
                UnTagResourcesOutcome UnTagResources(const Model::UnTagResourcesRequest &request);
                void UnTagResourcesAsync(const Model::UnTagResourcesRequest& request, const UnTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnTagResourcesOutcomeCallable UnTagResourcesCallable(const Model::UnTagResourcesRequest& request);

                /**
                 *This API is used to modify the values of tags associated with a resource (the tag key does not change).
                 * @param req UpdateResourceTagValueRequest
                 * @return UpdateResourceTagValueOutcome
                 */
                UpdateResourceTagValueOutcome UpdateResourceTagValue(const Model::UpdateResourceTagValueRequest &request);
                void UpdateResourceTagValueAsync(const Model::UpdateResourceTagValueRequest& request, const UpdateResourceTagValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateResourceTagValueOutcomeCallable UpdateResourceTagValueCallable(const Model::UpdateResourceTagValueRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_TAGCLIENT_H_
