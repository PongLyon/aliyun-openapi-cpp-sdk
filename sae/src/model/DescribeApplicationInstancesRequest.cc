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

#include <alibabacloud/sae/model/DescribeApplicationInstancesRequest.h>

using AlibabaCloud::Sae::Model::DescribeApplicationInstancesRequest;

DescribeApplicationInstancesRequest::DescribeApplicationInstancesRequest() :
	RoaServiceRequest("sae", "2019-05-06")
{
	setResourcePath("/pop/v1/sam/app/describeApplicationInstances");
	setMethod(HttpRequest::Method::Get);
}

DescribeApplicationInstancesRequest::~DescribeApplicationInstancesRequest()
{}

std::string DescribeApplicationInstancesRequest::getJobId()const
{
	return jobId_;
}

void DescribeApplicationInstancesRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

std::string DescribeApplicationInstancesRequest::getAppId()const
{
	return appId_;
}

void DescribeApplicationInstancesRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeApplicationInstancesRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApplicationInstancesRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

int DescribeApplicationInstancesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeApplicationInstancesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int DescribeApplicationInstancesRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeApplicationInstancesRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

bool DescribeApplicationInstancesRequest::getReverse()const
{
	return reverse_;
}

void DescribeApplicationInstancesRequest::setReverse(bool reverse)
{
	reverse_ = reverse;
	setParameter("Reverse", reverse ? "true" : "false");
}

