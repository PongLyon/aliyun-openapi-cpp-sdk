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

#include <alibabacloud/gpdb/model/DescribeDBInstanceSQLPatternsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceSQLPatternsResult::DescribeDBInstanceSQLPatternsResult() :
	ServiceResult()
{}

DescribeDBInstanceSQLPatternsResult::DescribeDBInstanceSQLPatternsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceSQLPatternsResult::~DescribeDBInstanceSQLPatternsResult()
{}

void DescribeDBInstanceSQLPatternsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPatternsNode = value["Patterns"]["Pattern"];
	for (auto valuePatternsPattern : allPatternsNode)
	{
		Pattern patternsObject;
		if(!valuePatternsPattern["Name"].isNull())
			patternsObject.name = valuePatternsPattern["Name"].asString();
		if(!valuePatternsPattern["Values"].isNull())
			patternsObject.values = valuePatternsPattern["Values"].asString();
		patterns_.push_back(patternsObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeDBInstanceSQLPatternsResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBInstanceSQLPatternsResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBInstanceSQLPatternsResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeDBInstanceSQLPatternsResult::Pattern> DescribeDBInstanceSQLPatternsResult::getPatterns()const
{
	return patterns_;
}

