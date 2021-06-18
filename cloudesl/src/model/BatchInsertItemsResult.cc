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

#include <alibabacloud/cloudesl/model/BatchInsertItemsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cloudesl;
using namespace AlibabaCloud::Cloudesl::Model;

BatchInsertItemsResult::BatchInsertItemsResult() :
	ServiceResult()
{}

BatchInsertItemsResult::BatchInsertItemsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchInsertItemsResult::~BatchInsertItemsResult()
{}

void BatchInsertItemsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBatchResultsNode = value["BatchResults"]["BatchResult"];
	for (auto valueBatchResultsBatchResult : allBatchResultsNode)
	{
		BatchResult batchResultsObject;
		if(!valueBatchResultsBatchResult["Message"].isNull())
			batchResultsObject.message = valueBatchResultsBatchResult["Message"].asString();
		if(!valueBatchResultsBatchResult["Index"].isNull())
			batchResultsObject.index = std::stoi(valueBatchResultsBatchResult["Index"].asString());
		if(!valueBatchResultsBatchResult["ErrorCode"].isNull())
			batchResultsObject.errorCode = valueBatchResultsBatchResult["ErrorCode"].asString();
		if(!valueBatchResultsBatchResult["Success"].isNull())
			batchResultsObject.success = valueBatchResultsBatchResult["Success"].asString() == "true";
		batchResults_.push_back(batchResultsObject);
	}
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["DynamicCode"].isNull())
		dynamicCode_ = value["DynamicCode"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["DynamicMessage"].isNull())
		dynamicMessage_ = value["DynamicMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string BatchInsertItemsResult::getMessage()const
{
	return message_;
}

std::string BatchInsertItemsResult::getDynamicCode()const
{
	return dynamicCode_;
}

std::string BatchInsertItemsResult::getErrorCode()const
{
	return errorCode_;
}

std::string BatchInsertItemsResult::getDynamicMessage()const
{
	return dynamicMessage_;
}

std::vector<BatchInsertItemsResult::BatchResult> BatchInsertItemsResult::getBatchResults()const
{
	return batchResults_;
}

std::string BatchInsertItemsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::string BatchInsertItemsResult::getCode()const
{
	return code_;
}

bool BatchInsertItemsResult::getSuccess()const
{
	return success_;
}

