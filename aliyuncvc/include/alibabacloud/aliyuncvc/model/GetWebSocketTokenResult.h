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

#ifndef ALIBABACLOUD_ALIYUNCVC_MODEL_GETWEBSOCKETTOKENRESULT_H_
#define ALIBABACLOUD_ALIYUNCVC_MODEL_GETWEBSOCKETTOKENRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/aliyuncvc/AliyuncvcExport.h>

namespace AlibabaCloud
{
	namespace Aliyuncvc
	{
		namespace Model
		{
			class ALIBABACLOUD_ALIYUNCVC_EXPORT GetWebSocketTokenResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string token;
					std::string authWsUrl;
					std::string wsOuterReConnTime;
				};


				GetWebSocketTokenResult();
				explicit GetWebSocketTokenResult(const std::string &payload);
				~GetWebSocketTokenResult();
				std::string getMessage()const;
				Data getData()const;
				int getErrorCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int errorCode_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIYUNCVC_MODEL_GETWEBSOCKETTOKENRESULT_H_