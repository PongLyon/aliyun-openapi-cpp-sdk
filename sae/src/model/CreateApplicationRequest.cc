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

#include <alibabacloud/sae/model/CreateApplicationRequest.h>

using AlibabaCloud::Sae::Model::CreateApplicationRequest;

CreateApplicationRequest::CreateApplicationRequest() :
	RoaServiceRequest("sae", "2019-05-06")
{
	setResourcePath("/pop/v1/sam/app/createApplication");
	setMethod(HttpRequest::Method::Post);
}

CreateApplicationRequest::~CreateApplicationRequest()
{}

std::string CreateApplicationRequest::getNasId()const
{
	return nasId_;
}

void CreateApplicationRequest::setNasId(const std::string& nasId)
{
	nasId_ = nasId;
	setParameter("NasId", nasId);
}

std::string CreateApplicationRequest::getJarStartArgs()const
{
	return jarStartArgs_;
}

void CreateApplicationRequest::setJarStartArgs(const std::string& jarStartArgs)
{
	jarStartArgs_ = jarStartArgs;
	setParameter("JarStartArgs", jarStartArgs);
}

std::string CreateApplicationRequest::getOssAkSecret()const
{
	return ossAkSecret_;
}

void CreateApplicationRequest::setOssAkSecret(const std::string& ossAkSecret)
{
	ossAkSecret_ = ossAkSecret;
	setBodyParameter("OssAkSecret", ossAkSecret);
}

std::string CreateApplicationRequest::getMountHost()const
{
	return mountHost_;
}

void CreateApplicationRequest::setMountHost(const std::string& mountHost)
{
	mountHost_ = mountHost;
	setParameter("MountHost", mountHost);
}

bool CreateApplicationRequest::getAutoConfig()const
{
	return autoConfig_;
}

void CreateApplicationRequest::setAutoConfig(bool autoConfig)
{
	autoConfig_ = autoConfig;
	setParameter("AutoConfig", autoConfig ? "true" : "false");
}

std::string CreateApplicationRequest::getEnvs()const
{
	return envs_;
}

void CreateApplicationRequest::setEnvs(const std::string& envs)
{
	envs_ = envs;
	setParameter("Envs", envs);
}

std::string CreateApplicationRequest::getKafkaInstanceId()const
{
	return kafkaInstanceId_;
}

void CreateApplicationRequest::setKafkaInstanceId(const std::string& kafkaInstanceId)
{
	kafkaInstanceId_ = kafkaInstanceId;
	setParameter("KafkaInstanceId", kafkaInstanceId);
}

std::string CreateApplicationRequest::getPhpPECLExtensions()const
{
	return phpPECLExtensions_;
}

void CreateApplicationRequest::setPhpPECLExtensions(const std::string& phpPECLExtensions)
{
	phpPECLExtensions_ = phpPECLExtensions;
	setBodyParameter("PhpPECLExtensions", phpPECLExtensions);
}

std::string CreateApplicationRequest::getPhpArmsConfigLocation()const
{
	return phpArmsConfigLocation_;
}

void CreateApplicationRequest::setPhpArmsConfigLocation(const std::string& phpArmsConfigLocation)
{
	phpArmsConfigLocation_ = phpArmsConfigLocation;
	setParameter("PhpArmsConfigLocation", phpArmsConfigLocation);
}

std::string CreateApplicationRequest::getCustomHostAlias()const
{
	return customHostAlias_;
}

void CreateApplicationRequest::setCustomHostAlias(const std::string& customHostAlias)
{
	customHostAlias_ = customHostAlias;
	setParameter("CustomHostAlias", customHostAlias);
}

bool CreateApplicationRequest::getDeploy()const
{
	return deploy_;
}

void CreateApplicationRequest::setDeploy(bool deploy)
{
	deploy_ = deploy;
	setParameter("Deploy", deploy ? "true" : "false");
}

std::string CreateApplicationRequest::getJarStartOptions()const
{
	return jarStartOptions_;
}

void CreateApplicationRequest::setJarStartOptions(const std::string& jarStartOptions)
{
	jarStartOptions_ = jarStartOptions;
	setParameter("JarStartOptions", jarStartOptions);
}

std::string CreateApplicationRequest::getAppName()const
{
	return appName_;
}

void CreateApplicationRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setParameter("AppName", appName);
}

std::string CreateApplicationRequest::getNamespaceId()const
{
	return namespaceId_;
}

void CreateApplicationRequest::setNamespaceId(const std::string& namespaceId)
{
	namespaceId_ = namespaceId;
	setParameter("NamespaceId", namespaceId);
}

std::string CreateApplicationRequest::getConfigMapMountDesc()const
{
	return configMapMountDesc_;
}

void CreateApplicationRequest::setConfigMapMountDesc(const std::string& configMapMountDesc)
{
	configMapMountDesc_ = configMapMountDesc;
	setBodyParameter("ConfigMapMountDesc", configMapMountDesc);
}

std::string CreateApplicationRequest::getOssMountDescs()const
{
	return ossMountDescs_;
}

