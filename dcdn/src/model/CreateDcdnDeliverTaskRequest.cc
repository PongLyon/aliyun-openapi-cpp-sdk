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

#include <alibabacloud/dcdn/model/CreateDcdnDeliverTaskRequest.h>

using AlibabaCloud::Dcdn::Model::CreateDcdnDeliverTaskRequest;

CreateDcdnDeliverTaskRequest::CreateDcdnDeliverTaskRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "CreateDcdnDeliverTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDcdnDeliverTaskRequest::~CreateDcdnDeliverTaskRequest()
{}

std::string CreateDcdnDeliverTaskRequest::getReports()const
{
	return reports_;
}

void CreateDcdnDeliverTaskRequest::setReports(const std::string& reports)
{
	reports_ = reports;
	setBodyParameter("Reports", reports);
}

std::string CreateDcdnDeliverTaskRequest::getDeliver()const
{
	return deliver_;
}

void CreateDcdnDeliverTaskRequest::setDeliver(const std::string& deliver)
{
	deliver_ = deliver;
	setBodyParameter("Deliver", deliver);
}

std::string CreateDcdnDeliverTaskRequest::getDomainName()const
{
	return domainName_;
}

void CreateDcdnDeliverTaskRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setBodyParameter("DomainName", domainName);
}

long CreateDcdnDeliverTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDcdnDeliverTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDcdnDeliverTaskRequest::getSchedule()const
{
	return schedule_;
}

void CreateDcdnDeliverTaskRequest::setSchedule(const std::string& schedule)
{
	schedule_ = schedule;
	setBodyParameter("Schedule", schedule);
}

std::string CreateDcdnDeliverTaskRequest::getName()const
{
	return name_;
}

void CreateDcdnDeliverTaskRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateDcdnDeliverTaskRequest::getStatus()const
{
	return status_;
}

void CreateDcdnDeliverTaskRequest::setStatus(const std::string& status)
{
	status_ = status;
	setBodyParameter("Status", status);
}

