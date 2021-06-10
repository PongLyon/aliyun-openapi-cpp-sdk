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

#include <alibabacloud/vpc/model/CreateTrafficMirrorSessionRequest.h>

using AlibabaCloud::Vpc::Model::CreateTrafficMirrorSessionRequest;

CreateTrafficMirrorSessionRequest::CreateTrafficMirrorSessionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateTrafficMirrorSession")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTrafficMirrorSessionRequest::~CreateTrafficMirrorSessionRequest()
{}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorTargetType()const
{
	return trafficMirrorTargetType_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorTargetType(const std::string& trafficMirrorTargetType)
{
	trafficMirrorTargetType_ = trafficMirrorTargetType;
	setParameter("TrafficMirrorTargetType", trafficMirrorTargetType);
}

long CreateTrafficMirrorSessionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTrafficMirrorSessionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateTrafficMirrorSessionRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTrafficMirrorSessionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool CreateTrafficMirrorSessionRequest::getEnabled()const
{
	return enabled_;
}

void CreateTrafficMirrorSessionRequest::setEnabled(bool enabled)
{
	enabled_ = enabled;
	setParameter("Enabled", enabled ? "true" : "false");
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorSessionName()const
{
	return trafficMirrorSessionName_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSessionName(const std::string& trafficMirrorSessionName)
{
	trafficMirrorSessionName_ = trafficMirrorSessionName;
	setParameter("TrafficMirrorSessionName", trafficMirrorSessionName);
}

std::string CreateTrafficMirrorSessionRequest::getRegionId()const
{
	return regionId_;
}

void CreateTrafficMirrorSessionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorSessionDescription()const
{
	return trafficMirrorSessionDescription_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSessionDescription(const std::string& trafficMirrorSessionDescription)
{
	trafficMirrorSessionDescription_ = trafficMirrorSessionDescription;
	setParameter("TrafficMirrorSessionDescription", trafficMirrorSessionDescription);
}

std::vector<std::string> CreateTrafficMirrorSessionRequest::getTrafficMirrorSourceIds()const
{
	return trafficMirrorSourceIds_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorSourceIds(const std::vector<std::string>& trafficMirrorSourceIds)
{
	trafficMirrorSourceIds_ = trafficMirrorSourceIds;
	for(int dep1 = 0; dep1!= trafficMirrorSourceIds.size(); dep1++) {
		setParameter("TrafficMirrorSourceIds."+ std::to_string(dep1), trafficMirrorSourceIds.at(dep1));
	}
}

bool CreateTrafficMirrorSessionRequest::getDryRun()const
{
	return dryRun_;
}

void CreateTrafficMirrorSessionRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateTrafficMirrorSessionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTrafficMirrorSessionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateTrafficMirrorSessionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTrafficMirrorSessionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int CreateTrafficMirrorSessionRequest::getPriority()const
{
	return priority_;
}

void CreateTrafficMirrorSessionRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

long CreateTrafficMirrorSessionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTrafficMirrorSessionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorTargetId()const
{
	return trafficMirrorTargetId_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorTargetId(const std::string& trafficMirrorTargetId)
{
	trafficMirrorTargetId_ = trafficMirrorTargetId;
	setParameter("TrafficMirrorTargetId", trafficMirrorTargetId);
}

std::string CreateTrafficMirrorSessionRequest::getTrafficMirrorFilterId()const
{
	return trafficMirrorFilterId_;
}

void CreateTrafficMirrorSessionRequest::setTrafficMirrorFilterId(const std::string& trafficMirrorFilterId)
{
	trafficMirrorFilterId_ = trafficMirrorFilterId;
	setParameter("TrafficMirrorFilterId", trafficMirrorFilterId);
}

int CreateTrafficMirrorSessionRequest::getPacketLength()const
{
	return packetLength_;
}

void CreateTrafficMirrorSessionRequest::setPacketLength(int packetLength)
{
	packetLength_ = packetLength;
	setParameter("PacketLength", std::to_string(packetLength));
}

int CreateTrafficMirrorSessionRequest::getVirtualNetworkId()const
{
	return virtualNetworkId_;
}

void CreateTrafficMirrorSessionRequest::setVirtualNetworkId(int virtualNetworkId)
{
	virtualNetworkId_ = virtualNetworkId;
	setParameter("VirtualNetworkId", std::to_string(virtualNetworkId));
}