void CreateApplicationRequest::setOssMountDescs(const std::string& ossMountDescs)
{
	ossMountDescs_ = ossMountDescs;
	setBodyParameter("OssMountDescs", ossMountDescs);
}

std::string CreateApplicationRequest::getKafkaEndpoint()const
{
	return kafkaEndpoint_;
}

void CreateApplicationRequest::setKafkaEndpoint(const std::string& kafkaEndpoint)
{
	kafkaEndpoint_ = kafkaEndpoint;
	setParameter("KafkaEndpoint", kafkaEndpoint);
}

std::string CreateApplicationRequest::getPreStop()const
{
	return preStop_;
}

void CreateApplicationRequest::setPreStop(const std::string& preStop)
{
	preStop_ = preStop;
	setParameter("PreStop", preStop);
}

int CreateApplicationRequest::getCpu()const
{
	return cpu_;
}

void CreateApplicationRequest::setCpu(int cpu)
{
	cpu_ = cpu;
	setParameter("Cpu", std::to_string(cpu));
}

std::string CreateApplicationRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateApplicationRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateApplicationRequest::getPackageType()const
{
	return packageType_;
}

void CreateApplicationRequest::setPackageType(const std::string& packageType)
{
	packageType_ = packageType;
	setParameter("PackageType", packageType);
}

std::string CreateApplicationRequest::getPostStart()const
{
	return postStart_;
}

void CreateApplicationRequest::setPostStart(const std::string& postStart)
{
	postStart_ = postStart;
	setParameter("PostStart", postStart);
}

std::string CreateApplicationRequest::getPhpExtensions()const
{
	return phpExtensions_;
}

void CreateApplicationRequest::setPhpExtensions(const std::string& phpExtensions)
{
	phpExtensions_ = phpExtensions;
	setBodyParameter("PhpExtensions", phpExtensions);
}

bool CreateApplicationRequest::getAssociateEip()const
{
	return associateEip_;
}

void CreateApplicationRequest::setAssociateEip(bool associateEip)
{
	associateEip_ = associateEip;
	setBodyParameter("AssociateEip", associateEip ? "true" : "false");
}

std::string CreateApplicationRequest::getWebContainer()const
{
	return webContainer_;
}

void CreateApplicationRequest::setWebContainer(const std::string& webContainer)
{
	webContainer_ = webContainer;
	setParameter("WebContainer", webContainer);
}

int CreateApplicationRequest::getMemory()const
{
	return memory_;
}

void CreateApplicationRequest::setMemory(int memory)
{
	memory_ = memory;
	setParameter("Memory", std::to_string(memory));
}

std::string CreateApplicationRequest::getSlsConfigs()const
{
	return slsConfigs_;
}

void CreateApplicationRequest::setSlsConfigs(const std::string& slsConfigs)
{
	slsConfigs_ = slsConfigs;
	setParameter("SlsConfigs", slsConfigs);
}

bool CreateApplicationRequest::getOpenCollectToKafka()const
{
	return openCollectToKafka_;
}

void CreateApplicationRequest::setOpenCollectToKafka(bool openCollectToKafka)
{
	openCollectToKafka_ = openCollectToKafka;
	setParameter("OpenCollectToKafka", openCollectToKafka ? "true" : "false");
}

std::string CreateApplicationRequest::getCommandArgs()const
{
	return commandArgs_;
}

void CreateApplicationRequest::setCommandArgs(const std::string& commandArgs)
{
	commandArgs_ = commandArgs;
	setParameter("CommandArgs", commandArgs);
}

std::string CreateApplicationRequest::getAcrAssumeRoleArn()const
{
	return acrAssumeRoleArn_;
}

void CreateApplicationRequest::setAcrAssumeRoleArn(const std::string& acrAssumeRoleArn)
{
	acrAssumeRoleArn_ = acrAssumeRoleArn;
	setParameter("AcrAssumeRoleArn", acrAssumeRoleArn);
}

std::string CreateApplicationRequest::getReadiness()const
{
	return readiness_;
}

void CreateApplicationRequest::setReadiness(const std::string& readiness)
{
	readiness_ = readiness;
	setParameter("Readiness", readiness);
}

std::string CreateApplicationRequest::getTimezone()const
{
	return timezone_;
}

void CreateApplicationRequest::setTimezone(const std::string& timezone)
{
	timezone_ = timezone;
	setParameter("Timezone", timezone);
}

std::string CreateApplicationRequest::getOssAkId()const
{
	return ossAkId_;
}

void CreateApplicationRequest::setOssAkId(const std::string& ossAkId)
{
	ossAkId_ = ossAkId;
	setBodyParameter("OssAkId", ossAkId);
}

std::string CreateApplicationRequest::getLiveness()const
{
	return liveness_;
}

void CreateApplicationRequest::setLiveness(const std::string& liveness)
{
	liveness_ = liveness;
	setParameter("Liveness", liveness);
}

std::string CreateApplicationRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateApplicationRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string CreateApplicationRequest::getPackageVersion()const
{
	return packageVersion_;
}

