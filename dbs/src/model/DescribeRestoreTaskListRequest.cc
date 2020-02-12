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

#include <alibabacloud/dbs/model/DescribeRestoreTaskListRequest.h>

using AlibabaCloud::Dbs::Model::DescribeRestoreTaskListRequest;

DescribeRestoreTaskListRequest::DescribeRestoreTaskListRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "DescribeRestoreTaskList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeRestoreTaskListRequest::~DescribeRestoreTaskListRequest()
{}

std::string DescribeRestoreTaskListRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeRestoreTaskListRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribeRestoreTaskListRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void DescribeRestoreTaskListRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

int DescribeRestoreTaskListRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeRestoreTaskListRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeRestoreTaskListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRestoreTaskListRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

std::string DescribeRestoreTaskListRequest::getRestoreTaskId()const
{
	return restoreTaskId_;
}

void DescribeRestoreTaskListRequest::setRestoreTaskId(const std::string& restoreTaskId)
{
	restoreTaskId_ = restoreTaskId;
	setParameter("RestoreTaskId", restoreTaskId);
}

int DescribeRestoreTaskListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRestoreTaskListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

