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

#ifndef ALIBABACLOUD_GPDB_MODEL_CREATEECSDBINSTANCERESULT_H_
#define ALIBABACLOUD_GPDB_MODEL_CREATEECSDBINSTANCERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/gpdb/GpdbExport.h>

namespace AlibabaCloud
{
	namespace Gpdb
	{
		namespace Model
		{
			class ALIBABACLOUD_GPDB_EXPORT CreateECSDBInstanceResult : public ServiceResult
			{
			public:


				CreateECSDBInstanceResult();
				explicit CreateECSDBInstanceResult(const std::string &payload);
				~CreateECSDBInstanceResult();
				std::string getDBInstanceId()const;
				std::string getPort()const;
				std::string getConnectionString()const;
				std::string getOrderId()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string dBInstanceId_;
				std::string port_;
				std::string connectionString_;
				std::string orderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GPDB_MODEL_CREATEECSDBINSTANCERESULT_H_