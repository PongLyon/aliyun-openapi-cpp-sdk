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

#include <alibabacloud/dcdn/model/DescribeDcdnUserSecDropByMinuteRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnUserSecDropByMinuteRequest;

DescribeDcdnUserSecDropByMinuteRequest::DescribeDcdnUserSecDropByMinuteRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnUserSecDropByMinute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDcdnUserSecDropByMinuteRequest::~DescribeDcdnUserSecDropByMinuteRequest()
{}

std::string DescribeDcdnUserSecDropByMinuteRequest::getRuleName()const
{
	return ruleName_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string DescribeDcdnUserSecDropByMinuteRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDcdnUserSecDropByMinuteRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

long DescribeDcdnUserSecDropByMinuteRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDcdnUserSecDropByMinuteRequest::getLang()const
{
	return lang_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeDcdnUserSecDropByMinuteRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDcdnUserSecDropByMinuteRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long DescribeDcdnUserSecDropByMinuteRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnUserSecDropByMinuteRequest::getSecFunc()const
{
	return secFunc_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setSecFunc(const std::string& secFunc)
{
	secFunc_ = secFunc;
	setParameter("SecFunc", secFunc);
}

std::string DescribeDcdnUserSecDropByMinuteRequest::getObject()const
{
	return object_;
}

void DescribeDcdnUserSecDropByMinuteRequest::setObject(const std::string& object)
{
	object_ = object;
	setParameter("Object", object);
}

