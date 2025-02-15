/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_SCHEDULERX2_SCHEDULERX2CLIENT_H_
#define ALIBABACLOUD_SCHEDULERX2_SCHEDULERX2CLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "Schedulerx2Export.h"
#include "model/BatchDeleteJobsRequest.h"
#include "model/BatchDeleteJobsResult.h"
#include "model/BatchDisableJobsRequest.h"
#include "model/BatchDisableJobsResult.h"
#include "model/BatchEnableJobsRequest.h"
#include "model/BatchEnableJobsResult.h"
#include "model/CreateAppGroupRequest.h"
#include "model/CreateAppGroupResult.h"
#include "model/CreateJobRequest.h"
#include "model/CreateJobResult.h"
#include "model/CreateNamespaceRequest.h"
#include "model/CreateNamespaceResult.h"
#include "model/DeleteJobRequest.h"
#include "model/DeleteJobResult.h"
#include "model/DeleteWorkflowRequest.h"
#include "model/DeleteWorkflowResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DesignateWorkersRequest.h"
#include "model/DesignateWorkersResult.h"
#include "model/DisableJobRequest.h"
#include "model/DisableJobResult.h"
#include "model/DisableWorkflowRequest.h"
#include "model/DisableWorkflowResult.h"
#include "model/EnableJobRequest.h"
#include "model/EnableJobResult.h"
#include "model/EnableWorkflowRequest.h"
#include "model/EnableWorkflowResult.h"
#include "model/ExecuteJobRequest.h"
#include "model/ExecuteJobResult.h"
#include "model/ExecuteWorkflowRequest.h"
#include "model/ExecuteWorkflowResult.h"
#include "model/GetJobInfoRequest.h"
#include "model/GetJobInfoResult.h"
#include "model/GetJobInstanceRequest.h"
#include "model/GetJobInstanceResult.h"
#include "model/GetJobInstanceListRequest.h"
#include "model/GetJobInstanceListResult.h"
#include "model/GetWorkFlowRequest.h"
#include "model/GetWorkFlowResult.h"
#include "model/GetWorkerListRequest.h"
#include "model/GetWorkerListResult.h"
#include "model/GrantPermissionRequest.h"
#include "model/GrantPermissionResult.h"
#include "model/ListGroupsRequest.h"
#include "model/ListGroupsResult.h"
#include "model/ListJobsRequest.h"
#include "model/ListJobsResult.h"
#include "model/ListNamespacesRequest.h"
#include "model/ListNamespacesResult.h"
#include "model/RevokePermissionRequest.h"
#include "model/RevokePermissionResult.h"
#include "model/StopInstanceRequest.h"
#include "model/StopInstanceResult.h"
#include "model/UpdateJobRequest.h"
#include "model/UpdateJobResult.h"


