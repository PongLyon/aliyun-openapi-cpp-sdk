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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBERESERVEDINSTANCESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBERESERVEDINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeReservedInstancesResult : public ServiceResult
			{
			public:
				struct ReservedInstance
				{
					struct OperationLock
					{
						std::string lockReason;
					};
					std::string status;
					std::string description;
					std::string allocationStatus;
					std::string zoneId;
					std::string platform;
					std::string resourceGroupId;
					std::string startTime;
					std::vector<ReservedInstance::OperationLock> operationLocks;
					std::string offeringType;
					int instanceAmount;
					std::string scope;
					std::string expiredTime;
					std::string creationTime;
					std::string reservedInstanceId;
					std::string regionId;
					std::string reservedInstanceName;
					std::string instanceType;
				};


				DescribeReservedInstancesResult();
				explicit DescribeReservedInstancesResult(const std::string &payload);
				~DescribeReservedInstancesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<ReservedInstance> getReservedInstances()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<ReservedInstance> reservedInstances_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBERESERVEDINSTANCESRESULT_H_