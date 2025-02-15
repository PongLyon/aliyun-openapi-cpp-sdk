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

#include <alibabacloud/cloudesl/CloudeslClient.h>
#include <alibabacloud/core/SimpleCredentialsProvider.h>

using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;
using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

namespace
{
	const std::string SERVICE_NAME = "cloudesl";
}

CloudeslClient::CloudeslClient(const Credentials &credentials, const ClientConfiguration &configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudesl");
}

CloudeslClient::CloudeslClient(const std::shared_ptr<CredentialsProvider>& credentialsProvider, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, credentialsProvider, configuration)
{
	auto locationClient = std::make_shared<LocationClient>(credentialsProvider, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudesl");
}

CloudeslClient::CloudeslClient(const std::string & accessKeyId, const std::string & accessKeySecret, const ClientConfiguration & configuration) :
	RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(accessKeyId, accessKeySecret), configuration)
{
	auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);
	endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "cloudesl");
}

CloudeslClient::~CloudeslClient()
{}

CloudeslClient::ActivateApDeviceOutcome CloudeslClient::activateApDevice(const ActivateApDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ActivateApDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ActivateApDeviceOutcome(ActivateApDeviceResult(outcome.result()));
	else
		return ActivateApDeviceOutcome(outcome.error());
}

void CloudeslClient::activateApDeviceAsync(const ActivateApDeviceRequest& request, const ActivateApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, activateApDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ActivateApDeviceOutcomeCallable CloudeslClient::activateApDeviceCallable(const ActivateApDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ActivateApDeviceOutcome()>>(
			[this, request]()
			{
			return this->activateApDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AddApDeviceOutcome CloudeslClient::addApDevice(const AddApDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddApDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddApDeviceOutcome(AddApDeviceResult(outcome.result()));
	else
		return AddApDeviceOutcome(outcome.error());
}

void CloudeslClient::addApDeviceAsync(const AddApDeviceRequest& request, const AddApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addApDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AddApDeviceOutcomeCallable CloudeslClient::addApDeviceCallable(const AddApDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddApDeviceOutcome()>>(
			[this, request]()
			{
			return this->addApDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AddUserOutcome CloudeslClient::addUser(const AddUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AddUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AddUserOutcome(AddUserResult(outcome.result()));
	else
		return AddUserOutcome(outcome.error());
}

void CloudeslClient::addUserAsync(const AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, addUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AddUserOutcomeCallable CloudeslClient::addUserCallable(const AddUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AddUserOutcome()>>(
			[this, request]()
			{
			return this->addUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::AssignUserOutcome CloudeslClient::assignUser(const AssignUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return AssignUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return AssignUserOutcome(AssignUserResult(outcome.result()));
	else
		return AssignUserOutcome(outcome.error());
}

void CloudeslClient::assignUserAsync(const AssignUserRequest& request, const AssignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, assignUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::AssignUserOutcomeCallable CloudeslClient::assignUserCallable(const AssignUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<AssignUserOutcome()>>(
			[this, request]()
			{
			return this->assignUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::BatchInsertItemsOutcome CloudeslClient::batchInsertItems(const BatchInsertItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BatchInsertItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BatchInsertItemsOutcome(BatchInsertItemsResult(outcome.result()));
	else
		return BatchInsertItemsOutcome(outcome.error());
}

void CloudeslClient::batchInsertItemsAsync(const BatchInsertItemsRequest& request, const BatchInsertItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, batchInsertItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BatchInsertItemsOutcomeCallable CloudeslClient::batchInsertItemsCallable(const BatchInsertItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BatchInsertItemsOutcome()>>(
			[this, request]()
			{
			return this->batchInsertItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::BindEslDeviceOutcome CloudeslClient::bindEslDevice(const BindEslDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return BindEslDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return BindEslDeviceOutcome(BindEslDeviceResult(outcome.result()));
	else
		return BindEslDeviceOutcome(outcome.error());
}

void CloudeslClient::bindEslDeviceAsync(const BindEslDeviceRequest& request, const BindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, bindEslDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::BindEslDeviceOutcomeCallable CloudeslClient::bindEslDeviceCallable(const BindEslDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<BindEslDeviceOutcome()>>(
			[this, request]()
			{
			return this->bindEslDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::ConfirmServerLocationOutcome CloudeslClient::confirmServerLocation(const ConfirmServerLocationRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return ConfirmServerLocationOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return ConfirmServerLocationOutcome(ConfirmServerLocationResult(outcome.result()));
	else
		return ConfirmServerLocationOutcome(outcome.error());
}

void CloudeslClient::confirmServerLocationAsync(const ConfirmServerLocationRequest& request, const ConfirmServerLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, confirmServerLocation(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::ConfirmServerLocationOutcomeCallable CloudeslClient::confirmServerLocationCallable(const ConfirmServerLocationRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<ConfirmServerLocationOutcome()>>(
			[this, request]()
			{
			return this->confirmServerLocation(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::CreateStoreOutcome CloudeslClient::createStore(const CreateStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return CreateStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return CreateStoreOutcome(CreateStoreResult(outcome.result()));
	else
		return CreateStoreOutcome(outcome.error());
}

void CloudeslClient::createStoreAsync(const CreateStoreRequest& request, const CreateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, createStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::CreateStoreOutcomeCallable CloudeslClient::createStoreCallable(const CreateStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<CreateStoreOutcome()>>(
			[this, request]()
			{
			return this->createStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteApDeviceOutcome CloudeslClient::deleteApDevice(const DeleteApDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteApDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteApDeviceOutcome(DeleteApDeviceResult(outcome.result()));
	else
		return DeleteApDeviceOutcome(outcome.error());
}

void CloudeslClient::deleteApDeviceAsync(const DeleteApDeviceRequest& request, const DeleteApDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteApDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteApDeviceOutcomeCallable CloudeslClient::deleteApDeviceCallable(const DeleteApDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteApDeviceOutcome()>>(
			[this, request]()
			{
			return this->deleteApDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteItemOutcome CloudeslClient::deleteItem(const DeleteItemRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteItemOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteItemOutcome(DeleteItemResult(outcome.result()));
	else
		return DeleteItemOutcome(outcome.error());
}

void CloudeslClient::deleteItemAsync(const DeleteItemRequest& request, const DeleteItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteItem(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteItemOutcomeCallable CloudeslClient::deleteItemCallable(const DeleteItemRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteItemOutcome()>>(
			[this, request]()
			{
			return this->deleteItem(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteStoreOutcome CloudeslClient::deleteStore(const DeleteStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteStoreOutcome(DeleteStoreResult(outcome.result()));
	else
		return DeleteStoreOutcome(outcome.error());
}

void CloudeslClient::deleteStoreAsync(const DeleteStoreRequest& request, const DeleteStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteStoreOutcomeCallable CloudeslClient::deleteStoreCallable(const DeleteStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteStoreOutcome()>>(
			[this, request]()
			{
			return this->deleteStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DeleteUserOutcome CloudeslClient::deleteUser(const DeleteUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DeleteUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DeleteUserOutcome(DeleteUserResult(outcome.result()));
	else
		return DeleteUserOutcome(outcome.error());
}

void CloudeslClient::deleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, deleteUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DeleteUserOutcomeCallable CloudeslClient::deleteUserCallable(const DeleteUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
			[this, request]()
			{
			return this->deleteUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeApDevicesOutcome CloudeslClient::describeApDevices(const DescribeApDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeApDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeApDevicesOutcome(DescribeApDevicesResult(outcome.result()));
	else
		return DescribeApDevicesOutcome(outcome.error());
}

void CloudeslClient::describeApDevicesAsync(const DescribeApDevicesRequest& request, const DescribeApDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeApDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeApDevicesOutcomeCallable CloudeslClient::describeApDevicesCallable(const DescribeApDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeApDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeApDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeBindersOutcome CloudeslClient::describeBinders(const DescribeBindersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeBindersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeBindersOutcome(DescribeBindersResult(outcome.result()));
	else
		return DescribeBindersOutcome(outcome.error());
}

void CloudeslClient::describeBindersAsync(const DescribeBindersRequest& request, const DescribeBindersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeBinders(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeBindersOutcomeCallable CloudeslClient::describeBindersCallable(const DescribeBindersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeBindersOutcome()>>(
			[this, request]()
			{
			return this->describeBinders(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeClientPackageOutcome CloudeslClient::describeClientPackage(const DescribeClientPackageRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeClientPackageOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeClientPackageOutcome(DescribeClientPackageResult(outcome.result()));
	else
		return DescribeClientPackageOutcome(outcome.error());
}

void CloudeslClient::describeClientPackageAsync(const DescribeClientPackageRequest& request, const DescribeClientPackageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeClientPackage(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeClientPackageOutcomeCallable CloudeslClient::describeClientPackageCallable(const DescribeClientPackageRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeClientPackageOutcome()>>(
			[this, request]()
			{
			return this->describeClientPackage(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeEslDeviceOutcome CloudeslClient::describeEslDevice(const DescribeEslDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEslDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEslDeviceOutcome(DescribeEslDeviceResult(outcome.result()));
	else
		return DescribeEslDeviceOutcome(outcome.error());
}

void CloudeslClient::describeEslDeviceAsync(const DescribeEslDeviceRequest& request, const DescribeEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEslDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeEslDeviceOutcomeCallable CloudeslClient::describeEslDeviceCallable(const DescribeEslDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEslDeviceOutcome()>>(
			[this, request]()
			{
			return this->describeEslDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeEslDevicesOutcome CloudeslClient::describeEslDevices(const DescribeEslDevicesRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeEslDevicesOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeEslDevicesOutcome(DescribeEslDevicesResult(outcome.result()));
	else
		return DescribeEslDevicesOutcome(outcome.error());
}

void CloudeslClient::describeEslDevicesAsync(const DescribeEslDevicesRequest& request, const DescribeEslDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeEslDevices(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeEslDevicesOutcomeCallable CloudeslClient::describeEslDevicesCallable(const DescribeEslDevicesRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeEslDevicesOutcome()>>(
			[this, request]()
			{
			return this->describeEslDevices(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeItemsOutcome CloudeslClient::describeItems(const DescribeItemsRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeItemsOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeItemsOutcome(DescribeItemsResult(outcome.result()));
	else
		return DescribeItemsOutcome(outcome.error());
}

void CloudeslClient::describeItemsAsync(const DescribeItemsRequest& request, const DescribeItemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeItems(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeItemsOutcomeCallable CloudeslClient::describeItemsCallable(const DescribeItemsRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeItemsOutcome()>>(
			[this, request]()
			{
			return this->describeItems(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeStoreConfigOutcome CloudeslClient::describeStoreConfig(const DescribeStoreConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStoreConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStoreConfigOutcome(DescribeStoreConfigResult(outcome.result()));
	else
		return DescribeStoreConfigOutcome(outcome.error());
}

void CloudeslClient::describeStoreConfigAsync(const DescribeStoreConfigRequest& request, const DescribeStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStoreConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeStoreConfigOutcomeCallable CloudeslClient::describeStoreConfigCallable(const DescribeStoreConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStoreConfigOutcome()>>(
			[this, request]()
			{
			return this->describeStoreConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeStoresOutcome CloudeslClient::describeStores(const DescribeStoresRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeStoresOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeStoresOutcome(DescribeStoresResult(outcome.result()));
	else
		return DescribeStoresOutcome(outcome.error());
}

void CloudeslClient::describeStoresAsync(const DescribeStoresRequest& request, const DescribeStoresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeStores(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeStoresOutcomeCallable CloudeslClient::describeStoresCallable(const DescribeStoresRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeStoresOutcome()>>(
			[this, request]()
			{
			return this->describeStores(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeUserLogOutcome CloudeslClient::describeUserLog(const DescribeUserLogRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUserLogOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUserLogOutcome(DescribeUserLogResult(outcome.result()));
	else
		return DescribeUserLogOutcome(outcome.error());
}

void CloudeslClient::describeUserLogAsync(const DescribeUserLogRequest& request, const DescribeUserLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUserLog(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeUserLogOutcomeCallable CloudeslClient::describeUserLogCallable(const DescribeUserLogRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUserLogOutcome()>>(
			[this, request]()
			{
			return this->describeUserLog(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::DescribeUsersOutcome CloudeslClient::describeUsers(const DescribeUsersRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return DescribeUsersOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return DescribeUsersOutcome(DescribeUsersResult(outcome.result()));
	else
		return DescribeUsersOutcome(outcome.error());
}

void CloudeslClient::describeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, describeUsers(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::DescribeUsersOutcomeCallable CloudeslClient::describeUsersCallable(const DescribeUsersRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
			[this, request]()
			{
			return this->describeUsers(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::GetUserOutcome CloudeslClient::getUser(const GetUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return GetUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return GetUserOutcome(GetUserResult(outcome.result()));
	else
		return GetUserOutcome(outcome.error());
}

void CloudeslClient::getUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, getUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::GetUserOutcomeCallable CloudeslClient::getUserCallable(const GetUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
			[this, request]()
			{
			return this->getUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UnassignUserOutcome CloudeslClient::unassignUser(const UnassignUserRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnassignUserOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnassignUserOutcome(UnassignUserResult(outcome.result()));
	else
		return UnassignUserOutcome(outcome.error());
}

void CloudeslClient::unassignUserAsync(const UnassignUserRequest& request, const UnassignUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unassignUser(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UnassignUserOutcomeCallable CloudeslClient::unassignUserCallable(const UnassignUserRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnassignUserOutcome()>>(
			[this, request]()
			{
			return this->unassignUser(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UnbindEslDeviceOutcome CloudeslClient::unbindEslDevice(const UnbindEslDeviceRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UnbindEslDeviceOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UnbindEslDeviceOutcome(UnbindEslDeviceResult(outcome.result()));
	else
		return UnbindEslDeviceOutcome(outcome.error());
}

void CloudeslClient::unbindEslDeviceAsync(const UnbindEslDeviceRequest& request, const UnbindEslDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, unbindEslDevice(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UnbindEslDeviceOutcomeCallable CloudeslClient::unbindEslDeviceCallable(const UnbindEslDeviceRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UnbindEslDeviceOutcome()>>(
			[this, request]()
			{
			return this->unbindEslDevice(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateEslDeviceLightOutcome CloudeslClient::updateEslDeviceLight(const UpdateEslDeviceLightRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateEslDeviceLightOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateEslDeviceLightOutcome(UpdateEslDeviceLightResult(outcome.result()));
	else
		return UpdateEslDeviceLightOutcome(outcome.error());
}

void CloudeslClient::updateEslDeviceLightAsync(const UpdateEslDeviceLightRequest& request, const UpdateEslDeviceLightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateEslDeviceLight(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateEslDeviceLightOutcomeCallable CloudeslClient::updateEslDeviceLightCallable(const UpdateEslDeviceLightRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateEslDeviceLightOutcome()>>(
			[this, request]()
			{
			return this->updateEslDeviceLight(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateStoreOutcome CloudeslClient::updateStore(const UpdateStoreRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStoreOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStoreOutcome(UpdateStoreResult(outcome.result()));
	else
		return UpdateStoreOutcome(outcome.error());
}

void CloudeslClient::updateStoreAsync(const UpdateStoreRequest& request, const UpdateStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStore(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateStoreOutcomeCallable CloudeslClient::updateStoreCallable(const UpdateStoreRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStoreOutcome()>>(
			[this, request]()
			{
			return this->updateStore(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

CloudeslClient::UpdateStoreConfigOutcome CloudeslClient::updateStoreConfig(const UpdateStoreConfigRequest &request) const
{
	auto endpointOutcome = endpointProvider_->getEndpoint();
	if (!endpointOutcome.isSuccess())
		return UpdateStoreConfigOutcome(endpointOutcome.error());

	auto outcome = makeRequest(endpointOutcome.result(), request);

	if (outcome.isSuccess())
		return UpdateStoreConfigOutcome(UpdateStoreConfigResult(outcome.result()));
	else
		return UpdateStoreConfigOutcome(outcome.error());
}

void CloudeslClient::updateStoreConfigAsync(const UpdateStoreConfigRequest& request, const UpdateStoreConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context) const
{
	auto fn = [this, request, handler, context]()
	{
		handler(this, request, updateStoreConfig(request), context);
	};

	asyncExecute(new Runnable(fn));
}

CloudeslClient::UpdateStoreConfigOutcomeCallable CloudeslClient::updateStoreConfigCallable(const UpdateStoreConfigRequest &request) const
{
	auto task = std::make_shared<std::packaged_task<UpdateStoreConfigOutcome()>>(
			[this, request]()
			{
			return this->updateStoreConfig(request);
			});

	asyncExecute(new Runnable([task]() { (*task)(); }));
	return task->get_future();
}

