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

#ifndef ALIBABACLOUD_DDOSCOO_MODEL_LISTASYNCTASKRESULT_H_
#define ALIBABACLOUD_DDOSCOO_MODEL_LISTASYNCTASKRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ddoscoo/DdoscooExport.h>

namespace AlibabaCloud
{
	namespace Ddoscoo
	{
		namespace Model
		{
			class ALIBABACLOUD_DDOSCOO_EXPORT ListAsyncTaskResult : public ServiceResult
			{
			public:
				struct AsyncTask
				{
					long taskId;
					std::string taskParams;
					long endTime;
					int taskType;
					long startTime;
					std::string taskResult;
					int taskStatus;
				};


				ListAsyncTaskResult();
				explicit ListAsyncTaskResult(const std::string &payload);
				~ListAsyncTaskResult();
				int getTotal()const;
				std::vector<AsyncTask> getAsyncTasks()const;

			protected:
				void parse(const std::string &payload);
			private:
				int total_;
				std::vector<AsyncTask> asyncTasks_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDOSCOO_MODEL_LISTASYNCTASKRESULT_H_