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

#include <alibabacloud/imm/model/ListVideoFramesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Imm;
using namespace AlibabaCloud::Imm::Model;

ListVideoFramesResult::ListVideoFramesResult() :
	ServiceResult()
{}

ListVideoFramesResult::ListVideoFramesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVideoFramesResult::~ListVideoFramesResult()
{}

void ListVideoFramesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFramesNode = value["Frames"]["FramesItem"];
	for (auto valueFramesFramesItem : allFramesNode)
	{
		FramesItem framesObject;
		if(!valueFramesFramesItem["TagsFailReason"].isNull())
			framesObject.tagsFailReason = valueFramesFramesItem["TagsFailReason"].asString();
		if(!valueFramesFramesItem["RemarksC"].isNull())
			framesObject.remarksC = valueFramesFramesItem["RemarksC"].asString();
		if(!valueFramesFramesItem["CreateTime"].isNull())
			framesObject.createTime = valueFramesFramesItem["CreateTime"].asString();
		if(!valueFramesFramesItem["SourceType"].isNull())
			framesObject.sourceType = valueFramesFramesItem["SourceType"].asString();
		if(!valueFramesFramesItem["FacesFailReason"].isNull())
			framesObject.facesFailReason = valueFramesFramesItem["FacesFailReason"].asString();
		if(!valueFramesFramesItem["FacesModifyTime"].isNull())
			framesObject.facesModifyTime = valueFramesFramesItem["FacesModifyTime"].asString();
		if(!valueFramesFramesItem["ImageTime"].isNull())
			framesObject.imageTime = valueFramesFramesItem["ImageTime"].asString();
		if(!valueFramesFramesItem["OCRModifyTime"].isNull())
			framesObject.oCRModifyTime = valueFramesFramesItem["OCRModifyTime"].asString();
		if(!valueFramesFramesItem["FacesStatus"].isNull())
			framesObject.facesStatus = valueFramesFramesItem["FacesStatus"].asString();
		if(!valueFramesFramesItem["ImageHeight"].isNull())
			framesObject.imageHeight = std::stoi(valueFramesFramesItem["ImageHeight"].asString());
		if(!valueFramesFramesItem["ExternalId"].isNull())
			framesObject.externalId = valueFramesFramesItem["ExternalId"].asString();
		if(!valueFramesFramesItem["SourceUri"].isNull())
			framesObject.sourceUri = valueFramesFramesItem["SourceUri"].asString();
		if(!valueFramesFramesItem["FileSize"].isNull())
			framesObject.fileSize = std::stoi(valueFramesFramesItem["FileSize"].asString());
		if(!valueFramesFramesItem["ModifyTime"].isNull())
			framesObject.modifyTime = valueFramesFramesItem["ModifyTime"].asString();
		if(!valueFramesFramesItem["SourcePosition"].isNull())
			framesObject.sourcePosition = valueFramesFramesItem["SourcePosition"].asString();
		if(!valueFramesFramesItem["OCRFailReason"].isNull())
			framesObject.oCRFailReason = valueFramesFramesItem["OCRFailReason"].asString();
		if(!valueFramesFramesItem["ImageFormat"].isNull())
			framesObject.imageFormat = valueFramesFramesItem["ImageFormat"].asString();
		if(!valueFramesFramesItem["ImageWidth"].isNull())
			framesObject.imageWidth = std::stoi(valueFramesFramesItem["ImageWidth"].asString());
		if(!valueFramesFramesItem["Orientation"].isNull())
			framesObject.orientation = valueFramesFramesItem["Orientation"].asString();
		if(!valueFramesFramesItem["RemarksD"].isNull())
			framesObject.remarksD = valueFramesFramesItem["RemarksD"].asString();
		if(!valueFramesFramesItem["TagsStatus"].isNull())
			framesObject.tagsStatus = valueFramesFramesItem["TagsStatus"].asString();
		if(!valueFramesFramesItem["RemarksA"].isNull())
			framesObject.remarksA = valueFramesFramesItem["RemarksA"].asString();
		if(!valueFramesFramesItem["ImageUri"].isNull())
			framesObject.imageUri = valueFramesFramesItem["ImageUri"].asString();
		if(!valueFramesFramesItem["TagsModifyTime"].isNull())
			framesObject.tagsModifyTime = valueFramesFramesItem["TagsModifyTime"].asString();
		if(!valueFramesFramesItem["OCRStatus"].isNull())
			framesObject.oCRStatus = valueFramesFramesItem["OCRStatus"].asString();
		if(!valueFramesFramesItem["Exif"].isNull())
			framesObject.exif = valueFramesFramesItem["Exif"].asString();
		if(!valueFramesFramesItem["Location"].isNull())
			framesObject.location = valueFramesFramesItem["Location"].asString();
		if(!valueFramesFramesItem["RemarksB"].isNull())
			framesObject.remarksB = valueFramesFramesItem["RemarksB"].asString();
		auto allTagsNode = valueFramesFramesItem["Tags"]["TagsItem"];
		for (auto valueFramesFramesItemTagsTagsItem : allTagsNode)
		{
			FramesItem::TagsItem tagsObject;
			if(!valueFramesFramesItemTagsTagsItem["TagConfidence"].isNull())
				tagsObject.tagConfidence = std::stof(valueFramesFramesItemTagsTagsItem["TagConfidence"].asString());
			if(!valueFramesFramesItemTagsTagsItem["TagName"].isNull())
				tagsObject.tagName = valueFramesFramesItemTagsTagsItem["TagName"].asString();
			if(!valueFramesFramesItemTagsTagsItem["TagLevel"].isNull())
				tagsObject.tagLevel = std::stoi(valueFramesFramesItemTagsTagsItem["TagLevel"].asString());
			if(!valueFramesFramesItemTagsTagsItem["ParentTagName"].isNull())
				tagsObject.parentTagName = valueFramesFramesItemTagsTagsItem["ParentTagName"].asString();
			framesObject.tags.push_back(tagsObject);
		}
		auto allOCRNode = valueFramesFramesItem["OCR"]["OCRItem"];
		for (auto valueFramesFramesItemOCROCRItem : allOCRNode)
		{
			FramesItem::OCRItem oCRObject;
			if(!valueFramesFramesItemOCROCRItem["OCRConfidence"].isNull())
				oCRObject.oCRConfidence = std::stof(valueFramesFramesItemOCROCRItem["OCRConfidence"].asString());
			if(!valueFramesFramesItemOCROCRItem["OCRContents"].isNull())
				oCRObject.oCRContents = valueFramesFramesItemOCROCRItem["OCRContents"].asString();
			auto oCRBoundaryNode = value["OCRBoundary"];
			if(!oCRBoundaryNode["Top"].isNull())
				oCRObject.oCRBoundary.top = std::stoi(oCRBoundaryNode["Top"].asString());
			if(!oCRBoundaryNode["Width"].isNull())
				oCRObject.oCRBoundary.width = std::stoi(oCRBoundaryNode["Width"].asString());
			if(!oCRBoundaryNode["Height"].isNull())
				oCRObject.oCRBoundary.height = std::stoi(oCRBoundaryNode["Height"].asString());
			if(!oCRBoundaryNode["Left"].isNull())
				oCRObject.oCRBoundary.left = std::stoi(oCRBoundaryNode["Left"].asString());
			framesObject.oCR.push_back(oCRObject);
		}
		auto allFacesNode = valueFramesFramesItem["Faces"]["FacesItem"];
		for (auto valueFramesFramesItemFacesFacesItem : allFacesNode)
		{
			FramesItem::FacesItem facesObject;
			if(!valueFramesFramesItemFacesFacesItem["Gender"].isNull())
				facesObject.gender = valueFramesFramesItemFacesFacesItem["Gender"].asString();
			if(!valueFramesFramesItemFacesFacesItem["FaceId"].isNull())
				facesObject.faceId = valueFramesFramesItemFacesFacesItem["FaceId"].asString();
			if(!valueFramesFramesItemFacesFacesItem["GenderConfidence"].isNull())
				facesObject.genderConfidence = std::stof(valueFramesFramesItemFacesFacesItem["GenderConfidence"].asString());
			if(!valueFramesFramesItemFacesFacesItem["FaceQuality"].isNull())
				facesObject.faceQuality = std::stof(valueFramesFramesItemFacesFacesItem["FaceQuality"].asString());
			if(!valueFramesFramesItemFacesFacesItem["Emotion"].isNull())
				facesObject.emotion = valueFramesFramesItemFacesFacesItem["Emotion"].asString();
			if(!valueFramesFramesItemFacesFacesItem["Age"].isNull())
				facesObject.age = std::stoi(valueFramesFramesItemFacesFacesItem["Age"].asString());
			if(!valueFramesFramesItemFacesFacesItem["FaceConfidence"].isNull())
				facesObject.faceConfidence = std::stof(valueFramesFramesItemFacesFacesItem["FaceConfidence"].asString());
			if(!valueFramesFramesItemFacesFacesItem["EmotionConfidence"].isNull())
				facesObject.emotionConfidence = std::stof(valueFramesFramesItemFacesFacesItem["EmotionConfidence"].asString());
			if(!valueFramesFramesItemFacesFacesItem["Attractive"].isNull())
				facesObject.attractive = std::stof(valueFramesFramesItemFacesFacesItem["Attractive"].asString());
			if(!valueFramesFramesItemFacesFacesItem["GroupId"].isNull())
				facesObject.groupId = valueFramesFramesItemFacesFacesItem["GroupId"].asString();
			auto faceAttributesNode = value["FaceAttributes"];
			if(!faceAttributesNode["GlassesConfidence"].isNull())
				facesObject.faceAttributes.glassesConfidence = std::stof(faceAttributesNode["GlassesConfidence"].asString());
			if(!faceAttributesNode["Glasses"].isNull())
				facesObject.faceAttributes.glasses = faceAttributesNode["Glasses"].asString();
			if(!faceAttributesNode["Mask"].isNull())
				facesObject.faceAttributes.mask = faceAttributesNode["Mask"].asString();
			if(!faceAttributesNode["BeardConfidence"].isNull())
				facesObject.faceAttributes.beardConfidence = std::stof(faceAttributesNode["BeardConfidence"].asString());
			if(!faceAttributesNode["MaskConfidence"].isNull())
				facesObject.faceAttributes.maskConfidence = std::stof(faceAttributesNode["MaskConfidence"].asString());
			if(!faceAttributesNode["Beard"].isNull())
				facesObject.faceAttributes.beard = faceAttributesNode["Beard"].asString();
			auto faceBoundaryNode = faceAttributesNode["FaceBoundary"];
			if(!faceBoundaryNode["Top"].isNull())
				facesObject.faceAttributes.faceBoundary.top = std::stoi(faceBoundaryNode["Top"].asString());
			if(!faceBoundaryNode["Width"].isNull())
				facesObject.faceAttributes.faceBoundary.width = std::stoi(faceBoundaryNode["Width"].asString());
			if(!faceBoundaryNode["Height"].isNull())
				facesObject.faceAttributes.faceBoundary.height = std::stoi(faceBoundaryNode["Height"].asString());
			if(!faceBoundaryNode["Left"].isNull())
				facesObject.faceAttributes.faceBoundary.left = std::stoi(faceBoundaryNode["Left"].asString());
			auto headPoseNode = faceAttributesNode["HeadPose"];
			if(!headPoseNode["Pitch"].isNull())
				facesObject.faceAttributes.headPose.pitch = std::stof(headPoseNode["Pitch"].asString());
			if(!headPoseNode["Roll"].isNull())
				facesObject.faceAttributes.headPose.roll = std::stof(headPoseNode["Roll"].asString());
			if(!headPoseNode["Yaw"].isNull())
				facesObject.faceAttributes.headPose.yaw = std::stof(headPoseNode["Yaw"].asString());
			auto emotionDetailsNode = value["EmotionDetails"];
			if(!emotionDetailsNode["HAPPY"].isNull())
				facesObject.emotionDetails.hAPPY = std::stof(emotionDetailsNode["HAPPY"].asString());
			if(!emotionDetailsNode["SURPRISED"].isNull())
				facesObject.emotionDetails.sURPRISED = std::stof(emotionDetailsNode["SURPRISED"].asString());
			if(!emotionDetailsNode["CALM"].isNull())
				facesObject.emotionDetails.cALM = std::stof(emotionDetailsNode["CALM"].asString());
			if(!emotionDetailsNode["DISGUSTED"].isNull())
				facesObject.emotionDetails.dISGUSTED = std::stof(emotionDetailsNode["DISGUSTED"].asString());
			if(!emotionDetailsNode["ANGRY"].isNull())
				facesObject.emotionDetails.aNGRY = std::stof(emotionDetailsNode["ANGRY"].asString());
			if(!emotionDetailsNode["SAD"].isNull())
				facesObject.emotionDetails.sAD = std::stof(emotionDetailsNode["SAD"].asString());
			if(!emotionDetailsNode["SCARED"].isNull())
				facesObject.emotionDetails.sCARED = std::stof(emotionDetailsNode["SCARED"].asString());
			framesObject.faces.push_back(facesObject);
		}
		frames_.push_back(framesObject);
	}
	if(!value["VideoUri"].isNull())
		videoUri_ = value["VideoUri"].asString();
	if(!value["NextMarker"].isNull())
		nextMarker_ = value["NextMarker"].asString();
	if(!value["SetId"].isNull())
		setId_ = value["SetId"].asString();

}

std::vector<ListVideoFramesResult::FramesItem> ListVideoFramesResult::getFrames()const
{
	return frames_;
}

std::string ListVideoFramesResult::getVideoUri()const
{
	return videoUri_;
}

std::string ListVideoFramesResult::getNextMarker()const
{
	return nextMarker_;
}

std::string ListVideoFramesResult::getSetId()const
{
	return setId_;
}

