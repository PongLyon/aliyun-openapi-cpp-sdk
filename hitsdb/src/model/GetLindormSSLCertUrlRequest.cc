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

#include <alibabacloud/hitsdb/model/GetLindormSSLCertUrlRequest.h>

using AlibabaCloud::Hitsdb::Model::GetLindormSSLCertUrlRequest;

GetLindormSSLCertUrlRequest::GetLindormSSLCertUrlRequest() :
	RpcServiceRequest("hitsdb", "2020-06-15", "GetLindormSSLCertUrl")
{
	setMethod(HttpRequest::Method::Post);
}

GetLindormSSLCertUrlRequest::~GetLindormSSLCertUrlRequest()
{}

long GetLindormSSLCertUrlRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetLindormSSLCertUrlRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetLindormSSLCertUrlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetLindormSSLCertUrlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string GetLindormSSLCertUrlRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetLindormSSLCertUrlRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string GetLindormSSLCertUrlRequest::getRegionId()const
{
	return regionId_;
}

void GetLindormSSLCertUrlRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string GetLindormSSLCertUrlRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetLindormSSLCertUrlRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetLindormSSLCertUrlRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetLindormSSLCertUrlRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long GetLindormSSLCertUrlRequest::getOwnerId()const
{
	return ownerId_;
}

void GetLindormSSLCertUrlRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string GetLindormSSLCertUrlRequest::getInstanceId()const
{
	return instanceId_;
}

void GetLindormSSLCertUrlRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

