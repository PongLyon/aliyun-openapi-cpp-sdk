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

#ifndef ALIBABACLOUD_ENS_MODEL_CREATEEPINSTANCEREQUEST_H_
#define ALIBABACLOUD_ENS_MODEL_CREATEEPINSTANCEREQUEST_H_

#include <alibabacloud/ens/EnsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ens {
namespace Model {
class ALIBABACLOUD_ENS_EXPORT CreateEPInstanceRequest : public RpcServiceRequest {
public:
	CreateEPInstanceRequest();
	~CreateEPInstanceRequest();
	std::string getNetworkingModel() const;
	void setNetworkingModel(const std::string &networkingModel);
	int getInternetMaxBandwidthOut() const;
	void setInternetMaxBandwidthOut(int internetMaxBandwidthOut);
	std::string getEPNInstanceType() const;
	void setEPNInstanceType(const std::string &ePNInstanceType);
	std::string getInternetChargeType() const;
	void setInternetChargeType(const std::string &internetChargeType);
	std::string getEPNInstanceName() const;
	void setEPNInstanceName(const std::string &ePNInstanceName);

private:
	std::string networkingModel_;
	int internetMaxBandwidthOut_;
	std::string ePNInstanceType_;
	std::string internetChargeType_;
	std::string ePNInstanceName_;
};
} // namespace Model
} // namespace Ens
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ENS_MODEL_CREATEEPINSTANCEREQUEST_H_
