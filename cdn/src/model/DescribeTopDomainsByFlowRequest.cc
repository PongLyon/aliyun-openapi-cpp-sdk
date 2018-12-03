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

#include <alibabacloud/cdn/model/DescribeTopDomainsByFlowRequest.h>

using AlibabaCloud::Cdn::Model::DescribeTopDomainsByFlowRequest;

DescribeTopDomainsByFlowRequest::DescribeTopDomainsByFlowRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeTopDomainsByFlow")
{}

DescribeTopDomainsByFlowRequest::~DescribeTopDomainsByFlowRequest()
{}

long DescribeTopDomainsByFlowRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeTopDomainsByFlowRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeTopDomainsByFlowRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeTopDomainsByFlowRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeTopDomainsByFlowRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTopDomainsByFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeTopDomainsByFlowRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeTopDomainsByFlowRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeTopDomainsByFlowRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeTopDomainsByFlowRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeTopDomainsByFlowRequest::getCallerType()const
{
	return callerType_;
}

void DescribeTopDomainsByFlowRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeTopDomainsByFlowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTopDomainsByFlowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTopDomainsByFlowRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTopDomainsByFlowRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeTopDomainsByFlowRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeTopDomainsByFlowRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeTopDomainsByFlowRequest::getLimit()const
{
	return limit_;
}

void DescribeTopDomainsByFlowRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string DescribeTopDomainsByFlowRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeTopDomainsByFlowRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeTopDomainsByFlowRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeTopDomainsByFlowRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeTopDomainsByFlowRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeTopDomainsByFlowRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeTopDomainsByFlowRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeTopDomainsByFlowRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeTopDomainsByFlowRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeTopDomainsByFlowRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeTopDomainsByFlowRequest::getProduct()const
{
	return product_;
}

void DescribeTopDomainsByFlowRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeTopDomainsByFlowRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTopDomainsByFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeTopDomainsByFlowRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeTopDomainsByFlowRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeTopDomainsByFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTopDomainsByFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTopDomainsByFlowRequest::getVersion()const
{
	return version_;
}

void DescribeTopDomainsByFlowRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeTopDomainsByFlowRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeTopDomainsByFlowRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeTopDomainsByFlowRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeTopDomainsByFlowRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeTopDomainsByFlowRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeTopDomainsByFlowRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeTopDomainsByFlowRequest::getRequestId()const
{
	return requestId_;
}

void DescribeTopDomainsByFlowRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

