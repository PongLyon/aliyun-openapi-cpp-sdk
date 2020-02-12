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

#include <alibabacloud/dbs/model/ModifyBackupSourceEndpointRequest.h>

using AlibabaCloud::Dbs::Model::ModifyBackupSourceEndpointRequest;

ModifyBackupSourceEndpointRequest::ModifyBackupSourceEndpointRequest() :
	RpcServiceRequest("dbs", "2019-03-06", "ModifyBackupSourceEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyBackupSourceEndpointRequest::~ModifyBackupSourceEndpointRequest()
{}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointRegion()const
{
	return sourceEndpointRegion_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointRegion(const std::string& sourceEndpointRegion)
{
	sourceEndpointRegion_ = sourceEndpointRegion;
	setParameter("SourceEndpointRegion", sourceEndpointRegion);
}

long ModifyBackupSourceEndpointRequest::getBackupGatewayId()const
{
	return backupGatewayId_;
}

void ModifyBackupSourceEndpointRequest::setBackupGatewayId(long backupGatewayId)
{
	backupGatewayId_ = backupGatewayId;
	setParameter("BackupGatewayId", std::to_string(backupGatewayId));
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointInstanceID()const
{
	return sourceEndpointInstanceID_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointInstanceID(const std::string& sourceEndpointInstanceID)
{
	sourceEndpointInstanceID_ = sourceEndpointInstanceID;
	setParameter("SourceEndpointInstanceID", sourceEndpointInstanceID);
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointUserName()const
{
	return sourceEndpointUserName_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointUserName(const std::string& sourceEndpointUserName)
{
	sourceEndpointUserName_ = sourceEndpointUserName;
	setParameter("SourceEndpointUserName", sourceEndpointUserName);
}

std::string ModifyBackupSourceEndpointRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyBackupSourceEndpointRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyBackupSourceEndpointRequest::getBackupPlanId()const
{
	return backupPlanId_;
}

void ModifyBackupSourceEndpointRequest::setBackupPlanId(const std::string& backupPlanId)
{
	backupPlanId_ = backupPlanId;
	setParameter("BackupPlanId", backupPlanId);
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointDatabaseName()const
{
	return sourceEndpointDatabaseName_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointDatabaseName(const std::string& sourceEndpointDatabaseName)
{
	sourceEndpointDatabaseName_ = sourceEndpointDatabaseName;
	setParameter("SourceEndpointDatabaseName", sourceEndpointDatabaseName);
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointIP()const
{
	return sourceEndpointIP_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointIP(const std::string& sourceEndpointIP)
{
	sourceEndpointIP_ = sourceEndpointIP;
	setParameter("SourceEndpointIP", sourceEndpointIP);
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointPassword()const
{
	return sourceEndpointPassword_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointPassword(const std::string& sourceEndpointPassword)
{
	sourceEndpointPassword_ = sourceEndpointPassword;
	setParameter("SourceEndpointPassword", sourceEndpointPassword);
}

std::string ModifyBackupSourceEndpointRequest::getBackupObjects()const
{
	return backupObjects_;
}

void ModifyBackupSourceEndpointRequest::setBackupObjects(const std::string& backupObjects)
{
	backupObjects_ = backupObjects;
	setParameter("BackupObjects", backupObjects);
}

std::string ModifyBackupSourceEndpointRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBackupSourceEndpointRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

int ModifyBackupSourceEndpointRequest::getSourceEndpointPort()const
{
	return sourceEndpointPort_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointPort(int sourceEndpointPort)
{
	sourceEndpointPort_ = sourceEndpointPort;
	setParameter("SourceEndpointPort", std::to_string(sourceEndpointPort));
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointInstanceType()const
{
	return sourceEndpointInstanceType_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointInstanceType(const std::string& sourceEndpointInstanceType)
{
	sourceEndpointInstanceType_ = sourceEndpointInstanceType;
	setParameter("SourceEndpointInstanceType", sourceEndpointInstanceType);
}

std::string ModifyBackupSourceEndpointRequest::getSourceEndpointOracleSID()const
{
	return sourceEndpointOracleSID_;
}

void ModifyBackupSourceEndpointRequest::setSourceEndpointOracleSID(const std::string& sourceEndpointOracleSID)
{
	sourceEndpointOracleSID_ = sourceEndpointOracleSID;
	setParameter("SourceEndpointOracleSID", sourceEndpointOracleSID);
}

