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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTSENSITIVECOLUMNSREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTSENSITIVECOLUMNSREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT ListSensitiveColumnsRequest : public RpcServiceRequest {
public:
	ListSensitiveColumnsRequest();
	~ListSensitiveColumnsRequest();
	std::string getSchemaName() const;
	void setSchemaName(const std::string &schemaName);
	std::string getColumnName() const;
	void setColumnName(const std::string &columnName);
	long getTid() const;
	void setTid(long tid);
	int getPageNumber() const;
	void setPageNumber(int pageNumber);
	std::string getSecurityLevel() const;
	void setSecurityLevel(const std::string &securityLevel);
	long getDbId() const;
	void setDbId(long dbId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	bool getLogic() const;
	void setLogic(bool logic);
	std::string getTableName() const;
	void setTableName(const std::string &tableName);

private:
	std::string schemaName_;
	std::string columnName_;
	long tid_;
	int pageNumber_;
	std::string securityLevel_;
	long dbId_;
	int pageSize_;
	bool logic_;
	std::string tableName_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_LISTSENSITIVECOLUMNSREQUEST_H_
