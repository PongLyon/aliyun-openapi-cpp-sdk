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

#include <alibabacloud/dcdn/model/DescribeDcdnBgpBpsDataRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnBgpBpsDataRequest;

DescribeDcdnBgpBpsDataRequest::DescribeDcdnBgpBpsDataRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnBgpBpsData")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnBgpBpsDataRequest::~DescribeDcdnBgpBpsDataRequest()
{}

std::string DescribeDcdnBgpBpsDataRequest::getIsp()const
{
	return isp_;
}

void DescribeDcdnBgpBpsDataRequest::setIsp(const std::string& isp)
{
	isp_ = isp;
	setParameter("Isp", isp);
}

std::string DescribeDcdnBgpBpsDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnBgpBpsDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDcdnBgpBpsDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnBgpBpsDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDcdnBgpBpsDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnBgpBpsDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnBgpBpsDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDcdnBgpBpsDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

