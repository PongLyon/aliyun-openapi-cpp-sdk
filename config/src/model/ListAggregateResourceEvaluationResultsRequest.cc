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

#include <alibabacloud/config/model/ListAggregateResourceEvaluationResultsRequest.h>

using AlibabaCloud::Config::Model::ListAggregateResourceEvaluationResultsRequest;

ListAggregateResourceEvaluationResultsRequest::ListAggregateResourceEvaluationResultsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregateResourceEvaluationResults") {
  setMethod(HttpRequest::Method::Post);
}

ListAggregateResourceEvaluationResultsRequest::~ListAggregateResourceEvaluationResultsRequest() {}

std::string ListAggregateResourceEvaluationResultsRequest::getResourceId() const {
  return resourceId_;
}

void ListAggregateResourceEvaluationResultsRequest::setResourceId(const std::string &resourceId) {
  resourceId_ = resourceId;
  setParameter(std::string("ResourceId"), resourceId);
}

std::string ListAggregateResourceEvaluationResultsRequest::getAggregatorId() const {
  return aggregatorId_;
}

void ListAggregateResourceEvaluationResultsRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string ListAggregateResourceEvaluationResultsRequest::getResourceType() const {
  return resourceType_;
}

void ListAggregateResourceEvaluationResultsRequest::setResourceType(const std::string &resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), resourceType);
}

std::string ListAggregateResourceEvaluationResultsRequest::getNextToken() const {
  return nextToken_;
}

void ListAggregateResourceEvaluationResultsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListAggregateResourceEvaluationResultsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAggregateResourceEvaluationResultsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListAggregateResourceEvaluationResultsRequest::getRegion() const {
  return region_;
}

void ListAggregateResourceEvaluationResultsRequest::setRegion(const std::string &region) {
  region_ = region;
  setParameter(std::string("Region"), region);
}

std::string ListAggregateResourceEvaluationResultsRequest::getComplianceType() const {
  return complianceType_;
}

void ListAggregateResourceEvaluationResultsRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

