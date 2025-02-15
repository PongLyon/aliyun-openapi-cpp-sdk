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

#include <alibabacloud/ccc/model/AssignUsersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

AssignUsersResult::AssignUsersResult() :
	ServiceResult()
{}

AssignUsersResult::AssignUsersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

AssignUsersResult::~AssignUsersResult()
{}

void AssignUsersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();
	if(!value["Sync"].isNull())
		sync_ = value["Sync"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["WorkflowId"].isNull())
		workflowId_ = value["WorkflowId"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string AssignUsersResult::getMessage()const
{
	return message_;
}

int AssignUsersResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string AssignUsersResult::getData()const
{
	return data_;
}

std::string AssignUsersResult::getSync()const
{
	return sync_;
}

std::string AssignUsersResult::getWorkflowId()const
{
	return workflowId_;
}

std::string AssignUsersResult::getCode()const
{
	return code_;
}

