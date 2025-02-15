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

set(quickbi-public_public_header 
	include/alibabacloud/quickbi-public/Quickbi_publicClient.h
	include/alibabacloud/quickbi-public/Quickbi_publicExport.h )

set(quickbi-public_public_header_model 
	include/alibabacloud/quickbi-public/model/AddDataLevelPermissionRuleUsersRequest.h
	include/alibabacloud/quickbi-public/model/AddDataLevelPermissionRuleUsersResult.h
	include/alibabacloud/quickbi-public/model/AddDataLevelPermissionWhiteListRequest.h
	include/alibabacloud/quickbi-public/model/AddDataLevelPermissionWhiteListResult.h
	include/alibabacloud/quickbi-public/model/AddShareReportRequest.h
	include/alibabacloud/quickbi-public/model/AddShareReportResult.h
	include/alibabacloud/quickbi-public/model/AddUserRequest.h
	include/alibabacloud/quickbi-public/model/AddUserResult.h
	include/alibabacloud/quickbi-public/model/AddUserGroupMemberRequest.h
	include/alibabacloud/quickbi-public/model/AddUserGroupMemberResult.h
	include/alibabacloud/quickbi-public/model/AddUserGroupMembersRequest.h
	include/alibabacloud/quickbi-public/model/AddUserGroupMembersResult.h
	include/alibabacloud/quickbi-public/model/AddUserTagMetaRequest.h
	include/alibabacloud/quickbi-public/model/AddUserTagMetaResult.h
	include/alibabacloud/quickbi-public/model/AddUserToWorkspaceRequest.h
	include/alibabacloud/quickbi-public/model/AddUserToWorkspaceResult.h
	include/alibabacloud/quickbi-public/model/AddWorkspaceUsersRequest.h
	include/alibabacloud/quickbi-public/model/AddWorkspaceUsersResult.h
	include/alibabacloud/quickbi-public/model/AuthorizeMenuRequest.h
	include/alibabacloud/quickbi-public/model/AuthorizeMenuResult.h
	include/alibabacloud/quickbi-public/model/CancelAuthorizationMenuRequest.h
	include/alibabacloud/quickbi-public/model/CancelAuthorizationMenuResult.h
	include/alibabacloud/quickbi-public/model/CancelCollectionRequest.h
	include/alibabacloud/quickbi-public/model/CancelCollectionResult.h
	include/alibabacloud/quickbi-public/model/CancelReportShareRequest.h
	include/alibabacloud/quickbi-public/model/CancelReportShareResult.h
	include/alibabacloud/quickbi-public/model/ChangeVisibilityModelRequest.h
	include/alibabacloud/quickbi-public/model/ChangeVisibilityModelResult.h
	include/alibabacloud/quickbi-public/model/CheckReadableRequest.h
	include/alibabacloud/quickbi-public/model/CheckReadableResult.h
	include/alibabacloud/quickbi-public/model/CreateTicketRequest.h
	include/alibabacloud/quickbi-public/model/CreateTicketResult.h
	include/alibabacloud/quickbi-public/model/CreateUserGroupRequest.h
	include/alibabacloud/quickbi-public/model/CreateUserGroupResult.h
	include/alibabacloud/quickbi-public/model/DelayTicketExpireTimeRequest.h
	include/alibabacloud/quickbi-public/model/DelayTicketExpireTimeResult.h
	include/alibabacloud/quickbi-public/model/DeleteDataLevelPermissionRuleUsersRequest.h
	include/alibabacloud/quickbi-public/model/DeleteDataLevelPermissionRuleUsersResult.h
	include/alibabacloud/quickbi-public/model/DeleteDataLevelRuleConfigRequest.h
	include/alibabacloud/quickbi-public/model/DeleteDataLevelRuleConfigResult.h
	include/alibabacloud/quickbi-public/model/DeleteTicketRequest.h
	include/alibabacloud/quickbi-public/model/DeleteTicketResult.h
	include/alibabacloud/quickbi-public/model/DeleteUserRequest.h
	include/alibabacloud/quickbi-public/model/DeleteUserResult.h
	include/alibabacloud/quickbi-public/model/DeleteUserFromWorkspaceRequest.h
	include/alibabacloud/quickbi-public/model/DeleteUserFromWorkspaceResult.h
	include/alibabacloud/quickbi-public/model/DeleteUserGroupRequest.h
	include/alibabacloud/quickbi-public/model/DeleteUserGroupResult.h
	include/alibabacloud/quickbi-public/model/DeleteUserGroupMemberRequest.h
	include/alibabacloud/quickbi-public/model/DeleteUserGroupMemberResult.h
	include/alibabacloud/quickbi-public/model/DeleteUserGroupMembersRequest.h
	include/alibabacloud/quickbi-public/model/DeleteUserGroupMembersResult.h
	include/alibabacloud/quickbi-public/model/DeleteUserTagMetaRequest.h
	include/alibabacloud/quickbi-public/model/DeleteUserTagMetaResult.h
	include/alibabacloud/quickbi-public/model/GetUserGroupInfoRequest.h
	include/alibabacloud/quickbi-public/model/GetUserGroupInfoResult.h
	include/alibabacloud/quickbi-public/model/ListByUserGroupIdRequest.h
	include/alibabacloud/quickbi-public/model/ListByUserGroupIdResult.h
	include/alibabacloud/quickbi-public/model/ListCollectionsRequest.h
	include/alibabacloud/quickbi-public/model/ListCollectionsResult.h
	include/alibabacloud/quickbi-public/model/ListCubeDataLevelPermissionConfigRequest.h
	include/alibabacloud/quickbi-public/model/ListCubeDataLevelPermissionConfigResult.h
	include/alibabacloud/quickbi-public/model/ListDataLevelPermissionWhiteListRequest.h
	include/alibabacloud/quickbi-public/model/ListDataLevelPermissionWhiteListResult.h
	include/alibabacloud/quickbi-public/model/ListFavoriteReportsRequest.h
	include/alibabacloud/quickbi-public/model/ListFavoriteReportsResult.h
	include/alibabacloud/quickbi-public/model/ListPortalMenuAuthorizationRequest.h
	include/alibabacloud/quickbi-public/model/ListPortalMenuAuthorizationResult.h
	include/alibabacloud/quickbi-public/model/ListPortalMenusRequest.h
	include/alibabacloud/quickbi-public/model/ListPortalMenusResult.h
	include/alibabacloud/quickbi-public/model/ListRecentViewReportsRequest.h
	include/alibabacloud/quickbi-public/model/ListRecentViewReportsResult.h
	include/alibabacloud/quickbi-public/model/ListSharedReportsRequest.h
	include/alibabacloud/quickbi-public/model/ListSharedReportsResult.h
	include/alibabacloud/quickbi-public/model/ListUserGroupsByUserIdRequest.h
	include/alibabacloud/quickbi-public/model/ListUserGroupsByUserIdResult.h
	include/alibabacloud/quickbi-public/model/QueryDataServiceRequest.h
	include/alibabacloud/quickbi-public/model/QueryDataServiceResult.h
	include/alibabacloud/quickbi-public/model/QueryDatasetDetailInfoRequest.h
	include/alibabacloud/quickbi-public/model/QueryDatasetDetailInfoResult.h
	include/alibabacloud/quickbi-public/model/QueryDatasetInfoRequest.h
	include/alibabacloud/quickbi-public/model/QueryDatasetInfoResult.h
	include/alibabacloud/quickbi-public/model/QueryDatasetListRequest.h
	include/alibabacloud/quickbi-public/model/QueryDatasetListResult.h
	include/alibabacloud/quickbi-public/model/QueryDatasetSwitchInfoRequest.h
	include/alibabacloud/quickbi-public/model/QueryDatasetSwitchInfoResult.h
	include/alibabacloud/quickbi-public/model/QueryEmbeddedInfoRequest.h
	include/alibabacloud/quickbi-public/model/QueryEmbeddedInfoResult.h
	include/alibabacloud/quickbi-public/model/QueryEmbeddedStausRequest.h
	include/alibabacloud/quickbi-public/model/QueryEmbeddedStausResult.h
	include/alibabacloud/quickbi-public/model/QueryOrganizationWorkspaceListRequest.h
	include/alibabacloud/quickbi-public/model/QueryOrganizationWorkspaceListResult.h
	include/alibabacloud/quickbi-public/model/QueryReadableResourcesListByUserIdRequest.h
	include/alibabacloud/quickbi-public/model/QueryReadableResourcesListByUserIdResult.h
	include/alibabacloud/quickbi-public/model/QueryShareListRequest.h
	include/alibabacloud/quickbi-public/model/QueryShareListResult.h
	include/alibabacloud/quickbi-public/model/QuerySharesToUserListRequest.h
	include/alibabacloud/quickbi-public/model/QuerySharesToUserListResult.h
	include/alibabacloud/quickbi-public/model/QueryTicketInfoRequest.h
	include/alibabacloud/quickbi-public/model/QueryTicketInfoResult.h
	include/alibabacloud/quickbi-public/model/QueryUserGroupListByParentIdRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserGroupListByParentIdResult.h
	include/alibabacloud/quickbi-public/model/QueryUserGroupMemberRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserGroupMemberResult.h
	include/alibabacloud/quickbi-public/model/QueryUserInfoByAccountRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserInfoByAccountResult.h
	include/alibabacloud/quickbi-public/model/QueryUserInfoByUserIdRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserInfoByUserIdResult.h
	include/alibabacloud/quickbi-public/model/QueryUserListRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserListResult.h
	include/alibabacloud/quickbi-public/model/QueryUserRoleInfoInWorkspaceRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserRoleInfoInWorkspaceResult.h
	include/alibabacloud/quickbi-public/model/QueryUserTagMetaListRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserTagMetaListResult.h
	include/alibabacloud/quickbi-public/model/QueryUserTagValueListRequest.h
	include/alibabacloud/quickbi-public/model/QueryUserTagValueListResult.h
	include/alibabacloud/quickbi-public/model/QueryWorksRequest.h
	include/alibabacloud/quickbi-public/model/QueryWorksResult.h
	include/alibabacloud/quickbi-public/model/QueryWorksBloodRelationshipRequest.h
	include/alibabacloud/quickbi-public/model/QueryWorksBloodRelationshipResult.h
	include/alibabacloud/quickbi-public/model/QueryWorksByOrganizationRequest.h
	include/alibabacloud/quickbi-public/model/QueryWorksByOrganizationResult.h
	include/alibabacloud/quickbi-public/model/QueryWorksByWorkspaceRequest.h
	include/alibabacloud/quickbi-public/model/QueryWorksByWorkspaceResult.h
	include/alibabacloud/quickbi-public/model/QueryWorkspaceUserListRequest.h
	include/alibabacloud/quickbi-public/model/QueryWorkspaceUserListResult.h
	include/alibabacloud/quickbi-public/model/ResultCallbackRequest.h
	include/alibabacloud/quickbi-public/model/ResultCallbackResult.h
	include/alibabacloud/quickbi-public/model/SaveFavoritesRequest.h
	include/alibabacloud/quickbi-public/model/SaveFavoritesResult.h
	include/alibabacloud/quickbi-public/model/SetDataLevelPermissionExtraConfigRequest.h
	include/alibabacloud/quickbi-public/model/SetDataLevelPermissionExtraConfigResult.h
	include/alibabacloud/quickbi-public/model/SetDataLevelPermissionRuleConfigRequest.h
	include/alibabacloud/quickbi-public/model/SetDataLevelPermissionRuleConfigResult.h
	include/alibabacloud/quickbi-public/model/SetDataLevelPermissionWhiteListRequest.h
	include/alibabacloud/quickbi-public/model/SetDataLevelPermissionWhiteListResult.h
	include/alibabacloud/quickbi-public/model/UpdateDataLevelPermissionStatusRequest.h
	include/alibabacloud/quickbi-public/model/UpdateDataLevelPermissionStatusResult.h
	include/alibabacloud/quickbi-public/model/UpdateEmbeddedStatusRequest.h
	include/alibabacloud/quickbi-public/model/UpdateEmbeddedStatusResult.h
	include/alibabacloud/quickbi-public/model/UpdateTicketNumRequest.h
	include/alibabacloud/quickbi-public/model/UpdateTicketNumResult.h
	include/alibabacloud/quickbi-public/model/UpdateUserRequest.h
	include/alibabacloud/quickbi-public/model/UpdateUserResult.h
	include/alibabacloud/quickbi-public/model/UpdateUserGroupRequest.h
	include/alibabacloud/quickbi-public/model/UpdateUserGroupResult.h
	include/alibabacloud/quickbi-public/model/UpdateUserTagMetaRequest.h
	include/alibabacloud/quickbi-public/model/UpdateUserTagMetaResult.h
	include/alibabacloud/quickbi-public/model/UpdateUserTagValueRequest.h
	include/alibabacloud/quickbi-public/model/UpdateUserTagValueResult.h
	include/alibabacloud/quickbi-public/model/UpdateWorkspaceUserRoleRequest.h
	include/alibabacloud/quickbi-public/model/UpdateWorkspaceUserRoleResult.h
	include/alibabacloud/quickbi-public/model/UpdateWorkspaceUsersRoleRequest.h
	include/alibabacloud/quickbi-public/model/UpdateWorkspaceUsersRoleResult.h
	include/alibabacloud/quickbi-public/model/WithdrawAllUserGroupsRequest.h
	include/alibabacloud/quickbi-public/model/WithdrawAllUserGroupsResult.h )

