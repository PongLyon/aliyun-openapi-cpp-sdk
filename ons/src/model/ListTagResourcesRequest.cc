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

#include <alibabacloud/ons/model/ListTagResourcesRequest.h>

using AlibabaCloud::Ons::Model::ListTagResourcesRequest;

ListTagResourcesRequest::ListTagResourcesRequest() :
	RpcServiceRequest("ons", "2019-02-14", "ListTagResources")
{
	setMethod(HttpRequest::Method::Post);
}

ListTagResourcesRequest::~ListTagResourcesRequest()
{}

std::vector<std::string> ListTagResourcesRequest::getResourceId()const
{
	return resourceId_;
}

void ListTagResourcesRequest::setResourceId(const std::vector<std::string>& resourceId)
{
	resourceId_ = resourceId;
	for(int dep1 = 0; dep1!= resourceId.size(); dep1++) {
		setParameter("ResourceId."+ std::to_string(dep1), resourceId.at(dep1));
	}
}

std::string ListTagResourcesRequest::getResourceType()const
{
	return resourceType_;
}

void ListTagResourcesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListTagResourcesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListTagResourcesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ListTagResourcesRequest::getNextToken()const
{
	return nextToken_;
}

void ListTagResourcesRequest::setNextToken(const std::string& nextToken)
{
	nextToken_ = nextToken;
	setParameter("NextToken", nextToken);
}

std::vector<ListTagResourcesRequest::Tag> ListTagResourcesRequest::getTag()const
{
	return tag_;
}

void ListTagResourcesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1 + 1);
		setParameter(tagObjStr + ".Value", tagObj.value);
		setParameter(tagObjStr + ".Key", tagObj.key);
	}
}

