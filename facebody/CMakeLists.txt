#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(facebody_public_header 
	include/alibabacloud/facebody/FacebodyClient.h
	include/alibabacloud/facebody/FacebodyExport.h )

set(facebody_public_header_model 
	include/alibabacloud/facebody/model/AddBodyTraceRequest.h
	include/alibabacloud/facebody/model/AddBodyTraceResult.h
	include/alibabacloud/facebody/model/AddFaceRequest.h
	include/alibabacloud/facebody/model/AddFaceResult.h
	include/alibabacloud/facebody/model/AddFaceEntityRequest.h
	include/alibabacloud/facebody/model/AddFaceEntityResult.h
	include/alibabacloud/facebody/model/AddFaceImageTemplateRequest.h
	include/alibabacloud/facebody/model/AddFaceImageTemplateResult.h
	include/alibabacloud/facebody/model/BatchAddFacesRequest.h
	include/alibabacloud/facebody/model/BatchAddFacesResult.h
	include/alibabacloud/facebody/model/BeautifyBodyRequest.h
	include/alibabacloud/facebody/model/BeautifyBodyResult.h
	include/alibabacloud/facebody/model/BlurFaceRequest.h
	include/alibabacloud/facebody/model/BlurFaceResult.h
	include/alibabacloud/facebody/model/BodyPostureRequest.h
	include/alibabacloud/facebody/model/BodyPostureResult.h
	include/alibabacloud/facebody/model/CompareFaceRequest.h
	include/alibabacloud/facebody/model/CompareFaceResult.h
	include/alibabacloud/facebody/model/CountCrowdRequest.h
	include/alibabacloud/facebody/model/CountCrowdResult.h
	include/alibabacloud/facebody/model/CreateBodyDbRequest.h
	include/alibabacloud/facebody/model/CreateBodyDbResult.h
	include/alibabacloud/facebody/model/CreateBodyPersonRequest.h
	include/alibabacloud/facebody/model/CreateBodyPersonResult.h
	include/alibabacloud/facebody/model/CreateFaceDbRequest.h
	include/alibabacloud/facebody/model/CreateFaceDbResult.h
	include/alibabacloud/facebody/model/DeleteBodyDbRequest.h
	include/alibabacloud/facebody/model/DeleteBodyDbResult.h
	include/alibabacloud/facebody/model/DeleteBodyPersonRequest.h
	include/alibabacloud/facebody/model/DeleteBodyPersonResult.h
	include/alibabacloud/facebody/model/DeleteFaceRequest.h
	include/alibabacloud/facebody/model/DeleteFaceResult.h
	include/alibabacloud/facebody/model/DeleteFaceDbRequest.h
	include/alibabacloud/facebody/model/DeleteFaceDbResult.h
	include/alibabacloud/facebody/model/DeleteFaceEntityRequest.h
	include/alibabacloud/facebody/model/DeleteFaceEntityResult.h
	include/alibabacloud/facebody/model/DeleteFaceImageTemplateRequest.h
	include/alibabacloud/facebody/model/DeleteFaceImageTemplateResult.h
	include/alibabacloud/facebody/model/DetectBodyCountRequest.h
	include/alibabacloud/facebody/model/DetectBodyCountResult.h
	include/alibabacloud/facebody/model/DetectCelebrityRequest.h
	include/alibabacloud/facebody/model/DetectCelebrityResult.h
	include/alibabacloud/facebody/model/DetectChefCapRequest.h
	include/alibabacloud/facebody/model/DetectChefCapResult.h
	include/alibabacloud/facebody/model/DetectFaceRequest.h
	include/alibabacloud/facebody/model/DetectFaceResult.h
	include/alibabacloud/facebody/model/DetectIPCPedestrianRequest.h
	include/alibabacloud/facebody/model/DetectIPCPedestrianResult.h
	include/alibabacloud/facebody/model/DetectLivingFaceRequest.h
	include/alibabacloud/facebody/model/DetectLivingFaceResult.h
	include/alibabacloud/facebody/model/DetectPedestrianRequest.h
	include/alibabacloud/facebody/model/DetectPedestrianResult.h
	include/alibabacloud/facebody/model/DetectPedestrianIntrusionRequest.h
	include/alibabacloud/facebody/model/DetectPedestrianIntrusionResult.h
	include/alibabacloud/facebody/model/DetectVideoLivingFaceRequest.h
	include/alibabacloud/facebody/model/DetectVideoLivingFaceResult.h
	include/alibabacloud/facebody/model/EnhanceFaceRequest.h
	include/alibabacloud/facebody/model/EnhanceFaceResult.h
	include/alibabacloud/facebody/model/ExtractFingerPrintRequest.h
	include/alibabacloud/facebody/model/ExtractFingerPrintResult.h
	include/alibabacloud/facebody/model/ExtractPedestrianFeatureAttrRequest.h
	include/alibabacloud/facebody/model/ExtractPedestrianFeatureAttrResult.h
	include/alibabacloud/facebody/model/ExtractPedestrianFeatureAttributeRequest.h
	include/alibabacloud/facebody/model/ExtractPedestrianFeatureAttributeResult.h
	include/alibabacloud/facebody/model/FaceBeautyRequest.h
	include/alibabacloud/facebody/model/FaceBeautyResult.h
	include/alibabacloud/facebody/model/FaceFilterRequest.h
	include/alibabacloud/facebody/model/FaceFilterResult.h
	include/alibabacloud/facebody/model/FaceMakeupRequest.h
	include/alibabacloud/facebody/model/FaceMakeupResult.h
	include/alibabacloud/facebody/model/FaceTidyupRequest.h
	include/alibabacloud/facebody/model/FaceTidyupResult.h
	include/alibabacloud/facebody/model/GenRealPersonVerificationTokenRequest.h
	include/alibabacloud/facebody/model/GenRealPersonVerificationTokenResult.h
	include/alibabacloud/facebody/model/GenerateHumanAnimeStyleRequest.h
	include/alibabacloud/facebody/model/GenerateHumanAnimeStyleResult.h
	include/alibabacloud/facebody/model/GenerateHumanSketchStyleRequest.h
	include/alibabacloud/facebody/model/GenerateHumanSketchStyleResult.h
	include/alibabacloud/facebody/model/GetBodyPersonRequest.h
	include/alibabacloud/facebody/model/GetBodyPersonResult.h
	include/alibabacloud/facebody/model/GetFaceEntityRequest.h
	include/alibabacloud/facebody/model/GetFaceEntityResult.h
	include/alibabacloud/facebody/model/GetRealPersonVerificationResultRequest.h
	include/alibabacloud/facebody/model/GetRealPersonVerificationResultResult.h
	include/alibabacloud/facebody/model/HandPostureRequest.h
	include/alibabacloud/facebody/model/HandPostureResult.h
	include/alibabacloud/facebody/model/LiquifyFaceRequest.h
	include/alibabacloud/facebody/model/LiquifyFaceResult.h
	include/alibabacloud/facebody/model/ListBodyDbsRequest.h
	include/alibabacloud/facebody/model/ListBodyDbsResult.h
	include/alibabacloud/facebody/model/ListBodyPersonRequest.h
	include/alibabacloud/facebody/model/ListBodyPersonResult.h
	include/alibabacloud/facebody/model/ListFaceDbsRequest.h
	include/alibabacloud/facebody/model/ListFaceDbsResult.h
	include/alibabacloud/facebody/model/ListFaceEntitiesRequest.h
	include/alibabacloud/facebody/model/ListFaceEntitiesResult.h
	include/alibabacloud/facebody/model/MergeImageFaceRequest.h
	include/alibabacloud/facebody/model/MergeImageFaceResult.h
	include/alibabacloud/facebody/model/MonitorExaminationRequest.h
	include/alibabacloud/facebody/model/MonitorExaminationResult.h
	include/alibabacloud/facebody/model/PedestrianDetectAttributeRequest.h
	include/alibabacloud/facebody/model/PedestrianDetectAttributeResult.h
	include/alibabacloud/facebody/model/QueryFaceImageTemplateRequest.h
	include/alibabacloud/facebody/model/QueryFaceImageTemplateResult.h
	include/alibabacloud/facebody/model/RecognizeActionRequest.h
	include/alibabacloud/facebody/model/RecognizeActionResult.h
	include/alibabacloud/facebody/model/RecognizeExpressionRequest.h
	include/alibabacloud/facebody/model/RecognizeExpressionResult.h
	include/alibabacloud/facebody/model/RecognizeFaceRequest.h
	include/alibabacloud/facebody/model/RecognizeFaceResult.h
	include/alibabacloud/facebody/model/RecognizeHandGestureRequest.h
	include/alibabacloud/facebody/model/RecognizeHandGestureResult.h
	include/alibabacloud/facebody/model/RecognizePublicFaceRequest.h
	include/alibabacloud/facebody/model/RecognizePublicFaceResult.h
	include/alibabacloud/facebody/model/RetouchBodyRequest.h
	include/alibabacloud/facebody/model/RetouchBodyResult.h
	include/alibabacloud/facebody/model/RetouchSkinRequest.h
	include/alibabacloud/facebody/model/RetouchSkinResult.h
	include/alibabacloud/facebody/model/SearchBodyTraceRequest.h
	include/alibabacloud/facebody/model/SearchBodyTraceResult.h
	include/alibabacloud/facebody/model/SearchFaceRequest.h
	include/alibabacloud/facebody/model/SearchFaceResult.h
	include/alibabacloud/facebody/model/SwapFacialFeaturesRequest.h
	include/alibabacloud/facebody/model/SwapFacialFeaturesResult.h
	include/alibabacloud/facebody/model/UpdateFaceEntityRequest.h
	include/alibabacloud/facebody/model/UpdateFaceEntityResult.h
	include/alibabacloud/facebody/model/VerifyFaceMaskRequest.h
	include/alibabacloud/facebody/model/VerifyFaceMaskResult.h )

