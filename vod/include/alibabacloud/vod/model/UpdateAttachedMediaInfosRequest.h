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

#ifndef ALIBABACLOUD_VOD_MODEL_UPDATEATTACHEDMEDIAINFOSREQUEST_H_
#define ALIBABACLOUD_VOD_MODEL_UPDATEATTACHEDMEDIAINFOSREQUEST_H_

#include <alibabacloud/vod/VodExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Vod {
namespace Model {
class ALIBABACLOUD_VOD_EXPORT UpdateAttachedMediaInfosRequest : public RpcServiceRequest {
public:
	UpdateAttachedMediaInfosRequest();
	~UpdateAttachedMediaInfosRequest();
	std::string getUpdateContent() const;
	void setUpdateContent(const std::string &updateContent);
	long getResourceRealOwnerId() const;
	void setResourceRealOwnerId(long resourceRealOwnerId);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);

private:
	std::string updateContent_;
	long resourceRealOwnerId_;
	std::string accessKeyId_;
};
} // namespace Model
} // namespace Vod
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_VOD_MODEL_UPDATEATTACHEDMEDIAINFOSREQUEST_H_
