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

#include <alibabacloud/nas/model/DescribeDataFlowTasksRequest.h>

using AlibabaCloud::NAS::Model::DescribeDataFlowTasksRequest;

DescribeDataFlowTasksRequest::DescribeDataFlowTasksRequest() :
	RpcServiceRequest("nas", "2017-06-26", "DescribeDataFlowTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDataFlowTasksRequest::~DescribeDataFlowTasksRequest()
{}

std::string DescribeDataFlowTasksRequest::getNextToken()const
{
	return nextToken_;
}

void DescribeDataFlowTasksRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::string DescribeDataFlowTasksRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void DescribeDataFlowTasksRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

std::vector<DescribeDataFlowTasksRequest::Filters> DescribeDataFlowTasksRequest::getFilters()const
{
	return filters_;
}

void DescribeDataFlowTasksRequest::setFilters(const std::vector<Filters>& filters)
{
	filters_ = filters;
	for(int dep1 = 0; dep1!= filters.size(); dep1++) {
		auto filtersObj = filters.at(dep1);
		std::string filtersObjStr = "Filters." + std::to_string(dep1 + 1);
		setParameter(filtersObjStr + ".Value", filtersObj.value);
		setParameter(filtersObjStr + ".Key", filtersObj.key);
	}
}

long DescribeDataFlowTasksRequest::getMaxResults()const
{
	return maxResults_;
}

void DescribeDataFlowTasksRequest::setMaxResults(long maxResults)
{
	maxResults_ = maxResults;
	setParameter("MaxResults", std::to_string(maxResults));
}

