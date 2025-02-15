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

#include <alibabacloud/sddp/model/ModifyEventStatusRequest.h>

using AlibabaCloud::Sddp::Model::ModifyEventStatusRequest;

ModifyEventStatusRequest::ModifyEventStatusRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "ModifyEventStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyEventStatusRequest::~ModifyEventStatusRequest()
{}

bool ModifyEventStatusRequest::getBacked()const
{
	return backed_;
}

void ModifyEventStatusRequest::setBacked(bool backed)
{
	backed_ = backed;
	setParameter("Backed", backed ? "true" : "false");
}

std::string ModifyEventStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyEventStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyEventStatusRequest::getHandleInfo()const
{
	return handleInfo_;
}

void ModifyEventStatusRequest::setHandleInfo(const std::string& handleInfo)
{
	handleInfo_ = handleInfo;
	setParameter("HandleInfo", handleInfo);
}

std::string ModifyEventStatusRequest::getDealReason()const
{
	return dealReason_;
}

void ModifyEventStatusRequest::setDealReason(const std::string& dealReason)
{
	dealReason_ = dealReason;
	setParameter("DealReason", dealReason);
}

long ModifyEventStatusRequest::getId()const
{
	return id_;
}

void ModifyEventStatusRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyEventStatusRequest::getLang()const
{
	return lang_;
}

void ModifyEventStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int ModifyEventStatusRequest::getFeatureType()const
{
	return featureType_;
}

void ModifyEventStatusRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

int ModifyEventStatusRequest::getStatus()const
{
	return status_;
}

void ModifyEventStatusRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

