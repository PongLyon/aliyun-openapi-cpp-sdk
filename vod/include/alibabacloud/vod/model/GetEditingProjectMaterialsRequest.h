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

#ifndef ALIBABACLOUD_VOD_MODEL_GETEDITINGPROJECTMATERIALSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_GETEDITINGPROJECTMATERIALSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT GetEditingProjectMaterialsRequest : public RpcServiceRequest {
public:
	GetEditingProjectMaterialsRequest();
	~GetEditingProjectMaterialsRequest();
	std::string getResourceOwnerId() const;
	void setResourceOwnerId(const std::string &resourceOwnerId);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getMaterialType() const;
	void setMaterialType(const std::string &materialType);
	std::string getProjectId() const;
	void setProjectId(const std::string &projectId);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	std::string getOwnerId() const;
	void setOwnerId(const std::string &ownerId);

private:
	std::string resourceOwnerId_;
	std::string type_;
	std::string accessKeyId_;
	std::string materialType_;
	std::string projectId_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	std::string ownerId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_GETEDITINGPROJECTMATERIALSREQUEST_H_
