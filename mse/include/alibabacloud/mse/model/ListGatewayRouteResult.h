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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTGATEWAYROUTERESULT_H_
#define ALIBABACLOUD_MSE_MODEL_LISTGATEWAYROUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/mse/MseExport.h>

namespace AlibabaCloud
{
	namespace Mse
	{
		namespace Model
		{
			class ALIBABACLOUD_MSE_EXPORT ListGatewayRouteResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct Routes
					{
						struct RoutePredicates
						{
							struct PathPredicates
							{
								std::string path;
								std::string type;
								bool ignoreCase;
							};
							struct HeaderPredicatesItem
							{
								std::string type;
								std::string value;
								std::string key;
							};
							struct QueryPredicatesItem
							{
								std::string type;
								std::string value;
								std::string key;
							};
							std::vector<HeaderPredicatesItem> headerPredicates;
							std::vector<std::string> methodPredicates;
							std::vector<QueryPredicatesItem> queryPredicates;
							PathPredicates pathPredicates;
						};
						struct DirectResponse
						{
							int code;
							std::string body;
						};
						struct Redirect
						{
							std::string path;
							std::string host;
							int code;
						};
						struct RouteServicesItem
						{
							std::string groupName;
							std::string serviceName;
							int percent;
							std::string version;
							std::string sourceType;
							std::string _namespace;
							long serviceId;
							std::string name;
						};
						int status;
						std::string defaultServiceName;
						std::string domainName;
						std::string gmtModified;
						long defaultServiceId;
						RoutePredicates routePredicates;
						Redirect redirect;
						long gatewayId;
						std::string destinationType;
						std::string name;
						std::string gatewayUniqueId;
						std::string services;
						std::vector<std::string> domainIdList;
						std::string gmtCreate;
						int routeOrder;
						long domainId;
						std::vector<std::string> domainNameList;
						long id;
						std::string predicates;
						DirectResponse directResponse;
						std::vector<Routes::RouteServicesItem> routeServices;
					};
					int pageSize;
					int pageNumber;
					long totalSize;
					std::vector<Routes> result;
				};


				ListGatewayRouteResult();
				explicit ListGatewayRouteResult(const std::string &payload);
				~ListGatewayRouteResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				Data getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				Data data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MSE_MODEL_LISTGATEWAYROUTERESULT_H_