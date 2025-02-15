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

#include <alibabacloud/cbn/model/ListTransitRouterPeerAttachmentsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterPeerAttachmentsResult::ListTransitRouterPeerAttachmentsResult() :
	ServiceResult()
{}

ListTransitRouterPeerAttachmentsResult::ListTransitRouterPeerAttachmentsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterPeerAttachmentsResult::~ListTransitRouterPeerAttachmentsResult()
{}

void ListTransitRouterPeerAttachmentsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterAttachmentsNode = value["TransitRouterAttachments"]["TransitRouterAttachment"];
	for (auto valueTransitRouterAttachmentsTransitRouterAttachment : allTransitRouterAttachmentsNode)
	{
		TransitRouterAttachment transitRouterAttachmentsObject;
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["CreationTime"].isNull())
			transitRouterAttachmentsObject.creationTime = valueTransitRouterAttachmentsTransitRouterAttachment["CreationTime"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["Status"].isNull())
			transitRouterAttachmentsObject.status = valueTransitRouterAttachmentsTransitRouterAttachment["Status"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentId"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["BandwidthType"].isNull())
			transitRouterAttachmentsObject.bandwidthType = valueTransitRouterAttachmentsTransitRouterAttachment["BandwidthType"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["CenBandwidthPackageId"].isNull())
			transitRouterAttachmentsObject.cenBandwidthPackageId = valueTransitRouterAttachmentsTransitRouterAttachment["CenBandwidthPackageId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentDescription = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentDescription"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["RegionId"].isNull())
			transitRouterAttachmentsObject.regionId = valueTransitRouterAttachmentsTransitRouterAttachment["RegionId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["PeerTransitRouterId"].isNull())
			transitRouterAttachmentsObject.peerTransitRouterId = valueTransitRouterAttachmentsTransitRouterAttachment["PeerTransitRouterId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["BandwidthPackageId"].isNull())
			transitRouterAttachmentsObject.bandwidthPackageId = valueTransitRouterAttachmentsTransitRouterAttachment["BandwidthPackageId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterId"].isNull())
			transitRouterAttachmentsObject.transitRouterId = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["PeerTransitRouterRegionId"].isNull())
			transitRouterAttachmentsObject.peerTransitRouterRegionId = valueTransitRouterAttachmentsTransitRouterAttachment["PeerTransitRouterRegionId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["ResourceType"].isNull())
			transitRouterAttachmentsObject.resourceType = valueTransitRouterAttachmentsTransitRouterAttachment["ResourceType"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["Bandwidth"].isNull())
			transitRouterAttachmentsObject.bandwidth = std::stoi(valueTransitRouterAttachmentsTransitRouterAttachment["Bandwidth"].asString());
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["GeographicSpanId"].isNull())
			transitRouterAttachmentsObject.geographicSpanId = valueTransitRouterAttachmentsTransitRouterAttachment["GeographicSpanId"].asString();
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["PeerTransitRouterOwnerId"].isNull())
			transitRouterAttachmentsObject.peerTransitRouterOwnerId = std::stol(valueTransitRouterAttachmentsTransitRouterAttachment["PeerTransitRouterOwnerId"].asString());
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].isNull())
			transitRouterAttachmentsObject.autoPublishRouteEnabled = valueTransitRouterAttachmentsTransitRouterAttachment["AutoPublishRouteEnabled"].asString() == "true";
		if(!valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].isNull())
			transitRouterAttachmentsObject.transitRouterAttachmentName = valueTransitRouterAttachmentsTransitRouterAttachment["TransitRouterAttachmentName"].asString();
		transitRouterAttachments_.push_back(transitRouterAttachmentsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTransitRouterPeerAttachmentsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterPeerAttachmentsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterPeerAttachmentsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterPeerAttachmentsResult::TransitRouterAttachment> ListTransitRouterPeerAttachmentsResult::getTransitRouterAttachments()const
{
	return transitRouterAttachments_;
}

