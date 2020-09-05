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

#include <alibabacloud/vcs/model/DescribeDevicesRequest.h>

using AlibabaCloud::Vcs::Model::DescribeDevicesRequest;

DescribeDevicesRequest::DescribeDevicesRequest() :
	RpcServiceRequest("vcs", "2020-05-15", "DescribeDevices")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDevicesRequest::~DescribeDevicesRequest()
{}

int DescribeDevicesRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeDevicesRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setBodyParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeDevicesRequest::getCorpIdList()const
{
	return corpIdList_;
}

void DescribeDevicesRequest::setCorpIdList(const std::string& corpIdList)
{
	corpIdList_ = corpIdList;
	setBodyParameter("CorpIdList", corpIdList);
}

int DescribeDevicesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDevicesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setBodyParameter("PageSize", std::to_string(pageSize));
}

