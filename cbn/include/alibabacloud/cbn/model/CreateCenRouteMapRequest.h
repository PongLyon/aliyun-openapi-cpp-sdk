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

#ifndef ALIBABACLOUD_CBN_MODEL_CREATECENROUTEMAPREQUEST_H_
#define ALIBABACLOUD_CBN_MODEL_CREATECENROUTEMAPREQUEST_H_

#include <alibabacloud/cbn/CbnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cbn {
namespace Model {
class ALIBABACLOUD_CBN_EXPORT CreateCenRouteMapRequest : public RpcServiceRequest {
public:
	CreateCenRouteMapRequest();
	~CreateCenRouteMapRequest();
	long getResourceOwnerId() const;
	void setResourceOwnerId(long resourceOwnerId);
	std::string getCommunityMatchMode() const;
	void setCommunityMatchMode(const std::string &communityMatchMode);
	std::string getMapResult() const;
	void setMapResult(const std::string &mapResult);
	std::vector<std::string> getDestinationRegionIds() const;
	void setDestinationRegionIds(const std::vector<std::string> &destinationRegionIds);
	int getNextPriority() const;
	void setNextPriority(int nextPriority);
	bool getSystemPolicy() const;
	void setSystemPolicy(bool systemPolicy);
	std::vector<std::string> getDestinationCidrBlocks() const;
	void setDestinationCidrBlocks(const std::vector<std::string> &destinationCidrBlocks);
	std::vector<std::string> getOriginalRouteTableIds() const;
	void setOriginalRouteTableIds(const std::vector<std::string> &originalRouteTableIds);
	std::string getTransitRouterRouteTableId() const;
	void setTransitRouterRouteTableId(const std::string &transitRouterRouteTableId);
	std::vector<std::string> getSourceInstanceIds() const;
	void setSourceInstanceIds(const std::vector<std::string> &sourceInstanceIds);
	std::vector<std::string> getSourceRegionIds() const;
	void setSourceRegionIds(const std::vector<std::string> &sourceRegionIds);
	std::string getGatewayZoneId() const;
	void setGatewayZoneId(const std::string &gatewayZoneId);
	std::vector<long> getMatchAsns() const;
	void setMatchAsns(const std::vector<long> &matchAsns);
	int getPreference() const;
	void setPreference(int preference);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	int getPriority() const;
	void setPriority(int priority);
	std::vector<std::string> getDestinationChildInstanceTypes() const;
	void setDestinationChildInstanceTypes(const std::vector<std::string> &destinationChildInstanceTypes);
	std::vector<std::string> getSourceRouteTableIds() const;
	void setSourceRouteTableIds(const std::vector<std::string> &sourceRouteTableIds);
	std::vector<std::string> getSourceChildInstanceTypes() const;
	void setSourceChildInstanceTypes(const std::vector<std::string> &sourceChildInstanceTypes);
	std::string getCommunityOperateMode() const;
	void setCommunityOperateMode(const std::string &communityOperateMode);
	std::vector<std::string> getOperateCommunitySet() const;
	void setOperateCommunitySet(const std::vector<std::string> &operateCommunitySet);
	std::vector<std::string> getRouteTypes() const;
	void setRouteTypes(const std::vector<std::string> &routeTypes);
	std::string getMatchAddressType() const;
	void setMatchAddressType(const std::string &matchAddressType);
	std::string getCidrMatchMode() const;
	void setCidrMatchMode(const std::string &cidrMatchMode);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getDescription() const;
	void setDescription(const std::string &description);
	bool getSourceInstanceIdsReverseMatch() const;
	void setSourceInstanceIdsReverseMatch(bool sourceInstanceIdsReverseMatch);
	std::vector<std::string> getDestinationRouteTableIds() const;
	void setDestinationRouteTableIds(const std::vector<std::string> &destinationRouteTableIds);
	std::vector<std::string> getSourceZoneIds() const;
	void setSourceZoneIds(const std::vector<std::string> &sourceZoneIds);
	std::string getTransmitDirection() const;
	void setTransmitDirection(const std::string &transmitDirection);
	std::vector<std::string> getDestinationInstanceIds() const;
	void setDestinationInstanceIds(const std::vector<std::string> &destinationInstanceIds);
	std::string getResourceOwnerAccount() const;
	void setResourceOwnerAccount(const std::string &resourceOwnerAccount);
	std::string getOwnerAccount() const;
	void setOwnerAccount(const std::string &ownerAccount);
	bool getDestinationInstanceIdsReverseMatch() const;
	void setDestinationInstanceIdsReverseMatch(bool destinationInstanceIdsReverseMatch);
	std::vector<long> getPrependAsPath() const;
	void setPrependAsPath(const std::vector<long> &prependAsPath);
	std::string getAsPathMatchMode() const;
	void setAsPathMatchMode(const std::string &asPathMatchMode);
	std::vector<std::string> getMatchCommunitySet() const;
	void setMatchCommunitySet(const std::vector<std::string> &matchCommunitySet);
	std::string getCenRegionId() const;
	void setCenRegionId(const std::string &cenRegionId);

private:
	long resourceOwnerId_;
	std::string communityMatchMode_;
	std::string mapResult_;
	std::vector<std::string> destinationRegionIds_;
	int nextPriority_;
	bool systemPolicy_;
	std::vector<std::string> destinationCidrBlocks_;
	std::vector<std::string> originalRouteTableIds_;
	std::string transitRouterRouteTableId_;
	std::vector<std::string> sourceInstanceIds_;
	std::vector<std::string> sourceRegionIds_;
	std::string gatewayZoneId_;
	std::vector<long> matchAsns_;
	int preference_;
	long ownerId_;
	int priority_;
	std::vector<std::string> destinationChildInstanceTypes_;
	std::vector<std::string> sourceRouteTableIds_;
	std::vector<std::string> sourceChildInstanceTypes_;
	std::string communityOperateMode_;
	std::vector<std::string> operateCommunitySet_;
	std::vector<std::string> routeTypes_;
	std::string matchAddressType_;
	std::string cidrMatchMode_;
	std::string cenId_;
	std::string description_;
	bool sourceInstanceIdsReverseMatch_;
	std::vector<std::string> destinationRouteTableIds_;
	std::vector<std::string> sourceZoneIds_;
	std::string transmitDirection_;
	std::vector<std::string> destinationInstanceIds_;
	std::string resourceOwnerAccount_;
	std::string ownerAccount_;
	bool destinationInstanceIdsReverseMatch_;
	std::vector<long> prependAsPath_;
	std::string asPathMatchMode_;
	std::vector<std::string> matchCommunitySet_;
	std::string cenRegionId_;
};
} // namespace Model
} // namespace Cbn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CBN_MODEL_CREATECENROUTEMAPREQUEST_H_
