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

#ifndef ALIBABACLOUD_VPC_MODEL_LISTDHCPOPTIONSSETSREQUEST_H_
#define ALIBABACLOUD_VPC_MODEL_LISTDHCPOPTIONSSETSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT ListDhcpOptionsSetsRequest : public RpcServiceRequest
			{

			public:
				ListDhcpOptionsSetsRequest();
				~ListDhcpOptionsSetsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::vector<std::string> getDhcpOptionsSetId()const;
				void setDhcpOptionsSetId(const std::vector<std::string>& dhcpOptionsSetId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getDhcpOptionsSetName()const;
				void setDhcpOptionsSetName(const std::string& dhcpOptionsSetName);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::string nextToken_;
				std::vector<std::string> dhcpOptionsSetId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string domainName_;
				long ownerId_;
				std::string dhcpOptionsSetName_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_LISTDHCPOPTIONSSETSREQUEST_H_