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

#include <alibabacloud/hitsdb/HitsdbClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Hitsdb;
using namespace AlibabaCloud::Hitsdb::Model;

namespace
{
	const std::string SERVICE_NAME = "hitsdb";
}

HitsdbClient::HitsdbClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hitsdb");
}

HitsdbClient::HitsdbClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hitsdb");
}

HitsdbClient::HitsdbClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "hitsdb");
}

HitsdbClient::~HitsdbClient()
{}

HitsdbClient::CreateLindormInstanceOutcome HitsdbClient::createLindormInstance(const CreateLindormInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateLindormInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateLindormInstanceOutcome(CreateLindormInstanceResult(outcome.result()));
	else
		return CreateLindormInstanceOutcome(outcome.error());
}

void HitsdbClient::createLindormInstanceAsync(const CreateLindormInstanceRequest& request, const CreateLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createLindormInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::CreateLindormInstanceOutcomeCallable HitsdbClient::createLindormInstanceCallable(const CreateLindormInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateLindormInstanceOutcome()>>(
			[this, request]()
			{
			return this->createLindormInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::DescribeRegionsOutcome HitsdbClient::describeRegions(const DescribeRegionsRequest &request) const
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

void HitsdbClient::describeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeRegions(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::DescribeRegionsOutcomeCallable HitsdbClient::describeRegionsCallable(const DescribeRegionsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeRegionsOutcome()>>(
			[this, request]()
			{
			return this->describeRegions(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::GetInstanceIpWhiteListOutcome HitsdbClient::getInstanceIpWhiteList(const GetInstanceIpWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetInstanceIpWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetInstanceIpWhiteListOutcome(GetInstanceIpWhiteListResult(outcome.result()));
	else
		return GetInstanceIpWhiteListOutcome(outcome.error());
}

void HitsdbClient::getInstanceIpWhiteListAsync(const GetInstanceIpWhiteListRequest& request, const GetInstanceIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getInstanceIpWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::GetInstanceIpWhiteListOutcomeCallable HitsdbClient::getInstanceIpWhiteListCallable(const GetInstanceIpWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetInstanceIpWhiteListOutcome()>>(
			[this, request]()
			{
			return this->getInstanceIpWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::GetLindormInstanceOutcome HitsdbClient::getLindormInstance(const GetLindormInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLindormInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLindormInstanceOutcome(GetLindormInstanceResult(outcome.result()));
	else
		return GetLindormInstanceOutcome(outcome.error());
}

void HitsdbClient::getLindormInstanceAsync(const GetLindormInstanceRequest& request, const GetLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLindormInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::GetLindormInstanceOutcomeCallable HitsdbClient::getLindormInstanceCallable(const GetLindormInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLindormInstanceOutcome()>>(
			[this, request]()
			{
			return this->getLindormInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::GetLindormInstanceEngineListOutcome HitsdbClient::getLindormInstanceEngineList(const GetLindormInstanceEngineListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLindormInstanceEngineListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLindormInstanceEngineListOutcome(GetLindormInstanceEngineListResult(outcome.result()));
	else
		return GetLindormInstanceEngineListOutcome(outcome.error());
}

void HitsdbClient::getLindormInstanceEngineListAsync(const GetLindormInstanceEngineListRequest& request, const GetLindormInstanceEngineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLindormInstanceEngineList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::GetLindormInstanceEngineListOutcomeCallable HitsdbClient::getLindormInstanceEngineListCallable(const GetLindormInstanceEngineListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLindormInstanceEngineListOutcome()>>(
			[this, request]()
			{
			return this->getLindormInstanceEngineList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::GetLindormInstanceListOutcome HitsdbClient::getLindormInstanceList(const GetLindormInstanceListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetLindormInstanceListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetLindormInstanceListOutcome(GetLindormInstanceListResult(outcome.result()));
	else
		return GetLindormInstanceListOutcome(outcome.error());
}

void HitsdbClient::getLindormInstanceListAsync(const GetLindormInstanceListRequest& request, const GetLindormInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getLindormInstanceList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::GetLindormInstanceListOutcomeCallable HitsdbClient::getLindormInstanceListCallable(const GetLindormInstanceListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetLindormInstanceListOutcome()>>(
			[this, request]()
			{
			return this->getLindormInstanceList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::ListTagResourcesOutcome HitsdbClient::listTagResources(const ListTagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ListTagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ListTagResourcesOutcome(ListTagResourcesResult(outcome.result()));
	else
		return ListTagResourcesOutcome(outcome.error());
}

void HitsdbClient::listTagResourcesAsync(const ListTagResourcesRequest& request, const ListTagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, listTagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::ListTagResourcesOutcomeCallable HitsdbClient::listTagResourcesCallable(const ListTagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ListTagResourcesOutcome()>>(
			[this, request]()
			{
			return this->listTagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::ReleaseLindormInstanceOutcome HitsdbClient::releaseLindormInstance(const ReleaseLindormInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ReleaseLindormInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ReleaseLindormInstanceOutcome(ReleaseLindormInstanceResult(outcome.result()));
	else
		return ReleaseLindormInstanceOutcome(outcome.error());
}

void HitsdbClient::releaseLindormInstanceAsync(const ReleaseLindormInstanceRequest& request, const ReleaseLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, releaseLindormInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::ReleaseLindormInstanceOutcomeCallable HitsdbClient::releaseLindormInstanceCallable(const ReleaseLindormInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ReleaseLindormInstanceOutcome()>>(
			[this, request]()
			{
			return this->releaseLindormInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::TagResourcesOutcome HitsdbClient::tagResources(const TagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return TagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return TagResourcesOutcome(TagResourcesResult(outcome.result()));
	else
		return TagResourcesOutcome(outcome.error());
}

void HitsdbClient::tagResourcesAsync(const TagResourcesRequest& request, const TagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, tagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::TagResourcesOutcomeCallable HitsdbClient::tagResourcesCallable(const TagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<TagResourcesOutcome()>>(
			[this, request]()
			{
			return this->tagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::UntagResourcesOutcome HitsdbClient::untagResources(const UntagResourcesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UntagResourcesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UntagResourcesOutcome(UntagResourcesResult(outcome.result()));
	else
		return UntagResourcesOutcome(outcome.error());
}

void HitsdbClient::untagResourcesAsync(const UntagResourcesRequest& request, const UntagResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, untagResources(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::UntagResourcesOutcomeCallable HitsdbClient::untagResourcesCallable(const UntagResourcesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UntagResourcesOutcome()>>(
			[this, request]()
			{
			return this->untagResources(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::UpdateInstanceIpWhiteListOutcome HitsdbClient::updateInstanceIpWhiteList(const UpdateInstanceIpWhiteListRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateInstanceIpWhiteListOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateInstanceIpWhiteListOutcome(UpdateInstanceIpWhiteListResult(outcome.result()));
	else
		return UpdateInstanceIpWhiteListOutcome(outcome.error());
}

void HitsdbClient::updateInstanceIpWhiteListAsync(const UpdateInstanceIpWhiteListRequest& request, const UpdateInstanceIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateInstanceIpWhiteList(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::UpdateInstanceIpWhiteListOutcomeCallable HitsdbClient::updateInstanceIpWhiteListCallable(const UpdateInstanceIpWhiteListRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateInstanceIpWhiteListOutcome()>>(
			[this, request]()
			{
			return this->updateInstanceIpWhiteList(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

HitsdbClient::UpgradeLindormInstanceOutcome HitsdbClient::upgradeLindormInstance(const UpgradeLindormInstanceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpgradeLindormInstanceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpgradeLindormInstanceOutcome(UpgradeLindormInstanceResult(outcome.result()));
	else
		return UpgradeLindormInstanceOutcome(outcome.error());
}

void HitsdbClient::upgradeLindormInstanceAsync(const UpgradeLindormInstanceRequest& request, const UpgradeLindormInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, upgradeLindormInstance(request), context);
	};

	asyncExecute(new Runnable(fn));
}

HitsdbClient::UpgradeLindormInstanceOutcomeCallable HitsdbClient::upgradeLindormInstanceCallable(const UpgradeLindormInstanceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpgradeLindormInstanceOutcome()>>(
			[this, request]()
			{
			return this->upgradeLindormInstance(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

