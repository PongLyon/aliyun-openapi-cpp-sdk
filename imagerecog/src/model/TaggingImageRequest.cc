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

#include <alibabacloud/imagerecog/model/TaggingImageRequest.h>

using AlibabaCloud::Imagerecog::Model::TaggingImageRequest;

TaggingImageRequest::TaggingImageRequest() :
	RpcServiceRequest("imagerecog", "2019-09-30", "TaggingImage")
{
	setMethod(HttpRequest::Method::Post);
}

TaggingImageRequest::~TaggingImageRequest()
{}

std::string TaggingImageRequest::getMode()const
{
	return mode_;
}

void TaggingImageRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setBodyParameter("Mode", mode);
}

int TaggingImageRequest::getImageType()const
{
	return imageType_;
}

void TaggingImageRequest::setImageType(int imageType)
{
	imageType_ = imageType;
	setBodyParameter("ImageType", std::to_string(imageType));
}

bool TaggingImageRequest::getAsync()const
{
	return async_;
}

void TaggingImageRequest::setAsync(bool async)
{
	async_ = async;
	setBodyParameter("Async", async ? "true" : "false");
}

std::string TaggingImageRequest::getImageURL()const
{
	return imageURL_;
}

void TaggingImageRequest::setImageURL(const std::string& imageURL)
{
	imageURL_ = imageURL;
	setBodyParameter("ImageURL", imageURL);
}

