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

#include <alibabacloud/facebody/model/RetouchSkinRequest.h>

using AlibabaCloud::Facebody::Model::RetouchSkinRequest;

RetouchSkinRequest::RetouchSkinRequest() :
	RpcServiceRequest("facebody", "2019-12-30", "RetouchSkin")
{
	setMethod(HttpRequest::Method::Post);
}

RetouchSkinRequest::~RetouchSkinRequest()
{}

float RetouchSkinRequest::getRetouchDegree()const
{
	return retouchDegree_;
}

void RetouchSkinRequest::setRetouchDegree(float retouchDegree)
{
	retouchDegree_ = retouchDegree;
	setBodyParameter("RetouchDegree", std::to_string(retouchDegree));
}

float RetouchSkinRequest::getWhiteningDegree()const
{
	return whiteningDegree_;
}

void RetouchSkinRequest::setWhiteningDegree(float whiteningDegree)
{
	whiteningDegree_ = whiteningDegree;
	setBodyParameter("WhiteningDegree", std::to_string(whiteningDegree));
}

std::string RetouchSkinRequest::getImageURL()const
{
	return imageURL_;
}

void RetouchSkinRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

