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

#ifndef ALIBABACLOUD_IMM_MODEL_DECODEBLINDWATERMARKREQUEST_H_
#define ALIBABACLOUD_IMM_MODEL_DECODEBLINDWATERMARKREQUEST_H_

#include <alibabacloud/imm/ImmExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Imm {
namespace Model {
class ALIBABACLOUD_IMM_EXPORT DecodeBlindWatermarkRequest : public RpcServiceRequest {
public:
	DecodeBlindWatermarkRequest();
	~DecodeBlindWatermarkRequest();
	int getImageQuality() const;
	void setImageQuality(int imageQuality);
	std::string getProject() const;
	void setProject(const std::string &project);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getWatermarkType() const;
	void setWatermarkType(const std::string &watermarkType);
	std::string getTargetUri() const;
	void setTargetUri(const std::string &targetUri);
	std::string getModel() const;
	void setModel(const std::string &model);
	std::string getImageUri() const;
	void setImageUri(const std::string &imageUri);
	std::string getOriginalImageUri() const;
	void setOriginalImageUri(const std::string &originalImageUri);

private:
	int imageQuality_;
	std::string project_;
	std::string accessKeyId_;
	std::string watermarkType_;
	std::string targetUri_;
	std::string model_;
	std::string imageUri_;
	std::string originalImageUri_;
};
} // namespace Model
} // namespace Imm
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_IMM_MODEL_DECODEBLINDWATERMARKREQUEST_H_
