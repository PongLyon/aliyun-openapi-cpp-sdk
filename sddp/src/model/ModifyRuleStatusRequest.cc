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

#include <alibabacloud/sddp/model/ModifyRuleStatusRequest.h>

using AlibabaCloud::Sddp::Model::ModifyRuleStatusRequest;

ModifyRuleStatusRequest::ModifyRuleStatusRequest() :
	RpcServiceRequest("sddp", "2019-01-03", "ModifyRuleStatus")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyRuleStatusRequest::~ModifyRuleStatusRequest()
{}

int ModifyRuleStatusRequest::getFeatureType()const
{
	return featureType_;
}

void ModifyRuleStatusRequest::setFeatureType(int featureType)
{
	featureType_ = featureType;
	setParameter("FeatureType", std::to_string(featureType));
}

std::string ModifyRuleStatusRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyRuleStatusRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string ModifyRuleStatusRequest::getIds()const
{
	return ids_;
}

void ModifyRuleStatusRequest::setIds(const std::string& ids)
{
	ids_ = ids;
	setParameter("Ids", ids);
}

long ModifyRuleStatusRequest::getId()const
{
	return id_;
}

void ModifyRuleStatusRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string ModifyRuleStatusRequest::getLang()const
{
	return lang_;
}

void ModifyRuleStatusRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

int ModifyRuleStatusRequest::getStatus()const
{
	return status_;
}

void ModifyRuleStatusRequest::setStatus(int status)
{
	status_ = status;
	setParameter("Status", std::to_string(status));
}

