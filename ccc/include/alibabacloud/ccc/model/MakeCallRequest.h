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

#ifndef ALIBABACLOUD_CCC_MODEL_MAKECALLREQUEST_H_
#define ALIBABACLOUD_CCC_MODEL_MAKECALLREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT MakeCallRequest : public RpcServiceRequest
			{

			public:
				MakeCallRequest();
				~MakeCallRequest();

				std::string getCallee()const;
				void setCallee(const std::string& callee);
				std::string getMaskedCallee()const;
				void setMaskedCallee(const std::string& maskedCallee);
				std::string getUserId()const;
				void setUserId(const std::string& userId);
				std::string getDeviceId()const;
				void setDeviceId(const std::string& deviceId);
				std::string getTags()const;
				void setTags(const std::string& tags);
				int getTimeoutSeconds()const;
				void setTimeoutSeconds(int timeoutSeconds);
				std::string getCaller()const;
				void setCaller(const std::string& caller);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);

            private:
				std::string callee_;
				std::string maskedCallee_;
				std::string userId_;
				std::string deviceId_;
				std::string tags_;
				int timeoutSeconds_;
				std::string caller_;
				std::string instanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_MAKECALLREQUEST_H_