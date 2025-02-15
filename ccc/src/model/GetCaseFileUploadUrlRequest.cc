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

#include <alibabacloud/ccc/model/GetCaseFileUploadUrlRequest.h>

using AlibabaCloud::CCC::Model::GetCaseFileUploadUrlRequest;

GetCaseFileUploadUrlRequest::GetCaseFileUploadUrlRequest() :
	RpcServiceRequest("ccc", "2020-07-01", "GetCaseFileUploadUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetCaseFileUploadUrlRequest::~GetCaseFileUploadUrlRequest()
{}

std::string GetCaseFileUploadUrlRequest::getInstanceId()const
{
	return instanceId_;
}

void GetCaseFileUploadUrlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string GetCaseFileUploadUrlRequest::getFileName()const
{
	return fileName_;
}

void GetCaseFileUploadUrlRequest::setFileName(const std::string& fileName)
{
	fileName_ = fileName;
	setParameter("FileName", fileName);
}

