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

#ifndef ALIBABACLOUD_VOD_MODEL_DESCRIBEVODREFRESHTASKSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_DESCRIBEVODREFRESHTASKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT DescribeVodRefreshTasksResult : public ServiceResult
			{
			public:
				struct Task
				{
					std::string status;
					std::string objectType;
					std::string objectPath;
					std::string description;
					std::string taskId;
					std::string creationTime;
					std::string process;
				};


				DescribeVodRefreshTasksResult();
				explicit DescribeVodRefreshTasksResult(const std::string &payload);
				~DescribeVodRefreshTasksResult();
				long getTotalCount()const;
				std::vector<Task> getTasks()const;
				long getPageSize()const;
				long getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::vector<Task> tasks_;
				long pageSize_;
				long pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_DESCRIBEVODREFRESHTASKSRESULT_H_