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

#include <alibabacloud/vod/model/GetCategoriesRequest.h>

using AlibabaCloud::Vod::Model::GetCategoriesRequest;

GetCategoriesRequest::GetCategoriesRequest() :
	RpcServiceRequest("vod", "2017-03-21", "GetCategories")
{
	setMethod(HttpRequest::Method::Post);
}

GetCategoriesRequest::~GetCategoriesRequest()
{}

std::string GetCategoriesRequest::getType()const
{
	return type_;
}

void GetCategoriesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

long GetCategoriesRequest::getCateId()const
{
	return cateId_;
}

void GetCategoriesRequest::setCateId(long cateId)
{
	cateId_ = cateId;
	setParameter("CateId", std::to_string(cateId));
}

long GetCategoriesRequest::getPageSize()const
{
	return pageSize_;
}

void GetCategoriesRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long GetCategoriesRequest::getPageNo()const
{
	return pageNo_;
}

void GetCategoriesRequest::setPageNo(long pageNo)
{
	pageNo_ = pageNo;
	setParameter("PageNo", std::to_string(pageNo));
}

std::string GetCategoriesRequest::getSortBy()const
{
	return sortBy_;
}

void GetCategoriesRequest::setSortBy(const std::string& sortBy)
{
	sortBy_ = sortBy;
	setParameter("SortBy", sortBy);
}

