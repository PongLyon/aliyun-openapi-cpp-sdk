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

#include <alibabacloud/ddoscoo/model/ModifyInstanceRemarkRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifyInstanceRemarkRequest;

ModifyInstanceRemarkRequest::ModifyInstanceRemarkRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "ModifyInstanceRemark")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyInstanceRemarkRequest::~ModifyInstanceRemarkRequest()
{}

std::string ModifyInstanceRemarkRequest::getRemark()const
{
	return remark_;
}

void ModifyInstanceRemarkRequest::setRemark(const std::string& remark)
{
	remark_ = remark;
	setParameter("Remark", remark);
}

std::string ModifyInstanceRemarkRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyInstanceRemarkRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyInstanceRemarkRequest::getSourceIp()const
{
	return sourceIp_;
}

void ModifyInstanceRemarkRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

