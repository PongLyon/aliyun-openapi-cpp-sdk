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

#include <alibabacloud/alidns/model/DescribePdnsThreatLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribePdnsThreatLogsResult::DescribePdnsThreatLogsResult() :
	ServiceResult()
{}

DescribePdnsThreatLogsResult::DescribePdnsThreatLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePdnsThreatLogsResult::~DescribePdnsThreatLogsResult()
{}

void DescribePdnsThreatLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogsNode = value["Logs"]["Log"];
	for (auto valueLogsLog : allLogsNode)
	{
		Log logsObject;
		if(!valueLogsLog["SubDomain"].isNull())
			logsObject.subDomain = valueLogsLog["SubDomain"].asString();
		if(!valueLogsLog["SourceIp"].isNull())
			logsObject.sourceIp = valueLogsLog["SourceIp"].asString();
		if(!valueLogsLog["ThreatLevel"].isNull())
			logsObject.threatLevel = valueLogsLog["ThreatLevel"].asString();
		if(!valueLogsLog["ThreatTime"].isNull())
			logsObject.threatTime = valueLogsLog["ThreatTime"].asString();
		if(!valueLogsLog["ThreatType"].isNull())
			logsObject.threatType = valueLogsLog["ThreatType"].asString();
		logs_.push_back(logsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribePdnsThreatLogsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribePdnsThreatLogsResult::getPageSize()const
{
	return pageSize_;
}

long DescribePdnsThreatLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribePdnsThreatLogsResult::Log> DescribePdnsThreatLogsResult::getLogs()const
{
	return logs_;
}

