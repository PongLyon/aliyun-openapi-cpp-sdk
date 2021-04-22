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

#include <alibabacloud/dms-enterprise/model/GetPhysicalDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetPhysicalDatabaseResult::GetPhysicalDatabaseResult() :
	ServiceResult()
{}

GetPhysicalDatabaseResult::GetPhysicalDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPhysicalDatabaseResult::~GetPhysicalDatabaseResult()
{}

void GetPhysicalDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseNode = value["Database"];
	if(!databaseNode["SearchName"].isNull())
		database_.searchName = databaseNode["SearchName"].asString();
	if(!databaseNode["InstanceId"].isNull())
		database_.instanceId = databaseNode["InstanceId"].asString();
	if(!databaseNode["Port"].isNull())
		database_.port = std::stoi(databaseNode["Port"].asString());
	if(!databaseNode["Encoding"].isNull())
		database_.encoding = databaseNode["Encoding"].asString();
	if(!databaseNode["Host"].isNull())
		database_.host = databaseNode["Host"].asString();
	if(!databaseNode["DatabaseId"].isNull())
		database_.databaseId = databaseNode["DatabaseId"].asString();
	if(!databaseNode["DbType"].isNull())
		database_.dbType = databaseNode["DbType"].asString();
	if(!databaseNode["EnvType"].isNull())
		database_.envType = databaseNode["EnvType"].asString();
	if(!databaseNode["Sid"].isNull())
		database_.sid = databaseNode["Sid"].asString();
	if(!databaseNode["DbaName"].isNull())
		database_.dbaName = databaseNode["DbaName"].asString();
	if(!databaseNode["DbaId"].isNull())
		database_.dbaId = databaseNode["DbaId"].asString();
	if(!databaseNode["State"].isNull())
		database_.state = databaseNode["State"].asString();
	if(!databaseNode["CatalogName"].isNull())
		database_.catalogName = databaseNode["CatalogName"].asString();
	if(!databaseNode["SchemaName"].isNull())
		database_.schemaName = databaseNode["SchemaName"].asString();
		auto allOwnerNameList = databaseNode["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			database_.ownerNameList.push_back(value.asString());
		auto allOwnerIdList = databaseNode["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			database_.ownerIdList.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetPhysicalDatabaseResult::Database GetPhysicalDatabaseResult::getDatabase()const
{
	return database_;
}

std::string GetPhysicalDatabaseResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPhysicalDatabaseResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPhysicalDatabaseResult::getSuccess()const
{
	return success_;
}

