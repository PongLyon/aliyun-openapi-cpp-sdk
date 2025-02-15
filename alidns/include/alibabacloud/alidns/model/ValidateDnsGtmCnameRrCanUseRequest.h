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

#ifndef ALIBABACLOUD_ALIDNS_MODEL_VALIDATEDNSGTMCNAMERRCANUSEREQUEST_H_
#define ALIBABACLOUD_ALIDNS_MODEL_VALIDATEDNSGTMCNAMERRCANUSEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/alidns/AlidnsExport.h>

namespace AlibabaCloud
{
	namespace Alidns
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIDNS_EXPORT ValidateDnsGtmCnameRrCanUseRequest : public RpcServiceRequest
			{

			public:
				ValidateDnsGtmCnameRrCanUseRequest();
				~ValidateDnsGtmCnameRrCanUseRequest();

				std::string getCnameMode()const;
				void setCnameMode(const std::string& cnameMode);
				std::string getCnameZone()const;
				void setCnameZone(const std::string& cnameZone);
				std::string getCnameRr()const;
				void setCnameRr(const std::string& cnameRr);
				std::string getCnameType()const;
				void setCnameType(const std::string& cnameType);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getUserClientIp()const;
				void setUserClientIp(const std::string& userClientIp);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string cnameMode_;
				std::string cnameZone_;
				std::string cnameRr_;
				std::string cnameType_;
				std::string instanceId_;
				std::string userClientIp_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIDNS_MODEL_VALIDATEDNSGTMCNAMERRCANUSEREQUEST_H_