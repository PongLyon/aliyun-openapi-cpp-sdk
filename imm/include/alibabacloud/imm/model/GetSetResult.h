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

#ifndef ALIBABACLOUD_IMM_MODEL_GETSETRESULT_H_
#define ALIBABACLOUD_IMM_MODEL_GETSETRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/imm/ImmExport.h>

namespace AlibabaCloud
{
	namespace Imm
	{
		namespace Model
		{
			class ALIBABACLOUD_IMM_EXPORT GetSetResult : public ServiceResult
			{
			public:


				GetSetResult();
				explicit GetSetResult(const std::string &payload);
				~GetSetResult();
				std::string getModifyTime()const;
				int getVideoCount()const;
				int getImageCount()const;
				std::string getCreateTime()const;
				std::string getSetName()const;
				std::string getSetId()const;
				int getVideoLength()const;
				int getFaceCount()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string modifyTime_;
				int videoCount_;
				int imageCount_;
				std::string createTime_;
				std::string setName_;
				std::string setId_;
				int videoLength_;
				int faceCount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IMM_MODEL_GETSETRESULT_H_