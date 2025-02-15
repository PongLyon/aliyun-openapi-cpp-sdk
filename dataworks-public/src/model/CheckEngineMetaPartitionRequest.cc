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

#include <alibabacloud/dataworks-public/model/CheckEngineMetaPartitionRequest.h>

using AlibabaCloud::Dataworks_public::Model::CheckEngineMetaPartitionRequest;

CheckEngineMetaPartitionRequest::CheckEngineMetaPartitionRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "CheckEngineMetaPartition")
{
	setMethod(HttpRequest::Method::Post);
}

CheckEngineMetaPartitionRequest::~CheckEngineMetaPartitionRequest()
{}

std::string CheckEngineMetaPartitionRequest::getDataSourceType()const
{
	return dataSourceType_;
}

void CheckEngineMetaPartitionRequest::setDataSourceType(const std::string& dataSourceType)
{
	dataSourceType_ = dataSourceType;
	setParameter("DataSourceType", dataSourceType);
}

std::string CheckEngineMetaPartitionRequest::getPartition()const
{
	return partition_;
}

void CheckEngineMetaPartitionRequest::setPartition(const std::string& partition)
{
	partition_ = partition;
	setParameter("Partition", partition);
}

std::string CheckEngineMetaPartitionRequest::getTableGuid()const
{
	return tableGuid_;
}

void CheckEngineMetaPartitionRequest::setTableGuid(const std::string& tableGuid)
{
	tableGuid_ = tableGuid;
	setParameter("TableGuid", tableGuid);
}

