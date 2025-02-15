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

#ifndef ALIBABACLOUD_CONFIG_MODEL_GETMANAGEDRULERESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_GETMANAGEDRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/config/ConfigExport.h>

namespace AlibabaCloud
{
	namespace Config
	{
		namespace Model
		{
			class ALIBABACLOUD_CONFIG_EXPORT GetManagedRuleResult : public ServiceResult
			{
			public:
				struct ManagedRule
				{
					struct Scope
					{
						std::vector<std::string> complianceResourceTypes;
					};
					struct SourceDetailsItem
					{
						std::string eventSource;
						std::string messageType;
						std::string maximumExecutionFrequency;
					};
					std::vector<std::string> optionalInputParameterDetails;
					std::string description;
					std::vector<std::string> compulsoryInputParameterDetails;
					std::string helpHint;
					std::vector<std::string> labels;
					std::string helpUrls;
					std::string functionName;
					std::string identifier;
					Scope scope;
					std::vector<std::string> sourceConditions;
					std::string serviceName;
					std::string defaultName;
					std::string helpDoc;
					std::string configRuleName;
					std::string regionId;
					std::vector<SourceDetailsItem> sourceDetails;
					int riskLevel;
					long createTimestamp;
				};


				GetManagedRuleResult();
				explicit GetManagedRuleResult(const std::string &payload);
				~GetManagedRuleResult();
				ManagedRule getManagedRule()const;

			protected:
				void parse(const std::string &payload);
			private:
				ManagedRule managedRule_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_GETMANAGEDRULERESULT_H_