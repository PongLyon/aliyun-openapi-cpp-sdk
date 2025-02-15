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

#include <alibabacloud/ccc/model/CreateCampaignRequest.h>

using AlibabaCloud::CCC::Model::CreateCampaignRequest;

CreateCampaignRequest::CreateCampaignRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "CreateCampaign")
{
	setMethod(HttpRequest::Method::Post);
}

CreateCampaignRequest::~CreateCampaignRequest()
{}

std::string CreateCampaignRequest::getQueueId()const
{
	return queueId_;
}

void CreateCampaignRequest::setQueueId(const std::string& queueId)
{
	queueId_ = queueId;
	setParameter("QueueId", queueId);
}

std::string CreateCampaignRequest::getContactFlowId()const
{
	return contactFlowId_;
}

void CreateCampaignRequest::setContactFlowId(const std::string& contactFlowId)
{
	contactFlowId_ = contactFlowId;
	setParameter("ContactFlowId", contactFlowId);
}

bool CreateCampaignRequest::getSimulation()const
{
	return simulation_;
}

void CreateCampaignRequest::setSimulation(bool simulation)
{
	simulation_ = simulation;
	setParameter("Simulation", simulation ? "true" : "false");
}

std::string CreateCampaignRequest::getEndTime()const
{
	return endTime_;
}

void CreateCampaignRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string CreateCampaignRequest::getStartTime()const
{
	return startTime_;
}

void CreateCampaignRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long CreateCampaignRequest::getMaxAttemptCount()const
{
	return maxAttemptCount_;
}

void CreateCampaignRequest::setMaxAttemptCount(long maxAttemptCount)
{
	maxAttemptCount_ = maxAttemptCount;
	setParameter("MaxAttemptCount", std::to_string(maxAttemptCount));
}

std::string CreateCampaignRequest::getStrategyParameters()const
{
	return strategyParameters_;
}

void CreateCampaignRequest::setStrategyParameters(const std::string& strategyParameters)
{
	strategyParameters_ = strategyParameters;
	setParameter("StrategyParameters", strategyParameters);
}

std::string CreateCampaignRequest::getCaseFileKey()const
{
	return caseFileKey_;
}

void CreateCampaignRequest::setCaseFileKey(const std::string& caseFileKey)
{
	caseFileKey_ = caseFileKey;
	setParameter("CaseFileKey", caseFileKey);
}

long CreateCampaignRequest::getMinAttemptInterval()const
{
	return minAttemptInterval_;
}

void CreateCampaignRequest::setMinAttemptInterval(long minAttemptInterval)
{
	minAttemptInterval_ = minAttemptInterval;
	setParameter("MinAttemptInterval", std::to_string(minAttemptInterval));
}

std::string CreateCampaignRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateCampaignRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateCampaignRequest::getSimulationParameters()const
{
	return simulationParameters_;
}

void CreateCampaignRequest::setSimulationParameters(const std::string& simulationParameters)
{
	simulationParameters_ = simulationParameters;
	setParameter("SimulationParameters", simulationParameters);
}

std::string CreateCampaignRequest::getName()const
{
	return name_;
}

void CreateCampaignRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateCampaignRequest::getStrategyType()const
{
	return strategyType_;
}

void CreateCampaignRequest::setStrategyType(const std::string& strategyType)
{
	strategyType_ = strategyType;
	setParameter("StrategyType", strategyType);
}

std::string CreateCampaignRequest::getCaseList()const
{
	return caseList_;
}

void CreateCampaignRequest::setCaseList(const std::string& caseList)
{
	caseList_ = caseList;
	setParameter("CaseList", caseList);
}

std::string CreateCampaignRequest::getCallableTime()const
{
	return callableTime_;
}

void CreateCampaignRequest::setCallableTime(const std::string& callableTime)
{
	callableTime_ = callableTime;
	setParameter("CallableTime", callableTime);
}

