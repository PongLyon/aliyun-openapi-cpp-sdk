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

#include <alibabacloud/schedulerx2/Schedulerx2Client.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Schedulerx2;
using namespace AlibabaCloud::Schedulerx2::Model;

namespace
{
	const std::string SERVICE_NAME = "schedulerx2";
}

Schedulerx2Client::Schedulerx2Client(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Schedulerx2Client::Schedulerx2Client(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Schedulerx2Client::Schedulerx2Client(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "");
}

Schedulerx2Client::~Schedulerx2Client()
{}

Schedulerx2Client::BatchDeleteJobsOutcome Schedulerx2Client::batchDeleteJobs(const BatchDeleteJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDeleteJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDeleteJobsOutcome(BatchDeleteJobsResult(outcome.result()));
	else
		return BatchDeleteJobsOutcome(outcome.error());
}

void Schedulerx2Client::batchDeleteJobsAsync(const BatchDeleteJobsRequest& request, const BatchDeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDeleteJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchDeleteJobsOutcomeCallable Schedulerx2Client::batchDeleteJobsCallable(const BatchDeleteJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDeleteJobsOutcome()>>(
			[this, request]()
			{
			return this->batchDeleteJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::BatchDisableJobsOutcome Schedulerx2Client::batchDisableJobs(const BatchDisableJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchDisableJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchDisableJobsOutcome(BatchDisableJobsResult(outcome.result()));
	else
		return BatchDisableJobsOutcome(outcome.error());
}

void Schedulerx2Client::batchDisableJobsAsync(const BatchDisableJobsRequest& request, const BatchDisableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchDisableJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchDisableJobsOutcomeCallable Schedulerx2Client::batchDisableJobsCallable(const BatchDisableJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchDisableJobsOutcome()>>(
			[this, request]()
			{
			return this->batchDisableJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::BatchEnableJobsOutcome Schedulerx2Client::batchEnableJobs(const BatchEnableJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchEnableJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchEnableJobsOutcome(BatchEnableJobsResult(outcome.result()));
	else
		return BatchEnableJobsOutcome(outcome.error());
}

void Schedulerx2Client::batchEnableJobsAsync(const BatchEnableJobsRequest& request, const BatchEnableJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchEnableJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::BatchEnableJobsOutcomeCallable Schedulerx2Client::batchEnableJobsCallable(const BatchEnableJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchEnableJobsOutcome()>>(
			[this, request]()
			{
			return this->batchEnableJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateAppGroupOutcome Schedulerx2Client::createAppGroup(const CreateAppGroupRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateAppGroupOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateAppGroupOutcome(CreateAppGroupResult(outcome.result()));
	else
		return CreateAppGroupOutcome(outcome.error());
}

void Schedulerx2Client::createAppGroupAsync(const CreateAppGroupRequest& request, const CreateAppGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createAppGroup(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateAppGroupOutcomeCallable Schedulerx2Client::createAppGroupCallable(const CreateAppGroupRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateAppGroupOutcome()>>(
			[this, request]()
			{
			return this->createAppGroup(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateJobOutcome Schedulerx2Client::createJob(const CreateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateJobOutcome(CreateJobResult(outcome.result()));
	else
		return CreateJobOutcome(outcome.error());
}

void Schedulerx2Client::createJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateJobOutcomeCallable Schedulerx2Client::createJobCallable(const CreateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateJobOutcome()>>(
			[this, request]()
			{
			return this->createJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::CreateNamespaceOutcome Schedulerx2Client::createNamespace(const CreateNamespaceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateNamespaceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateNamespaceOutcome(CreateNamespaceResult(outcome.result()));
	else
		return CreateNamespaceOutcome(outcome.error());
}

void Schedulerx2Client::createNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createNamespace(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::CreateNamespaceOutcomeCallable Schedulerx2Client::createNamespaceCallable(const CreateNamespaceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateNamespaceOutcome()>>(
			[this, request]()
			{
			return this->createNamespace(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteJobOutcome Schedulerx2Client::deleteJob(const DeleteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteJobOutcome(DeleteJobResult(outcome.result()));
	else
		return DeleteJobOutcome(outcome.error());
}

void Schedulerx2Client::deleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteJobOutcomeCallable Schedulerx2Client::deleteJobCallable(const DeleteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteJobOutcome()>>(
			[this, request]()
			{
			return this->deleteJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DeleteWorkflowOutcome Schedulerx2Client::deleteWorkflow(const DeleteWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteWorkflowOutcome(DeleteWorkflowResult(outcome.result()));
	else
		return DeleteWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::deleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DeleteWorkflowOutcomeCallable Schedulerx2Client::deleteWorkflowCallable(const DeleteWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteWorkflowOutcome()>>(
			[this, request]()
			{
			return this->deleteWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DescribeRegionsOutcome Schedulerx2Client::describeRegions(const DescribeRegionsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeRegionsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeRegionsOutcome(DescribeRegionsResult(outcome.result()));
	else
		return DescribeRegionsOutcome(outcome.error());
}

void Schedulerx2Client::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DescribeRegionsOutcomeCallable Schedulerx2Client::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DesignateWorkersOutcome Schedulerx2Client::designateWorkers(const DesignateWorkersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DesignateWorkersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DesignateWorkersOutcome(DesignateWorkersResult(outcome.result()));
	else
		return DesignateWorkersOutcome(outcome.error());
}

void Schedulerx2Client::designateWorkersAsync(const DesignateWorkersRequest& request, const DesignateWorkersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, designateWorkers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DesignateWorkersOutcomeCallable Schedulerx2Client::designateWorkersCallable(const DesignateWorkersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DesignateWorkersOutcome()>>(
			[this, request]()
			{
			return this->designateWorkers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DisableJobOutcome Schedulerx2Client::disableJob(const DisableJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableJobOutcome(DisableJobResult(outcome.result()));
	else
		return DisableJobOutcome(outcome.error());
}

void Schedulerx2Client::disableJobAsync(const DisableJobRequest& request, const DisableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DisableJobOutcomeCallable Schedulerx2Client::disableJobCallable(const DisableJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableJobOutcome()>>(
			[this, request]()
			{
			return this->disableJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::DisableWorkflowOutcome Schedulerx2Client::disableWorkflow(const DisableWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DisableWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DisableWorkflowOutcome(DisableWorkflowResult(outcome.result()));
	else
		return DisableWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::disableWorkflowAsync(const DisableWorkflowRequest& request, const DisableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, disableWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::DisableWorkflowOutcomeCallable Schedulerx2Client::disableWorkflowCallable(const DisableWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DisableWorkflowOutcome()>>(
			[this, request]()
			{
			return this->disableWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::EnableJobOutcome Schedulerx2Client::enableJob(const EnableJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableJobOutcome(EnableJobResult(outcome.result()));
	else
		return EnableJobOutcome(outcome.error());
}

void Schedulerx2Client::enableJobAsync(const EnableJobRequest& request, const EnableJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::EnableJobOutcomeCallable Schedulerx2Client::enableJobCallable(const EnableJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableJobOutcome()>>(
			[this, request]()
			{
			return this->enableJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::EnableWorkflowOutcome Schedulerx2Client::enableWorkflow(const EnableWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return EnableWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return EnableWorkflowOutcome(EnableWorkflowResult(outcome.result()));
	else
		return EnableWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::enableWorkflowAsync(const EnableWorkflowRequest& request, const EnableWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, enableWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::EnableWorkflowOutcomeCallable Schedulerx2Client::enableWorkflowCallable(const EnableWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<EnableWorkflowOutcome()>>(
			[this, request]()
			{
			return this->enableWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ExecuteJobOutcome Schedulerx2Client::executeJob(const ExecuteJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteJobOutcome(ExecuteJobResult(outcome.result()));
	else
		return ExecuteJobOutcome(outcome.error());
}

void Schedulerx2Client::executeJobAsync(const ExecuteJobRequest& request, const ExecuteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ExecuteJobOutcomeCallable Schedulerx2Client::executeJobCallable(const ExecuteJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteJobOutcome()>>(
			[this, request]()
			{
			return this->executeJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ExecuteWorkflowOutcome Schedulerx2Client::executeWorkflow(const ExecuteWorkflowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ExecuteWorkflowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ExecuteWorkflowOutcome(ExecuteWorkflowResult(outcome.result()));
	else
		return ExecuteWorkflowOutcome(outcome.error());
}

void Schedulerx2Client::executeWorkflowAsync(const ExecuteWorkflowRequest& request, const ExecuteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, executeWorkflow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ExecuteWorkflowOutcomeCallable Schedulerx2Client::executeWorkflowCallable(const ExecuteWorkflowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ExecuteWorkflowOutcome()>>(
			[this, request]()
			{
			return this->executeWorkflow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetJobInfoOutcome Schedulerx2Client::getJobInfo(const GetJobInfoRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInfoOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInfoOutcome(GetJobInfoResult(outcome.result()));
	else
		return GetJobInfoOutcome(outcome.error());
}

void Schedulerx2Client::getJobInfoAsync(const GetJobInfoRequest& request, const GetJobInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInfo(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetJobInfoOutcomeCallable Schedulerx2Client::getJobInfoCallable(const GetJobInfoRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInfoOutcome()>>(
			[this, request]()
			{
			return this->getJobInfo(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetJobInstanceOutcome Schedulerx2Client::getJobInstance(const GetJobInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInstanceOutcome(GetJobInstanceResult(outcome.result()));
	else
		return GetJobInstanceOutcome(outcome.error());
}

void Schedulerx2Client::getJobInstanceAsync(const GetJobInstanceRequest& request, const GetJobInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetJobInstanceOutcomeCallable Schedulerx2Client::getJobInstanceCallable(const GetJobInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInstanceOutcome()>>(
			[this, request]()
			{
			return this->getJobInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetJobInstanceListOutcome Schedulerx2Client::getJobInstanceList(const GetJobInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetJobInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetJobInstanceListOutcome(GetJobInstanceListResult(outcome.result()));
	else
		return GetJobInstanceListOutcome(outcome.error());
}

void Schedulerx2Client::getJobInstanceListAsync(const GetJobInstanceListRequest& request, const GetJobInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getJobInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetJobInstanceListOutcomeCallable Schedulerx2Client::getJobInstanceListCallable(const GetJobInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetJobInstanceListOutcome()>>(
			[this, request]()
			{
			return this->getJobInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetWorkFlowOutcome Schedulerx2Client::getWorkFlow(const GetWorkFlowRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkFlowOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkFlowOutcome(GetWorkFlowResult(outcome.result()));
	else
		return GetWorkFlowOutcome(outcome.error());
}

void Schedulerx2Client::getWorkFlowAsync(const GetWorkFlowRequest& request, const GetWorkFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkFlow(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetWorkFlowOutcomeCallable Schedulerx2Client::getWorkFlowCallable(const GetWorkFlowRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkFlowOutcome()>>(
			[this, request]()
			{
			return this->getWorkFlow(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GetWorkerListOutcome Schedulerx2Client::getWorkerList(const GetWorkerListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetWorkerListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetWorkerListOutcome(GetWorkerListResult(outcome.result()));
	else
		return GetWorkerListOutcome(outcome.error());
}

void Schedulerx2Client::getWorkerListAsync(const GetWorkerListRequest& request, const GetWorkerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getWorkerList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GetWorkerListOutcomeCallable Schedulerx2Client::getWorkerListCallable(const GetWorkerListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetWorkerListOutcome()>>(
			[this, request]()
			{
			return this->getWorkerList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::GrantPermissionOutcome Schedulerx2Client::grantPermission(const GrantPermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GrantPermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GrantPermissionOutcome(GrantPermissionResult(outcome.result()));
	else
		return GrantPermissionOutcome(outcome.error());
}

void Schedulerx2Client::grantPermissionAsync(const GrantPermissionRequest& request, const GrantPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, grantPermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::GrantPermissionOutcomeCallable Schedulerx2Client::grantPermissionCallable(const GrantPermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GrantPermissionOutcome()>>(
			[this, request]()
			{
			return this->grantPermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListGroupsOutcome Schedulerx2Client::listGroups(const ListGroupsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListGroupsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListGroupsOutcome(ListGroupsResult(outcome.result()));
	else
		return ListGroupsOutcome(outcome.error());
}

void Schedulerx2Client::listGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listGroups(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListGroupsOutcomeCallable Schedulerx2Client::listGroupsCallable(const ListGroupsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
			[this, request]()
			{
			return this->listGroups(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListJobsOutcome Schedulerx2Client::listJobs(const ListJobsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListJobsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListJobsOutcome(ListJobsResult(outcome.result()));
	else
		return ListJobsOutcome(outcome.error());
}

void Schedulerx2Client::listJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listJobs(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListJobsOutcomeCallable Schedulerx2Client::listJobsCallable(const ListJobsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
			[this, request]()
			{
			return this->listJobs(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::ListNamespacesOutcome Schedulerx2Client::listNamespaces(const ListNamespacesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListNamespacesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListNamespacesOutcome(ListNamespacesResult(outcome.result()));
	else
		return ListNamespacesOutcome(outcome.error());
}

void Schedulerx2Client::listNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listNamespaces(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::ListNamespacesOutcomeCallable Schedulerx2Client::listNamespacesCallable(const ListNamespacesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListNamespacesOutcome()>>(
			[this, request]()
			{
			return this->listNamespaces(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::RevokePermissionOutcome Schedulerx2Client::revokePermission(const RevokePermissionRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return RevokePermissionOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return RevokePermissionOutcome(RevokePermissionResult(outcome.result()));
	else
		return RevokePermissionOutcome(outcome.error());
}

void Schedulerx2Client::revokePermissionAsync(const RevokePermissionRequest& request, const RevokePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, revokePermission(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::RevokePermissionOutcomeCallable Schedulerx2Client::revokePermissionCallable(const RevokePermissionRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<RevokePermissionOutcome()>>(
			[this, request]()
			{
			return this->revokePermission(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::StopInstanceOutcome Schedulerx2Client::stopInstance(const StopInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return StopInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return StopInstanceOutcome(StopInstanceResult(outcome.result()));
	else
		return StopInstanceOutcome(outcome.error());
}

void Schedulerx2Client::stopInstanceAsync(const StopInstanceRequest& request, const StopInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, stopInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::StopInstanceOutcomeCallable Schedulerx2Client::stopInstanceCallable(const StopInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<StopInstanceOutcome()>>(
			[this, request]()
			{
			return this->stopInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

Schedulerx2Client::UpdateJobOutcome Schedulerx2Client::updateJob(const UpdateJobRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateJobOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateJobOutcome(UpdateJobResult(outcome.result()));
	else
		return UpdateJobOutcome(outcome.error());
}

void Schedulerx2Client::updateJobAsync(const UpdateJobRequest& request, const UpdateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateJob(request), context);
	};

	asyncExecute(new Runnable(fn));
}

Schedulerx2Client::UpdateJobOutcomeCallable Schedulerx2Client::updateJobCallable(const UpdateJobRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateJobOutcome()>>(
			[this, request]()
			{
			return this->updateJob(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

