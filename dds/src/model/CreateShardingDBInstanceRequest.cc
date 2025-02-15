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

#include <alibabacloud/dds/model/CreateShardingDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::CreateShardingDBInstanceRequest;

CreateShardingDBInstanceRequest::CreateShardingDBInstanceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateShardingDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateShardingDBInstanceRequest::~CreateShardingDBInstanceRequest() {}

long CreateShardingDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateShardingDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateShardingDBInstanceRequest::getClientToken() const {
  return clientToken_;
}

void CreateShardingDBInstanceRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateShardingDBInstanceRequest::getEngineVersion() const {
  return engineVersion_;
}

void CreateShardingDBInstanceRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CreateShardingDBInstanceRequest::getNetworkType() const {
  return networkType_;
}

void CreateShardingDBInstanceRequest::setNetworkType(const std::string &networkType) {
  networkType_ = networkType;
  setParameter(std::string("NetworkType"), networkType);
}

std::vector<CreateShardingDBInstanceRequest::ReplicaSet> CreateShardingDBInstanceRequest::getReplicaSet() const {
  return replicaSet_;
}

void CreateShardingDBInstanceRequest::setReplicaSet(const std::vector<CreateShardingDBInstanceRequest::ReplicaSet> &replicaSet) {
  replicaSet_ = replicaSet;
  for(int dep1 = 0; dep1 != replicaSet.size(); dep1++) {
  auto replicaSetObj = replicaSet.at(dep1);
  std::string replicaSetObjStr = std::string("ReplicaSet") + "." + std::to_string(dep1 + 1);
    setParameter(replicaSetObjStr + ".ReadonlyReplicas", std::to_string(replicaSetObj.readonlyReplicas));
    setParameter(replicaSetObjStr + ".Storage", std::to_string(replicaSetObj.storage));
    setParameter(replicaSetObjStr + ".Class", replicaSetObj._class);
  }
}

std::string CreateShardingDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateShardingDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateShardingDBInstanceRequest::getStorageEngine() const {
  return storageEngine_;
}

void CreateShardingDBInstanceRequest::setStorageEngine(const std::string &storageEngine) {
  storageEngine_ = storageEngine;
  setParameter(std::string("StorageEngine"), storageEngine);
}

std::string CreateShardingDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateShardingDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateShardingDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateShardingDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateShardingDBInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateShardingDBInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateShardingDBInstanceRequest::getEngine() const {
  return engine_;
}

void CreateShardingDBInstanceRequest::setEngine(const std::string &engine) {
  engine_ = engine;
  setParameter(std::string("Engine"), engine);
}

std::string CreateShardingDBInstanceRequest::getDBInstanceDescription() const {
  return dBInstanceDescription_;
}

void CreateShardingDBInstanceRequest::setDBInstanceDescription(const std::string &dBInstanceDescription) {
  dBInstanceDescription_ = dBInstanceDescription;
  setParameter(std::string("DBInstanceDescription"), dBInstanceDescription);
}

int CreateShardingDBInstanceRequest::getPeriod() const {
  return period_;
}

void CreateShardingDBInstanceRequest::setPeriod(int period) {
  period_ = period;
  setParameter(std::string("Period"), std::to_string(period));
}

std::string CreateShardingDBInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void CreateShardingDBInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CreateShardingDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateShardingDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateShardingDBInstanceRequest::getSrcDBInstanceId() const {
  return srcDBInstanceId_;
}

void CreateShardingDBInstanceRequest::setSrcDBInstanceId(const std::string &srcDBInstanceId) {
  srcDBInstanceId_ = srcDBInstanceId;
  setParameter(std::string("SrcDBInstanceId"), srcDBInstanceId);
}

std::string CreateShardingDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateShardingDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::vector<CreateShardingDBInstanceRequest::ConfigServer> CreateShardingDBInstanceRequest::getConfigServer() const {
  return configServer_;
}

void CreateShardingDBInstanceRequest::setConfigServer(const std::vector<CreateShardingDBInstanceRequest::ConfigServer> &configServer) {
  configServer_ = configServer;
  for(int dep1 = 0; dep1 != configServer.size(); dep1++) {
  auto configServerObj = configServer.at(dep1);
  std::string configServerObjStr = std::string("ConfigServer") + "." + std::to_string(dep1 + 1);
    setParameter(configServerObjStr + ".Storage", std::to_string(configServerObj.storage));
    setParameter(configServerObjStr + ".Class", configServerObj._class);
  }
}

long CreateShardingDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateShardingDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateShardingDBInstanceRequest::getSecurityIPList() const {
  return securityIPList_;
}

void CreateShardingDBInstanceRequest::setSecurityIPList(const std::string &securityIPList) {
  securityIPList_ = securityIPList;
  setParameter(std::string("SecurityIPList"), securityIPList);
}

std::string CreateShardingDBInstanceRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateShardingDBInstanceRequest::setVSwitchId(const std::string &vSwitchId) {
  vSwitchId_ = vSwitchId;
  setParameter(std::string("VSwitchId"), vSwitchId);
}

std::vector<CreateShardingDBInstanceRequest::Mongos> CreateShardingDBInstanceRequest::getMongos() const {
  return mongos_;
}

void CreateShardingDBInstanceRequest::setMongos(const std::vector<CreateShardingDBInstanceRequest::Mongos> &mongos) {
  mongos_ = mongos;
  for(int dep1 = 0; dep1 != mongos.size(); dep1++) {
  auto mongosObj = mongos.at(dep1);
  std::string mongosObjStr = std::string("Mongos") + "." + std::to_string(dep1 + 1);
    setParameter(mongosObjStr + ".Class", mongosObj._class);
  }
}

std::string CreateShardingDBInstanceRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateShardingDBInstanceRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateShardingDBInstanceRequest::getAutoRenew() const {
  return autoRenew_;
}

void CreateShardingDBInstanceRequest::setAutoRenew(const std::string &autoRenew) {
  autoRenew_ = autoRenew;
  setParameter(std::string("AutoRenew"), autoRenew);
}

std::string CreateShardingDBInstanceRequest::getVpcId() const {
  return vpcId_;
}

void CreateShardingDBInstanceRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string CreateShardingDBInstanceRequest::getZoneId() const {
  return zoneId_;
}

void CreateShardingDBInstanceRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateShardingDBInstanceRequest::getProtocolType() const {
  return protocolType_;
}

void CreateShardingDBInstanceRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::string CreateShardingDBInstanceRequest::getChargeType() const {
  return chargeType_;
}

void CreateShardingDBInstanceRequest::setChargeType(const std::string &chargeType) {
  chargeType_ = chargeType;
  setParameter(std::string("ChargeType"), chargeType);
}

