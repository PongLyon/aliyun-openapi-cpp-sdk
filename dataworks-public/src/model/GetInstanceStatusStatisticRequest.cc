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

#include <alibabacloud/dataworks-public/model/GetInstanceStatusStatisticRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetInstanceStatusStatisticRequest;

GetInstanceStatusStatisticRequest::GetInstanceStatusStatisticRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "GetInstanceStatusStatistic")
{
	setMethod(HttpRequest::Method::Post);
}

GetInstanceStatusStatisticRequest::~GetInstanceStatusStatisticRequest()
{}

std::string GetInstanceStatusStatisticRequest::getProjectEnv()const
{
	return projectEnv_;
}

void GetInstanceStatusStatisticRequest::setProjectEnv(const std::string& projectEnv)
{
	projectEnv_ = projectEnv;
	setBodyParameter("ProjectEnv", projectEnv);
}

std::string GetInstanceStatusStatisticRequest::getDagType()const
{
	return dagType_;
}

void GetInstanceStatusStatisticRequest::setDagType(const std::string& dagType)
{
	dagType_ = dagType;
	setBodyParameter("DagType", dagType);
}

std::string GetInstanceStatusStatisticRequest::getBizDate()const
{
	return bizDate_;
}

void GetInstanceStatusStatisticRequest::setBizDate(const std::string& bizDate)
{
	bizDate_ = bizDate;
	setBodyParameter("BizDate", bizDate);
}

std::string GetInstanceStatusStatisticRequest::getSchedulerType()const
{
	return schedulerType_;
}

void GetInstanceStatusStatisticRequest::setSchedulerType(const std::string& schedulerType)
{
	schedulerType_ = schedulerType;
	setBodyParameter("SchedulerType", schedulerType);
}

long GetInstanceStatusStatisticRequest::getProjectId()const
{
	return projectId_;
}

void GetInstanceStatusStatisticRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", std::to_string(projectId));
}

