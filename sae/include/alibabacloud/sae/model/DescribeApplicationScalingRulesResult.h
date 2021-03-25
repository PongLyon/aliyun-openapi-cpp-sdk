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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeApplicationScalingRulesResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct ApplicationScalingRule
					{
						struct Timer
						{
							struct Schedule
							{
								int targetReplicas;
								std::string atTime;
							};
							std::vector<Schedule> schedules;
							std::string period;
							std::string endDate;
							std::string beginDate;
						};
						struct Metric
						{
							struct MetricsStatus
							{
								struct NextScaleMetric
								{
									int nextScaleInAverageUtilization;
									std::string name;
									int nextScaleOutAverageUtilization;
								};
								struct CurrentMetric
								{
									std::string type;
									long currentValue;
									std::string name;
								};
								std::vector<NextScaleMetric> nextScaleMetrics;
								long desiredReplicas;
								std::vector<CurrentMetric> currentMetrics;
								long currentReplicas;
								int nextScaleTimePeriod;
								std::string lastScaleTime;
							};
							struct Metric1
							{
								std::string metricType;
								int metricTargetAverageUtilization;
							};
							std::vector<Metric1> metrics;
							int minReplicas;
							int maxReplicas;
							MetricsStatus metricsStatus;
						};
						bool scaleRuleEnabled;
						Timer timer;
						long lastDisableTime;
						std::string appId;
						long createTime;
						long updateTime;
						Metric metric;
						std::string scaleRuleName;
						std::string scaleRuleType;
					};
					int pageSize;
					int currentPage;
					std::vector<ApplicationScalingRule> applicationScalingRules;
					int totalSize;
				};


				DescribeApplicationScalingRulesResult();
				explicit DescribeApplicationScalingRulesResult(const std::string &payload);
				~DescribeApplicationScalingRulesResult();
				std::string getTraceId()const;
				Data getData()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string traceId_;
				Data data_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONSCALINGRULESRESULT_H_