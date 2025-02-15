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

#include <alibabacloud/objectdet/model/DetectIPCObjectRequest.h>

using AlibabaCloud::Objectdet::Model::DetectIPCObjectRequest;

DetectIPCObjectRequest::DetectIPCObjectRequest() :
	RpcServiceRequest("objectdet", "2019-12-30", "DetectIPCObject")
{
	setMethod(HttpRequest::Method::Post);
}

DetectIPCObjectRequest::~DetectIPCObjectRequest()
{}

std::string DetectIPCObjectRequest::getOssFile()const
{
	return ossFile_;
}

void DetectIPCObjectRequest::setOssFile(const std::string& ossFile)
{
	ossFile_ = ossFile;
	setParameter("OssFile", ossFile);
}

std::string DetectIPCObjectRequest::getRequestProxyBy()const
{
	return requestProxyBy_;
}

void DetectIPCObjectRequest::setRequestProxyBy(const std::string& requestProxyBy)
{
	requestProxyBy_ = requestProxyBy;
	setParameter("RequestProxyBy", requestProxyBy);
}

std::string DetectIPCObjectRequest::getImageURL()const
{
	return imageURL_;
}

void DetectIPCObjectRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

