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

#ifndef ALIBABACLOUD_CLOUDESL_MODEL_CONFIRMSERVERLOCATIONRESULT_H_
#define ALIBABACLOUD_CLOUDESL_MODEL_CONFIRMSERVERLOCATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudesl/CloudeslExport.h>

namespace AlibabaCloud
{
	namespace Cloudesl
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDESL_EXPORT ConfirmServerLocationResult : public ServiceResult
			{
			public:


				ConfirmServerLocationResult();
				explicit ConfirmServerLocationResult(const std::string &payload);
				~ConfirmServerLocationResult();
				std::string getMessage()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDESL_MODEL_CONFIRMSERVERLOCATIONRESULT_H_