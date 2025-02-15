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

#include <alibabacloud/ecs/model/DescribeManagedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeManagedInstancesRequest;

DescribeManagedInstancesRequest::DescribeManagedInstancesRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DescribeManagedInstances") {
  setMethod(HttpRequest::Method::Post);
}

DescribeManagedInstancesRequest::~DescribeManagedInstancesRequest() {}

long DescribeManagedInstancesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribeManagedInstancesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

long DescribeManagedInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeManagedInstancesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeManagedInstancesRequest::getRegionId() const {
  return regionId_;
}

void DescribeManagedInstancesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long DescribeManagedInstancesRequest::getPageSize() const {
  return pageSize_;
}

void DescribeManagedInstancesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeManagedInstancesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribeManagedInstancesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DescribeManagedInstancesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DescribeManagedInstancesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string DescribeManagedInstancesRequest::getOsType() const {
  return osType_;
}

void DescribeManagedInstancesRequest::setOsType(const std::string &osType) {
  osType_ = osType;
  setParameter(std::string("OsType"), osType);
}

long DescribeManagedInstancesRequest::getOwnerId() const {
  return ownerId_;
}

void DescribeManagedInstancesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribeManagedInstancesRequest::getInstanceName() const {
  return instanceName_;
}

void DescribeManagedInstancesRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("InstanceName"), instanceName);
}

std::vector<std::string> DescribeManagedInstancesRequest::getInstanceId() const {
  return instanceId_;
}

void DescribeManagedInstancesRequest::setInstanceId(const std::vector<std::string> &instanceId) {
  instanceId_ = instanceId;
}

std::string DescribeManagedInstancesRequest::getInstanceIp() const {
  return instanceIp_;
}

void DescribeManagedInstancesRequest::setInstanceIp(const std::string &instanceIp) {
  instanceIp_ = instanceIp;
  setParameter(std::string("InstanceIp"), instanceIp);
}

std::string DescribeManagedInstancesRequest::getActivationId() const {
  return activationId_;
}

void DescribeManagedInstancesRequest::setActivationId(const std::string &activationId) {
  activationId_ = activationId;
  setParameter(std::string("ActivationId"), activationId);
}

