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

#include <alibabacloud/arms/model/ListPrometheusAlertRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListPrometheusAlertRulesResult::ListPrometheusAlertRulesResult() :
	ServiceResult()
{}

ListPrometheusAlertRulesResult::ListPrometheusAlertRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrometheusAlertRulesResult::~ListPrometheusAlertRulesResult()
{}

void ListPrometheusAlertRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrometheusAlertRulesNode = value["PrometheusAlertRules"]["PrometheusAlertRule"];
	for (auto valuePrometheusAlertRulesPrometheusAlertRule : allPrometheusAlertRulesNode)
	{
		PrometheusAlertRule prometheusAlertRulesObject;
		if(!valuePrometheusAlertRulesPrometheusAlertRule["AlertId"].isNull())
			prometheusAlertRulesObject.alertId = std::stol(valuePrometheusAlertRulesPrometheusAlertRule["AlertId"].asString());
		if(!valuePrometheusAlertRulesPrometheusAlertRule["AlertName"].isNull())
			prometheusAlertRulesObject.alertName = valuePrometheusAlertRulesPrometheusAlertRule["AlertName"].asString();
		if(!valuePrometheusAlertRulesPrometheusAlertRule["Message"].isNull())
			prometheusAlertRulesObject.message = valuePrometheusAlertRulesPrometheusAlertRule["Message"].asString();
		if(!valuePrometheusAlertRulesPrometheusAlertRule["Type"].isNull())
			prometheusAlertRulesObject.type = valuePrometheusAlertRulesPrometheusAlertRule["Type"].asString();
		if(!valuePrometheusAlertRulesPrometheusAlertRule["Expression"].isNull())
			prometheusAlertRulesObject.expression = valuePrometheusAlertRulesPrometheusAlertRule["Expression"].asString();
		if(!valuePrometheusAlertRulesPrometheusAlertRule["Duration"].isNull())
			prometheusAlertRulesObject.duration = valuePrometheusAlertRulesPrometheusAlertRule["Duration"].asString();
		if(!valuePrometheusAlertRulesPrometheusAlertRule["ClusterId"].isNull())
			prometheusAlertRulesObject.clusterId = valuePrometheusAlertRulesPrometheusAlertRule["ClusterId"].asString();
		if(!valuePrometheusAlertRulesPrometheusAlertRule["Status"].isNull())
			prometheusAlertRulesObject.status = std::stoi(valuePrometheusAlertRulesPrometheusAlertRule["Status"].asString());
		if(!valuePrometheusAlertRulesPrometheusAlertRule["DispatchRuleId"].isNull())
			prometheusAlertRulesObject.dispatchRuleId = std::stol(valuePrometheusAlertRulesPrometheusAlertRule["DispatchRuleId"].asString());
		if(!valuePrometheusAlertRulesPrometheusAlertRule["NotifyType"].isNull())
			prometheusAlertRulesObject.notifyType = valuePrometheusAlertRulesPrometheusAlertRule["NotifyType"].asString();
		auto allLabelsNode = valuePrometheusAlertRulesPrometheusAlertRule["Labels"]["Label"];
		for (auto valuePrometheusAlertRulesPrometheusAlertRuleLabelsLabel : allLabelsNode)
		{
			PrometheusAlertRule::Label labelsObject;
			if(!valuePrometheusAlertRulesPrometheusAlertRuleLabelsLabel["Name"].isNull())
				labelsObject.name = valuePrometheusAlertRulesPrometheusAlertRuleLabelsLabel["Name"].asString();
			if(!valuePrometheusAlertRulesPrometheusAlertRuleLabelsLabel["Value"].isNull())
				labelsObject.value = valuePrometheusAlertRulesPrometheusAlertRuleLabelsLabel["Value"].asString();
			prometheusAlertRulesObject.labels.push_back(labelsObject);
		}
		auto allAnnotationsNode = valuePrometheusAlertRulesPrometheusAlertRule["Annotations"]["Annotation"];
		for (auto valuePrometheusAlertRulesPrometheusAlertRuleAnnotationsAnnotation : allAnnotationsNode)
		{
			PrometheusAlertRule::Annotation annotationsObject;
			if(!valuePrometheusAlertRulesPrometheusAlertRuleAnnotationsAnnotation["Name"].isNull())
				annotationsObject.name = valuePrometheusAlertRulesPrometheusAlertRuleAnnotationsAnnotation["Name"].asString();
			if(!valuePrometheusAlertRulesPrometheusAlertRuleAnnotationsAnnotation["Value"].isNull())
				annotationsObject.value = valuePrometheusAlertRulesPrometheusAlertRuleAnnotationsAnnotation["Value"].asString();
			prometheusAlertRulesObject.annotations.push_back(annotationsObject);
		}
		prometheusAlertRules_.push_back(prometheusAlertRulesObject);
	}

}

std::vector<ListPrometheusAlertRulesResult::PrometheusAlertRule> ListPrometheusAlertRulesResult::getPrometheusAlertRules()const
{
	return prometheusAlertRules_;
}

