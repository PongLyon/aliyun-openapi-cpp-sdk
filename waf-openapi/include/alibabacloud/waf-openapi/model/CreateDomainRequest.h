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

#ifndef ALIBABACLOUD_WAF_OPENAPI_MODEL_CREATEDOMAINREQUEST_H_
#define ALIBABACLOUD_WAF_OPENAPI_MODEL_CREATEDOMAINREQUEST_H_

#include <alibabacloud/waf-openapi/Waf_openapiExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Waf_openapi {
namespace Model {
class ALIBABACLOUD_WAF_OPENAPI_EXPORT CreateDomainRequest : public RpcServiceRequest {
public:
	CreateDomainRequest();
	~CreateDomainRequest();
	int getIpFollowStatus() const;
	void setIpFollowStatus(int ipFollowStatus);
	std::string getSniHost() const;
	void setSniHost(const std::string &sniHost);
	std::string getResourceGroupId() const;
	void setResourceGroupId(const std::string &resourceGroupId);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getHttpPort() const;
	void setHttpPort(const std::string &httpPort);
	std::string getHttp2Port() const;
	void setHttp2Port(const std::string &http2Port);
	int getWriteTime() const;
	void setWriteTime(int writeTime);
	int getSniStatus() const;
	void setSniStatus(int sniStatus);
	std::string getLang() const;
	void setLang(const std::string &lang);
	int getAccessHeaderMode() const;
	void setAccessHeaderMode(int accessHeaderMode);
	std::string getAccessType() const;
	void setAccessType(const std::string &accessType);
	std::string getLogHeaders() const;
	void setLogHeaders(const std::string &logHeaders);
	std::string getAccessHeaders() const;
	void setAccessHeaders(const std::string &accessHeaders);
	int getConnectionTime() const;
	void setConnectionTime(int connectionTime);
	int getClusterType() const;
	void setClusterType(int clusterType);
	std::string getCloudNativeInstances() const;
	void setCloudNativeInstances(const std::string &cloudNativeInstances);
	int getHttpsRedirect() const;
	void setHttpsRedirect(int httpsRedirect);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	std::string getSourceIps() const;
	void setSourceIps(const std::string &sourceIps);
	std::string getDomain() const;
	void setDomain(const std::string &domain);
	int getIsAccessProduct() const;
	void setIsAccessProduct(int isAccessProduct);
	int getReadTime() const;
	void setReadTime(int readTime);
	std::string getHttpsPort() const;
	void setHttpsPort(const std::string &httpsPort);
	int getLoadBalancing() const;
	void setLoadBalancing(int loadBalancing);
	int getHttpToUserIp() const;
	void setHttpToUserIp(int httpToUserIp);

private:
	int ipFollowStatus_;
	std::string sniHost_;
	std::string resourceGroupId_;
	std::string sourceIp_;
	std::string httpPort_;
	std::string http2Port_;
	int writeTime_;
	int sniStatus_;
	std::string lang_;
	int accessHeaderMode_;
	std::string accessType_;
	std::string logHeaders_;
	std::string accessHeaders_;
	int connectionTime_;
	int clusterType_;
	std::string cloudNativeInstances_;
	int httpsRedirect_;
	std::string instanceId_;
	std::string sourceIps_;
	std::string domain_;
	int isAccessProduct_;
	int readTime_;
	std::string httpsPort_;
	int loadBalancing_;
	int httpToUserIp_;
};
} // namespace Model
} // namespace Waf_openapi
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WAF_OPENAPI_MODEL_CREATEDOMAINREQUEST_H_
