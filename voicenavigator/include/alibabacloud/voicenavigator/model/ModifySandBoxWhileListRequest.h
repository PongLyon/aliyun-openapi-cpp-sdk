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

#ifndef ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYSANDBOXWHILELISTREQUEST_H_
#define ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYSANDBOXWHILELISTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/voicenavigator/VoiceNavigatorExport.h>

namespace AlibabaCloud
{
	namespace VoiceNavigator
	{
		namespace Model
		{
			class ALIBABACLOUD_VOICENAVIGATOR_EXPORT ModifySandBoxWhileListRequest : public RpcServiceRequest
			{

			public:
				ModifySandBoxWhileListRequest();
				~ModifySandBoxWhileListRequest();

				std::string getPhoneNumber()const;
				void setPhoneNumber(const std::string& phoneNumber);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getName()const;
				void setName(const std::string& name);

            private:
				std::string phoneNumber_;
				std::string description_;
				std::string uuid_;
				std::string instanceId_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOICENAVIGATOR_MODEL_MODIFYSANDBOXWHILELISTREQUEST_H_