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

#ifndef ALIBABACLOUD_DYPLSAPI_MODEL_QUERYCALLSTATUSREQUEST_H_
#define ALIBABACLOUD_DYPLSAPI_MODEL_QUERYCALLSTATUSREQUEST_H_

#include <alibabacloud/dyplsapi/DyplsapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dyplsapi {
namespace Model {
class ALIBABACLOUD_DYPLSAPI_EXPORT QueryCallStatusRequest : public RpcServiceRequest {
public:
	QueryCallStatusRequest();
	~QueryCallStatusRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getSubsId() const;
	void setSubsId(const std::string &subsId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getCallNo() const;
	void setCallNo(const std::string &callNo);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getPoolKey() const;
	void setPoolKey(const std::string &poolKey);

private:
	long resourceOwnerId_;
	std::string accessKeyId_;
	std::string subsId_;
	std::string resourceOwnerAccount_;
	std::string callNo_;
	long ownerId_;
	std::string poolKey_;
};
} // namespace Model
} // namespace Dyplsapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DYPLSAPI_MODEL_QUERYCALLSTATUSREQUEST_H_
