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

#include <alibabacloud/ddoscoo/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["Remark"].isNull())
			instancesObject.remark = valueInstancesInstance["Remark"].asString();
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = std::stoi(valueInstancesInstance["Status"].asString());
		if(!valueInstancesInstance["DebtStatus"].isNull())
			instancesObject.debtStatus = std::stoi(valueInstancesInstance["DebtStatus"].asString());
		if(!valueInstancesInstance["ExpireTime"].isNull())
			instancesObject.expireTime = std::stol(valueInstancesInstance["ExpireTime"].asString());
		if(!valueInstancesInstance["GmtCreate"].isNull())
			instancesObject.gmtCreate = std::stol(valueInstancesInstance["GmtCreate"].asString());
		if(!valueInstancesInstance["Edition"].isNull())
			instancesObject.edition = std::stoi(valueInstancesInstance["Edition"].asString());
		if(!valueInstancesInstance["Enabled"].isNull())
			instancesObject.enabled = std::stoi(valueInstancesInstance["Enabled"].asString());
		instances_.push_back(instancesObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeInstancesResult::Instance> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

long DescribeInstancesResult::getTotal()const
{
	return total_;
}

