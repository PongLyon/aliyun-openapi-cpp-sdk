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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEPROXYACCESSREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEPROXYACCESSREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT CreateProxyAccessRequest : public RpcServiceRequest {
public:
	CreateProxyAccessRequest();
	~CreateProxyAccessRequest();
	std::string getIndepAccount() const;
	void setIndepAccount(const std::string &indepAccount);
	long getUserId() const;
	void setUserId(long userId);
	long getTid() const;
	void setTid(long tid);
	std::string getIndepPassword() const;
	void setIndepPassword(const std::string &indepPassword);
	long getProxyId() const;
	void setProxyId(long proxyId);

private:
	std::string indepAccount_;
	long userId_;
	long tid_;
	std::string indepPassword_;
	long proxyId_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_CREATEPROXYACCESSREQUEST_H_
