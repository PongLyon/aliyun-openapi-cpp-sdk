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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEMETADATAOPTIONSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEMETADATAOPTIONSREQUEST_H_

#include <alibabacloud/ecs/EcsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecs {
namespace Model {
class ALIBABACLOUD_ECS_EXPORT ModifyInstanceMetadataOptionsRequest : public RpcServiceRequest {
public:
	ModifyInstanceMetadataOptionsRequest();
	~ModifyInstanceMetadataOptionsRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	int getHttpPutResponseHopLimit() const;
	void setHttpPutResponseHopLimit(int httpPutResponseHopLimit);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getHttpEndpoint() const;
	void setHttpEndpoint(const std::string &httpEndpoint);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getHttpTokens() const;
	void setHttpTokens(const std::string &httpTokens);

private:
	long resourceOwnerId_;
	int httpPutResponseHopLimit_;
	std::string regionId_;
	std::string httpEndpoint_;
	std::string resourceOwnerAccount_;
	long ownerId_;
	std::string instanceId_;
	std::string httpTokens_;
};
} // namespace Model
} // namespace Ecs
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYINSTANCEMETADATAOPTIONSREQUEST_H_
