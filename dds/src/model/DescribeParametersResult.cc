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

#include <alibabacloud/dds/model/DescribeParametersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeParametersResult::DescribeParametersResult() :
	ServiceResult()
{}

DescribeParametersResult::DescribeParametersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeParametersResult::~DescribeParametersResult()
{}

void DescribeParametersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRunningParametersNode = value["RunningParameters"]["Parameter"];
	for (auto valueRunningParametersParameter : allRunningParametersNode)
	{
		_Parameter runningParametersObject;
		if(!valueRunningParametersParameter["CheckingCode"].isNull())
			runningParametersObject.checkingCode = valueRunningParametersParameter["CheckingCode"].asString();
		if(!valueRunningParametersParameter["ParameterName"].isNull())
			runningParametersObject.parameterName = valueRunningParametersParameter["ParameterName"].asString();
		if(!valueRunningParametersParameter["ParameterValue"].isNull())
			runningParametersObject.parameterValue = valueRunningParametersParameter["ParameterValue"].asString();
		if(!valueRunningParametersParameter["ForceRestart"].isNull())
			runningParametersObject.forceRestart = valueRunningParametersParameter["ForceRestart"].asString();
		if(!valueRunningParametersParameter["ParameterDescription"].isNull())
			runningParametersObject.parameterDescription = valueRunningParametersParameter["ParameterDescription"].asString();
		if(!valueRunningParametersParameter["ModifiableStatus"].isNull())
			runningParametersObject.modifiableStatus = valueRunningParametersParameter["ModifiableStatus"].asString();
		runningParameters_.push_back(runningParametersObject);
	}
	auto allConfigParametersNode = value["ConfigParameters"]["Parameter"];
	for (auto valueConfigParametersParameter : allConfigParametersNode)
	{
		_Parameter configParametersObject;
		if(!valueConfigParametersParameter["CheckingCode"].isNull())
			configParametersObject.checkingCode = valueConfigParametersParameter["CheckingCode"].asString();
		if(!valueConfigParametersParameter["ParameterName"].isNull())
			configParametersObject.parameterName = valueConfigParametersParameter["ParameterName"].asString();
		if(!valueConfigParametersParameter["ParameterValue"].isNull())
			configParametersObject.parameterValue = valueConfigParametersParameter["ParameterValue"].asString();
		if(!valueConfigParametersParameter["ForceRestart"].isNull())
			configParametersObject.forceRestart = valueConfigParametersParameter["ForceRestart"].asString();
		if(!valueConfigParametersParameter["ParameterDescription"].isNull())
			configParametersObject.parameterDescription = valueConfigParametersParameter["ParameterDescription"].asString();
		if(!valueConfigParametersParameter["ModifiableStatus"].isNull())
			configParametersObject.modifiableStatus = valueConfigParametersParameter["ModifiableStatus"].asString();
		configParameters_.push_back(configParametersObject);
	}
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();

}

std::vector<DescribeParametersResult::_Parameter> DescribeParametersResult::getRunningParameters()const
{
	return runningParameters_;
}

std::string DescribeParametersResult::getEngineVersion()const
{
	return engineVersion_;
}

std::vector<DescribeParametersResult::_Parameter> DescribeParametersResult::getConfigParameters()const
{
	return configParameters_;
}

std::string DescribeParametersResult::getEngine()const
{
	return engine_;
}

