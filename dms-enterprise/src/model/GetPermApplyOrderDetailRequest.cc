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

#include <alibabacloud/dms-enterprise/model/GetPermApplyOrderDetailRequest.h>

using AlibabaCloud::Dms_enterprise::Model::GetPermApplyOrderDetailRequest;

GetPermApplyOrderDetailRequest::GetPermApplyOrderDetailRequest() :
	RpcServiceRequest("dms-enterprise", "2018-11-01", "GetPermApplyOrderDetail")
{
	setMethod(HttpRequest::Method::Post);
}

GetPermApplyOrderDetailRequest::~GetPermApplyOrderDetailRequest()
{}

long GetPermApplyOrderDetailRequest::getOrderId()const
{
	return orderId_;
}

void GetPermApplyOrderDetailRequest::setOrderId(long orderId)
{
	orderId_ = orderId;
	setParameter("OrderId", std::to_string(orderId));
}

long GetPermApplyOrderDetailRequest::getTid()const
{
	return tid_;
}

void GetPermApplyOrderDetailRequest::setTid(long tid)
{
	tid_ = tid;
	setParameter("Tid", std::to_string(tid));
}

