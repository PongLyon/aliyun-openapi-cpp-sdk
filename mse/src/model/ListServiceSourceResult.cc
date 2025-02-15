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

#include <alibabacloud/mse/model/ListServiceSourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

ListServiceSourceResult::ListServiceSourceResult() :
	ServiceResult()
{}

ListServiceSourceResult::ListServiceSourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListServiceSourceResult::~ListServiceSourceResult()
{}

void ListServiceSourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Sources"];
	for (auto valueDataSources : allDataNode)
	{
		Sources dataObject;
		if(!valueDataSources["Id"].isNull())
			dataObject.id = std::stol(valueDataSources["Id"].asString());
		if(!valueDataSources["Name"].isNull())
			dataObject.name = valueDataSources["Name"].asString();
		if(!valueDataSources["Address"].isNull())
			dataObject.address = valueDataSources["Address"].asString();
		if(!valueDataSources["Type"].isNull())
			dataObject.type = valueDataSources["Type"].asString();
		if(!valueDataSources["Source"].isNull())
			dataObject.source = valueDataSources["Source"].asString();
		if(!valueDataSources["BindingWithGateway"].isNull())
			dataObject.bindingWithGateway = std::stoi(valueDataSources["BindingWithGateway"].asString());
		if(!valueDataSources["GatewayId"].isNull())
			dataObject.gatewayId = std::stol(valueDataSources["GatewayId"].asString());
		if(!valueDataSources["GmtCreate"].isNull())
			dataObject.gmtCreate = valueDataSources["GmtCreate"].asString();
		if(!valueDataSources["GmtModified"].isNull())
			dataObject.gmtModified = valueDataSources["GmtModified"].asString();
		if(!valueDataSources["SourceUniqueId"].isNull())
			dataObject.sourceUniqueId = valueDataSources["SourceUniqueId"].asString();
		data_.push_back(dataObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListServiceSourceResult::getMessage()const
{
	return message_;
}

int ListServiceSourceResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::vector<ListServiceSourceResult::Sources> ListServiceSourceResult::getData()const
{
	return data_;
}

int ListServiceSourceResult::getCode()const
{
	return code_;
}

bool ListServiceSourceResult::getSuccess()const
{
	return success_;
}