set(facebody_src 
	src/FacebodyClient.cc
	src/model/AddBodyTraceRequest.cc
	src/model/AddBodyTraceResult.cc
	src/model/AddFaceRequest.cc
	src/model/AddFaceResult.cc
	src/model/AddFaceEntityRequest.cc
	src/model/AddFaceEntityResult.cc
	src/model/AddFaceImageTemplateRequest.cc
	src/model/AddFaceImageTemplateResult.cc
	src/model/BatchAddFacesRequest.cc
	src/model/BatchAddFacesResult.cc
	src/model/BeautifyBodyRequest.cc
	src/model/BeautifyBodyResult.cc
	src/model/BlurFaceRequest.cc
	src/model/BlurFaceResult.cc
	src/model/BodyPostureRequest.cc
	src/model/BodyPostureResult.cc
	src/model/CompareFaceRequest.cc
	src/model/CompareFaceResult.cc
	src/model/CountCrowdRequest.cc
	src/model/CountCrowdResult.cc
	src/model/CreateBodyDbRequest.cc
	src/model/CreateBodyDbResult.cc
	src/model/CreateBodyPersonRequest.cc
	src/model/CreateBodyPersonResult.cc
	src/model/CreateFaceDbRequest.cc
	src/model/CreateFaceDbResult.cc
	src/model/DeleteBodyDbRequest.cc
	src/model/DeleteBodyDbResult.cc
	src/model/DeleteBodyPersonRequest.cc
	src/model/DeleteBodyPersonResult.cc
	src/model/DeleteFaceRequest.cc
	src/model/DeleteFaceResult.cc
	src/model/DeleteFaceDbRequest.cc
	src/model/DeleteFaceDbResult.cc
	src/model/DeleteFaceEntityRequest.cc
	src/model/DeleteFaceEntityResult.cc
	src/model/DeleteFaceImageTemplateRequest.cc
	src/model/DeleteFaceImageTemplateResult.cc
	src/model/DetectBodyCountRequest.cc
	src/model/DetectBodyCountResult.cc
	src/model/DetectCelebrityRequest.cc
	src/model/DetectCelebrityResult.cc
	src/model/DetectChefCapRequest.cc
	src/model/DetectChefCapResult.cc
	src/model/DetectFaceRequest.cc
	src/model/DetectFaceResult.cc
	src/model/DetectIPCPedestrianRequest.cc
	src/model/DetectIPCPedestrianResult.cc
	src/model/DetectLivingFaceRequest.cc
	src/model/DetectLivingFaceResult.cc
	src/model/DetectPedestrianRequest.cc
	src/model/DetectPedestrianResult.cc
	src/model/DetectPedestrianIntrusionRequest.cc
	src/model/DetectPedestrianIntrusionResult.cc
	src/model/DetectVideoLivingFaceRequest.cc
	src/model/DetectVideoLivingFaceResult.cc
	src/model/EnhanceFaceRequest.cc
	src/model/EnhanceFaceResult.cc
	src/model/ExtractFingerPrintRequest.cc
	src/model/ExtractFingerPrintResult.cc
	src/model/ExtractPedestrianFeatureAttrRequest.cc
	src/model/ExtractPedestrianFeatureAttrResult.cc
	src/model/ExtractPedestrianFeatureAttributeRequest.cc
	src/model/ExtractPedestrianFeatureAttributeResult.cc
	src/model/FaceBeautyRequest.cc
	src/model/FaceBeautyResult.cc
	src/model/FaceFilterRequest.cc
	src/model/FaceFilterResult.cc
	src/model/FaceMakeupRequest.cc
	src/model/FaceMakeupResult.cc
	src/model/FaceTidyupRequest.cc
	src/model/FaceTidyupResult.cc
	src/model/GenRealPersonVerificationTokenRequest.cc
	src/model/GenRealPersonVerificationTokenResult.cc
	src/model/GenerateHumanAnimeStyleRequest.cc
	src/model/GenerateHumanAnimeStyleResult.cc
	src/model/GenerateHumanSketchStyleRequest.cc
	src/model/GenerateHumanSketchStyleResult.cc
	src/model/GetBodyPersonRequest.cc
	src/model/GetBodyPersonResult.cc
	src/model/GetFaceEntityRequest.cc
	src/model/GetFaceEntityResult.cc
	src/model/GetRealPersonVerificationResultRequest.cc
	src/model/GetRealPersonVerificationResultResult.cc
	src/model/HandPostureRequest.cc
	src/model/HandPostureResult.cc
	src/model/LiquifyFaceRequest.cc
	src/model/LiquifyFaceResult.cc
	src/model/ListBodyDbsRequest.cc
	src/model/ListBodyDbsResult.cc
	src/model/ListBodyPersonRequest.cc
	src/model/ListBodyPersonResult.cc
	src/model/ListFaceDbsRequest.cc
	src/model/ListFaceDbsResult.cc
	src/model/ListFaceEntitiesRequest.cc
	src/model/ListFaceEntitiesResult.cc
	src/model/MergeImageFaceRequest.cc
	src/model/MergeImageFaceResult.cc
	src/model/MonitorExaminationRequest.cc
	src/model/MonitorExaminationResult.cc
	src/model/PedestrianDetectAttributeRequest.cc
	src/model/PedestrianDetectAttributeResult.cc
	src/model/QueryFaceImageTemplateRequest.cc
	src/model/QueryFaceImageTemplateResult.cc
	src/model/RecognizeActionRequest.cc
	src/model/RecognizeActionResult.cc
	src/model/RecognizeExpressionRequest.cc
	src/model/RecognizeExpressionResult.cc
	src/model/RecognizeFaceRequest.cc
	src/model/RecognizeFaceResult.cc
	src/model/RecognizeHandGestureRequest.cc
	src/model/RecognizeHandGestureResult.cc
	src/model/RecognizePublicFaceRequest.cc
	src/model/RecognizePublicFaceResult.cc
	src/model/RetouchBodyRequest.cc
	src/model/RetouchBodyResult.cc
	src/model/RetouchSkinRequest.cc
	src/model/RetouchSkinResult.cc
	src/model/SearchBodyTraceRequest.cc
	src/model/SearchBodyTraceResult.cc
	src/model/SearchFaceRequest.cc
	src/model/SearchFaceResult.cc
	src/model/SwapFacialFeaturesRequest.cc
	src/model/SwapFacialFeaturesResult.cc
	src/model/UpdateFaceEntityRequest.cc
	src/model/UpdateFaceEntityResult.cc
	src/model/VerifyFaceMaskRequest.cc
	src/model/VerifyFaceMaskResult.cc )

add_library(facebody ${LIB_TYPE}
	${facebody_public_header}
	${facebody_public_header_model}
	${facebody_src})

set_target_properties(facebody
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}facebody
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(facebody
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_FACEBODY_LIBRARY)
endif()

target_include_directories(facebody
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(facebody
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(facebody
		jsoncpp)
	target_include_directories(facebody
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(facebody
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(facebody
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(facebody
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(facebody
		jsoncpp)
endif()

install(FILES ${facebody_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/facebody)
install(FILES ${facebody_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/facebody/model)
install(TARGETS facebody
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)