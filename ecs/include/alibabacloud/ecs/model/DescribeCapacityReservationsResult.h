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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECAPACITYRESERVATIONSRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECAPACITYRESERVATIONSRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeCapacityReservationsResult : public ServiceResult
			{
			public:
				struct CapacityReservationItem
				{
					struct AllocatedResource
					{
						int usedAmount;
						std::string zoneId;
						int totalAmount;
						std::string instanceType;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string description;
					std::string endTime;
					std::string resourceGroupId;
					std::string platform;
					std::string privatePoolOptionsName;
					std::string instanceChargeType;
					std::string startTime;
					std::string startTimeType;
					std::string privatePoolOptionsMatchCriteria;
					std::string timeSlot;
					std::vector<CapacityReservationItem::AllocatedResource> allocatedResources;
					std::string privatePoolOptionsId;
					std::string endTimeType;
					std::string regionId;
					std::vector<CapacityReservationItem::Tag> tags;
				};


				DescribeCapacityReservationsResult();
				explicit DescribeCapacityReservationsResult(const std::string &payload);
				~DescribeCapacityReservationsResult();
				int getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;
				std::vector<CapacityReservationItem> getCapacityReservationSet()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::string nextToken_;
				int maxResults_;
				std::vector<CapacityReservationItem> capacityReservationSet_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECAPACITYRESERVATIONSRESULT_H_