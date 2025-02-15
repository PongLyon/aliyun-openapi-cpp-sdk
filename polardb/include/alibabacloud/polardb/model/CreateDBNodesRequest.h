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

#ifndef ALIBABACLOUD_POLARDB_MODEL_CREATEDBNODESREQUEST_H_
#define ALIBABACLOUD_POLARDB_MODEL_CREATEDBNODESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/polardb/PolardbExport.h>

namespace AlibabaCloud
{
	namespace Polardb
	{
		namespace Model
		{
			class ALIBABACLOUD_POLARDB_EXPORT CreateDBNodesRequest : public RpcServiceRequest
			{
			public:
				struct DBNode
				{
					std::string targetClass;
					std::string zoneId;
				};

			public:
				CreateDBNodesRequest();
				~CreateDBNodesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getEndpointBindList()const;
				void setEndpointBindList(const std::string& endpointBindList);
				std::string getPlannedEndTime()const;
				void setPlannedEndTime(const std::string& plannedEndTime);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getDBClusterId()const;
				void setDBClusterId(const std::string& dBClusterId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPlannedStartTime()const;
				void setPlannedStartTime(const std::string& plannedStartTime);
				std::vector<DBNode> getDBNode()const;
				void setDBNode(const std::vector<DBNode>& dBNode);
				std::string getImciSwitch()const;
				void setImciSwitch(const std::string& imciSwitch);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string endpointBindList_;
				std::string plannedEndTime_;
				std::string accessKeyId_;
				std::string resourceOwnerAccount_;
				std::string dBClusterId_;
				std::string ownerAccount_;
				long ownerId_;
				std::string plannedStartTime_;
				std::vector<DBNode> dBNode_;
				std::string imciSwitch_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_POLARDB_MODEL_CREATEDBNODESREQUEST_H_