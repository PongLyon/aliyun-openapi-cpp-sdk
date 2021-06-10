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

#include <alibabacloud/vpc/model/DisableNatGatewayEcsMetricRequest.h>

using AlibabaCloud::Vpc::Model::DisableNatGatewayEcsMetricRequest;

DisableNatGatewayEcsMetricRequest::DisableNatGatewayEcsMetricRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DisableNatGatewayEcsMetric")
{
	setMethod(HttpRequest::Method::Post);
}

DisableNatGatewayEcsMetricRequest::~DisableNatGatewayEcsMetricRequest()
{}

bool DisableNatGatewayEcsMetricRequest::getDryRun()const
{
	return dryRun_;
}

void DisableNatGatewayEcsMetricRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string DisableNatGatewayEcsMetricRequest::getRegionId()const
{
	return regionId_;
}

void DisableNatGatewayEcsMetricRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DisableNatGatewayEcsMetricRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void DisableNatGatewayEcsMetricRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setParameter("NatGatewayId", natGatewayId);
}

