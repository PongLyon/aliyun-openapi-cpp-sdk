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

#include <alibabacloud/nas/model/ModifySmbAclRequest.h>

using AlibabaCloud::NAS::Model::ModifySmbAclRequest;

ModifySmbAclRequest::ModifySmbAclRequest() :
	RpcServiceRequest("nas", "2017-06-26", "ModifySmbAcl")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySmbAclRequest::~ModifySmbAclRequest()
{}

bool ModifySmbAclRequest::getEncryptData()const
{
	return encryptData_;
}

void ModifySmbAclRequest::setEncryptData(bool encryptData)
{
	encryptData_ = encryptData;
	setParameter("EncryptData", encryptData ? "true" : "false");
}

std::string ModifySmbAclRequest::getKeytab()const
{
	return keytab_;
}

void ModifySmbAclRequest::setKeytab(const std::string& keytab)
{
	keytab_ = keytab;
	setParameter("Keytab", keytab);
}

std::string ModifySmbAclRequest::getSuperAdminSid()const
{
	return superAdminSid_;
}

void ModifySmbAclRequest::setSuperAdminSid(const std::string& superAdminSid)
{
	superAdminSid_ = superAdminSid;
	setParameter("SuperAdminSid", superAdminSid);
}

std::string ModifySmbAclRequest::getKeytabMd5()const
{
	return keytabMd5_;
}

void ModifySmbAclRequest::setKeytabMd5(const std::string& keytabMd5)
{
	keytabMd5_ = keytabMd5;
	setParameter("KeytabMd5", keytabMd5);
}

bool ModifySmbAclRequest::getRejectUnencryptedAccess()const
{
	return rejectUnencryptedAccess_;
}

void ModifySmbAclRequest::setRejectUnencryptedAccess(bool rejectUnencryptedAccess)
{
	rejectUnencryptedAccess_ = rejectUnencryptedAccess;
	setParameter("RejectUnencryptedAccess", rejectUnencryptedAccess ? "true" : "false");
}

std::string ModifySmbAclRequest::getFileSystemId()const
{
	return fileSystemId_;
}

void ModifySmbAclRequest::setFileSystemId(const std::string& fileSystemId)
{
	fileSystemId_ = fileSystemId;
	setParameter("FileSystemId", fileSystemId);
}

std::string ModifySmbAclRequest::getHomeDirPath()const
{
	return homeDirPath_;
}

void ModifySmbAclRequest::setHomeDirPath(const std::string& homeDirPath)
{
	homeDirPath_ = homeDirPath;
	setParameter("HomeDirPath", homeDirPath);
}

bool ModifySmbAclRequest::getEnableAnonymousAccess()const
{
	return enableAnonymousAccess_;
}

void ModifySmbAclRequest::setEnableAnonymousAccess(bool enableAnonymousAccess)
{
	enableAnonymousAccess_ = enableAnonymousAccess;
	setParameter("EnableAnonymousAccess", enableAnonymousAccess ? "true" : "false");
}

