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

#include <alibabacloud/cbn/model/OpenTransitRouterServiceRequest.h>

using AlibabaCloud::Cbn::Model::OpenTransitRouterServiceRequest;

OpenTransitRouterServiceRequest::OpenTransitRouterServiceRequest()
    : RpcServiceRequest("cbn", "2017-09-12", "OpenTransitRouterService") {
  setMethod(HttpRequest::Method::Post);
}

OpenTransitRouterServiceRequest::~OpenTransitRouterServiceRequest() {}

long OpenTransitRouterServiceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void OpenTransitRouterServiceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string OpenTransitRouterServiceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void OpenTransitRouterServiceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string OpenTransitRouterServiceRequest::getClientToken() const {
  return clientToken_;
}

void OpenTransitRouterServiceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string OpenTransitRouterServiceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void OpenTransitRouterServiceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long OpenTransitRouterServiceRequest::getOwnerId() const {
  return ownerId_;
}

void OpenTransitRouterServiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

