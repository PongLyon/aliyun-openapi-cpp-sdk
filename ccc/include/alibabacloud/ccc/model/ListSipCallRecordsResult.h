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

#ifndef ALIBABACLOUD_CCC_MODEL_LISTSIPCALLRECORDSRESULT_H_
#define ALIBABACLOUD_CCC_MODEL_LISTSIPCALLRECORDSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ccc/CCCExport.h>

namespace AlibabaCloud
{
	namespace CCC
	{
		namespace Model
		{
			class ALIBABACLOUD_CCC_EXPORT ListSipCallRecordsResult : public ServiceResult
			{
			public:
				struct SipCallRecords
				{
					std::string callee;
					std::string lastResponseText;
					std::string callerClusterId;
					std::string calleeClusterId;
					std::string instanceId;
					std::string callId;
					int releaseReasonCode;
					std::string contactId;
					long ringTime;
					long inviteTime;
					std::string earlyMediaText;
					long releasedTime;
					std::string caller;
					int lastResponseCode;
					long establishedTime;
					std::string earlyMediaUrl;
				};


				ListSipCallRecordsResult();
				explicit ListSipCallRecordsResult(const std::string &payload);
				~ListSipCallRecordsResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<SipCallRecords> getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<SipCallRecords> data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CCC_MODEL_LISTSIPCALLRECORDSRESULT_H_