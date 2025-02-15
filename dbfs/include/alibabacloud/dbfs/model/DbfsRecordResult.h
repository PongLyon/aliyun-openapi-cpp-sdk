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

#ifndef ALIBABACLOUD_DBFS_MODEL_DBFSRECORDRESULT_H_
#define ALIBABACLOUD_DBFS_MODEL_DBFSRECORDRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dbfs/DBFSExport.h>

namespace AlibabaCloud
{
	namespace DBFS
	{
		namespace Model
		{
			class ALIBABACLOUD_DBFS_EXPORT DbfsRecordResult : public ServiceResult
			{
			public:
				struct RecordsItem
				{
					std::string targetVersion;
					std::string accountId;
					std::string taskId;
					std::string zoneId;
					std::string currentVersion;
					long createTime;
					std::string ecsId;
					std::string taskErrorReason;
					std::string batchStrategyNo;
					long upgradeEndTime;
					std::string state;
					std::string dbfsId;
					long updateTime;
					long id;
					std::string regionId;
					long upgradeStartTime;
					std::string isDel;
					int taskExecutionCounts;
				};


				DbfsRecordResult();
				explicit DbfsRecordResult(const std::string &payload);
				~DbfsRecordResult();
				long getPageSize()const;
				long getTotal()const;
				long getPageNo()const;
				std::vector<RecordsItem> getRecords()const;

			protected:
				void parse(const std::string &payload);
			private:
				long pageSize_;
				long total_;
				long pageNo_;
				std::vector<RecordsItem> records_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DBFS_MODEL_DBFSRECORDRESULT_H_