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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCELISTRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCELISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeDedicatedClusterInstanceListResult : public ServiceResult
			{
			public:
				struct DbInstance
				{
					struct InstanceNodes
					{
						std::string role;
						std::string zoneId;
						std::string dedicatedHostName;
						std::string nodeType;
						int port;
						int nodeId;
						std::string nodeIp;
						std::string insName;
					};
					std::string storageType;
					std::string engineVersion;
					std::string zoneId;
					std::string instanceId;
					std::string clusterId;
					std::string createTime;
					std::string instanceClass;
					std::string characterType;
					std::string vswitchId;
					std::string connectionDomain;
					std::string instanceName;
					std::string maintainEndTime;
					std::string vpcId;
					std::string instanceStatus;
					std::vector<DbInstance::InstanceNodes> instanceNodeList;
					std::string customId;
					std::string region;
					std::string clusterName;
					std::string regionId;
					std::string maintainStartTime;
					std::string engine;
				};


				DescribeDedicatedClusterInstanceListResult();
				explicit DescribeDedicatedClusterInstanceListResult(const std::string &payload);
				~DescribeDedicatedClusterInstanceListResult();
				std::vector<DbInstance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DbInstance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCELISTRESULT_H_