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

#include <alibabacloud/mse/model/ListZnodeChildrenRequest.h>

using AlibabaCloud::Mse::Model::ListZnodeChildrenRequest;

ListZnodeChildrenRequest::ListZnodeChildrenRequest()
    : RpcServiceRequest("mse", "2019-05-31", "ListZnodeChildren") {
  setMethod(HttpRequest::Method::Get);
}

ListZnodeChildrenRequest::~ListZnodeChildrenRequest() {}

std::string ListZnodeChildrenRequest::getClusterId() const {
  return clusterId_;
}

void ListZnodeChildrenRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

std::string ListZnodeChildrenRequest::getPath() const {
  return path_;
}

void ListZnodeChildrenRequest::setPath(const std::string &path) {
  path_ = path;
  setParameter(std::string("Path"), path);
}

std::string ListZnodeChildrenRequest::getAcceptLanguage() const {
  return acceptLanguage_;
}

void ListZnodeChildrenRequest::setAcceptLanguage(const std::string &acceptLanguage) {
  acceptLanguage_ = acceptLanguage;
  setParameter(std::string("AcceptLanguage"), acceptLanguage);
}

