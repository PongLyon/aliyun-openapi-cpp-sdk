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

#include <alibabacloud/vod/model/SetDefaultWatermarkRequest.h>

using AlibabaCloud::Vod::Model::SetDefaultWatermarkRequest;

SetDefaultWatermarkRequest::SetDefaultWatermarkRequest() :
	RpcServiceRequest("vod", "2017-03-21", "SetDefaultWatermark")
{
	setMethod(HttpRequest::Method::Post);
}

SetDefaultWatermarkRequest::~SetDefaultWatermarkRequest()
{}

std::string SetDefaultWatermarkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDefaultWatermarkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetDefaultWatermarkRequest::getWatermarkId()const
{
	return watermarkId_;
}

void SetDefaultWatermarkRequest::setWatermarkId(const std::string& watermarkId)
{
	watermarkId_ = watermarkId;
	setParameter("WatermarkId", watermarkId);
}

