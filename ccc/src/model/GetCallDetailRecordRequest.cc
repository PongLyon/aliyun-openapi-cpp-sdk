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

#include <alibabacloud/ccc/model/GetCallDetailRecordRequest.h>

using AlibabaCloud::CCC::Model::GetCallDetailRecordRequest;

GetCallDetailRecordRequest::GetCallDetailRecordRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "GetCallDetailRecord")
{
	setMethod(HttpRequest::Method::Post);
}

GetCallDetailRecordRequest::~GetCallDetailRecordRequest()
{}

std::string GetCallDetailRecordRequest::getContactId()const
{
	return contactId_;
}

void GetCallDetailRecordRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setParameter("ContactId", contactId);
}

std::string GetCallDetailRecordRequest::getInstanceId()const
{
	return instanceId_;
}

void GetCallDetailRecordRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

