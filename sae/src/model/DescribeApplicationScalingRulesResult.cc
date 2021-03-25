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

#include <alibabacloud/sae/model/DescribeApplicationScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

DescribeApplicationScalingRulesResult::DescribeApplicationScalingRulesResult() :
	ServiceResult()
{}

DescribeApplicationScalingRulesResult::DescribeApplicationScalingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeApplicationScalingRulesResult::~DescribeApplicationScalingRulesResult()
{}

void DescribeApplicationScalingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["CurrentPage"].isNull())
		data_.currentPage = std::stoi(dataNode["CurrentPage"].asString());
	if(!dataNode["TotalSize"].isNull())
		data_.totalSize = std::stoi(dataNode["TotalSize"].asString());
	auto allApplicationScalingRulesNode = dataNode["ApplicationScalingRules"]["ApplicationScalingRule"];
	for (auto dataNodeApplicationScalingRulesApplicationScalingRule : allApplicationScalingRulesNode)
	{
		Data::ApplicationScalingRule applicationScalingRuleObject;
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleEnabled"].isNull())
			applicationScalingRuleObject.scaleRuleEnabled = dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleEnabled"].asString() == "true";
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["LastDisableTime"].isNull())
			applicationScalingRuleObject.lastDisableTime = std::stol(dataNodeApplicationScalingRulesApplicationScalingRule["LastDisableTime"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["AppId"].isNull())
			applicationScalingRuleObject.appId = dataNodeApplicationScalingRulesApplicationScalingRule["AppId"].asString();
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["CreateTime"].isNull())
			applicationScalingRuleObject.createTime = std::stol(dataNodeApplicationScalingRulesApplicationScalingRule["CreateTime"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["UpdateTime"].isNull())
			applicationScalingRuleObject.updateTime = std::stol(dataNodeApplicationScalingRulesApplicationScalingRule["UpdateTime"].asString());
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleName"].isNull())
			applicationScalingRuleObject.scaleRuleName = dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleName"].asString();
		if(!dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleType"].isNull())
			applicationScalingRuleObject.scaleRuleType = dataNodeApplicationScalingRulesApplicationScalingRule["ScaleRuleType"].asString();
		auto timerNode = value["Timer"];
		if(!timerNode["Period"].isNull())
			applicationScalingRuleObject.timer.period = timerNode["Period"].asString();
		if(!timerNode["EndDate"].isNull())
			applicationScalingRuleObject.timer.endDate = timerNode["EndDate"].asString();
		if(!timerNode["BeginDate"].isNull())
			applicationScalingRuleObject.timer.beginDate = timerNode["BeginDate"].asString();
		auto allSchedulesNode = timerNode["Schedules"]["Schedule"];
		for (auto timerNodeSchedulesSchedule : allSchedulesNode)
		{
			Data::ApplicationScalingRule::Timer::Schedule scheduleObject;
			if(!timerNodeSchedulesSchedule["TargetReplicas"].isNull())
				scheduleObject.targetReplicas = std::stoi(timerNodeSchedulesSchedule["TargetReplicas"].asString());
			if(!timerNodeSchedulesSchedule["AtTime"].isNull())
				scheduleObject.atTime = timerNodeSchedulesSchedule["AtTime"].asString();
			applicationScalingRuleObject.timer.schedules.push_back(scheduleObject);
		}
		auto metricNode = value["Metric"];
		if(!metricNode["MinReplicas"].isNull())
			applicationScalingRuleObject.metric.minReplicas = std::stoi(metricNode["MinReplicas"].asString());
		if(!metricNode["MaxReplicas"].isNull())
			applicationScalingRuleObject.metric.maxReplicas = std::stoi(metricNode["MaxReplicas"].asString());
		auto allMetricsNode = metricNode["Metrics"]["Metric"];
		for (auto metricNodeMetricsMetric : allMetricsNode)
		{
			Data::ApplicationScalingRule::Metric::Metric1 metric1Object;
			if(!metricNodeMetricsMetric["MetricType"].isNull())
				metric1Object.metricType = metricNodeMetricsMetric["MetricType"].asString();
			if(!metricNodeMetricsMetric["MetricTargetAverageUtilization"].isNull())
				metric1Object.metricTargetAverageUtilization = std::stoi(metricNodeMetricsMetric["MetricTargetAverageUtilization"].asString());
			applicationScalingRuleObject.metric.metrics.push_back(metric1Object);
		}
		auto metricsStatusNode = metricNode["MetricsStatus"];
		if(!metricsStatusNode["DesiredReplicas"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.desiredReplicas = std::stol(metricsStatusNode["DesiredReplicas"].asString());
		if(!metricsStatusNode["CurrentReplicas"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.currentReplicas = std::stol(metricsStatusNode["CurrentReplicas"].asString());
		if(!metricsStatusNode["NextScaleTimePeriod"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.nextScaleTimePeriod = std::stoi(metricsStatusNode["NextScaleTimePeriod"].asString());
		if(!metricsStatusNode["LastScaleTime"].isNull())
			applicationScalingRuleObject.metric.metricsStatus.lastScaleTime = metricsStatusNode["LastScaleTime"].asString();
		auto allNextScaleMetricsNode = metricsStatusNode["NextScaleMetrics"]["NextScaleMetric"];
		for (auto metricsStatusNodeNextScaleMetricsNextScaleMetric : allNextScaleMetricsNode)
		{
			Data::ApplicationScalingRule::Metric::MetricsStatus::NextScaleMetric nextScaleMetricObject;
			if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleInAverageUtilization"].isNull())
				nextScaleMetricObject.nextScaleInAverageUtilization = std::stoi(metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleInAverageUtilization"].asString());
			if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["Name"].isNull())
				nextScaleMetricObject.name = metricsStatusNodeNextScaleMetricsNextScaleMetric["Name"].asString();
			if(!metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleOutAverageUtilization"].isNull())
				nextScaleMetricObject.nextScaleOutAverageUtilization = std::stoi(metricsStatusNodeNextScaleMetricsNextScaleMetric["NextScaleOutAverageUtilization"].asString());
			applicationScalingRuleObject.metric.metricsStatus.nextScaleMetrics.push_back(nextScaleMetricObject);
		}
		auto allCurrentMetricsNode = metricsStatusNode["CurrentMetrics"]["CurrentMetric"];
		for (auto metricsStatusNodeCurrentMetricsCurrentMetric : allCurrentMetricsNode)
		{
			Data::ApplicationScalingRule::Metric::MetricsStatus::CurrentMetric currentMetricObject;
			if(!metricsStatusNodeCurrentMetricsCurrentMetric["Type"].isNull())
				currentMetricObject.type = metricsStatusNodeCurrentMetricsCurrentMetric["Type"].asString();
			if(!metricsStatusNodeCurrentMetricsCurrentMetric["CurrentValue"].isNull())
				currentMetricObject.currentValue = std::stol(metricsStatusNodeCurrentMetricsCurrentMetric["CurrentValue"].asString());
			if(!metricsStatusNodeCurrentMetricsCurrentMetric["Name"].isNull())
				currentMetricObject.name = metricsStatusNodeCurrentMetricsCurrentMetric["Name"].asString();
			applicationScalingRuleObject.metric.metricsStatus.currentMetrics.push_back(currentMetricObject);
		}
		data_.applicationScalingRules.push_back(applicationScalingRuleObject);
	}
	if(!value["TraceId"].isNull())
		traceId_ = value["TraceId"].asString();

}

std::string DescribeApplicationScalingRulesResult::getTraceId()const
{
	return traceId_;
}

DescribeApplicationScalingRulesResult::Data DescribeApplicationScalingRulesResult::getData()const
{
	return data_;
}

