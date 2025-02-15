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

#ifndef ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATATOTALCOUNTRESULT_H_
#define ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATATOTALCOUNTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sddp/SddpExport.h>

namespace AlibabaCloud
{
	namespace Sddp
	{
		namespace Model
		{
			class ALIBABACLOUD_SDDP_EXPORT DescribeDataTotalCountResult : public ServiceResult
			{
			public:
				struct DataCount
				{
					struct Instance
					{
						struct RiskCount
						{
							long id;
							long count;
							std::string name;
						};
						long totalCount;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						std::vector<RiskCount> riskCountList;
						long lastCount;
					};
					struct Table
					{
						struct RiskCount2
						{
							long id;
							long count;
							std::string name;
						};
						long totalCount;
						std::vector<RiskCount2> riskCountList1;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						long lastCount;
					};
					struct Package
					{
						struct RiskCount4
						{
							long id;
							long count;
							std::string name;
						};
						long totalCount;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						std::vector<RiskCount4> riskCountList3;
						long lastCount;
					};
					struct Column
					{
						struct RiskCount6
						{
							long id;
							long count;
							std::string name;
						};
						struct ColumnCount
						{
							long id;
							long count;
							std::string name;
						};
						long totalCount;
						std::vector<ColumnCount> columnRuleTop;
						long count;
						long lastSensitiveCount;
						long sensitiveCount;
						std::vector<RiskCount6> riskCountList5;
						long lastCount;
					};
					struct Oss
					{
						struct RiskCount8
						{
							long id;
							long count;
							std::string name;
						};
						struct OssCount
						{
							long id;
							long count;
							std::string name;
						};
						long totalCount;
						std::vector<RiskCount8> riskCountList7;
						long count;
						long lastSensitiveCount;
						std::vector<OssCount> ossRuleTop;
						long sensitiveCount;
						long lastCount;
					};
					Table table;
					Instance instance;
					Column column;
					Package package;
					Oss oss;
				};


				DescribeDataTotalCountResult();
				explicit DescribeDataTotalCountResult(const std::string &payload);
				~DescribeDataTotalCountResult();
				DataCount getDataCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				DataCount dataCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SDDP_MODEL_DESCRIBEDATATOTALCOUNTRESULT_H_