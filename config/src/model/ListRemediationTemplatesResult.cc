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

#include <alibabacloud/config/model/ListRemediationTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListRemediationTemplatesResult::ListRemediationTemplatesResult() :
	ServiceResult()
{}

ListRemediationTemplatesResult::ListRemediationTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListRemediationTemplatesResult::~ListRemediationTemplatesResult()
{}

void ListRemediationTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRemediationTemplatesNode = value["RemediationTemplates"]["RemediationTemplate"];
	for (auto valueRemediationTemplatesRemediationTemplate : allRemediationTemplatesNode)
	{
		RemediationTemplate remediationTemplatesObject;
		if(!valueRemediationTemplatesRemediationTemplate["CompulsoryParameters"].isNull())
			remediationTemplatesObject.compulsoryParameters = valueRemediationTemplatesRemediationTemplate["CompulsoryParameters"].asString();
		if(!valueRemediationTemplatesRemediationTemplate["RemediationType"].isNull())
			remediationTemplatesObject.remediationType = valueRemediationTemplatesRemediationTemplate["RemediationType"].asString();
		if(!valueRemediationTemplatesRemediationTemplate["TemplateIdentifier"].isNull())
			remediationTemplatesObject.templateIdentifier = valueRemediationTemplatesRemediationTemplate["TemplateIdentifier"].asString();
		if(!valueRemediationTemplatesRemediationTemplate["TemplateName"].isNull())
			remediationTemplatesObject.templateName = valueRemediationTemplatesRemediationTemplate["TemplateName"].asString();
		if(!valueRemediationTemplatesRemediationTemplate["TemplateDefinition"].isNull())
			remediationTemplatesObject.templateDefinition = valueRemediationTemplatesRemediationTemplate["TemplateDefinition"].asString();
		remediationTemplates_.push_back(remediationTemplatesObject);
	}

}

std::vector<ListRemediationTemplatesResult::RemediationTemplate> ListRemediationTemplatesResult::getRemediationTemplates()const
{
	return remediationTemplates_;
}

