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

#ifndef ALIBABACLOUD_CONFIG_MODEL_LISTCOMPLIANCEPACKTEMPLATESRESULT_H_
#define ALIBABACLOUD_CONFIG_MODEL_LISTCOMPLIANCEPACKTEMPLATESRESULT_H_

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
			class ALIBABACLOUD_CONFIG_EXPORT ListCompliancePackTemplatesResult : public ServiceResult
			{
			public:
				struct CompliancePackTemplatesResult
				{
					struct CompliancePackTemplate
					{
						struct ConfigRulesItem
						{
							struct ConfigRuleParametersItem
							{
								bool required;
								std::string parameterValue;
								std::string parameterName;
							};
							std::string managedRuleName;
							std::string description;
							std::string managedRuleIdentifier;
							int riskLevel;
							std::vector<ConfigRulesItem::ConfigRuleParametersItem> configRuleParameters;
						};
						std::string compliancePackTemplateName;
						std::string description;
						std::vector<CompliancePackTemplate::ConfigRulesItem> configRules;
						std::string compliancePackTemplateId;
						int riskLevel;
						std::string automationHelpUrl;
					};
					std::vector<CompliancePackTemplate> compliancePackTemplates;
					long totalCount;
					int pageSize;
					int pageNumber;
				};


				ListCompliancePackTemplatesResult();
				explicit ListCompliancePackTemplatesResult(const std::string &payload);
				~ListCompliancePackTemplatesResult();
				CompliancePackTemplatesResult getCompliancePackTemplatesResult()const;

			protected:
				void parse(const std::string &payload);
			private:
				CompliancePackTemplatesResult compliancePackTemplatesResult_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CONFIG_MODEL_LISTCOMPLIANCEPACKTEMPLATESRESULT_H_