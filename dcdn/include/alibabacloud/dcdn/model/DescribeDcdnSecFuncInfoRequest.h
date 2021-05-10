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

#ifndef ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNSECFUNCINFOREQUEST_H_
#define ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNSECFUNCINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dcdn/DcdnExport.h>

namespace AlibabaCloud
{
	namespace Dcdn
	{
		namespace Model
		{
			class ALIBABACLOUD_DCDN_EXPORT DescribeDcdnSecFuncInfoRequest : public RpcServiceRequest
			{

			public:
				DescribeDcdnSecFuncInfoRequest();
				~DescribeDcdnSecFuncInfoRequest();

				std::string getLang()const;
				void setLang(const std::string& lang);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSecFuncType()const;
				void setSecFuncType(const std::string& secFuncType);

            private:
				std::string lang_;
				long ownerId_;
				std::string secFuncType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DCDN_MODEL_DESCRIBEDCDNSECFUNCINFOREQUEST_H_