namespace AlibabaCloud
{
	namespace Schedulerx2
	{
		class ALIBABACLOUD_SCHEDULERX2_EXPORT Schedulerx2Client : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::BatchDeleteJobsResult> BatchDeleteJobsOutcome;
			typedef std::future<BatchDeleteJobsOutcome> BatchDeleteJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchDeleteJobsRequest&, const BatchDeleteJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDeleteJobsAsyncHandler;
			typedef Outcome<Error, Model::BatchDisableJobsResult> BatchDisableJobsOutcome;
			typedef std::future<BatchDisableJobsOutcome> BatchDisableJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchDisableJobsRequest&, const BatchDisableJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchDisableJobsAsyncHandler;
			typedef Outcome<Error, Model::BatchEnableJobsResult> BatchEnableJobsOutcome;
			typedef std::future<BatchEnableJobsOutcome> BatchEnableJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::BatchEnableJobsRequest&, const BatchEnableJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> BatchEnableJobsAsyncHandler;
			typedef Outcome<Error, Model::CreateAppGroupResult> CreateAppGroupOutcome;
			typedef std::future<CreateAppGroupOutcome> CreateAppGroupOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateAppGroupRequest&, const CreateAppGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateAppGroupAsyncHandler;
			typedef Outcome<Error, Model::CreateJobResult> CreateJobOutcome;
			typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateJobRequest&, const CreateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateJobAsyncHandler;
			typedef Outcome<Error, Model::CreateNamespaceResult> CreateNamespaceOutcome;
			typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::CreateNamespaceRequest&, const CreateNamespaceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateNamespaceAsyncHandler;
			typedef Outcome<Error, Model::DeleteJobResult> DeleteJobOutcome;
			typedef std::future<DeleteJobOutcome> DeleteJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteJobRequest&, const DeleteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteJobAsyncHandler;
			typedef Outcome<Error, Model::DeleteWorkflowResult> DeleteWorkflowOutcome;
			typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DeleteWorkflowRequest&, const DeleteWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteWorkflowAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DesignateWorkersResult> DesignateWorkersOutcome;
			typedef std::future<DesignateWorkersOutcome> DesignateWorkersOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DesignateWorkersRequest&, const DesignateWorkersOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DesignateWorkersAsyncHandler;
			typedef Outcome<Error, Model::DisableJobResult> DisableJobOutcome;
			typedef std::future<DisableJobOutcome> DisableJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DisableJobRequest&, const DisableJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableJobAsyncHandler;
			typedef Outcome<Error, Model::DisableWorkflowResult> DisableWorkflowOutcome;
			typedef std::future<DisableWorkflowOutcome> DisableWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::DisableWorkflowRequest&, const DisableWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DisableWorkflowAsyncHandler;
			typedef Outcome<Error, Model::EnableJobResult> EnableJobOutcome;
			typedef std::future<EnableJobOutcome> EnableJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::EnableJobRequest&, const EnableJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableJobAsyncHandler;
			typedef Outcome<Error, Model::EnableWorkflowResult> EnableWorkflowOutcome;
			typedef std::future<EnableWorkflowOutcome> EnableWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::EnableWorkflowRequest&, const EnableWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> EnableWorkflowAsyncHandler;
			typedef Outcome<Error, Model::ExecuteJobResult> ExecuteJobOutcome;
			typedef std::future<ExecuteJobOutcome> ExecuteJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ExecuteJobRequest&, const ExecuteJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteJobAsyncHandler;
			typedef Outcome<Error, Model::ExecuteWorkflowResult> ExecuteWorkflowOutcome;
			typedef std::future<ExecuteWorkflowOutcome> ExecuteWorkflowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ExecuteWorkflowRequest&, const ExecuteWorkflowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteWorkflowAsyncHandler;
			typedef Outcome<Error, Model::GetJobInfoResult> GetJobInfoOutcome;
			typedef std::future<GetJobInfoOutcome> GetJobInfoOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetJobInfoRequest&, const GetJobInfoOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInfoAsyncHandler;
			typedef Outcome<Error, Model::GetJobInstanceResult> GetJobInstanceOutcome;
			typedef std::future<GetJobInstanceOutcome> GetJobInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetJobInstanceRequest&, const GetJobInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInstanceAsyncHandler;
			typedef Outcome<Error, Model::GetJobInstanceListResult> GetJobInstanceListOutcome;
			typedef std::future<GetJobInstanceListOutcome> GetJobInstanceListOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetJobInstanceListRequest&, const GetJobInstanceListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetJobInstanceListAsyncHandler;
			typedef Outcome<Error, Model::GetWorkFlowResult> GetWorkFlowOutcome;
			typedef std::future<GetWorkFlowOutcome> GetWorkFlowOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetWorkFlowRequest&, const GetWorkFlowOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkFlowAsyncHandler;
			typedef Outcome<Error, Model::GetWorkerListResult> GetWorkerListOutcome;
			typedef std::future<GetWorkerListOutcome> GetWorkerListOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GetWorkerListRequest&, const GetWorkerListOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetWorkerListAsyncHandler;
			typedef Outcome<Error, Model::GrantPermissionResult> GrantPermissionOutcome;
			typedef std::future<GrantPermissionOutcome> GrantPermissionOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::GrantPermissionRequest&, const GrantPermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GrantPermissionAsyncHandler;
			typedef Outcome<Error, Model::ListGroupsResult> ListGroupsOutcome;
			typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListGroupsRequest&, const ListGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListGroupsAsyncHandler;
			typedef Outcome<Error, Model::ListJobsResult> ListJobsOutcome;
			typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListJobsRequest&, const ListJobsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListJobsAsyncHandler;
			typedef Outcome<Error, Model::ListNamespacesResult> ListNamespacesOutcome;
			typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::ListNamespacesRequest&, const ListNamespacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ListNamespacesAsyncHandler;
			typedef Outcome<Error, Model::RevokePermissionResult> RevokePermissionOutcome;
			typedef std::future<RevokePermissionOutcome> RevokePermissionOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::RevokePermissionRequest&, const RevokePermissionOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> RevokePermissionAsyncHandler;
			typedef Outcome<Error, Model::StopInstanceResult> StopInstanceOutcome;
			typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::StopInstanceRequest&, const StopInstanceOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopInstanceAsyncHandler;
			typedef Outcome<Error, Model::UpdateJobResult> UpdateJobOutcome;
			typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
			typedef std::function<void(const Schedulerx2Client*, const Model::UpdateJobRequest&, const UpdateJobOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateJobAsyncHandler;

			Schedulerx2Client(const Credentials &credentials, const ClientConfiguration &configuration);
			Schedulerx2Client(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			Schedulerx2Client(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~Schedulerx2Client();
			BatchDeleteJobsOutcome batchDeleteJobs(const Model::BatchDeleteJobsRequest &request)const;
			void batchDeleteJobsAsync(const Model::BatchDeleteJobsRequest& request, const BatchDeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDeleteJobsOutcomeCallable batchDeleteJobsCallable(const Model::BatchDeleteJobsRequest& request) const;
			BatchDisableJobsOutcome batchDisableJobs(const Model::BatchDisableJobsRequest &request)const;
			void batchDisableJobsAsync(const Model::BatchDisableJobsRequest& request, const BatchDisableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchDisableJobsOutcomeCallable batchDisableJobsCallable(const Model::BatchDisableJobsRequest& request) const;
			BatchEnableJobsOutcome batchEnableJobs(const Model::BatchEnableJobsRequest &request)const;
			void batchEnableJobsAsync(const Model::BatchEnableJobsRequest& request, const BatchEnableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			BatchEnableJobsOutcomeCallable batchEnableJobsCallable(const Model::BatchEnableJobsRequest& request) const;
			CreateAppGroupOutcome createAppGroup(const Model::CreateAppGroupRequest &request)const;
			void createAppGroupAsync(const Model::CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateAppGroupOutcomeCallable createAppGroupCallable(const Model::CreateAppGroupRequest& request) const;
			CreateJobOutcome createJob(const Model::CreateJobRequest &request)const;
			void createJobAsync(const Model::CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateJobOutcomeCallable createJobCallable(const Model::CreateJobRequest& request) const;
			CreateNamespaceOutcome createNamespace(const Model::CreateNamespaceRequest &request)const;
			void createNamespaceAsync(const Model::CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateNamespaceOutcomeCallable createNamespaceCallable(const Model::CreateNamespaceRequest& request) const;
			DeleteJobOutcome deleteJob(const Model::DeleteJobRequest &request)const;
			void deleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteJobOutcomeCallable deleteJobCallable(const Model::DeleteJobRequest& request) const;
			DeleteWorkflowOutcome deleteWorkflow(const Model::DeleteWorkflowRequest &request)const;
			void deleteWorkflowAsync(const Model::DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteWorkflowOutcomeCallable deleteWorkflowCallable(const Model::DeleteWorkflowRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DesignateWorkersOutcome designateWorkers(const Model::DesignateWorkersRequest &request)const;
			void designateWorkersAsync(const Model::DesignateWorkersRequest& request, const DesignateWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DesignateWorkersOutcomeCallable designateWorkersCallable(const Model::DesignateWorkersRequest& request) const;
			DisableJobOutcome disableJob(const Model::DisableJobRequest &request)const;
			void disableJobAsync(const Model::DisableJobRequest& request, const DisableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableJobOutcomeCallable disableJobCallable(const Model::DisableJobRequest& request) const;
			DisableWorkflowOutcome disableWorkflow(const Model::DisableWorkflowRequest &request)const;
			void disableWorkflowAsync(const Model::DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DisableWorkflowOutcomeCallable disableWorkflowCallable(const Model::DisableWorkflowRequest& request) const;
			EnableJobOutcome enableJob(const Model::EnableJobRequest &request)const;
			void enableJobAsync(const Model::EnableJobRequest& request, const EnableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableJobOutcomeCallable enableJobCallable(const Model::EnableJobRequest& request) const;
			EnableWorkflowOutcome enableWorkflow(const Model::EnableWorkflowRequest &request)const;
			void enableWorkflowAsync(const Model::EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			EnableWorkflowOutcomeCallable enableWorkflowCallable(const Model::EnableWorkflowRequest& request) const;
			ExecuteJobOutcome executeJob(const Model::ExecuteJobRequest &request)const;
			void executeJobAsync(const Model::ExecuteJobRequest& request, const ExecuteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteJobOutcomeCallable executeJobCallable(const Model::ExecuteJobRequest& request) const;
			ExecuteWorkflowOutcome executeWorkflow(const Model::ExecuteWorkflowRequest &request)const;
			void executeWorkflowAsync(const Model::ExecuteWorkflowRequest& request, const ExecuteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ExecuteWorkflowOutcomeCallable executeWorkflowCallable(const Model::ExecuteWorkflowRequest& request) const;
			GetJobInfoOutcome getJobInfo(const Model::GetJobInfoRequest &request)const;
			void getJobInfoAsync(const Model::GetJobInfoRequest& request, const GetJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInfoOutcomeCallable getJobInfoCallable(const Model::GetJobInfoRequest& request) const;
			GetJobInstanceOutcome getJobInstance(const Model::GetJobInstanceRequest &request)const;
			void getJobInstanceAsync(const Model::GetJobInstanceRequest& request, const GetJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInstanceOutcomeCallable getJobInstanceCallable(const Model::GetJobInstanceRequest& request) const;
			GetJobInstanceListOutcome getJobInstanceList(const Model::GetJobInstanceListRequest &request)const;
			void getJobInstanceListAsync(const Model::GetJobInstanceListRequest& request, const GetJobInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetJobInstanceListOutcomeCallable getJobInstanceListCallable(const Model::GetJobInstanceListRequest& request) const;
			GetWorkFlowOutcome getWorkFlow(const Model::GetWorkFlowRequest &request)const;
			void getWorkFlowAsync(const Model::GetWorkFlowRequest& request, const GetWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkFlowOutcomeCallable getWorkFlowCallable(const Model::GetWorkFlowRequest& request) const;
			GetWorkerListOutcome getWorkerList(const Model::GetWorkerListRequest &request)const;
			void getWorkerListAsync(const Model::GetWorkerListRequest& request, const GetWorkerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetWorkerListOutcomeCallable getWorkerListCallable(const Model::GetWorkerListRequest& request) const;
			GrantPermissionOutcome grantPermission(const Model::GrantPermissionRequest &request)const;
			void grantPermissionAsync(const Model::GrantPermissionRequest& request, const GrantPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GrantPermissionOutcomeCallable grantPermissionCallable(const Model::GrantPermissionRequest& request) const;
			ListGroupsOutcome listGroups(const Model::ListGroupsRequest &request)const;
			void listGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListGroupsOutcomeCallable listGroupsCallable(const Model::ListGroupsRequest& request) const;
			ListJobsOutcome listJobs(const Model::ListJobsRequest &request)const;
			void listJobsAsync(const Model::ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListJobsOutcomeCallable listJobsCallable(const Model::ListJobsRequest& request) const;
			ListNamespacesOutcome listNamespaces(const Model::ListNamespacesRequest &request)const;
			void listNamespacesAsync(const Model::ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ListNamespacesOutcomeCallable listNamespacesCallable(const Model::ListNamespacesRequest& request) const;
			RevokePermissionOutcome revokePermission(const Model::RevokePermissionRequest &request)const;
			void revokePermissionAsync(const Model::RevokePermissionRequest& request, const RevokePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			RevokePermissionOutcomeCallable revokePermissionCallable(const Model::RevokePermissionRequest& request) const;
			StopInstanceOutcome stopInstance(const Model::StopInstanceRequest &request)const;
			void stopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopInstanceOutcomeCallable stopInstanceCallable(const Model::StopInstanceRequest& request) const;
			UpdateJobOutcome updateJob(const Model::UpdateJobRequest &request)const;
			void updateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateJobOutcomeCallable updateJobCallable(const Model::UpdateJobRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_SCHEDULERX2_SCHEDULERX2CLIENT_H_
