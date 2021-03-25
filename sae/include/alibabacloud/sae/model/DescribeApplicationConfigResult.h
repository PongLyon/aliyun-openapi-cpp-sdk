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

#ifndef ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONCONFIGRESULT_H_
#define ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sae/SaeExport.h>

namespace AlibabaCloud
{
	namespace Sae
	{
		namespace Model
		{
			class ALIBABACLOUD_SAE_EXPORT DescribeApplicationConfigResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct MountDescItem
					{
						std::string mountPath;
						std::string nasPath;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					struct ConfigMapMountDescItem
					{
						std::string mountPath;
						long configMapId;
						std::string configMapName;
						std::string key;
					};
					std::string timezone;
					std::string appDescription;
					std::string phpConfig;
					std::vector<MountDescItem> mountDesc;
					std::string nasId;
					std::string warStartOptions;
					std::string liveness;
					int memory;
					std::string webContainer;
					std::string slsConfigs;
					int cpu;
					std::string packageVersion;
					std::string appName;
					std::string jdk;
					std::string jarStartArgs;
					int minReadyInstances;
					std::string preStop;
					std::string readiness;
					std::string phpArmsConfigLocation;
					std::string packageType;
					std::vector<Tag> tags;
					std::string commandArgs;
					std::string acrAssumeRoleArn;
					int terminationGracePeriodSeconds;
					std::string envs;
					std::string vSwitchId;
					std::string securityGroupId;
					std::string postStart;
					std::string imageUrl;
					std::string mountHost;
					std::string jarStartOptions;
					int replicas;
					std::string customHostAlias;
					std::vector<ConfigMapMountDescItem> configMapMountDesc;
					std::string appId;
					std::string vpcId;
					std::string edasContainerVersion;
					std::string command;
					std::string phpConfigLocation;
					std::string packageUrl;
					int batchWaitTime;
					std::string regionId;
					std::string namespaceId;
					std::string enableAhas;
					std::string tomcatConfig;
				};


				DescribeApplicationConfigResult();
				explicit DescribeApplicationConfigResult(const std::string &payload);
				~DescribeApplicationConfigResult();
				std::string getMessage()const;
				std::string getTraceId()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				std::string traceId_;
				Data data_;
				std::string errorCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAE_MODEL_DESCRIBEAPPLICATIONCONFIGRESULT_H_