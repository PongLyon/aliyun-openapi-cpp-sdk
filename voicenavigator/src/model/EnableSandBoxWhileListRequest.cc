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

#include <alibabacloud/voicenavigator/model/EnableSandBoxWhileListRequest.h>

using AlibabaCloud::VoiceNavigator::Model::EnableSandBoxWhileListRequest;

EnableSandBoxWhileListRequest::EnableSandBoxWhileListRequest() :
	RpcServiceRequest("voicenavigator", "2018-06-12", "EnableSandBoxWhileList")
{
	setMethod(HttpRequest::Method::Post);
}

EnableSandBoxWhileListRequest::~EnableSandBoxWhileListRequest()
{}

std::string EnableSandBoxWhileListRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void EnableSandBoxWhileListRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setParameter("PhoneNumber", phoneNumber);
}

std::string EnableSandBoxWhileListRequest::getInstanceId()const
{
	return instanceId_;
}

void EnableSandBoxWhileListRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

