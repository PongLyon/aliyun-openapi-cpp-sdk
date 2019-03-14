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

#ifndef ALIBABACLOUD_CBN_MODEL_DESCRIBECENBANDWIDTHPACKAGESREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_DESCRIBECENBANDWIDTHPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cbn/CbnExport.h>

namespace AlibabaCloud
{
	namespace Cbn
	{
		namespace Model
		{
			class ALIBABACLOUD_CBN_EXPORT DescribeCenBandwidthPackagesRequest : public RpcServiceRequest
			{
				struct Filter
				{
					std::vector<std::string> value;
					std::string key;
				};

			public:
				DescribeCenBandwidthPackagesRequest();
				~DescribeCenBandwidthPackagesRequest();

				std::vector<Filter> getFilter()const;
				void setFilter(const std::vector<Filter>& filter);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				bool getIsOrKey()const;
				void setIsOrKey(bool isOrKey);

            private:
				std::vector<Filter> filter_;
				long resourceOwnerId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				int pageSize_;
				long ownerId_;
				int pageNumber_;
				bool isOrKey_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CBN_MODEL_DESCRIBECENBANDWIDTHPACKAGESREQUEST_H_