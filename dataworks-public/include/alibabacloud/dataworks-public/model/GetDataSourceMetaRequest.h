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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASOURCEMETAREQUEST_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASOURCEMETAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetDataSourceMetaRequest : public RpcServiceRequest
			{

			public:
				GetDataSourceMetaRequest();
				~GetDataSourceMetaRequest();

				std::string getDatasourceName()const;
				void setDatasourceName(const std::string& datasourceName);
				long getPageNumber()const;
				void setPageNumber(long pageNumber);
				long getPageSize()const;
				void setPageSize(long pageSize);
				std::string getEnvType()const;
				void setEnvType(const std::string& envType);
				long getProjectId()const;
				void setProjectId(long projectId);

            private:
				std::string datasourceName_;
				long pageNumber_;
				long pageSize_;
				std::string envType_;
				long projectId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETDATASOURCEMETAREQUEST_H_