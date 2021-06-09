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

#ifndef ALIBABACLOUD_ALIYUNCVC_MODEL_QUERYMEETINGMEMBERACTIONRESULT_H_
#define ALIBABACLOUD_ALIYUNCVC_MODEL_QUERYMEETINGMEMBERACTIONRESULT_H_

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
			class ALIBABACLOUD_ALIYUNCVC_EXPORT QueryMeetingMemberActionResult : public ServiceResult
			{
			public:
				struct ErrorCodeListItem
				{
					long errorCodeCount;
					long time;
				};


				QueryMeetingMemberActionResult();
				explicit QueryMeetingMemberActionResult(const std::string &payload);
				~QueryMeetingMemberActionResult();
				std::string getMessage()const;
				int getMeetingStatus()const;
				int getVideoStatus()const;
				int getAudioStatus()const;
				long getErrorCodeCount()const;
				int getErrorCode()const;
				std::vector<ErrorCodeListItem> getErrorCodeList()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int meetingStatus_;
				int videoStatus_;
				int audioStatus_;
				long errorCodeCount_;
				int errorCode_;
				std::vector<ErrorCodeListItem> errorCodeList_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ALIYUNCVC_MODEL_QUERYMEETINGMEMBERACTIONRESULT_H_