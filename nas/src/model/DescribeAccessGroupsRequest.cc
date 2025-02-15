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

#include <alibabacloud/nas/model/DescribeAccessGroupsRequest.h>

using AlibabaCloud::NAS::Model::DescribeAccessGroupsRequest;

DescribeAccessGroupsRequest::DescribeAccessGroupsRequest() :
	RpcServiceRequest("nas", "2017-06-26", "DescribeAccessGroups")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAccessGroupsRequest::~DescribeAccessGroupsRequest()
{}

bool DescribeAccessGroupsRequest::getUseUTCDateTime()const
{
	return useUTCDateTime_;
}

void DescribeAccessGroupsRequest::setUseUTCDateTime(bool useUTCDateTime)
{
	useUTCDateTime_ = useUTCDateTime;
	setParameter("UseUTCDateTime", useUTCDateTime ? "true" : "false");
}

std::string DescribeAccessGroupsRequest::getFileSystemType()const
{
	return fileSystemType_;
}

void DescribeAccessGroupsRequest::setFileSystemType(const std::string& fileSystemType)
{
	fileSystemType_ = fileSystemType;
	setParameter("FileSystemType", fileSystemType);
}

int DescribeAccessGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAccessGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

int DescribeAccessGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAccessGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAccessGroupsRequest::getAccessGroupName()const
{
	return accessGroupName_;
}

void DescribeAccessGroupsRequest::setAccessGroupName(const std::string& accessGroupName)
{
	accessGroupName_ = accessGroupName;
	setParameter("AccessGroupName", accessGroupName);
}

