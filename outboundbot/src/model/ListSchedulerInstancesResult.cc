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

#include <alibabacloud/outboundbot/model/ListSchedulerInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::OutboundBot;
using namespace AlibabaCloud::OutboundBot::Model;

ListSchedulerInstancesResult::ListSchedulerInstancesResult() :
	ServiceResult()
{}

ListSchedulerInstancesResult::ListSchedulerInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSchedulerInstancesResult::~ListSchedulerInstancesResult()
{}

void ListSchedulerInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSchedulerInstancesNode = value["SchedulerInstances"]["SchedulerInstance"];
	for (auto valueSchedulerInstancesSchedulerInstance : allSchedulerInstancesNode)
	{
		SchedulerInstance schedulerInstancesObject;
		if(!valueSchedulerInstancesSchedulerInstance["OwnerId"].isNull())
			schedulerInstancesObject.ownerId = valueSchedulerInstancesSchedulerInstance["OwnerId"].asString();
		if(!valueSchedulerInstancesSchedulerInstance["InstanceId"].isNull())
			schedulerInstancesObject.instanceId = valueSchedulerInstancesSchedulerInstance["InstanceId"].asString();
		if(!valueSchedulerInstancesSchedulerInstance["Business"].isNull())
			schedulerInstancesObject.business = valueSchedulerInstancesSchedulerInstance["Business"].asString();
		if(!valueSchedulerInstancesSchedulerInstance["MaxConcurrency"].isNull())
			schedulerInstancesObject.maxConcurrency = std::stoi(valueSchedulerInstancesSchedulerInstance["MaxConcurrency"].asString());
		if(!valueSchedulerInstancesSchedulerInstance["BaseStrategy"].isNull())
			schedulerInstancesObject.baseStrategy = valueSchedulerInstancesSchedulerInstance["BaseStrategy"].asString();
		schedulerInstances_.push_back(schedulerInstancesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::vector<ListSchedulerInstancesResult::SchedulerInstance> ListSchedulerInstancesResult::getSchedulerInstances()const
{
	return schedulerInstances_;
}

std::string ListSchedulerInstancesResult::getMessage()const
{
	return message_;
}

int ListSchedulerInstancesResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListSchedulerInstancesResult::getCode()const
{
	return code_;
}

bool ListSchedulerInstancesResult::getSuccess()const
{
	return success_;
}

