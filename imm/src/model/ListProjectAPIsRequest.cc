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

#include <alibabacloud/imm/model/ListProjectAPIsRequest.h>

using AlibabaCloud::Imm::Model::ListProjectAPIsRequest;

ListProjectAPIsRequest::ListProjectAPIsRequest()
    : RpcServiceRequest("imm", "2017-09-06", "ListProjectAPIs") {
  setMethod(HttpRequest::Method::Post);
}

ListProjectAPIsRequest::~ListProjectAPIsRequest() {}

std::string ListProjectAPIsRequest::getProject() const {
  return project_;
}

void ListProjectAPIsRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string ListProjectAPIsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ListProjectAPIsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