void CreateApplicationRequest::setPackageVersion(const std::string& packageVersion)
{
	packageVersion_ = packageVersion;
	setParameter("PackageVersion", packageVersion);
}

std::string CreateApplicationRequest::getTomcatConfig()const
{
	return tomcatConfig_;
}

void CreateApplicationRequest::setTomcatConfig(const std::string& tomcatConfig)
{
	tomcatConfig_ = tomcatConfig;
	setParameter("TomcatConfig", tomcatConfig);
}

std::string CreateApplicationRequest::getWarStartOptions()const
{
	return warStartOptions_;
}

void CreateApplicationRequest::setWarStartOptions(const std::string& warStartOptions)
{
	warStartOptions_ = warStartOptions;
	setParameter("WarStartOptions", warStartOptions);
}

std::string CreateApplicationRequest::getEdasContainerVersion()const
{
	return edasContainerVersion_;
}

void CreateApplicationRequest::setEdasContainerVersion(const std::string& edasContainerVersion)
{
	edasContainerVersion_ = edasContainerVersion;
	setParameter("EdasContainerVersion", edasContainerVersion);
}

std::string CreateApplicationRequest::getPackageUrl()const
{
	return packageUrl_;
}

void CreateApplicationRequest::setPackageUrl(const std::string& packageUrl)
{
	packageUrl_ = packageUrl;
	setParameter("PackageUrl", packageUrl);
}

int CreateApplicationRequest::getTerminationGracePeriodSeconds()const
{
	return terminationGracePeriodSeconds_;
}

void CreateApplicationRequest::setTerminationGracePeriodSeconds(int terminationGracePeriodSeconds)
{
	terminationGracePeriodSeconds_ = terminationGracePeriodSeconds;
	setParameter("TerminationGracePeriodSeconds", std::to_string(terminationGracePeriodSeconds));
}

std::string CreateApplicationRequest::getPhpConfig()const
{
	return phpConfig_;
}

void CreateApplicationRequest::setPhpConfig(const std::string& phpConfig)
{
	phpConfig_ = phpConfig;
	setBodyParameter("PhpConfig", phpConfig);
}

int CreateApplicationRequest::getReplicas()const
{
	return replicas_;
}

void CreateApplicationRequest::setReplicas(int replicas)
{
	replicas_ = replicas;
	setParameter("Replicas", std::to_string(replicas));
}

std::string CreateApplicationRequest::getCommand()const
{
	return command_;
}

void CreateApplicationRequest::setCommand(const std::string& command)
{
	command_ = command;
	setParameter("Command", command);
}

std::string CreateApplicationRequest::getMountDesc()const
{
	return mountDesc_;
}

void CreateApplicationRequest::setMountDesc(const std::string& mountDesc)
{
	mountDesc_ = mountDesc;
	setParameter("MountDesc", mountDesc);
}

std::string CreateApplicationRequest::getJdk()const
{
	return jdk_;
}

void CreateApplicationRequest::setJdk(const std::string& jdk)
{
	jdk_ = jdk;
	setParameter("Jdk", jdk);
}

std::string CreateApplicationRequest::getAppDescription()const
{
	return appDescription_;
}

void CreateApplicationRequest::setAppDescription(const std::string& appDescription)
{
	appDescription_ = appDescription;
	setParameter("AppDescription", appDescription);
}

std::string CreateApplicationRequest::getKafkaLogfileConfig()const
{
	return kafkaLogfileConfig_;
}

void CreateApplicationRequest::setKafkaLogfileConfig(const std::string& kafkaLogfileConfig)
{
	kafkaLogfileConfig_ = kafkaLogfileConfig;
	setParameter("KafkaLogfileConfig", kafkaLogfileConfig);
}

std::string CreateApplicationRequest::getAcrInstanceId()const
{
	return acrInstanceId_;
}

void CreateApplicationRequest::setAcrInstanceId(const std::string& acrInstanceId)
{
	acrInstanceId_ = acrInstanceId;
	setBodyParameter("AcrInstanceId", acrInstanceId);
}

std::string CreateApplicationRequest::getVpcId()const
{
	return vpcId_;
}

void CreateApplicationRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateApplicationRequest::getImageUrl()const
{
	return imageUrl_;
}

void CreateApplicationRequest::setImageUrl(const std::string& imageUrl)
{
	imageUrl_ = imageUrl;
	setParameter("ImageUrl", imageUrl);
}

std::string CreateApplicationRequest::getPhp()const
{
	return php_;
}

void CreateApplicationRequest::setPhp(const std::string& php)
{
	php_ = php;
	setBodyParameter("Php", php);
}

std::string CreateApplicationRequest::getPhpConfigLocation()const
{
	return phpConfigLocation_;
}

void CreateApplicationRequest::setPhpConfigLocation(const std::string& phpConfigLocation)
{
	phpConfigLocation_ = phpConfigLocation;
	setParameter("PhpConfigLocation", phpConfigLocation);
}