set(quickbi-public_src 
	src/Quickbi-publicClient.cc
	src/model/AddDataLevelPermissionRuleUsersRequest.cc
	src/model/AddDataLevelPermissionRuleUsersResult.cc
	src/model/AddDataLevelPermissionWhiteListRequest.cc
	src/model/AddDataLevelPermissionWhiteListResult.cc
	src/model/AddShareReportRequest.cc
	src/model/AddShareReportResult.cc
	src/model/AddUserRequest.cc
	src/model/AddUserResult.cc
	src/model/AddUserGroupMemberRequest.cc
	src/model/AddUserGroupMemberResult.cc
	src/model/AddUserGroupMembersRequest.cc
	src/model/AddUserGroupMembersResult.cc
	src/model/AddUserTagMetaRequest.cc
	src/model/AddUserTagMetaResult.cc
	src/model/AddUserToWorkspaceRequest.cc
	src/model/AddUserToWorkspaceResult.cc
	src/model/AddWorkspaceUsersRequest.cc
	src/model/AddWorkspaceUsersResult.cc
	src/model/AuthorizeMenuRequest.cc
	src/model/AuthorizeMenuResult.cc
	src/model/CancelAuthorizationMenuRequest.cc
	src/model/CancelAuthorizationMenuResult.cc
	src/model/CancelCollectionRequest.cc
	src/model/CancelCollectionResult.cc
	src/model/CancelReportShareRequest.cc
	src/model/CancelReportShareResult.cc
	src/model/ChangeVisibilityModelRequest.cc
	src/model/ChangeVisibilityModelResult.cc
	src/model/CheckReadableRequest.cc
	src/model/CheckReadableResult.cc
	src/model/CreateTicketRequest.cc
	src/model/CreateTicketResult.cc
	src/model/CreateUserGroupRequest.cc
	src/model/CreateUserGroupResult.cc
	src/model/DelayTicketExpireTimeRequest.cc
	src/model/DelayTicketExpireTimeResult.cc
	src/model/DeleteDataLevelPermissionRuleUsersRequest.cc
	src/model/DeleteDataLevelPermissionRuleUsersResult.cc
	src/model/DeleteDataLevelRuleConfigRequest.cc
	src/model/DeleteDataLevelRuleConfigResult.cc
	src/model/DeleteTicketRequest.cc
	src/model/DeleteTicketResult.cc
	src/model/DeleteUserRequest.cc
	src/model/DeleteUserResult.cc
	src/model/DeleteUserFromWorkspaceRequest.cc
	src/model/DeleteUserFromWorkspaceResult.cc
	src/model/DeleteUserGroupRequest.cc
	src/model/DeleteUserGroupResult.cc
	src/model/DeleteUserGroupMemberRequest.cc
	src/model/DeleteUserGroupMemberResult.cc
	src/model/DeleteUserGroupMembersRequest.cc
	src/model/DeleteUserGroupMembersResult.cc
	src/model/DeleteUserTagMetaRequest.cc
	src/model/DeleteUserTagMetaResult.cc
	src/model/GetUserGroupInfoRequest.cc
	src/model/GetUserGroupInfoResult.cc
	src/model/ListByUserGroupIdRequest.cc
	src/model/ListByUserGroupIdResult.cc
	src/model/ListCollectionsRequest.cc
	src/model/ListCollectionsResult.cc
	src/model/ListCubeDataLevelPermissionConfigRequest.cc
	src/model/ListCubeDataLevelPermissionConfigResult.cc
	src/model/ListDataLevelPermissionWhiteListRequest.cc
	src/model/ListDataLevelPermissionWhiteListResult.cc
	src/model/ListFavoriteReportsRequest.cc
	src/model/ListFavoriteReportsResult.cc
	src/model/ListPortalMenuAuthorizationRequest.cc
	src/model/ListPortalMenuAuthorizationResult.cc
	src/model/ListPortalMenusRequest.cc
	src/model/ListPortalMenusResult.cc
	src/model/ListRecentViewReportsRequest.cc
	src/model/ListRecentViewReportsResult.cc
	src/model/ListSharedReportsRequest.cc
	src/model/ListSharedReportsResult.cc
	src/model/ListUserGroupsByUserIdRequest.cc
	src/model/ListUserGroupsByUserIdResult.cc
	src/model/QueryDataServiceRequest.cc
	src/model/QueryDataServiceResult.cc
	src/model/QueryDatasetDetailInfoRequest.cc
	src/model/QueryDatasetDetailInfoResult.cc
	src/model/QueryDatasetInfoRequest.cc
	src/model/QueryDatasetInfoResult.cc
	src/model/QueryDatasetListRequest.cc
	src/model/QueryDatasetListResult.cc
	src/model/QueryDatasetSwitchInfoRequest.cc
	src/model/QueryDatasetSwitchInfoResult.cc
	src/model/QueryEmbeddedInfoRequest.cc
	src/model/QueryEmbeddedInfoResult.cc
	src/model/QueryEmbeddedStausRequest.cc
	src/model/QueryEmbeddedStausResult.cc
	src/model/QueryOrganizationWorkspaceListRequest.cc
	src/model/QueryOrganizationWorkspaceListResult.cc
	src/model/QueryReadableResourcesListByUserIdRequest.cc
	src/model/QueryReadableResourcesListByUserIdResult.cc
	src/model/QueryShareListRequest.cc
	src/model/QueryShareListResult.cc
	src/model/QuerySharesToUserListRequest.cc
	src/model/QuerySharesToUserListResult.cc
	src/model/QueryTicketInfoRequest.cc
	src/model/QueryTicketInfoResult.cc
	src/model/QueryUserGroupListByParentIdRequest.cc
	src/model/QueryUserGroupListByParentIdResult.cc
	src/model/QueryUserGroupMemberRequest.cc
	src/model/QueryUserGroupMemberResult.cc
	src/model/QueryUserInfoByAccountRequest.cc
	src/model/QueryUserInfoByAccountResult.cc
	src/model/QueryUserInfoByUserIdRequest.cc
	src/model/QueryUserInfoByUserIdResult.cc
	src/model/QueryUserListRequest.cc
	src/model/QueryUserListResult.cc
	src/model/QueryUserRoleInfoInWorkspaceRequest.cc
	src/model/QueryUserRoleInfoInWorkspaceResult.cc
	src/model/QueryUserTagMetaListRequest.cc
	src/model/QueryUserTagMetaListResult.cc
	src/model/QueryUserTagValueListRequest.cc
	src/model/QueryUserTagValueListResult.cc
	src/model/QueryWorksRequest.cc
	src/model/QueryWorksResult.cc
	src/model/QueryWorksBloodRelationshipRequest.cc
	src/model/QueryWorksBloodRelationshipResult.cc
	src/model/QueryWorksByOrganizationRequest.cc
	src/model/QueryWorksByOrganizationResult.cc
	src/model/QueryWorksByWorkspaceRequest.cc
	src/model/QueryWorksByWorkspaceResult.cc
	src/model/QueryWorkspaceUserListRequest.cc
	src/model/QueryWorkspaceUserListResult.cc
	src/model/ResultCallbackRequest.cc
	src/model/ResultCallbackResult.cc
	src/model/SaveFavoritesRequest.cc
	src/model/SaveFavoritesResult.cc
	src/model/SetDataLevelPermissionExtraConfigRequest.cc
	src/model/SetDataLevelPermissionExtraConfigResult.cc
	src/model/SetDataLevelPermissionRuleConfigRequest.cc
	src/model/SetDataLevelPermissionRuleConfigResult.cc
	src/model/SetDataLevelPermissionWhiteListRequest.cc
	src/model/SetDataLevelPermissionWhiteListResult.cc
	src/model/UpdateDataLevelPermissionStatusRequest.cc
	src/model/UpdateDataLevelPermissionStatusResult.cc
	src/model/UpdateEmbeddedStatusRequest.cc
	src/model/UpdateEmbeddedStatusResult.cc
	src/model/UpdateTicketNumRequest.cc
	src/model/UpdateTicketNumResult.cc
	src/model/UpdateUserRequest.cc
	src/model/UpdateUserResult.cc
	src/model/UpdateUserGroupRequest.cc
	src/model/UpdateUserGroupResult.cc
	src/model/UpdateUserTagMetaRequest.cc
	src/model/UpdateUserTagMetaResult.cc
	src/model/UpdateUserTagValueRequest.cc
	src/model/UpdateUserTagValueResult.cc
	src/model/UpdateWorkspaceUserRoleRequest.cc
	src/model/UpdateWorkspaceUserRoleResult.cc
	src/model/UpdateWorkspaceUsersRoleRequest.cc
	src/model/UpdateWorkspaceUsersRoleResult.cc
	src/model/WithdrawAllUserGroupsRequest.cc
	src/model/WithdrawAllUserGroupsResult.cc )

add_library(quickbi-public ${LIB_TYPE}
	${quickbi-public_public_header}
	${quickbi-public_public_header_model}
	${quickbi-public_src})

set_target_properties(quickbi-public
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}quickbi-public
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(quickbi-public
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_QUICKBI_PUBLIC_LIBRARY)
endif()

target_include_directories(quickbi-public
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(quickbi-public
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(quickbi-public
		jsoncpp)
	target_include_directories(quickbi-public
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(quickbi-public
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(quickbi-public
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(quickbi-public
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(quickbi-public
		jsoncpp)
endif()

install(FILES ${quickbi-public_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/quickbi-public)
install(FILES ${quickbi-public_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/quickbi-public/model)
install(TARGETS quickbi-public
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)