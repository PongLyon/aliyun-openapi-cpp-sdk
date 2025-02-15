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

#include <alibabacloud/imm/model/CreateMediaComplexTaskRequest.h>

using AlibabaCloud::Imm::Model::CreateMediaComplexTaskRequest;

CreateMediaComplexTaskRequest::CreateMediaComplexTaskRequest()
    : RpcServiceRequest("imm", "2017-09-06", "CreateMediaComplexTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateMediaComplexTaskRequest::~CreateMediaComplexTaskRequest() {}

std::string CreateMediaComplexTaskRequest::getProject() const {
  return project_;
}

void CreateMediaComplexTaskRequest::setProject(const std::string &project) {
  project_ = project;
  setParameter(std::string("Project"), project);
}

std::string CreateMediaComplexTaskRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateMediaComplexTaskRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateMediaComplexTaskRequest::getNotifyEndpoint() const {
  return notifyEndpoint_;
}

void CreateMediaComplexTaskRequest::setNotifyEndpoint(const std::string &notifyEndpoint) {
  notifyEndpoint_ = notifyEndpoint;
  setParameter(std::string("NotifyEndpoint"), notifyEndpoint);
}

std::string CreateMediaComplexTaskRequest::getNotifyTopicName() const {
  return notifyTopicName_;
}

void CreateMediaComplexTaskRequest::setNotifyTopicName(const std::string &notifyTopicName) {
  notifyTopicName_ = notifyTopicName;
  setParameter(std::string("NotifyTopicName"), notifyTopicName);
}

std::string CreateMediaComplexTaskRequest::getParameters() const {
  return parameters_;
}

void CreateMediaComplexTaskRequest::setParameters(const std::string &parameters) {
  parameters_ = parameters;
  setParameter(std::string("Parameters"), parameters);
}

