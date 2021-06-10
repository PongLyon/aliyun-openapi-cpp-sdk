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

#include <alibabacloud/vpc/model/AddSourcesToTrafficMirrorSessionRequest.h>

using AlibabaCloud::Vpc::Model::AddSourcesToTrafficMirrorSessionRequest;

AddSourcesToTrafficMirrorSessionRequest::AddSourcesToTrafficMirrorSessionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AddSourcesToTrafficMirrorSession")
{
	setMethod(HttpRequest::Method::Post);
}

AddSourcesToTrafficMirrorSessionRequest::~AddSourcesToTrafficMirrorSessionRequest()
{}

long AddSourcesToTrafficMirrorSessionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddSourcesToTrafficMirrorSessionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddSourcesToTrafficMirrorSessionRequest::getClientToken()const
{
	return clientToken_;
}

void AddSourcesToTrafficMirrorSessionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AddSourcesToTrafficMirrorSessionRequest::getRegionId()const
{
	return regionId_;
}

void AddSourcesToTrafficMirrorSessionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<std::string> AddSourcesToTrafficMirrorSessionRequest::getTrafficMirrorSourceIds()const
{
	return trafficMirrorSourceIds_;
}

void AddSourcesToTrafficMirrorSessionRequest::setTrafficMirrorSourceIds(const std::vector<std::string>& trafficMirrorSourceIds)
{
	trafficMirrorSourceIds_ = trafficMirrorSourceIds;
	for(int dep1 = 0; dep1!= trafficMirrorSourceIds.size(); dep1++) {
		setParameter("TrafficMirrorSourceIds."+ std::to_string(dep1), trafficMirrorSourceIds.at(dep1));
	}
}

bool AddSourcesToTrafficMirrorSessionRequest::getDryRun()const
{
	return dryRun_;
}

void AddSourcesToTrafficMirrorSessionRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string AddSourcesToTrafficMirrorSessionRequest::getTrafficMirrorSessionId()const
{
	return trafficMirrorSessionId_;
}

void AddSourcesToTrafficMirrorSessionRequest::setTrafficMirrorSessionId(const std::string& trafficMirrorSessionId)
{
	trafficMirrorSessionId_ = trafficMirrorSessionId;
	setParameter("TrafficMirrorSessionId", trafficMirrorSessionId);
}

std::string AddSourcesToTrafficMirrorSessionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddSourcesToTrafficMirrorSessionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddSourcesToTrafficMirrorSessionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddSourcesToTrafficMirrorSessionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AddSourcesToTrafficMirrorSessionRequest::getOwnerId()const
{
	return ownerId_;
}

void AddSourcesToTrafficMirrorSessionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

