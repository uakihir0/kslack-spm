#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KslackCoreAction, KslackCoreActionCompanion, KslackCoreActionOption, KslackCoreActionOptionCompanion, KslackCoreActionOptionGroup, KslackCoreActionOptionGroupCompanion, KslackCoreAddress, KslackCoreAddressCompanion, KslackCoreAdminAppsApproveRequest, KslackCoreAdminAppsApproveResponse, KslackCoreAdminAppsApproveResponseCompanion, KslackCoreAdminAppsRequestsListRequest, KslackCoreAdminAppsRequestsListResponse, KslackCoreAdminAppsRequestsListResponseCompanion, KslackCoreAdminAppsRestrictRequest, KslackCoreAdminAppsRestrictResponse, KslackCoreAdminAppsRestrictResponseCompanion, KslackCoreAdminInviteRequestsApproveRequest, KslackCoreAdminInviteRequestsApproveResponse, KslackCoreAdminInviteRequestsApproveResponseCompanion, KslackCoreAdminInviteRequestsApprovedListRequest, KslackCoreAdminInviteRequestsApprovedListResponse, KslackCoreAdminInviteRequestsApprovedListResponseCompanion, KslackCoreAdminInviteRequestsDeniedListRequest, KslackCoreAdminInviteRequestsDeniedListResponse, KslackCoreAdminInviteRequestsDeniedListResponseCompanion, KslackCoreAdminInviteRequestsDenyRequest, KslackCoreAdminInviteRequestsDenyResponse, KslackCoreAdminInviteRequestsDenyResponseCompanion, KslackCoreAdminInviteRequestsListRequest, KslackCoreAdminInviteRequestsListResponse, KslackCoreAdminInviteRequestsListResponseCompanion, KslackCoreAdminTeamsAdminsListRequest, KslackCoreAdminTeamsAdminsListResponse, KslackCoreAdminTeamsAdminsListResponseCompanion, KslackCoreAdminTeamsCreateRequest, KslackCoreAdminTeamsCreateResponse, KslackCoreAdminTeamsCreateResponseCompanion, KslackCoreAdminTeamsOwnersListRequest, KslackCoreAdminTeamsOwnersListResponse, KslackCoreAdminTeamsOwnersListResponseCompanion, KslackCoreAdminTeamsSettingsSetDescriptionRequest, KslackCoreAdminTeamsSettingsSetDescriptionResponse, KslackCoreAdminTeamsSettingsSetDescriptionResponseCompanion, KslackCoreAdminTeamsSettingsSetIconRequest, KslackCoreAdminTeamsSettingsSetIconResponse, KslackCoreAdminTeamsSettingsSetIconResponseCompanion, KslackCoreAdminTeamsSettingsSetNameRequest, KslackCoreAdminTeamsSettingsSetNameResponse, KslackCoreAdminTeamsSettingsSetNameResponseCompanion, KslackCoreAdminUsersAssignRequest, KslackCoreAdminUsersAssignResponse, KslackCoreAdminUsersAssignResponseCompanion, KslackCoreAdminUsersInviteRequest, KslackCoreAdminUsersInviteResponse, KslackCoreAdminUsersInviteResponseCompanion, KslackCoreAdminUsersRemoveRequest, KslackCoreAdminUsersRemoveResponse, KslackCoreAdminUsersRemoveResponseCompanion, KslackCoreAdminUsersSessionResetRequest, KslackCoreAdminUsersSessionResetResponse, KslackCoreAdminUsersSessionResetResponseCompanion, KslackCoreAdminUsersSetAdminRequest, KslackCoreAdminUsersSetAdminResponse, KslackCoreAdminUsersSetAdminResponseCompanion, KslackCoreAdminUsersSetOwnerRequest, KslackCoreAdminUsersSetOwnerResponse, KslackCoreAdminUsersSetOwnerResponseCompanion, KslackCoreAdminUsersSetRegularRequest, KslackCoreAdminUsersSetRegularResponse, KslackCoreAdminUsersSetRegularResponseCompanion, KslackCoreApiTestRequest, KslackCoreApiTestResponse, KslackCoreApiTestResponseCompanion, KslackCoreApp, KslackCoreAppCompanion, KslackCoreAppIcons, KslackCoreAppIconsCompanion, KslackCoreAppRequest, KslackCoreAppRequestCompanion, KslackCoreAppsConnectionsOpenRequest, KslackCoreAppsConnectionsOpenResponse, KslackCoreAppsConnectionsOpenResponseCompanion, KslackCoreAppsUninstallRequest, KslackCoreAppsUninstallResponse, KslackCoreAppsUninstallResponseCompanion, KslackCoreArgs, KslackCoreArgsCompanion, KslackCoreAttachment, KslackCoreAttachmentCompanion, KslackCoreAttachmentMetadata, KslackCoreAttachmentMetadataCompanion, KslackCoreAuthRevokeRequest, KslackCoreAuthRevokeResponse, KslackCoreAuthRevokeResponseCompanion, KslackCoreAuthTeamsListRequest, KslackCoreAuthTeamsListResponse, KslackCoreAuthTeamsListResponseCompanion, KslackCoreAuthTestRequest, KslackCoreAuthTestResponse, KslackCoreAuthTestResponseCompanion, KslackCoreBillableInfo, KslackCoreBillableInfoCompanion, KslackCoreBookmark, KslackCoreBookmarkCompanion, KslackCoreBookmarksAddRequest, KslackCoreBookmarksAddResponse, KslackCoreBookmarksAddResponseCompanion, KslackCoreBookmarksEditRequest, KslackCoreBookmarksEditResponse, KslackCoreBookmarksEditResponseCompanion, KslackCoreBookmarksListRequest, KslackCoreBookmarksListResponse, KslackCoreBookmarksListResponseCompanion, KslackCoreBookmarksRemoveRequest, KslackCoreBookmarksRemoveResponse, KslackCoreBookmarksRemoveResponseCompanion, KslackCoreBot, KslackCoreBotCompanion, KslackCoreBotIcons, KslackCoreBotIconsCompanion, KslackCoreBotProfile, KslackCoreBotProfileCompanion, KslackCoreBotsInfoRequest, KslackCoreBotsInfoResponse, KslackCoreBotsInfoResponseCompanion, KslackCoreCall, KslackCoreCallCompanion, KslackCoreCallParticipant, KslackCoreCallParticipantCompanion, KslackCoreCallsAddRequest, KslackCoreCallsAddResponse, KslackCoreCallsAddResponseCompanion, KslackCoreCallsEndRequest, KslackCoreCallsEndResponse, KslackCoreCallsEndResponseCompanion, KslackCoreCallsInfoRequest, KslackCoreCallsInfoResponse, KslackCoreCallsInfoResponseCompanion, KslackCoreCallsParticipantsAddRequest, KslackCoreCallsParticipantsAddResponse, KslackCoreCallsParticipantsAddResponseCompanion, KslackCoreCallsParticipantsRemoveRequest, KslackCoreCallsParticipantsRemoveResponse, KslackCoreCallsParticipantsRemoveResponseCompanion, KslackCoreCallsUpdateRequest, KslackCoreCallsUpdateResponse, KslackCoreCallsUpdateResponseCompanion, KslackCoreChannel, KslackCoreChannelCompanion, KslackCoreChatAppendStreamRequest, KslackCoreChatAppendStreamResponse, KslackCoreChatAppendStreamResponseCompanion, KslackCoreChatDeleteRequest, KslackCoreChatDeleteResponse, KslackCoreChatDeleteResponseCompanion, KslackCoreChatDeleteScheduledMessageRequest, KslackCoreChatDeleteScheduledMessageResponse, KslackCoreChatDeleteScheduledMessageResponseCompanion, KslackCoreChatGetPermalinkRequest, KslackCoreChatGetPermalinkResponse, KslackCoreChatGetPermalinkResponseCompanion, KslackCoreChatMeMessageRequest, KslackCoreChatMeMessageResponse, KslackCoreChatMeMessageResponseCompanion, KslackCoreChatPostEphemeralRequest, KslackCoreChatPostEphemeralResponse, KslackCoreChatPostEphemeralResponseCompanion, KslackCoreChatPostMessageRequest, KslackCoreChatPostMessageResponse, KslackCoreChatPostMessageResponseCompanion, KslackCoreChatScheduleMessageRequest, KslackCoreChatScheduleMessageResponse, KslackCoreChatScheduleMessageResponseCompanion, KslackCoreChatScheduleMessagesListRequest, KslackCoreChatScheduleMessagesListResponse, KslackCoreChatScheduleMessagesListResponseCompanion, KslackCoreChatStartStreamRequest, KslackCoreChatStartStreamResponse, KslackCoreChatStartStreamResponseCompanion, KslackCoreChatStopStreamRequest, KslackCoreChatStopStreamResponse, KslackCoreChatStopStreamResponseCompanion, KslackCoreChatUnfurlRequest, KslackCoreChatUnfurlRequestUnfurlDetail, KslackCoreChatUnfurlResponse, KslackCoreChatUnfurlResponseCompanion, KslackCoreChatUpdateRequest, KslackCoreChatUpdateResponse, KslackCoreChatUpdateResponseCompanion, KslackCoreComment, KslackCoreCommentCompanion, KslackCoreConfirmation, KslackCoreConfirmationCompanion, KslackCoreConversation, KslackCoreConversationCompanion, KslackCoreConversationType, KslackCoreConversationTypeCompanion, KslackCoreConversationsAcceptSharedInviteRequest, KslackCoreConversationsAcceptSharedInviteResponse, KslackCoreConversationsAcceptSharedInviteResponseCompanion, KslackCoreConversationsApproveSharedInviteRequest, KslackCoreConversationsApproveSharedInviteResponse, KslackCoreConversationsApproveSharedInviteResponseCompanion, KslackCoreConversationsArchiveRequest, KslackCoreConversationsArchiveResponse, KslackCoreConversationsArchiveResponseCompanion, KslackCoreConversationsCanvasesCreateRequest, KslackCoreConversationsCanvasesCreateResponse, KslackCoreConversationsCanvasesCreateResponseCompanion, KslackCoreConversationsCloseRequest, KslackCoreConversationsCloseResponse, KslackCoreConversationsCloseResponseCompanion, KslackCoreConversationsCreateRequest, KslackCoreConversationsCreateResponse, KslackCoreConversationsCreateResponseCompanion, KslackCoreConversationsDeclineSharedInviteRequest, KslackCoreConversationsDeclineSharedInviteResponse, KslackCoreConversationsDeclineSharedInviteResponseCompanion, KslackCoreConversationsHistoryRequest, KslackCoreConversationsHistoryResponse, KslackCoreConversationsHistoryResponseCompanion, KslackCoreConversationsInfoRequest, KslackCoreConversationsInfoResponse, KslackCoreConversationsInfoResponseCompanion, KslackCoreConversationsInviteRequest, KslackCoreConversationsInviteResponse, KslackCoreConversationsInviteResponseCompanion, KslackCoreConversationsInviteSharedRequest, KslackCoreConversationsInviteSharedResponse, KslackCoreConversationsInviteSharedResponseCompanion, KslackCoreConversationsJoinRequest, KslackCoreConversationsJoinResponse, KslackCoreConversationsJoinResponseCompanion, KslackCoreConversationsKickRequest, KslackCoreConversationsKickResponse, KslackCoreConversationsKickResponseCompanion, KslackCoreConversationsLeaveRequest, KslackCoreConversationsLeaveResponse, KslackCoreConversationsLeaveResponseCompanion, KslackCoreConversationsListConnectInvitesRequest, KslackCoreConversationsListConnectInvitesResponse, KslackCoreConversationsListConnectInvitesResponseCompanion, KslackCoreConversationsListRequest, KslackCoreConversationsListResponse, KslackCoreConversationsListResponseCompanion, KslackCoreConversationsMarkRequest, KslackCoreConversationsMarkResponse, KslackCoreConversationsMarkResponseCompanion, KslackCoreConversationsMembersRequest, KslackCoreConversationsMembersResponse, KslackCoreConversationsMembersResponseCompanion, KslackCoreConversationsOpenRequest, KslackCoreConversationsOpenResponse, KslackCoreConversationsOpenResponseCompanion, KslackCoreConversationsRenameRequest, KslackCoreConversationsRenameResponse, KslackCoreConversationsRenameResponseCompanion, KslackCoreConversationsRepliesRequest, KslackCoreConversationsRepliesResponse, KslackCoreConversationsRepliesResponseCompanion, KslackCoreConversationsRequestSharedInviteApproveRequest, KslackCoreConversationsRequestSharedInviteApproveResponse, KslackCoreConversationsRequestSharedInviteApproveResponseCompanion, KslackCoreConversationsRequestSharedInviteDenyRequest, KslackCoreConversationsRequestSharedInviteDenyResponse, KslackCoreConversationsRequestSharedInviteDenyResponseCompanion, KslackCoreConversationsRequestSharedInviteListRequest, KslackCoreConversationsRequestSharedInviteListResponse, KslackCoreConversationsRequestSharedInviteListResponseCompanion, KslackCoreConversationsSetPurposeRequest, KslackCoreConversationsSetPurposeResponse, KslackCoreConversationsSetPurposeResponseCompanion, KslackCoreConversationsSetTopicRequest, KslackCoreConversationsSetTopicResponse, KslackCoreConversationsSetTopicResponseCompanion, KslackCoreConversationsUnarchiveRequest, KslackCoreConversationsUnarchiveResponse, KslackCoreConversationsUnarchiveResponseCompanion, KslackCoreCurrentStatus, KslackCoreCurrentStatusCompanion, KslackCoreDialog, KslackCoreDialogCompanion, KslackCoreDialogOpenRequest, KslackCoreDialogOpenResponse, KslackCoreDialogOpenResponseCompanion, KslackCoreDialogResponseMetadata, KslackCoreDialogResponseMetadataCompanion, KslackCoreDndEndDndRequest, KslackCoreDndEndDndResponse, KslackCoreDndEndDndResponseCompanion, KslackCoreDndEndSnoozeRequest, KslackCoreDndEndSnoozeResponse, KslackCoreDndEndSnoozeResponseCompanion, KslackCoreDndInfoRequest, KslackCoreDndInfoResponse, KslackCoreDndInfoResponseCompanion, KslackCoreDndSetSnoozeRequest, KslackCoreDndSetSnoozeResponse, KslackCoreDndSetSnoozeResponseCompanion, KslackCoreDndTeamInfoRequest, KslackCoreDndTeamInfoResponse, KslackCoreDndTeamInfoResponseCompanion, KslackCoreDndTeamMemberInfo, KslackCoreDndTeamMemberInfoCompanion, KslackCoreEdited, KslackCoreEditedCompanion, KslackCoreEmojiListRequest, KslackCoreEmojiListResponse, KslackCoreEmojiListResponseCompanion, KslackCoreEnterpriseUser, KslackCoreEnterpriseUserCompanion, KslackCoreError, KslackCoreErrorCompanion, KslackCoreExternalTeam, KslackCoreExternalTeamCompanion, KslackCoreField, KslackCoreFieldCompanion, KslackCoreFile, KslackCoreFileAddress, KslackCoreFileAddressCompanion, KslackCoreFileComment, KslackCoreFileCommentCompanion, KslackCoreFileCompanion, KslackCoreFilePinnedInfo, KslackCoreFilePinnedInfoCompanion, KslackCoreFileShareDetail, KslackCoreFileShareDetailCompanion, KslackCoreFileShares, KslackCoreFileSharesCompanion, KslackCoreFilesCompleteUploadExternalRequest, KslackCoreFilesCompleteUploadExternalResponse, KslackCoreFilesCompleteUploadExternalResponseCompanion, KslackCoreFilesDeleteRequest, KslackCoreFilesDeleteResponse, KslackCoreFilesDeleteResponseCompanion, KslackCoreFilesGetUploadURLExternalRequest, KslackCoreFilesGetUploadURLExternalResponse, KslackCoreFilesGetUploadURLExternalResponseCompanion, KslackCoreFilesInfoRequest, KslackCoreFilesInfoResponse, KslackCoreFilesInfoResponseCompanion, KslackCoreFilesListRequest, KslackCoreFilesListResponse, KslackCoreFilesListResponseCompanion, KslackCoreFilesRemoteAddRequest, KslackCoreFilesRemoteAddResponse, KslackCoreFilesRemoteAddResponseCompanion, KslackCoreFilesRemoteInfoRequest, KslackCoreFilesRemoteInfoResponse, KslackCoreFilesRemoteInfoResponseCompanion, KslackCoreFilesRemoteListRequest, KslackCoreFilesRemoteListResponse, KslackCoreFilesRemoteListResponseCompanion, KslackCoreFilesRemoteRemoveRequest, KslackCoreFilesRemoteRemoveResponse, KslackCoreFilesRemoteRemoveResponseCompanion, KslackCoreFilesRemoteShareRequest, KslackCoreFilesRemoteShareResponse, KslackCoreFilesRemoteShareResponseCompanion, KslackCoreFilesRemoteUpdateRequest, KslackCoreFilesRemoteUpdateResponse, KslackCoreFilesRemoteUpdateResponseCompanion, KslackCoreFilesRevokePublicURLRequest, KslackCoreFilesRevokePublicURLResponse, KslackCoreFilesRevokePublicURLResponseCompanion, KslackCoreFilesSharedPublicURLRequest, KslackCoreFilesSharedPublicURLResponse, KslackCoreFilesSharedPublicURLResponseCompanion, KslackCoreIntegrationLog, KslackCoreIntegrationLogCompanion, KslackCoreItem, KslackCoreItemCompanion, KslackCoreLatest, KslackCoreLatestCompanion, KslackCoreLogin, KslackCoreLoginCompanion, KslackCoreMatchedItem, KslackCoreMatchedItemCompanion, KslackCoreMessage, KslackCoreMessageCompanion, KslackCoreMessageEdited, KslackCoreMessageEditedCompanion, KslackCoreMessageIcons, KslackCoreMessageIconsCompanion, KslackCoreMessageItem, KslackCoreMessageItemCompanion, KslackCoreMessageItem_, KslackCoreMessageItem_Companion, KslackCoreMessageRoot, KslackCoreMessageRootCompanion, KslackCoreMigrationExchangeRequest, KslackCoreMigrationExchangeResponse, KslackCoreMigrationExchangeResponseCompanion, KslackCoreNote, KslackCoreNoteCompanion, KslackCoreOAuthAccessRequest, KslackCoreOAuthAccessResponse, KslackCoreOAuthAccessResponseCompanion, KslackCoreOAuthAuthedUser, KslackCoreOAuthAuthedUserCompanion, KslackCoreOAuthAuthorizingUser, KslackCoreOAuthAuthorizingUserCompanion, KslackCoreOAuthBot, KslackCoreOAuthBotCompanion, KslackCoreOAuthEnterprise, KslackCoreOAuthEnterpriseCompanion, KslackCoreOAuthIncomingWebhook, KslackCoreOAuthIncomingWebhookCompanion, KslackCoreOAuthInstallerUser, KslackCoreOAuthInstallerUserCompanion, KslackCoreOAuthScopes, KslackCoreOAuthScopesCompanion, KslackCoreOAuthTeam, KslackCoreOAuthTeamCompanion, KslackCoreOAuthTokenRequest, KslackCoreOAuthTokenResponse, KslackCoreOAuthTokenResponseCompanion, KslackCoreOAuthV2AccessRequest, KslackCoreOAuthV2AccessResponse, KslackCoreOAuthV2AccessResponseCompanion, KslackCoreOAuthV2ExchangeAuthedUser, KslackCoreOAuthV2ExchangeAuthedUserCompanion, KslackCoreOAuthV2ExchangeEnterprise, KslackCoreOAuthV2ExchangeEnterpriseCompanion, KslackCoreOAuthV2ExchangeRequest, KslackCoreOAuthV2ExchangeResponse, KslackCoreOAuthV2ExchangeResponseCompanion, KslackCoreOAuthV2ExchangeTeam, KslackCoreOAuthV2ExchangeTeamCompanion, KslackCoreOpenIDConnectTokenRequest, KslackCoreOpenIDConnectTokenResponse, KslackCoreOpenIDConnectTokenResponseCompanion, KslackCoreOpenIDConnectUserInfoRequest, KslackCoreOpenIDConnectUserInfoResponse, KslackCoreOpenIDConnectUserInfoResponseCompanion, KslackCoreOption, KslackCoreOptionCompanion, KslackCoreOtherItem, KslackCoreOtherItemCompanion, KslackCorePaging, KslackCorePagingCompanion, KslackCorePinsAddRequest, KslackCorePinsAddResponse, KslackCorePinsAddResponseCompanion, KslackCorePinsListRequest, KslackCorePinsListResponse, KslackCorePinsListResponseCompanion, KslackCorePinsRemoveRequest, KslackCorePinsRemoveResponse, KslackCorePinsRemoveResponseCompanion, KslackCorePrefs, KslackCorePrefsCompanion, KslackCorePreviousResolution, KslackCorePreviousResolutionCompanion, KslackCoreProfile, KslackCoreProfileCompanion, KslackCoreProfileField, KslackCoreProfileFieldCompanion, KslackCoreProfileOptions, KslackCoreProfileOptionsCompanion, KslackCoreProfilePermissions, KslackCoreProfilePermissionsCompanion, KslackCoreProfile_, KslackCoreProfile_Companion, KslackCoreProfiles, KslackCoreProfilesCompanion, KslackCorePurpose, KslackCorePurposeCompanion, KslackCoreReaction, KslackCoreReactionCompanion, KslackCoreReactionsAddRequest, KslackCoreReactionsAddResponse, KslackCoreReactionsAddResponseCompanion, KslackCoreReactionsGetRequest, KslackCoreReactionsGetResponse, KslackCoreReactionsGetResponseCompanion, KslackCoreReactionsListRequest, KslackCoreReactionsListResponse, KslackCoreReactionsListResponseCompanion, KslackCoreReactionsRemoveRequest, KslackCoreReactionsRemoveResponse, KslackCoreReactionsRemoveResponseCompanion, KslackCoreReminder, KslackCoreReminderCompanion, KslackCoreRemindersAddRequest, KslackCoreRemindersAddResponse, KslackCoreRemindersAddResponseCompanion, KslackCoreRemindersCompleteRequest, KslackCoreRemindersCompleteResponse, KslackCoreRemindersCompleteResponseCompanion, KslackCoreRemindersDeleteRequest, KslackCoreRemindersDeleteResponse, KslackCoreRemindersDeleteResponseCompanion, KslackCoreRemindersInfoRequest, KslackCoreRemindersInfoResponse, KslackCoreRemindersInfoResponseCompanion, KslackCoreRemindersListRequest, KslackCoreRemindersListResponse, KslackCoreRemindersListResponseCompanion, KslackCoreResponseMetadata, KslackCoreResponseMetadataCompanion, KslackCoreResponseMetadata_, KslackCoreResponseMetadata_Companion, KslackCoreScheduledMessage, KslackCoreScheduledMessageCompanion, KslackCoreScope, KslackCoreScopeCompanion, KslackCoreSearchAllRequest, KslackCoreSearchAllResponse, KslackCoreSearchAllResponseCompanion, KslackCoreSearchAllResponsePosts, KslackCoreSearchAllResponsePostsCompanion, KslackCoreSearchFilesRequest, KslackCoreSearchFilesResponse, KslackCoreSearchFilesResponseCompanion, KslackCoreSearchMessagesRequest, KslackCoreSearchMessagesResponse, KslackCoreSearchMessagesResponseCompanion, KslackCoreSearchPagination, KslackCoreSearchPaginationCompanion, KslackCoreSearchResult, KslackCoreSearchResultCompanion, KslackCoreSharedInvite, KslackCoreSharedInviteChannel, KslackCoreSharedInviteChannelCompanion, KslackCoreSharedInviteCompanion, KslackCoreSharedInvitePayload, KslackCoreSharedInvitePayloadCompanion, KslackCoreSlackApiResponse, KslackCoreSlackApiResponseCompanion, KslackCoreSlackIssue, KslackCoreSlackIssueCompanion, KslackCoreStarsAddRequest, KslackCoreStarsAddResponse, KslackCoreStarsAddResponseCompanion, KslackCoreStarsListRequest, KslackCoreStarsListResponse, KslackCoreStarsListResponseCompanion, KslackCoreStarsRemoveRequest, KslackCoreStarsRemoveResponse, KslackCoreStarsRemoveResponseCompanion, KslackCoreStatusEmojiDisplayInfo, KslackCoreStatusEmojiDisplayInfoCompanion, KslackCoreTeam, KslackCoreTeamAccessLogsRequest, KslackCoreTeamAccessLogsResponse, KslackCoreTeamAccessLogsResponseCompanion, KslackCoreTeamBillableInfoRequest, KslackCoreTeamBillableInfoResponse, KslackCoreTeamBillableInfoResponseCompanion, KslackCoreTeamBillingInfoRequest, KslackCoreTeamBillingInfoResponse, KslackCoreTeamBillingInfoResponseCompanion, KslackCoreTeamCompanion, KslackCoreTeamExternalTeamsDisconnectRequest, KslackCoreTeamExternalTeamsDisconnectResponse, KslackCoreTeamExternalTeamsDisconnectResponseCompanion, KslackCoreTeamExternalTeamsListRequest, KslackCoreTeamExternalTeamsListResponse, KslackCoreTeamExternalTeamsListResponseCompanion, KslackCoreTeamIcon, KslackCoreTeamIconCompanion, KslackCoreTeamInfoRequest, KslackCoreTeamInfoResponse, KslackCoreTeamInfoResponseCompanion, KslackCoreTeamIntegrationLogsRequest, KslackCoreTeamIntegrationLogsResponse, KslackCoreTeamIntegrationLogsResponseCompanion, KslackCoreTeamPreferencesListRequest, KslackCoreTeamPreferencesListResponse, KslackCoreTeamPreferencesListResponseCompanion, KslackCoreTeamProfileGetRequest, KslackCoreTeamProfileGetResponse, KslackCoreTeamProfileGetResponseCompanion, KslackCoreTeam_, KslackCoreTeam_Companion, KslackCoreTopic, KslackCoreTopicCompanion, KslackCoreType, KslackCoreTypeCompanion, KslackCoreUser, KslackCoreUserCompanion, KslackCoreUserGroup, KslackCoreUserGroupCompanion, KslackCoreUserGroupUsersUpdateResponse, KslackCoreUserGroupUsersUpdateResponseCompanion, KslackCoreUserGroupsCreateResponse, KslackCoreUserGroupsDisableResponse, KslackCoreUser_, KslackCoreUser_Companion, KslackCoreUsergroupUsersListRequest, KslackCoreUsergroupUsersListResponse, KslackCoreUsergroupUsersListResponseCompanion, KslackCoreUsergroupUsersUpdateRequest, KslackCoreUsergroupsCreateRequest, KslackCoreUsergroupsDisableRequest, KslackCoreUsergroupsEnableRequest, KslackCoreUsergroupsEnableResponse, KslackCoreUsergroupsEnableResponseCompanion, KslackCoreUsergroupsListRequest, KslackCoreUsergroupsListResponse, KslackCoreUsergroupsListResponseCompanion, KslackCoreUsergroupsUpdateRequest, KslackCoreUsergroupsUpdateResponse, KslackCoreUsergroupsUpdateResponseCompanion, KslackCoreUsersConversationsRequest, KslackCoreUsersConversationsResponse, KslackCoreUsersConversationsResponseCompanion, KslackCoreUsersDeletePhotoRequest, KslackCoreUsersDeletePhotoResponse, KslackCoreUsersDeletePhotoResponseCompanion, KslackCoreUsersDiscoverableContactsLookupRequest, KslackCoreUsersDiscoverableContactsLookupResponse, KslackCoreUsersDiscoverableContactsLookupResponseCompanion, KslackCoreUsersGetPresenceRequest, KslackCoreUsersGetPresenceResponse, KslackCoreUsersGetPresenceResponseCompanion, KslackCoreUsersIdentityRequest, KslackCoreUsersIdentityResponse, KslackCoreUsersIdentityResponseCompanion, KslackCoreUsersInfoRequest, KslackCoreUsersInfoResponse, KslackCoreUsersInfoResponseCompanion, KslackCoreUsersListRequest, KslackCoreUsersListResponse, KslackCoreUsersListResponseCompanion, KslackCoreUsersLookupByEmailRequest, KslackCoreUsersLookupByEmailResponse, KslackCoreUsersLookupByEmailResponseCompanion, KslackCoreUsersProfileGetRequest, KslackCoreUsersProfileGetResponse, KslackCoreUsersProfileGetResponseCompanion, KslackCoreUsersProfileSetRequest, KslackCoreUsersProfileSetResponse, KslackCoreUsersProfileSetResponseCompanion, KslackCoreUsersSetActiveRequest, KslackCoreUsersSetActiveResponse, KslackCoreUsersSetActiveResponseCompanion, KslackCoreUsersSetPhotoRequest, KslackCoreUsersSetPhotoResponse, KslackCoreUsersSetPhotoResponseCompanion, KslackCoreUsersSetPresenceRequest, KslackCoreUsersSetPresenceResponse, KslackCoreUsersSetPresenceResponseCompanion, KslackCoreView, KslackCoreViewCompanion, KslackCoreViewsOpenRequest, KslackCoreViewsOpenResponse, KslackCoreViewsOpenResponseCompanion, KslackCoreViewsPublishRequest, KslackCoreViewsPublishResponse, KslackCoreViewsPublishResponseCompanion, KslackCoreViewsPushRequest, KslackCoreViewsPushResponse, KslackCoreViewsPushResponseCompanion, KslackCoreViewsUpdateRequest, KslackCoreViewsUpdateResponse, KslackCoreViewsUpdateResponseCompanion, KslackKhttpclientHttpParameter, KslackKhttpclientHttpParameterCompanion, KslackKhttpclientHttpParameterType, KslackKotlinArray<T>, KslackKotlinByteArray, KslackKotlinByteIterator, KslackKotlinEnum<E>, KslackKotlinEnumCompanion, KslackKotlinException, KslackKotlinIllegalStateException, KslackKotlinNothing, KslackKotlinRuntimeException, KslackKotlinThrowable, KslackKotlinx_serialization_coreSerialKind, KslackKotlinx_serialization_coreSerializersModule, KslackKotlinx_serialization_jsonJsonElement, KslackKotlinx_serialization_jsonJsonElementCompanion, KslackKslackFactory, KslackKtor_httpContentType, KslackKtor_httpContentTypeCompanion, KslackKtor_httpHeaderValueParam, KslackKtor_httpHeaderValueWithParameters, KslackKtor_httpHeaderValueWithParametersCompanion;

@protocol KslackCoreAdminResource, KslackCoreApiResource, KslackCoreAppsResource, KslackCoreAuthResource, KslackCoreBookmarksResource, KslackCoreBotsResource, KslackCoreCallsResource, KslackCoreChatResource, KslackCoreConversationsResource, KslackCoreDialogElement, KslackCoreDialogResource, KslackCoreDndResource, KslackCoreEmojiResource, KslackCoreFilesResource, KslackCoreFormRequest, KslackCoreLayoutBlock, KslackCoreMigrationResource, KslackCoreOAuthResource, KslackCoreOpenIDConnectResource, KslackCorePinsResource, KslackCoreReactionsResource, KslackCoreRemindersResource, KslackCoreSearchResource, KslackCoreSlack, KslackCoreSlackApiRequest, KslackCoreStarsResource, KslackCoreStatusResource, KslackCoreTeamResource, KslackCoreUsergroupsResource, KslackCoreUsersResource, KslackCoreViewsResource, KslackKotlinAnnotation, KslackKotlinComparable, KslackKotlinIterator, KslackKotlinKAnnotatedElement, KslackKotlinKClass, KslackKotlinKClassifier, KslackKotlinKDeclarationContainer, KslackKotlinx_serialization_coreCompositeDecoder, KslackKotlinx_serialization_coreCompositeEncoder, KslackKotlinx_serialization_coreDecoder, KslackKotlinx_serialization_coreDeserializationStrategy, KslackKotlinx_serialization_coreEncoder, KslackKotlinx_serialization_coreKSerializer, KslackKotlinx_serialization_coreSerialDescriptor, KslackKotlinx_serialization_coreSerializationStrategy, KslackKotlinx_serialization_coreSerializersModuleCollector;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KslackBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KslackBase (KslackBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KslackMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KslackMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKslackKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KslackNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface KslackByte : KslackNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KslackUByte : KslackNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KslackShort : KslackNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KslackUShort : KslackNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KslackInt : KslackNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KslackUInt : KslackNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KslackLong : KslackNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KslackULong : KslackNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KslackFloat : KslackNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KslackDouble : KslackNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KslackBoolean : KslackNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KslackFactory")))
@interface KslackKslackFactory : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kslackFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackKslackFactory *shared __attribute__((swift_name("shared")));
- (id<KslackCoreSlack>)instance __attribute__((swift_name("instance()")));
@end


/**
 * Slack API Client
 * https://api.slack.com/methods
 */
__attribute__((swift_name("CoreSlack")))
@protocol KslackCoreSlack
@required
- (id<KslackCoreAdminResource>)admin __attribute__((swift_name("admin()")));
- (id<KslackCoreApiResource>)api __attribute__((swift_name("api()")));
- (id<KslackCoreAppsResource>)apps __attribute__((swift_name("apps()")));
- (id<KslackCoreAuthResource>)auth __attribute__((swift_name("auth()")));
- (id<KslackCoreBookmarksResource>)bookmarks __attribute__((swift_name("bookmarks()")));
- (id<KslackCoreBotsResource>)bots __attribute__((swift_name("bots()")));
- (id<KslackCoreCallsResource>)calls __attribute__((swift_name("calls()")));
- (id<KslackCoreChatResource>)chat __attribute__((swift_name("chat()")));
- (id<KslackCoreConversationsResource>)conversations __attribute__((swift_name("conversations()")));
- (id<KslackCoreDialogResource>)dialog __attribute__((swift_name("dialog()"))) __attribute__((deprecated("Use ViewsResource (views.open) for modals instead.")));
- (id<KslackCoreDndResource>)dnd __attribute__((swift_name("dnd()")));
- (id<KslackCoreEmojiResource>)emoji __attribute__((swift_name("emoji()")));
- (id<KslackCoreFilesResource>)files __attribute__((swift_name("files()")));
- (id<KslackCoreMigrationResource>)migration __attribute__((swift_name("migration()")));
- (id<KslackCoreOAuthResource>)oauth __attribute__((swift_name("oauth()")));
- (id<KslackCoreOpenIDConnectResource>)openIDConnect __attribute__((swift_name("openIDConnect()")));
- (id<KslackCorePinsResource>)pins __attribute__((swift_name("pins()")));
- (id<KslackCoreReactionsResource>)reactions __attribute__((swift_name("reactions()")));
- (id<KslackCoreRemindersResource>)reminders __attribute__((swift_name("reminders()")));
- (id<KslackCoreSearchResource>)search __attribute__((swift_name("search()")));
- (id<KslackCoreStarsResource>)stars __attribute__((swift_name("stars()"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));
- (id<KslackCoreStatusResource>)status __attribute__((swift_name("status()")));
- (id<KslackCoreTeamResource>)team __attribute__((swift_name("team()")));
- (id<KslackCoreUsergroupsResource>)usergroups __attribute__((swift_name("usergroups()")));
- (id<KslackCoreUsersResource>)users __attribute__((swift_name("users()")));
- (id<KslackCoreViewsResource>)views __attribute__((swift_name("views()")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((swift_name("CoreAdminResource")))
@protocol KslackCoreAdminResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminAppsApproveReq:(KslackCoreAdminAppsApproveRequest *)req completionHandler:(void (^)(KslackCoreAdminAppsApproveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminAppsApprove(req:completionHandler:)")));
- (KslackCoreAdminAppsApproveResponse *)adminAppsApproveBlockingReq:(KslackCoreAdminAppsApproveRequest *)req __attribute__((swift_name("adminAppsApproveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminAppsRequestsListReq:(KslackCoreAdminAppsRequestsListRequest *)req completionHandler:(void (^)(KslackCoreAdminAppsRequestsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminAppsRequestsList(req:completionHandler:)")));
- (KslackCoreAdminAppsRequestsListResponse *)adminAppsRequestsListBlockingReq:(KslackCoreAdminAppsRequestsListRequest *)req __attribute__((swift_name("adminAppsRequestsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminAppsRestrictReq:(KslackCoreAdminAppsRestrictRequest *)req completionHandler:(void (^)(KslackCoreAdminAppsRestrictResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminAppsRestrict(req:completionHandler:)")));
- (KslackCoreAdminAppsRestrictResponse *)adminAppsRestrictBlockingReq:(KslackCoreAdminAppsRestrictRequest *)req __attribute__((swift_name("adminAppsRestrictBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminInviteRequestsApproveReq:(KslackCoreAdminInviteRequestsApproveRequest *)req completionHandler:(void (^)(KslackCoreAdminInviteRequestsApproveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminInviteRequestsApprove(req:completionHandler:)")));
- (KslackCoreAdminInviteRequestsApproveResponse *)adminInviteRequestsApproveBlockingReq:(KslackCoreAdminInviteRequestsApproveRequest *)req __attribute__((swift_name("adminInviteRequestsApproveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminInviteRequestsApprovedListReq:(KslackCoreAdminInviteRequestsApprovedListRequest *)req completionHandler:(void (^)(KslackCoreAdminInviteRequestsApprovedListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminInviteRequestsApprovedList(req:completionHandler:)")));
- (KslackCoreAdminInviteRequestsApprovedListResponse *)adminInviteRequestsApprovedListBlockingReq:(KslackCoreAdminInviteRequestsApprovedListRequest *)req __attribute__((swift_name("adminInviteRequestsApprovedListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminInviteRequestsDeniedListReq:(KslackCoreAdminInviteRequestsDeniedListRequest *)req completionHandler:(void (^)(KslackCoreAdminInviteRequestsDeniedListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminInviteRequestsDeniedList(req:completionHandler:)")));
- (KslackCoreAdminInviteRequestsDeniedListResponse *)adminInviteRequestsDeniedListBlockingReq:(KslackCoreAdminInviteRequestsDeniedListRequest *)req __attribute__((swift_name("adminInviteRequestsDeniedListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminInviteRequestsDenyReq:(KslackCoreAdminInviteRequestsDenyRequest *)req completionHandler:(void (^)(KslackCoreAdminInviteRequestsDenyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminInviteRequestsDeny(req:completionHandler:)")));
- (KslackCoreAdminInviteRequestsDenyResponse *)adminInviteRequestsDenyBlockingReq:(KslackCoreAdminInviteRequestsDenyRequest *)req __attribute__((swift_name("adminInviteRequestsDenyBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminInviteRequestsListReq:(KslackCoreAdminInviteRequestsListRequest *)req completionHandler:(void (^)(KslackCoreAdminInviteRequestsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminInviteRequestsList(req:completionHandler:)")));
- (KslackCoreAdminInviteRequestsListResponse *)adminInviteRequestsListBlockingReq:(KslackCoreAdminInviteRequestsListRequest *)req __attribute__((swift_name("adminInviteRequestsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminTeamsAdminsListReq:(KslackCoreAdminTeamsAdminsListRequest *)req completionHandler:(void (^)(KslackCoreAdminTeamsAdminsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminTeamsAdminsList(req:completionHandler:)")));
- (KslackCoreAdminTeamsAdminsListResponse *)adminTeamsAdminsListBlockingReq:(KslackCoreAdminTeamsAdminsListRequest *)req __attribute__((swift_name("adminTeamsAdminsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminTeamsCreateReq:(KslackCoreAdminTeamsCreateRequest *)req completionHandler:(void (^)(KslackCoreAdminTeamsCreateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminTeamsCreate(req:completionHandler:)")));
- (KslackCoreAdminTeamsCreateResponse *)adminTeamsCreateBlockingReq:(KslackCoreAdminTeamsCreateRequest *)req __attribute__((swift_name("adminTeamsCreateBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminTeamsOwnersListReq:(KslackCoreAdminTeamsOwnersListRequest *)req completionHandler:(void (^)(KslackCoreAdminTeamsOwnersListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminTeamsOwnersList(req:completionHandler:)")));
- (KslackCoreAdminTeamsOwnersListResponse *)adminTeamsOwnersListBlockingReq:(KslackCoreAdminTeamsOwnersListRequest *)req __attribute__((swift_name("adminTeamsOwnersListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminTeamsSettingsSetDescriptionReq:(KslackCoreAdminTeamsSettingsSetDescriptionRequest *)req completionHandler:(void (^)(KslackCoreAdminTeamsSettingsSetDescriptionResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminTeamsSettingsSetDescription(req:completionHandler:)")));
- (KslackCoreAdminTeamsSettingsSetDescriptionResponse *)adminTeamsSettingsSetDescriptionBlockingReq:(KslackCoreAdminTeamsSettingsSetDescriptionRequest *)req __attribute__((swift_name("adminTeamsSettingsSetDescriptionBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminTeamsSettingsSetIconReq:(KslackCoreAdminTeamsSettingsSetIconRequest *)req completionHandler:(void (^)(KslackCoreAdminTeamsSettingsSetIconResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminTeamsSettingsSetIcon(req:completionHandler:)")));
- (KslackCoreAdminTeamsSettingsSetIconResponse *)adminTeamsSettingsSetIconBlockingReq:(KslackCoreAdminTeamsSettingsSetIconRequest *)req __attribute__((swift_name("adminTeamsSettingsSetIconBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminTeamsSettingsSetNameReq:(KslackCoreAdminTeamsSettingsSetNameRequest *)req completionHandler:(void (^)(KslackCoreAdminTeamsSettingsSetNameResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminTeamsSettingsSetName(req:completionHandler:)")));
- (KslackCoreAdminTeamsSettingsSetNameResponse *)adminTeamsSettingsSetNameBlockingReq:(KslackCoreAdminTeamsSettingsSetNameRequest *)req __attribute__((swift_name("adminTeamsSettingsSetNameBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersAssignReq:(KslackCoreAdminUsersAssignRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersAssignResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersAssign(req:completionHandler:)")));
- (KslackCoreAdminUsersAssignResponse *)adminUsersAssignBlockingReq:(KslackCoreAdminUsersAssignRequest *)req __attribute__((swift_name("adminUsersAssignBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersInviteReq:(KslackCoreAdminUsersInviteRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersInviteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersInvite(req:completionHandler:)")));
- (KslackCoreAdminUsersInviteResponse *)adminUsersInviteBlockingReq:(KslackCoreAdminUsersInviteRequest *)req __attribute__((swift_name("adminUsersInviteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersRemoveReq:(KslackCoreAdminUsersRemoveRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersRemove(req:completionHandler:)")));
- (KslackCoreAdminUsersRemoveResponse *)adminUsersRemoveBlockingReq:(KslackCoreAdminUsersRemoveRequest *)req __attribute__((swift_name("adminUsersRemoveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersSessionResetReq:(KslackCoreAdminUsersSessionResetRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersSessionResetResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersSessionReset(req:completionHandler:)")));
- (KslackCoreAdminUsersSessionResetResponse *)adminUsersSessionResetBlockingReq:(KslackCoreAdminUsersSessionResetRequest *)req __attribute__((swift_name("adminUsersSessionResetBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersSetAdminReq:(KslackCoreAdminUsersSetAdminRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersSetAdminResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersSetAdmin(req:completionHandler:)")));
- (KslackCoreAdminUsersSetAdminResponse *)adminUsersSetAdminBlockingReq:(KslackCoreAdminUsersSetAdminRequest *)req __attribute__((swift_name("adminUsersSetAdminBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersSetOwnerReq:(KslackCoreAdminUsersSetOwnerRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersSetOwnerResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersSetOwner(req:completionHandler:)")));
- (KslackCoreAdminUsersSetOwnerResponse *)adminUsersSetOwnerBlockingReq:(KslackCoreAdminUsersSetOwnerRequest *)req __attribute__((swift_name("adminUsersSetOwnerBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)adminUsersSetRegularReq:(KslackCoreAdminUsersSetRegularRequest *)req completionHandler:(void (^)(KslackCoreAdminUsersSetRegularResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("adminUsersSetRegular(req:completionHandler:)")));
- (KslackCoreAdminUsersSetRegularResponse *)adminUsersSetRegularBlockingReq:(KslackCoreAdminUsersSetRegularRequest *)req __attribute__((swift_name("adminUsersSetRegularBlocking(req:)")));
@end

__attribute__((swift_name("CoreApiResource")))
@protocol KslackCoreApiResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)apiTestReq:(KslackCoreApiTestRequest *)req completionHandler:(void (^)(KslackCoreApiTestResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("apiTest(req:completionHandler:)")));
- (KslackCoreApiTestResponse *)apiTestBlockingReq:(KslackCoreApiTestRequest *)req __attribute__((swift_name("apiTestBlocking(req:)")));
@end

__attribute__((swift_name("CoreAppsResource")))
@protocol KslackCoreAppsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)appsConnectionsOpenReq:(KslackCoreAppsConnectionsOpenRequest *)req completionHandler:(void (^)(KslackCoreAppsConnectionsOpenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("appsConnectionsOpen(req:completionHandler:)")));
- (KslackCoreAppsConnectionsOpenResponse *)appsConnectionsOpenBlockingReq:(KslackCoreAppsConnectionsOpenRequest *)req __attribute__((swift_name("appsConnectionsOpenBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)appsUninstallReq:(KslackCoreAppsUninstallRequest *)req completionHandler:(void (^)(KslackCoreAppsUninstallResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("appsUninstall(req:completionHandler:)")));
- (KslackCoreAppsUninstallResponse *)appsUninstallBlockingReq:(KslackCoreAppsUninstallRequest *)req __attribute__((swift_name("appsUninstallBlocking(req:)")));
@end

__attribute__((swift_name("CoreAuthResource")))
@protocol KslackCoreAuthResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authRevokeReq:(KslackCoreAuthRevokeRequest *)req completionHandler:(void (^)(KslackCoreAuthRevokeResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authRevoke(req:completionHandler:)")));
- (KslackCoreAuthRevokeResponse *)authRevokeBlockingReq:(KslackCoreAuthRevokeRequest *)req __attribute__((swift_name("authRevokeBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authTeamsListReq:(KslackCoreAuthTeamsListRequest *)req completionHandler:(void (^)(KslackCoreAuthTeamsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authTeamsList(req:completionHandler:)")));
- (KslackCoreAuthTeamsListResponse *)authTeamsListBlockingReq:(KslackCoreAuthTeamsListRequest *)req __attribute__((swift_name("authTeamsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authTestReq:(KslackCoreAuthTestRequest *)req completionHandler:(void (^)(KslackCoreAuthTestResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authTest(req:completionHandler:)")));
- (KslackCoreAuthTestResponse *)authTestBlockingReq:(KslackCoreAuthTestRequest *)req __attribute__((swift_name("authTestBlocking(req:)")));
- (NSString *)authorizationURLClientId:(NSString *)clientId redirectUri:(NSString *)redirectUri scope:(NSString * _Nullable)scope userScope:(NSString * _Nullable)userScope __attribute__((swift_name("authorizationURL(clientId:redirectUri:scope:userScope:)")));
@end

__attribute__((swift_name("CoreBookmarksResource")))
@protocol KslackCoreBookmarksResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarksAddReq:(KslackCoreBookmarksAddRequest *)req completionHandler:(void (^)(KslackCoreBookmarksAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmarksAdd(req:completionHandler:)")));
- (KslackCoreBookmarksAddResponse *)bookmarksAddBlockingReq:(KslackCoreBookmarksAddRequest *)req __attribute__((swift_name("bookmarksAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarksEditReq:(KslackCoreBookmarksEditRequest *)req completionHandler:(void (^)(KslackCoreBookmarksEditResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmarksEdit(req:completionHandler:)")));
- (KslackCoreBookmarksEditResponse *)bookmarksEditBlockingReq:(KslackCoreBookmarksEditRequest *)req __attribute__((swift_name("bookmarksEditBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarksListReq:(KslackCoreBookmarksListRequest *)req completionHandler:(void (^)(KslackCoreBookmarksListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmarksList(req:completionHandler:)")));
- (KslackCoreBookmarksListResponse *)bookmarksListBlockingReq:(KslackCoreBookmarksListRequest *)req __attribute__((swift_name("bookmarksListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarksRemoveReq:(KslackCoreBookmarksRemoveRequest *)req completionHandler:(void (^)(KslackCoreBookmarksRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmarksRemove(req:completionHandler:)")));
- (KslackCoreBookmarksRemoveResponse *)bookmarksRemoveBlockingReq:(KslackCoreBookmarksRemoveRequest *)req __attribute__((swift_name("bookmarksRemoveBlocking(req:)")));
@end

__attribute__((swift_name("CoreBotsResource")))
@protocol KslackCoreBotsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)botsInfoReq:(KslackCoreBotsInfoRequest *)req completionHandler:(void (^)(KslackCoreBotsInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("botsInfo(req:completionHandler:)")));
- (KslackCoreBotsInfoResponse *)botsInfoBlockingReq:(KslackCoreBotsInfoRequest *)req __attribute__((swift_name("botsInfoBlocking(req:)")));
@end

__attribute__((swift_name("CoreCallsResource")))
@protocol KslackCoreCallsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)callsAddReq:(KslackCoreCallsAddRequest *)req completionHandler:(void (^)(KslackCoreCallsAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callsAdd(req:completionHandler:)")));
- (KslackCoreCallsAddResponse *)callsAddBlockingReq:(KslackCoreCallsAddRequest *)req __attribute__((swift_name("callsAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)callsEndReq:(KslackCoreCallsEndRequest *)req completionHandler:(void (^)(KslackCoreCallsEndResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callsEnd(req:completionHandler:)")));
- (KslackCoreCallsEndResponse *)callsEndBlockingReq:(KslackCoreCallsEndRequest *)req __attribute__((swift_name("callsEndBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)callsInfoReq:(KslackCoreCallsInfoRequest *)req completionHandler:(void (^)(KslackCoreCallsInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callsInfo(req:completionHandler:)")));
- (KslackCoreCallsInfoResponse *)callsInfoBlockingReq:(KslackCoreCallsInfoRequest *)req __attribute__((swift_name("callsInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)callsParticipantsAddReq:(KslackCoreCallsParticipantsAddRequest *)req completionHandler:(void (^)(KslackCoreCallsParticipantsAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callsParticipantsAdd(req:completionHandler:)")));
- (KslackCoreCallsParticipantsAddResponse *)callsParticipantsAddBlockingReq:(KslackCoreCallsParticipantsAddRequest *)req __attribute__((swift_name("callsParticipantsAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)callsParticipantsRemoveReq:(KslackCoreCallsParticipantsRemoveRequest *)req completionHandler:(void (^)(KslackCoreCallsParticipantsRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callsParticipantsRemove(req:completionHandler:)")));
- (KslackCoreCallsParticipantsRemoveResponse *)callsParticipantsRemoveBlockingReq:(KslackCoreCallsParticipantsRemoveRequest *)req __attribute__((swift_name("callsParticipantsRemoveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)callsUpdateReq:(KslackCoreCallsUpdateRequest *)req completionHandler:(void (^)(KslackCoreCallsUpdateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("callsUpdate(req:completionHandler:)")));
- (KslackCoreCallsUpdateResponse *)callsUpdateBlockingReq:(KslackCoreCallsUpdateRequest *)req __attribute__((swift_name("callsUpdateBlocking(req:)")));
@end

__attribute__((swift_name("CoreChatResource")))
@protocol KslackCoreChatResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatAppendStreamReq:(KslackCoreChatAppendStreamRequest *)req completionHandler:(void (^)(KslackCoreChatAppendStreamResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatAppendStream(req:completionHandler:)")));
- (KslackCoreChatAppendStreamResponse *)chatAppendStreamBlockingReq:(KslackCoreChatAppendStreamRequest *)req __attribute__((swift_name("chatAppendStreamBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatDeleteReq:(KslackCoreChatDeleteRequest *)req completionHandler:(void (^)(KslackCoreChatDeleteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatDelete(req:completionHandler:)")));
- (KslackCoreChatDeleteResponse *)chatDeleteBlockingReq:(KslackCoreChatDeleteRequest *)req __attribute__((swift_name("chatDeleteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatDeleteScheduledMessageReq:(KslackCoreChatDeleteScheduledMessageRequest *)req completionHandler:(void (^)(KslackCoreChatDeleteScheduledMessageResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatDeleteScheduledMessage(req:completionHandler:)")));
- (KslackCoreChatDeleteScheduledMessageResponse *)chatDeleteScheduledMessageBlockingReq:(KslackCoreChatDeleteScheduledMessageRequest *)req __attribute__((swift_name("chatDeleteScheduledMessageBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatGetPermalinkReq:(KslackCoreChatGetPermalinkRequest *)req completionHandler:(void (^)(KslackCoreChatGetPermalinkResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatGetPermalink(req:completionHandler:)")));
- (KslackCoreChatGetPermalinkResponse *)chatGetPermalinkBlockingReq:(KslackCoreChatGetPermalinkRequest *)req __attribute__((swift_name("chatGetPermalinkBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatMeMessageReq:(KslackCoreChatMeMessageRequest *)req completionHandler:(void (^)(KslackCoreChatMeMessageResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatMeMessage(req:completionHandler:)")));
- (KslackCoreChatMeMessageResponse *)chatMeMessageBlockingReq:(KslackCoreChatMeMessageRequest *)req __attribute__((swift_name("chatMeMessageBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatPostEphemeralReq:(KslackCoreChatPostEphemeralRequest *)req completionHandler:(void (^)(KslackCoreChatPostEphemeralResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatPostEphemeral(req:completionHandler:)")));
- (KslackCoreChatPostEphemeralResponse *)chatPostEphemeralBlockingReq:(KslackCoreChatPostEphemeralRequest *)req __attribute__((swift_name("chatPostEphemeralBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatPostMessageReq:(KslackCoreChatPostMessageRequest *)req completionHandler:(void (^)(KslackCoreChatPostMessageResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatPostMessage(req:completionHandler:)")));
- (KslackCoreChatPostMessageResponse *)chatPostMessageBlockingReq:(KslackCoreChatPostMessageRequest *)req __attribute__((swift_name("chatPostMessageBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatScheduleMessageReq:(KslackCoreChatScheduleMessageRequest *)req completionHandler:(void (^)(KslackCoreChatScheduleMessageResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatScheduleMessage(req:completionHandler:)")));
- (KslackCoreChatScheduleMessageResponse *)chatScheduleMessageBlockingReq:(KslackCoreChatScheduleMessageRequest *)req __attribute__((swift_name("chatScheduleMessageBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatScheduleMessagesListMessageReq:(KslackCoreChatScheduleMessagesListRequest *)req completionHandler:(void (^)(KslackCoreChatScheduleMessagesListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatScheduleMessagesListMessage(req:completionHandler:)")));
- (KslackCoreChatScheduleMessagesListResponse *)chatScheduleMessagesListMessageBlockingReq:(KslackCoreChatScheduleMessagesListRequest *)req __attribute__((swift_name("chatScheduleMessagesListMessageBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatStartStreamReq:(KslackCoreChatStartStreamRequest *)req completionHandler:(void (^)(KslackCoreChatStartStreamResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatStartStream(req:completionHandler:)")));
- (KslackCoreChatStartStreamResponse *)chatStartStreamBlockingReq:(KslackCoreChatStartStreamRequest *)req __attribute__((swift_name("chatStartStreamBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatStopStreamReq:(KslackCoreChatStopStreamRequest *)req completionHandler:(void (^)(KslackCoreChatStopStreamResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatStopStream(req:completionHandler:)")));
- (KslackCoreChatStopStreamResponse *)chatStopStreamBlockingReq:(KslackCoreChatStopStreamRequest *)req __attribute__((swift_name("chatStopStreamBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatUnfurlReq:(KslackCoreChatUnfurlRequest *)req completionHandler:(void (^)(KslackCoreChatUnfurlResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatUnfurl(req:completionHandler:)")));
- (KslackCoreChatUnfurlResponse *)chatUnfurlBlockingReq:(KslackCoreChatUnfurlRequest *)req __attribute__((swift_name("chatUnfurlBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chatUpdateReq:(KslackCoreChatUpdateRequest *)req completionHandler:(void (^)(KslackCoreChatUpdateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chatUpdate(req:completionHandler:)")));
- (KslackCoreChatUpdateResponse *)chatUpdateBlockingReq:(KslackCoreChatUpdateRequest *)req __attribute__((swift_name("chatUpdateBlocking(req:)")));
@end

__attribute__((swift_name("CoreConversationsResource")))
@protocol KslackCoreConversationsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsAcceptSharedInviteReq:(KslackCoreConversationsAcceptSharedInviteRequest *)req completionHandler:(void (^)(KslackCoreConversationsAcceptSharedInviteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsAcceptSharedInvite(req:completionHandler:)")));
- (KslackCoreConversationsAcceptSharedInviteResponse *)conversationsAcceptSharedInviteBlockingReq:(KslackCoreConversationsAcceptSharedInviteRequest *)req __attribute__((swift_name("conversationsAcceptSharedInviteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsApproveSharedInviteReq:(KslackCoreConversationsApproveSharedInviteRequest *)req completionHandler:(void (^)(KslackCoreConversationsApproveSharedInviteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsApproveSharedInvite(req:completionHandler:)")));
- (KslackCoreConversationsApproveSharedInviteResponse *)conversationsApproveSharedInviteBlockingReq:(KslackCoreConversationsApproveSharedInviteRequest *)req __attribute__((swift_name("conversationsApproveSharedInviteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsArchiveReq:(KslackCoreConversationsArchiveRequest *)req completionHandler:(void (^)(KslackCoreConversationsArchiveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsArchive(req:completionHandler:)")));
- (KslackCoreConversationsArchiveResponse *)conversationsArchiveBlockingReq:(KslackCoreConversationsArchiveRequest *)req __attribute__((swift_name("conversationsArchiveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsCanvasesCreateReq:(KslackCoreConversationsCanvasesCreateRequest *)req completionHandler:(void (^)(KslackCoreConversationsCanvasesCreateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsCanvasesCreate(req:completionHandler:)")));
- (KslackCoreConversationsCanvasesCreateResponse *)conversationsCanvasesCreateBlockingReq:(KslackCoreConversationsCanvasesCreateRequest *)req __attribute__((swift_name("conversationsCanvasesCreateBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsCloseReq:(KslackCoreConversationsCloseRequest *)req completionHandler:(void (^)(KslackCoreConversationsCloseResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsClose(req:completionHandler:)")));
- (KslackCoreConversationsCloseResponse *)conversationsCloseBlockingReq:(KslackCoreConversationsCloseRequest *)req __attribute__((swift_name("conversationsCloseBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsCreateReq:(KslackCoreConversationsCreateRequest *)req completionHandler:(void (^)(KslackCoreConversationsCreateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsCreate(req:completionHandler:)")));
- (KslackCoreConversationsCreateResponse *)conversationsCreateBlockingReq:(KslackCoreConversationsCreateRequest *)req __attribute__((swift_name("conversationsCreateBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsDeclineSharedInviteReq:(KslackCoreConversationsDeclineSharedInviteRequest *)req completionHandler:(void (^)(KslackCoreConversationsDeclineSharedInviteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsDeclineSharedInvite(req:completionHandler:)")));
- (KslackCoreConversationsDeclineSharedInviteResponse *)conversationsDeclineSharedInviteBlockingReq:(KslackCoreConversationsDeclineSharedInviteRequest *)req __attribute__((swift_name("conversationsDeclineSharedInviteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsHistoryReq:(KslackCoreConversationsHistoryRequest *)req completionHandler:(void (^)(KslackCoreConversationsHistoryResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsHistory(req:completionHandler:)")));
- (KslackCoreConversationsHistoryResponse *)conversationsHistoryBlockingReq:(KslackCoreConversationsHistoryRequest *)req __attribute__((swift_name("conversationsHistoryBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsInfoReq:(KslackCoreConversationsInfoRequest *)req completionHandler:(void (^)(KslackCoreConversationsInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsInfo(req:completionHandler:)")));
- (KslackCoreConversationsInfoResponse *)conversationsInfoBlockingReq:(KslackCoreConversationsInfoRequest *)req __attribute__((swift_name("conversationsInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsInviteReq:(KslackCoreConversationsInviteRequest *)req completionHandler:(void (^)(KslackCoreConversationsInviteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsInvite(req:completionHandler:)")));
- (KslackCoreConversationsInviteResponse *)conversationsInviteBlockingReq:(KslackCoreConversationsInviteRequest *)req __attribute__((swift_name("conversationsInviteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsInviteSharedReq:(KslackCoreConversationsInviteSharedRequest *)req completionHandler:(void (^)(KslackCoreConversationsInviteSharedResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsInviteShared(req:completionHandler:)")));
- (KslackCoreConversationsInviteSharedResponse *)conversationsInviteSharedBlockingReq:(KslackCoreConversationsInviteSharedRequest *)req __attribute__((swift_name("conversationsInviteSharedBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsJoinReq:(KslackCoreConversationsJoinRequest *)req completionHandler:(void (^)(KslackCoreConversationsJoinResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsJoin(req:completionHandler:)")));
- (KslackCoreConversationsJoinResponse *)conversationsJoinBlockingReq:(KslackCoreConversationsJoinRequest *)req __attribute__((swift_name("conversationsJoinBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsKickReq:(KslackCoreConversationsKickRequest *)req completionHandler:(void (^)(KslackCoreConversationsKickResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsKick(req:completionHandler:)")));
- (KslackCoreConversationsKickResponse *)conversationsKickBlockingReq:(KslackCoreConversationsKickRequest *)req __attribute__((swift_name("conversationsKickBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsLeaveReq:(KslackCoreConversationsLeaveRequest *)req completionHandler:(void (^)(KslackCoreConversationsLeaveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsLeave(req:completionHandler:)")));
- (KslackCoreConversationsLeaveResponse *)conversationsLeaveBlockingReq:(KslackCoreConversationsLeaveRequest *)req __attribute__((swift_name("conversationsLeaveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsListReq:(KslackCoreConversationsListRequest *)req completionHandler:(void (^)(KslackCoreConversationsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsList(req:completionHandler:)")));
- (KslackCoreConversationsListResponse *)conversationsListBlockingReq:(KslackCoreConversationsListRequest *)req __attribute__((swift_name("conversationsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsListConnectInvitesReq:(KslackCoreConversationsListConnectInvitesRequest *)req completionHandler:(void (^)(KslackCoreConversationsListConnectInvitesResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsListConnectInvites(req:completionHandler:)")));
- (KslackCoreConversationsListConnectInvitesResponse *)conversationsListConnectInvitesBlockingReq:(KslackCoreConversationsListConnectInvitesRequest *)req __attribute__((swift_name("conversationsListConnectInvitesBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsMarkReq:(KslackCoreConversationsMarkRequest *)req completionHandler:(void (^)(KslackCoreConversationsMarkResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsMark(req:completionHandler:)")));
- (KslackCoreConversationsMarkResponse *)conversationsMarkBlockingReq:(KslackCoreConversationsMarkRequest *)req __attribute__((swift_name("conversationsMarkBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsMembersReq:(KslackCoreConversationsMembersRequest *)req completionHandler:(void (^)(KslackCoreConversationsMembersResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsMembers(req:completionHandler:)")));
- (KslackCoreConversationsMembersResponse *)conversationsMembersBlockingReq:(KslackCoreConversationsMembersRequest *)req __attribute__((swift_name("conversationsMembersBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsOpenReq:(KslackCoreConversationsOpenRequest *)req completionHandler:(void (^)(KslackCoreConversationsOpenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsOpen(req:completionHandler:)")));
- (KslackCoreConversationsOpenResponse *)conversationsOpenBlockingReq:(KslackCoreConversationsOpenRequest *)req __attribute__((swift_name("conversationsOpenBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRenameReq:(KslackCoreConversationsRenameRequest *)req completionHandler:(void (^)(KslackCoreConversationsRenameResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsRename(req:completionHandler:)")));
- (KslackCoreConversationsRenameResponse *)conversationsRenameBlockingReq:(KslackCoreConversationsRenameRequest *)req __attribute__((swift_name("conversationsRenameBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRepliesReq:(KslackCoreConversationsRepliesRequest *)req completionHandler:(void (^)(KslackCoreConversationsRepliesResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsReplies(req:completionHandler:)")));
- (KslackCoreConversationsRepliesResponse *)conversationsRepliesBlockingReq:(KslackCoreConversationsRepliesRequest *)req __attribute__((swift_name("conversationsRepliesBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRequestSharedInviteApproveReq:(KslackCoreConversationsRequestSharedInviteApproveRequest *)req completionHandler:(void (^)(KslackCoreConversationsRequestSharedInviteApproveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsRequestSharedInviteApprove(req:completionHandler:)")));
- (KslackCoreConversationsRequestSharedInviteApproveResponse *)conversationsRequestSharedInviteApproveBlockingReq:(KslackCoreConversationsRequestSharedInviteApproveRequest *)req __attribute__((swift_name("conversationsRequestSharedInviteApproveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRequestSharedInviteDenyReq:(KslackCoreConversationsRequestSharedInviteDenyRequest *)req completionHandler:(void (^)(KslackCoreConversationsRequestSharedInviteDenyResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsRequestSharedInviteDeny(req:completionHandler:)")));
- (KslackCoreConversationsRequestSharedInviteDenyResponse *)conversationsRequestSharedInviteDenyBlockingReq:(KslackCoreConversationsRequestSharedInviteDenyRequest *)req __attribute__((swift_name("conversationsRequestSharedInviteDenyBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRequestSharedInviteListReq:(KslackCoreConversationsRequestSharedInviteListRequest *)req completionHandler:(void (^)(KslackCoreConversationsRequestSharedInviteListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsRequestSharedInviteList(req:completionHandler:)")));
- (KslackCoreConversationsRequestSharedInviteListResponse *)conversationsRequestSharedInviteListBlockingReq:(KslackCoreConversationsRequestSharedInviteListRequest *)req __attribute__((swift_name("conversationsRequestSharedInviteListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsSetPurposeReq:(KslackCoreConversationsSetPurposeRequest *)req completionHandler:(void (^)(KslackCoreConversationsSetPurposeResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsSetPurpose(req:completionHandler:)")));
- (KslackCoreConversationsSetPurposeResponse *)conversationsSetPurposeBlockingReq:(KslackCoreConversationsSetPurposeRequest *)req __attribute__((swift_name("conversationsSetPurposeBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsSetTopicReq:(KslackCoreConversationsSetTopicRequest *)req completionHandler:(void (^)(KslackCoreConversationsSetTopicResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsSetTopic(req:completionHandler:)")));
- (KslackCoreConversationsSetTopicResponse *)conversationsSetTopicBlockingReq:(KslackCoreConversationsSetTopicRequest *)req __attribute__((swift_name("conversationsSetTopicBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsUnarchiveReq:(KslackCoreConversationsUnarchiveRequest *)req completionHandler:(void (^)(KslackCoreConversationsUnarchiveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversationsUnarchive(req:completionHandler:)")));
- (KslackCoreConversationsUnarchiveResponse *)conversationsUnarchiveBlockingReq:(KslackCoreConversationsUnarchiveRequest *)req __attribute__((swift_name("conversationsUnarchiveBlocking(req:)")));
@end

__attribute__((swift_name("CoreDialogResource")))
@protocol KslackCoreDialogResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dialogOpenReq:(KslackCoreDialogOpenRequest *)req completionHandler:(void (^)(KslackCoreDialogOpenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dialogOpen(req:completionHandler:)"))) __attribute__((deprecated("Use ViewsResource (views.open) for modals instead.")));
- (KslackCoreDialogOpenResponse *)dialogOpenBlockingReq:(KslackCoreDialogOpenRequest *)req __attribute__((swift_name("dialogOpenBlocking(req:)"))) __attribute__((deprecated("Use ViewsResource (views.open) for modals instead.")));
@end

__attribute__((swift_name("CoreDndResource")))
@protocol KslackCoreDndResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dndEndDndReq:(KslackCoreDndEndDndRequest *)req completionHandler:(void (^)(KslackCoreDndEndDndResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dndEndDnd(req:completionHandler:)")));
- (KslackCoreDndEndDndResponse *)dndEndDndBlockingReq:(KslackCoreDndEndDndRequest *)req __attribute__((swift_name("dndEndDndBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dndEndSnoozeReq:(KslackCoreDndEndSnoozeRequest *)req completionHandler:(void (^)(KslackCoreDndEndSnoozeResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dndEndSnooze(req:completionHandler:)")));
- (KslackCoreDndEndSnoozeResponse *)dndEndSnoozeBlockingReq:(KslackCoreDndEndSnoozeRequest *)req __attribute__((swift_name("dndEndSnoozeBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dndInfoReq:(KslackCoreDndInfoRequest *)req completionHandler:(void (^)(KslackCoreDndInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dndInfo(req:completionHandler:)")));
- (KslackCoreDndInfoResponse *)dndInfoBlockingReq:(KslackCoreDndInfoRequest *)req __attribute__((swift_name("dndInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dndSetSnoozeReq:(KslackCoreDndSetSnoozeRequest *)req completionHandler:(void (^)(KslackCoreDndSetSnoozeResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dndSetSnooze(req:completionHandler:)")));
- (KslackCoreDndSetSnoozeResponse *)dndSetSnoozeBlockingReq:(KslackCoreDndSetSnoozeRequest *)req __attribute__((swift_name("dndSetSnoozeBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dndTeamInfoReq:(KslackCoreDndTeamInfoRequest *)req completionHandler:(void (^)(KslackCoreDndTeamInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("dndTeamInfo(req:completionHandler:)")));
- (KslackCoreDndTeamInfoResponse *)dndTeamInfoBlockingReq:(KslackCoreDndTeamInfoRequest *)req __attribute__((swift_name("dndTeamInfoBlocking(req:)")));
@end

__attribute__((swift_name("CoreEmojiResource")))
@protocol KslackCoreEmojiResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emojiListReq:(KslackCoreEmojiListRequest *)req completionHandler:(void (^)(KslackCoreEmojiListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emojiList(req:completionHandler:)")));
- (KslackCoreEmojiListResponse *)emojiListBlockingReq:(KslackCoreEmojiListRequest *)req __attribute__((swift_name("emojiListBlocking(req:)")));
@end

__attribute__((swift_name("CoreFilesResource")))
@protocol KslackCoreFilesResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesCompleteUploadExternalReq:(KslackCoreFilesCompleteUploadExternalRequest *)req completionHandler:(void (^)(KslackCoreFilesCompleteUploadExternalResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesCompleteUploadExternal(req:completionHandler:)")));
- (KslackCoreFilesCompleteUploadExternalResponse *)filesCompleteUploadExternalBlockingReq:(KslackCoreFilesCompleteUploadExternalRequest *)req __attribute__((swift_name("filesCompleteUploadExternalBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesDeleteReq:(KslackCoreFilesDeleteRequest *)req completionHandler:(void (^)(KslackCoreFilesDeleteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesDelete(req:completionHandler:)")));
- (KslackCoreFilesDeleteResponse *)filesDeleteBlockingReq:(KslackCoreFilesDeleteRequest *)req __attribute__((swift_name("filesDeleteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesGetUploadURLExternalReq:(KslackCoreFilesGetUploadURLExternalRequest *)req completionHandler:(void (^)(KslackCoreFilesGetUploadURLExternalResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesGetUploadURLExternal(req:completionHandler:)")));
- (KslackCoreFilesGetUploadURLExternalResponse *)filesGetUploadURLExternalBlockingReq:(KslackCoreFilesGetUploadURLExternalRequest *)req __attribute__((swift_name("filesGetUploadURLExternalBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesInfoReq:(KslackCoreFilesInfoRequest *)req completionHandler:(void (^)(KslackCoreFilesInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesInfo(req:completionHandler:)")));
- (KslackCoreFilesInfoResponse *)filesInfoBlockingReq:(KslackCoreFilesInfoRequest *)req __attribute__((swift_name("filesInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesListReq:(KslackCoreFilesListRequest *)req completionHandler:(void (^)(KslackCoreFilesListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesList(req:completionHandler:)")));
- (KslackCoreFilesListResponse *)filesListBlockingReq:(KslackCoreFilesListRequest *)req __attribute__((swift_name("filesListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRemoteAddReq:(KslackCoreFilesRemoteAddRequest *)req completionHandler:(void (^)(KslackCoreFilesRemoteAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRemoteAdd(req:completionHandler:)")));
- (KslackCoreFilesRemoteAddResponse *)filesRemoteAddBlockingReq:(KslackCoreFilesRemoteAddRequest *)req __attribute__((swift_name("filesRemoteAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRemoteInfoReq:(KslackCoreFilesRemoteInfoRequest *)req completionHandler:(void (^)(KslackCoreFilesRemoteInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRemoteInfo(req:completionHandler:)")));
- (KslackCoreFilesRemoteInfoResponse *)filesRemoteInfoBlockingReq:(KslackCoreFilesRemoteInfoRequest *)req __attribute__((swift_name("filesRemoteInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRemoteListReq:(KslackCoreFilesRemoteListRequest *)req completionHandler:(void (^)(KslackCoreFilesRemoteListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRemoteList(req:completionHandler:)")));
- (KslackCoreFilesRemoteListResponse *)filesRemoteListBlockingReq:(KslackCoreFilesRemoteListRequest *)req __attribute__((swift_name("filesRemoteListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRemoteRemoveReq:(KslackCoreFilesRemoteRemoveRequest *)req completionHandler:(void (^)(KslackCoreFilesRemoteRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRemoteRemove(req:completionHandler:)")));
- (KslackCoreFilesRemoteRemoveResponse *)filesRemoteRemoveBlockingReq:(KslackCoreFilesRemoteRemoveRequest *)req __attribute__((swift_name("filesRemoteRemoveBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRemoteShareReq:(KslackCoreFilesRemoteShareRequest *)req completionHandler:(void (^)(KslackCoreFilesRemoteShareResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRemoteShare(req:completionHandler:)")));
- (KslackCoreFilesRemoteShareResponse *)filesRemoteShareBlockingReq:(KslackCoreFilesRemoteShareRequest *)req __attribute__((swift_name("filesRemoteShareBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRemoteUpdateReq:(KslackCoreFilesRemoteUpdateRequest *)req completionHandler:(void (^)(KslackCoreFilesRemoteUpdateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRemoteUpdate(req:completionHandler:)")));
- (KslackCoreFilesRemoteUpdateResponse *)filesRemoteUpdateBlockingReq:(KslackCoreFilesRemoteUpdateRequest *)req __attribute__((swift_name("filesRemoteUpdateBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesRevokePublicURLReq:(KslackCoreFilesRevokePublicURLRequest *)req completionHandler:(void (^)(KslackCoreFilesRevokePublicURLResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesRevokePublicURL(req:completionHandler:)")));
- (KslackCoreFilesRevokePublicURLResponse *)filesRevokePublicURLBlockingReq:(KslackCoreFilesRevokePublicURLRequest *)req __attribute__((swift_name("filesRevokePublicURLBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)filesSharedPublicURLReq:(KslackCoreFilesSharedPublicURLRequest *)req completionHandler:(void (^)(KslackCoreFilesSharedPublicURLResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("filesSharedPublicURL(req:completionHandler:)")));
- (KslackCoreFilesSharedPublicURLResponse *)filesSharedPublicURLBlockingReq:(KslackCoreFilesSharedPublicURLRequest *)req __attribute__((swift_name("filesSharedPublicURLBlocking(req:)")));
@end

__attribute__((swift_name("CoreMigrationResource")))
@protocol KslackCoreMigrationResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)migrationExchangeReq:(KslackCoreMigrationExchangeRequest *)req completionHandler:(void (^)(KslackCoreMigrationExchangeResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("migrationExchange(req:completionHandler:)")));
- (KslackCoreMigrationExchangeResponse *)migrationExchangeBlockingReq:(KslackCoreMigrationExchangeRequest *)req __attribute__((swift_name("migrationExchangeBlocking(req:)")));
@end

__attribute__((swift_name("CoreOAuthResource")))
@protocol KslackCoreOAuthResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)oauthAccessReq:(KslackCoreOAuthAccessRequest *)req completionHandler:(void (^)(KslackCoreOAuthAccessResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("oauthAccess(req:completionHandler:)"))) __attribute__((deprecated("Use oauthV2Access instead.")));
- (KslackCoreOAuthAccessResponse *)oauthAccessBlockingReq:(KslackCoreOAuthAccessRequest *)req __attribute__((swift_name("oauthAccessBlocking(req:)"))) __attribute__((deprecated("Use oauthV2Access instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)oauthTokenReq:(KslackCoreOAuthTokenRequest *)req completionHandler:(void (^)(KslackCoreOAuthTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("oauthToken(req:completionHandler:)"))) __attribute__((deprecated("Use oauthV2Access instead.")));
- (KslackCoreOAuthTokenResponse *)oauthTokenBlockingReq:(KslackCoreOAuthTokenRequest *)req __attribute__((swift_name("oauthTokenBlocking(req:)"))) __attribute__((deprecated("Use oauthV2Access instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)oauthV2AccessReq:(KslackCoreOAuthV2AccessRequest *)req completionHandler:(void (^)(KslackCoreOAuthV2AccessResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("oauthV2Access(req:completionHandler:)")));
- (KslackCoreOAuthV2AccessResponse *)oauthV2AccessBlockingReq:(KslackCoreOAuthV2AccessRequest *)req __attribute__((swift_name("oauthV2AccessBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)oauthV2ExchangeReq:(KslackCoreOAuthV2ExchangeRequest *)req completionHandler:(void (^)(KslackCoreOAuthV2ExchangeResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("oauthV2Exchange(req:completionHandler:)")));
- (KslackCoreOAuthV2ExchangeResponse *)oauthV2ExchangeBlockingReq:(KslackCoreOAuthV2ExchangeRequest *)req __attribute__((swift_name("oauthV2ExchangeBlocking(req:)")));
@end

__attribute__((swift_name("CoreOpenIDConnectResource")))
@protocol KslackCoreOpenIDConnectResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openIDConnectTokenReq:(KslackCoreOpenIDConnectTokenRequest *)req completionHandler:(void (^)(KslackCoreOpenIDConnectTokenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("openIDConnectToken(req:completionHandler:)")));
- (KslackCoreOpenIDConnectTokenResponse *)openIDConnectTokenBlockingReq:(KslackCoreOpenIDConnectTokenRequest *)req __attribute__((swift_name("openIDConnectTokenBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)openIDConnectUserInfoReq:(KslackCoreOpenIDConnectUserInfoRequest *)req completionHandler:(void (^)(KslackCoreOpenIDConnectUserInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("openIDConnectUserInfo(req:completionHandler:)")));
- (KslackCoreOpenIDConnectUserInfoResponse *)openIDConnectUserInfoBlockingReq:(KslackCoreOpenIDConnectUserInfoRequest *)req __attribute__((swift_name("openIDConnectUserInfoBlocking(req:)")));
@end

__attribute__((swift_name("CorePinsResource")))
@protocol KslackCorePinsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinsAddReq:(KslackCorePinsAddRequest *)req completionHandler:(void (^)(KslackCorePinsAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pinsAdd(req:completionHandler:)")));
- (KslackCorePinsAddResponse *)pinsAddBlockingReq:(KslackCorePinsAddRequest *)req __attribute__((swift_name("pinsAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinsListReq:(KslackCorePinsListRequest *)req completionHandler:(void (^)(KslackCorePinsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pinsList(req:completionHandler:)")));
- (KslackCorePinsListResponse *)pinsListBlockingReq:(KslackCorePinsListRequest *)req __attribute__((swift_name("pinsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinsRemoveReq:(KslackCorePinsRemoveRequest *)req completionHandler:(void (^)(KslackCorePinsRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pinsRemove(req:completionHandler:)")));
- (KslackCorePinsRemoveResponse *)pinsRemoveBlockingReq:(KslackCorePinsRemoveRequest *)req __attribute__((swift_name("pinsRemoveBlocking(req:)")));
@end

__attribute__((swift_name("CoreReactionsResource")))
@protocol KslackCoreReactionsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsAddReq:(KslackCoreReactionsAddRequest *)req completionHandler:(void (^)(KslackCoreReactionsAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactionsAdd(req:completionHandler:)")));
- (KslackCoreReactionsAddResponse *)reactionsAddBlockingReq:(KslackCoreReactionsAddRequest *)req __attribute__((swift_name("reactionsAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsGetReq:(KslackCoreReactionsGetRequest *)req completionHandler:(void (^)(KslackCoreReactionsGetResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactionsGet(req:completionHandler:)")));
- (KslackCoreReactionsGetResponse *)reactionsGetBlockingReq:(KslackCoreReactionsGetRequest *)req __attribute__((swift_name("reactionsGetBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsListReq:(KslackCoreReactionsListRequest *)req completionHandler:(void (^)(KslackCoreReactionsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactionsList(req:completionHandler:)")));
- (KslackCoreReactionsListResponse *)reactionsListBlockingReq:(KslackCoreReactionsListRequest *)req __attribute__((swift_name("reactionsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactionsRemoveReq:(KslackCoreReactionsRemoveRequest *)req completionHandler:(void (^)(KslackCoreReactionsRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactionsRemove(req:completionHandler:)")));
- (KslackCoreReactionsRemoveResponse *)reactionsRemoveBlockingReq:(KslackCoreReactionsRemoveRequest *)req __attribute__((swift_name("reactionsRemoveBlocking(req:)")));
@end

__attribute__((swift_name("CoreRemindersResource")))
@protocol KslackCoreRemindersResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)remindersAddReq:(KslackCoreRemindersAddRequest *)req completionHandler:(void (^)(KslackCoreRemindersAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remindersAdd(req:completionHandler:)")));
- (KslackCoreRemindersAddResponse *)remindersAddBlockingReq:(KslackCoreRemindersAddRequest *)req __attribute__((swift_name("remindersAddBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)remindersCompleteReq:(KslackCoreRemindersCompleteRequest *)req completionHandler:(void (^)(KslackCoreRemindersCompleteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remindersComplete(req:completionHandler:)")));
- (KslackCoreRemindersCompleteResponse *)remindersCompleteBlockingReq:(KslackCoreRemindersCompleteRequest *)req __attribute__((swift_name("remindersCompleteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)remindersDeleteReq:(KslackCoreRemindersDeleteRequest *)req completionHandler:(void (^)(KslackCoreRemindersDeleteResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remindersDelete(req:completionHandler:)")));
- (KslackCoreRemindersDeleteResponse *)remindersDeleteBlockingReq:(KslackCoreRemindersDeleteRequest *)req __attribute__((swift_name("remindersDeleteBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)remindersInfoReq:(KslackCoreRemindersInfoRequest *)req completionHandler:(void (^)(KslackCoreRemindersInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remindersInfo(req:completionHandler:)")));
- (KslackCoreRemindersInfoResponse *)remindersInfoBlockingReq:(KslackCoreRemindersInfoRequest *)req __attribute__((swift_name("remindersInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)remindersListReq:(KslackCoreRemindersListRequest *)req completionHandler:(void (^)(KslackCoreRemindersListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remindersList(req:completionHandler:)")));
- (KslackCoreRemindersListResponse *)remindersListBlockingReq:(KslackCoreRemindersListRequest *)req __attribute__((swift_name("remindersListBlocking(req:)")));
@end

__attribute__((swift_name("CoreSearchResource")))
@protocol KslackCoreSearchResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchAllReq:(KslackCoreSearchAllRequest *)req completionHandler:(void (^)(KslackCoreSearchAllResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchAll(req:completionHandler:)")));
- (KslackCoreSearchAllResponse *)searchAllBlockingReq:(KslackCoreSearchAllRequest *)req __attribute__((swift_name("searchAllBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchFilesReq:(KslackCoreSearchFilesRequest *)req completionHandler:(void (^)(KslackCoreSearchFilesResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchFiles(req:completionHandler:)")));
- (KslackCoreSearchFilesResponse *)searchFilesBlockingReq:(KslackCoreSearchFilesRequest *)req __attribute__((swift_name("searchFilesBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchMessagesReq:(KslackCoreSearchMessagesRequest *)req completionHandler:(void (^)(KslackCoreSearchMessagesResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchMessages(req:completionHandler:)")));
- (KslackCoreSearchMessagesResponse *)searchMessagesBlockingReq:(KslackCoreSearchMessagesRequest *)req __attribute__((swift_name("searchMessagesBlocking(req:)")));
@end

__attribute__((swift_name("CoreStarsResource")))
@protocol KslackCoreStarsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)starsAddReq:(KslackCoreStarsAddRequest *)req completionHandler:(void (^)(KslackCoreStarsAddResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("starsAdd(req:completionHandler:)"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));
- (KslackCoreStarsAddResponse *)starsAddBlockingReq:(KslackCoreStarsAddRequest *)req __attribute__((swift_name("starsAddBlocking(req:)"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)starsListReq:(KslackCoreStarsListRequest *)req completionHandler:(void (^)(KslackCoreStarsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("starsList(req:completionHandler:)"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));
- (KslackCoreStarsListResponse *)starsListBlockingReq:(KslackCoreStarsListRequest *)req __attribute__((swift_name("starsListBlocking(req:)"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)starsRemoveReq:(KslackCoreStarsRemoveRequest *)req completionHandler:(void (^)(KslackCoreStarsRemoveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("starsRemove(req:completionHandler:)"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));
- (KslackCoreStarsRemoveResponse *)starsRemoveBlockingReq:(KslackCoreStarsRemoveRequest *)req __attribute__((swift_name("starsRemoveBlocking(req:)"))) __attribute__((deprecated("Stars API is functionally deprecated. Replaced by Later view.")));
@end

__attribute__((swift_name("CoreStatusResource")))
@protocol KslackCoreStatusResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)currentWithCompletionHandler:(void (^)(KslackCoreCurrentStatus * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("current(completionHandler:)")));
- (KslackCoreCurrentStatus *)currentBlocking __attribute__((swift_name("currentBlocking()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)historyWithCompletionHandler:(void (^)(KslackKotlinArray<KslackCoreSlackIssue *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("history(completionHandler:)")));
- (KslackKotlinArray<KslackCoreSlackIssue *> *)historyBlocking __attribute__((swift_name("historyBlocking()")));
@end

__attribute__((swift_name("CoreTeamResource")))
@protocol KslackCoreTeamResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamAccessLogsReq:(KslackCoreTeamAccessLogsRequest *)req completionHandler:(void (^)(KslackCoreTeamAccessLogsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamAccessLogs(req:completionHandler:)")));
- (KslackCoreTeamAccessLogsResponse *)teamAccessLogsBlockingReq:(KslackCoreTeamAccessLogsRequest *)req __attribute__((swift_name("teamAccessLogsBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamBillableInfoReq:(KslackCoreTeamBillableInfoRequest *)req completionHandler:(void (^)(KslackCoreTeamBillableInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamBillableInfo(req:completionHandler:)")));
- (KslackCoreTeamBillableInfoResponse *)teamBillableInfoBlockingReq:(KslackCoreTeamBillableInfoRequest *)req __attribute__((swift_name("teamBillableInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamBillingInfoReq:(KslackCoreTeamBillingInfoRequest *)req completionHandler:(void (^)(KslackCoreTeamBillingInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamBillingInfo(req:completionHandler:)")));
- (KslackCoreTeamBillingInfoResponse *)teamBillingInfoBlockingReq:(KslackCoreTeamBillingInfoRequest *)req __attribute__((swift_name("teamBillingInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamExternalTeamsDisconnectReq:(KslackCoreTeamExternalTeamsDisconnectRequest *)req completionHandler:(void (^)(KslackCoreTeamExternalTeamsDisconnectResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamExternalTeamsDisconnect(req:completionHandler:)")));
- (KslackCoreTeamExternalTeamsDisconnectResponse *)teamExternalTeamsDisconnectBlockingReq:(KslackCoreTeamExternalTeamsDisconnectRequest *)req __attribute__((swift_name("teamExternalTeamsDisconnectBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamExternalTeamsListReq:(KslackCoreTeamExternalTeamsListRequest *)req completionHandler:(void (^)(KslackCoreTeamExternalTeamsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamExternalTeamsList(req:completionHandler:)")));
- (KslackCoreTeamExternalTeamsListResponse *)teamExternalTeamsListBlockingReq:(KslackCoreTeamExternalTeamsListRequest *)req __attribute__((swift_name("teamExternalTeamsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamInfoReq:(KslackCoreTeamInfoRequest *)req completionHandler:(void (^)(KslackCoreTeamInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamInfo(req:completionHandler:)")));
- (KslackCoreTeamInfoResponse *)teamInfoBlockingReq:(KslackCoreTeamInfoRequest *)req __attribute__((swift_name("teamInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamIntegrationLogsReq:(KslackCoreTeamIntegrationLogsRequest *)req completionHandler:(void (^)(KslackCoreTeamIntegrationLogsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamIntegrationLogs(req:completionHandler:)")));
- (KslackCoreTeamIntegrationLogsResponse *)teamIntegrationLogsBlockingReq:(KslackCoreTeamIntegrationLogsRequest *)req __attribute__((swift_name("teamIntegrationLogsBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamPreferencesListReq:(KslackCoreTeamPreferencesListRequest *)req completionHandler:(void (^)(KslackCoreTeamPreferencesListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamPreferencesList(req:completionHandler:)")));
- (KslackCoreTeamPreferencesListResponse *)teamPreferencesListBlockingReq:(KslackCoreTeamPreferencesListRequest *)req __attribute__((swift_name("teamPreferencesListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)teamProfileGetReq:(KslackCoreTeamProfileGetRequest *)req completionHandler:(void (^)(KslackCoreTeamProfileGetResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("teamProfileGet(req:completionHandler:)")));
- (KslackCoreTeamProfileGetResponse *)teamProfileGetBlockingReq:(KslackCoreTeamProfileGetRequest *)req __attribute__((swift_name("teamProfileGetBlocking(req:)")));
@end

__attribute__((swift_name("CoreUsergroupsResource")))
@protocol KslackCoreUsergroupsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupUsersListReq:(KslackCoreUsergroupUsersListRequest *)req completionHandler:(void (^)(KslackCoreUsergroupUsersListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupUsersList(req:completionHandler:)")));
- (KslackCoreUsergroupUsersListResponse *)usergroupUsersListBlockingReq:(KslackCoreUsergroupUsersListRequest *)req __attribute__((swift_name("usergroupUsersListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupUsersUpdateReq:(KslackCoreUsergroupUsersUpdateRequest *)req completionHandler:(void (^)(KslackCoreUserGroupUsersUpdateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupUsersUpdate(req:completionHandler:)")));
- (KslackCoreUserGroupUsersUpdateResponse *)usergroupUsersUpdateBlockingReq:(KslackCoreUsergroupUsersUpdateRequest *)req __attribute__((swift_name("usergroupUsersUpdateBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupsCreateReq:(KslackCoreUsergroupsCreateRequest *)req completionHandler:(void (^)(KslackCoreUserGroupsCreateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupsCreate(req:completionHandler:)")));
- (KslackCoreUserGroupsCreateResponse *)usergroupsCreateBlockingReq:(KslackCoreUsergroupsCreateRequest *)req __attribute__((swift_name("usergroupsCreateBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupsDisableReq:(KslackCoreUsergroupsDisableRequest *)req completionHandler:(void (^)(KslackCoreUserGroupsDisableResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupsDisable(req:completionHandler:)")));
- (KslackCoreUserGroupsDisableResponse *)usergroupsDisableBlockingReq:(KslackCoreUsergroupsDisableRequest *)req __attribute__((swift_name("usergroupsDisableBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupsEnableReq:(KslackCoreUsergroupsEnableRequest *)req completionHandler:(void (^)(KslackCoreUsergroupsEnableResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupsEnable(req:completionHandler:)")));
- (KslackCoreUsergroupsEnableResponse *)usergroupsEnableBlockingReq:(KslackCoreUsergroupsEnableRequest *)req __attribute__((swift_name("usergroupsEnableBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupsListReq:(KslackCoreUsergroupsListRequest *)req completionHandler:(void (^)(KslackCoreUsergroupsListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupsList(req:completionHandler:)")));
- (KslackCoreUsergroupsListResponse *)usergroupsListBlockingReq:(KslackCoreUsergroupsListRequest *)req __attribute__((swift_name("usergroupsListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usergroupsUpdateReq:(KslackCoreUsergroupsUpdateRequest *)req completionHandler:(void (^)(KslackCoreUsergroupsUpdateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usergroupsUpdate(req:completionHandler:)")));
- (KslackCoreUsergroupsUpdateResponse *)usergroupsUpdateBlockingReq:(KslackCoreUsergroupsUpdateRequest *)req __attribute__((swift_name("usergroupsUpdateBlocking(req:)")));
@end

__attribute__((swift_name("CoreUsersResource")))
@protocol KslackCoreUsersResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersConversationsReq:(KslackCoreUsersConversationsRequest *)req completionHandler:(void (^)(KslackCoreUsersConversationsResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersConversations(req:completionHandler:)")));
- (KslackCoreUsersConversationsResponse *)usersConversationsBlockingReq:(KslackCoreUsersConversationsRequest *)req __attribute__((swift_name("usersConversationsBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersDeletePhotoReq:(KslackCoreUsersDeletePhotoRequest *)req completionHandler:(void (^)(KslackCoreUsersDeletePhotoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersDeletePhoto(req:completionHandler:)")));
- (KslackCoreUsersDeletePhotoResponse *)usersDeletePhotoBlockingReq:(KslackCoreUsersDeletePhotoRequest *)req __attribute__((swift_name("usersDeletePhotoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersDiscoverableContactsLookupReq:(KslackCoreUsersDiscoverableContactsLookupRequest *)req completionHandler:(void (^)(KslackCoreUsersDiscoverableContactsLookupResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersDiscoverableContactsLookup(req:completionHandler:)")));
- (KslackCoreUsersDiscoverableContactsLookupResponse *)usersDiscoverableContactsLookupBlockingReq:(KslackCoreUsersDiscoverableContactsLookupRequest *)req __attribute__((swift_name("usersDiscoverableContactsLookupBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersGetPresenceReq:(KslackCoreUsersGetPresenceRequest *)req completionHandler:(void (^)(KslackCoreUsersGetPresenceResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersGetPresence(req:completionHandler:)")));
- (KslackCoreUsersGetPresenceResponse *)usersGetPresenceBlockingReq:(KslackCoreUsersGetPresenceRequest *)req __attribute__((swift_name("usersGetPresenceBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersIdentityReq:(KslackCoreUsersIdentityRequest *)req completionHandler:(void (^)(KslackCoreUsersIdentityResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersIdentity(req:completionHandler:)")));
- (KslackCoreUsersIdentityResponse *)usersIdentityBlockingReq:(KslackCoreUsersIdentityRequest *)req __attribute__((swift_name("usersIdentityBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersInfoReq:(KslackCoreUsersInfoRequest *)req completionHandler:(void (^)(KslackCoreUsersInfoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersInfo(req:completionHandler:)")));
- (KslackCoreUsersInfoResponse *)usersInfoBlockingReq:(KslackCoreUsersInfoRequest *)req __attribute__((swift_name("usersInfoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersListReq:(KslackCoreUsersListRequest *)req completionHandler:(void (^)(KslackCoreUsersListResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersList(req:completionHandler:)")));
- (KslackCoreUsersListResponse *)usersListBlockingReq:(KslackCoreUsersListRequest *)req __attribute__((swift_name("usersListBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersLookupByEmailReq:(KslackCoreUsersLookupByEmailRequest *)req completionHandler:(void (^)(KslackCoreUsersLookupByEmailResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersLookupByEmail(req:completionHandler:)")));
- (KslackCoreUsersLookupByEmailResponse *)usersLookupByEmailBlockingReq:(KslackCoreUsersLookupByEmailRequest *)req __attribute__((swift_name("usersLookupByEmailBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersProfileGetReq:(KslackCoreUsersProfileGetRequest *)req completionHandler:(void (^)(KslackCoreUsersProfileGetResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersProfileGet(req:completionHandler:)")));
- (KslackCoreUsersProfileGetResponse *)usersProfileGetBlockingReq:(KslackCoreUsersProfileGetRequest *)req __attribute__((swift_name("usersProfileGetBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersProfileSetReq:(KslackCoreUsersProfileSetRequest *)req completionHandler:(void (^)(KslackCoreUsersProfileSetResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersProfileSet(req:completionHandler:)")));
- (KslackCoreUsersProfileSetResponse *)usersProfileSetBlockingReq:(KslackCoreUsersProfileSetRequest *)req __attribute__((swift_name("usersProfileSetBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersSetActiveReq:(KslackCoreUsersSetActiveRequest *)req completionHandler:(void (^)(KslackCoreUsersSetActiveResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersSetActive(req:completionHandler:)"))) __attribute__((deprecated("Deprecated by Slack.")));
- (KslackCoreUsersSetActiveResponse *)usersSetActiveBlockingReq:(KslackCoreUsersSetActiveRequest *)req __attribute__((swift_name("usersSetActiveBlocking(req:)"))) __attribute__((deprecated("Deprecated by Slack.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersSetPhotoReq:(KslackCoreUsersSetPhotoRequest *)req completionHandler:(void (^)(KslackCoreUsersSetPhotoResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersSetPhoto(req:completionHandler:)")));
- (KslackCoreUsersSetPhotoResponse *)usersSetPhotoBlockingReq:(KslackCoreUsersSetPhotoRequest *)req __attribute__((swift_name("usersSetPhotoBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)usersSetPresenceReq:(KslackCoreUsersSetPresenceRequest *)req completionHandler:(void (^)(KslackCoreUsersSetPresenceResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("usersSetPresence(req:completionHandler:)")));
- (KslackCoreUsersSetPresenceResponse *)usersSetPresenceBlockingReq:(KslackCoreUsersSetPresenceRequest *)req __attribute__((swift_name("usersSetPresenceBlocking(req:)")));
@end

__attribute__((swift_name("CoreViewsResource")))
@protocol KslackCoreViewsResource
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)viewsOpenReq:(KslackCoreViewsOpenRequest *)req completionHandler:(void (^)(KslackCoreViewsOpenResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("viewsOpen(req:completionHandler:)")));
- (KslackCoreViewsOpenResponse *)viewsOpenBlockingReq:(KslackCoreViewsOpenRequest *)req __attribute__((swift_name("viewsOpenBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)viewsPublishReq:(KslackCoreViewsPublishRequest *)req completionHandler:(void (^)(KslackCoreViewsPublishResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("viewsPublish(req:completionHandler:)")));
- (KslackCoreViewsPublishResponse *)viewsPublishBlockingReq:(KslackCoreViewsPublishRequest *)req __attribute__((swift_name("viewsPublishBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)viewsPushReq:(KslackCoreViewsPushRequest *)req completionHandler:(void (^)(KslackCoreViewsPushResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("viewsPush(req:completionHandler:)")));
- (KslackCoreViewsPushResponse *)viewsPushBlockingReq:(KslackCoreViewsPushRequest *)req __attribute__((swift_name("viewsPushBlocking(req:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)viewsUpdateReq:(KslackCoreViewsUpdateRequest *)req completionHandler:(void (^)(KslackCoreViewsUpdateResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("viewsUpdate(req:completionHandler:)")));
- (KslackCoreViewsUpdateResponse *)viewsUpdateBlockingReq:(KslackCoreViewsUpdateRequest *)req __attribute__((swift_name("viewsUpdateBlocking(req:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KslackKotlinThrowable : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KslackKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KslackKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KslackKotlinException : KslackKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KslackKotlinRuntimeException : KslackKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KslackKotlinIllegalStateException : KslackKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KslackKotlinCancellationException : KslackKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KslackKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * A marker interface for Slack API request objects.
 */
__attribute__((swift_name("CoreSlackApiRequest")))
@protocol KslackCoreSlackApiRequest
@required
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((swift_name("CoreFormRequest")))
@protocol KslackCoreFormRequest
@required
- (void)addParam:(KslackMutableDictionary<NSString *, id> *)receiver key:(NSString *)key value:(id _Nullable)value __attribute__((swift_name("addParam(_:key:value:)")));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
- (NSArray<KslackKhttpclientHttpParameter *> *)toParams __attribute__((swift_name("toParams()")));
@end


/**
 * https://api.slack.com/methods/admin.apps.approve
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsApproveRequest")))
@interface KslackCoreAdminAppsApproveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token appId:(NSString * _Nullable)appId requestId:(NSString * _Nullable)requestId teamId:(NSString *)teamId __attribute__((swift_name("init(token:appId:requestId:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The id of the app to approve. */
@property NSString * _Nullable appId __attribute__((swift_name("appId")));

/** The id of the request to approve. */
@property NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/** Workspace ID */
@property NSString *teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CoreSlackApiResponse")))
@interface KslackCoreSlackApiResponse : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KslackCoreSlackApiResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property BOOL isOk __attribute__((swift_name("isOk")));
@property NSString * _Nullable needed __attribute__((swift_name("needed")));
@property NSString * _Nullable provided __attribute__((swift_name("provided")));
@property NSString * _Nullable warning __attribute__((swift_name("warning")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsApproveResponse")))
@interface KslackCoreAdminAppsApproveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminAppsApproveResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.apps.requests.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsRequestsListRequest")))
@interface KslackCoreAdminAppsRequestsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:cursor:limit:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set cursor to next_cursor returned by the previous call to list items in the next page */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. Must be between 1 - 1000 both inclusive. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsRequestsListResponse")))
@interface KslackCoreAdminAppsRequestsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminAppsRequestsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreAppRequest *> * _Nullable appRequests __attribute__((swift_name("appRequests")));
@property KslackCoreResponseMetadata * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.apps.restrict
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsRestrictRequest")))
@interface KslackCoreAdminAppsRestrictRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token appId:(NSString * _Nullable)appId requestId:(NSString * _Nullable)requestId teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:appId:requestId:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The id of the app to approve. */
@property NSString * _Nullable appId __attribute__((swift_name("appId")));

/** The id of the request to approve. */
@property NSString * _Nullable requestId __attribute__((swift_name("requestId")));

/** Workspace Id */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsRestrictResponse")))
@interface KslackCoreAdminAppsRestrictResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminAppsRestrictResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.inviteRequests.approve
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsApproveRequest")))
@interface KslackCoreAdminInviteRequestsApproveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token inviteRequestId:(NSString * _Nullable)inviteRequestId teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:inviteRequestId:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of the request to invite. */
@property NSString * _Nullable inviteRequestId __attribute__((swift_name("inviteRequestId")));

/** ID for the workspace where the invite request was made. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsApproveResponse")))
@interface KslackCoreAdminInviteRequestsApproveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminInviteRequestsApproveResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.inviteRequests.approved.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsApprovedListRequest")))
@interface KslackCoreAdminInviteRequestsApprovedListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:cursor:limit:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set cursor to next_cursor returned by the previous call to list items in the next page */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. Must be between 1 - 1000 both inclusive. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsApprovedListResponse")))
@interface KslackCoreAdminInviteRequestsApprovedListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminInviteRequestsApprovedListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable approvedRequests __attribute__((swift_name("approvedRequests")));
@end


/**
 * https://api.slack.com/methods/admin.inviteRequests.denied.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsDeniedListRequest")))
@interface KslackCoreAdminInviteRequestsDeniedListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:cursor:limit:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set cursor to next_cursor returned by the previous call to list items in the next page */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. Must be between 1 - 1000 both inclusive. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsDeniedListResponse")))
@interface KslackCoreAdminInviteRequestsDeniedListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminInviteRequestsDeniedListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable deniedRequests __attribute__((swift_name("deniedRequests")));
@end


/**
 * https://api.slack.com/methods/admin.inviteRequests.deny
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsDenyRequest")))
@interface KslackCoreAdminInviteRequestsDenyRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token inviteRequestId:(NSString * _Nullable)inviteRequestId teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:inviteRequestId:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of the request to deny. */
@property NSString * _Nullable inviteRequestId __attribute__((swift_name("inviteRequestId")));

/** ID for the workspace where the invite request was made. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsDenyResponse")))
@interface KslackCoreAdminInviteRequestsDenyResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminInviteRequestsDenyResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.inviteRequests.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsListRequest")))
@interface KslackCoreAdminInviteRequestsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:cursor:limit:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set cursor to next_cursor returned by the previous call to list items in the next page */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. Must be between 1 - 1000 both inclusive. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsListResponse")))
@interface KslackCoreAdminInviteRequestsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminInviteRequestsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable inviteRequests __attribute__((swift_name("inviteRequests")));
@end


/**
 * https://api.slack.com/methods/admin.teams.admins.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsAdminsListRequest")))
@interface KslackCoreAdminTeamsAdminsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:cursor:limit:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set cursor to next_cursor returned by the previous call to list items in the next page */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. Must be between 1 - 1000 both inclusive. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsAdminsListResponse")))
@interface KslackCoreAdminTeamsAdminsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminTeamsAdminsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable adminIds __attribute__((swift_name("adminIds")));
@property KslackCoreResponseMetadata * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.teams.create
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsCreateRequest")))
@interface KslackCoreAdminTeamsCreateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamDomain:(NSString * _Nullable)teamDomain teamName:(NSString * _Nullable)teamName teamDescription:(NSString * _Nullable)teamDescription teamDiscoverability:(NSString * _Nullable)teamDiscoverability __attribute__((swift_name("init(token:teamDomain:teamName:teamDescription:teamDiscoverability:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Description for the team. */
@property NSString * _Nullable teamDescription __attribute__((swift_name("teamDescription")));

/** Who can join the team. A team's discoverability can be open, closed, invite_only, or unlisted.*/
@property NSString * _Nullable teamDiscoverability __attribute__((swift_name("teamDiscoverability")));

/** Team domain (for example, slacksoftballteam). */
@property NSString * _Nullable teamDomain __attribute__((swift_name("teamDomain")));

/** Team name (for example, Slack Softball Team). */
@property NSString * _Nullable teamName __attribute__((swift_name("teamName")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsCreateResponse")))
@interface KslackCoreAdminTeamsCreateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminTeamsCreateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@end


/**
 * https://api.slack.com/methods/admin.teams.owners.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsOwnersListRequest")))
@interface KslackCoreAdminTeamsOwnersListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:cursor:limit:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set cursor to next_cursor returned by the previous call to list items in the next page */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. Must be between 1 - 1000 both inclusive. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsOwnersListResponse")))
@interface KslackCoreAdminTeamsOwnersListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminTeamsOwnersListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable ownerIds __attribute__((swift_name("ownerIds")));
@property KslackCoreResponseMetadata * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.teams.settings.setDescription
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetDescriptionRequest")))
@interface KslackCoreAdminTeamsSettingsSetDescriptionRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId description:(NSString * _Nullable)description __attribute__((swift_name("init(token:teamId:description:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/** ID for the workspace to set the description for. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetDescriptionResponse")))
@interface KslackCoreAdminTeamsSettingsSetDescriptionResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminTeamsSettingsSetDescriptionResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.teams.settings.setIcon
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetIconRequest")))
@interface KslackCoreAdminTeamsSettingsSetIconRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(token:teamId:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));

/** ID for the workspace to set the icon for. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetIconResponse")))
@interface KslackCoreAdminTeamsSettingsSetIconResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminTeamsSettingsSetIconResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.teams.settings.setName
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetNameRequest")))
@interface KslackCoreAdminTeamsSettingsSetNameRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId name:(NSString * _Nullable)name __attribute__((swift_name("init(token:teamId:name:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** ID for the workspace to set the icon for. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetNameResponse")))
@interface KslackCoreAdminTeamsSettingsSetNameResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminTeamsSettingsSetNameResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.users.assign
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersAssignRequest")))
@interface KslackCoreAdminUsersAssignRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId userId:(NSString * _Nullable)userId isRestricted:(BOOL)isRestricted isUltraRestricted:(BOOL)isUltraRestricted __attribute__((swift_name("init(token:teamId:userId:isRestricted:isUltraRestricted:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** True if user should be added to the workspace as a guest. */
@property BOOL isRestricted __attribute__((swift_name("isRestricted")));

/** True if user should be added to the workspace as a single-channel guest. */
@property BOOL isUltraRestricted __attribute__((swift_name("isUltraRestricted")));

/** Workspace Id. */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The ID of the user to add to the workspace. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersAssignResponse")))
@interface KslackCoreAdminUsersAssignResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersAssignResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.users.invite
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersInviteRequest")))
@interface KslackCoreAdminUsersInviteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channelIds:(KslackKotlinArray<NSString *> * _Nullable)channelIds email:(NSString * _Nullable)email teamId:(NSString * _Nullable)teamId customMessage:(NSString * _Nullable)customMessage guestExpirationTs:(NSString * _Nullable)guestExpirationTs isRestricted:(BOOL)isRestricted isUltraRestricted:(BOOL)isUltraRestricted realName:(NSString * _Nullable)realName isResend:(BOOL)isResend __attribute__((swift_name("init(token:channelIds:email:teamId:customMessage:guestExpirationTs:isRestricted:isUltraRestricted:realName:isResend:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A comma-separated list of channel_ids for this user to join. At least one channel is required. */
@property KslackKotlinArray<NSString *> * _Nullable channelIds __attribute__((swift_name("channelIds")));

/** An optional message to send to the user in the invite email. */
@property NSString * _Nullable customMessage __attribute__((swift_name("customMessage")));

/** The email address of the person to invite. */
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * Timestamp when guest account should be disabled.
 * Only include this timestamp if you inviting a guest user and you want their account to expire on a certain date.
 */
@property NSString * _Nullable guestExpirationTs __attribute__((swift_name("guestExpirationTs")));

/** Allow this invite to be resent in the future if a user has not signed up yet. (default: false) */
@property BOOL isResend __attribute__((swift_name("isResend")));

/** Is this user a multi-channel guest user? (default: false) */
@property BOOL isRestricted __attribute__((swift_name("isRestricted")));

/** Is this user a single channel guest user? (default: false) */
@property BOOL isUltraRestricted __attribute__((swift_name("isUltraRestricted")));

/** Full name of the user. */
@property NSString * _Nullable realName __attribute__((swift_name("realName")));

/** Workspace Id */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersInviteResponse")))
@interface KslackCoreAdminUsersInviteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersInviteResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.users.remove
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersRemoveRequest")))
@interface KslackCoreAdminUsersRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId userId:(NSString * _Nullable)userId __attribute__((swift_name("init(token:teamId:userId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Workspace Id */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The ID of the user to remove. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersRemoveResponse")))
@interface KslackCoreAdminUsersRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.users.session.reset
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSessionResetRequest")))
@interface KslackCoreAdminUsersSessionResetRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token userId:(NSString * _Nullable)userId isMobileOnly:(BOOL)isMobileOnly isWebOnly:(BOOL)isWebOnly __attribute__((swift_name("init(token:userId:isMobileOnly:isWebOnly:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Only expire mobile sessions (default: false) */
@property BOOL isMobileOnly __attribute__((swift_name("isMobileOnly")));

/** Only expire web sessions (default: false) */
@property BOOL isWebOnly __attribute__((swift_name("isWebOnly")));

/** Authentication token bearing required scopes. (admin.users:write) */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The ID of the user to wipe sessions for */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSessionResetResponse")))
@interface KslackCoreAdminUsersSessionResetResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersSessionResetResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * https://api.slack.com/methods/admin.users.setAdmin
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetAdminRequest")))
@interface KslackCoreAdminUsersSetAdminRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId userId:(NSString * _Nullable)userId __attribute__((swift_name("init(token:teamId:userId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Workspace Id */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The ID of the user to designate as an admin. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetAdminResponse")))
@interface KslackCoreAdminUsersSetAdminResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersSetAdminResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.users.setOwner
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetOwnerRequest")))
@interface KslackCoreAdminUsersSetOwnerRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId userId:(NSString * _Nullable)userId __attribute__((swift_name("init(token:teamId:userId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Workspace Id */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Id of the user to promote to owner. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetOwnerResponse")))
@interface KslackCoreAdminUsersSetOwnerResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersSetOwnerResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * https://api.slack.com/methods/admin.users.setRegular
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetRegularRequest")))
@interface KslackCoreAdminUsersSetRegularRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token teamId:(NSString * _Nullable)teamId userId:(NSString * _Nullable)userId __attribute__((swift_name("init(token:teamId:userId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Workspace Id */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The ID of the user to designate as a regular user. */
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetRegularResponse")))
@interface KslackCoreAdminUsersSetRegularResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAdminUsersSetRegularResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApiTestRequest")))
@interface KslackCoreApiTestRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token foo:(NSString * _Nullable)foo error:(NSString * _Nullable)error __attribute__((swift_name("init(token:foo:error:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Error response to return */
@property NSString * _Nullable error __attribute__((swift_name("error")));

/** example property to return */
@property NSString * _Nullable foo __attribute__((swift_name("foo")));

/** Authentication token bearing required scopes. */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApiTestResponse")))
@interface KslackCoreApiTestResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreApiTestResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreArgs * _Nullable args __attribute__((swift_name("args")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsConnectionsOpenRequest")))
@interface KslackCoreAppsConnectionsOpenRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsConnectionsOpenResponse")))
@interface KslackCoreAppsConnectionsOpenResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAppsConnectionsOpenResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * This method uninstalls an app. Unlike auth.revoke, which revokes a single token,
 * this method revokes all tokens associated with a single installation of an app.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsUninstallRequest")))
@interface KslackCoreAppsUninstallRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret __attribute__((swift_name("init(token:clientId:clientSecret:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Issued when you created your application. */
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/** Issued when you created your application. */
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsUninstallResponse")))
@interface KslackCoreAppsUninstallResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAppsUninstallResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthRevokeRequest")))
@interface KslackCoreAuthRevokeRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token isTest:(BOOL)isTest __attribute__((swift_name("init(token:isTest:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Setting this parameter to `1` triggers a _testing mode_
 * where the specified token will not actually be revoked.
 */
@property BOOL isTest __attribute__((swift_name("isTest")));

/** Authentication token. Requires scope: `none` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthRevokeResponse")))
@interface KslackCoreAuthRevokeResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAuthRevokeResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isRevoked __attribute__((swift_name("isRevoked")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthTeamsListRequest")))
@interface KslackCoreAuthTeamsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor includeIcon:(KslackBoolean * _Nullable)includeIcon limit:(KslackInt * _Nullable)limit __attribute__((swift_name("init(token:cursor:includeIcon:limit:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KslackBoolean * _Nullable includeIcon __attribute__((swift_name("includeIcon")));
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthTeamsListResponse")))
@interface KslackCoreAuthTeamsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAuthTeamsListResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="response_metadata")
*/
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property KslackKotlinArray<KslackCoreTeam *> * _Nullable teams __attribute__((swift_name("teams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthTestRequest")))
@interface KslackCoreAuthTestRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `none` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthTestResponse")))
@interface KslackCoreAuthTestResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreAuthTestResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksAddRequest")))
@interface KslackCoreBookmarksAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channelId:(NSString * _Nullable)channelId title:(NSString * _Nullable)title type:(NSString * _Nullable)type emoji:(NSString * _Nullable)emoji link:(NSString * _Nullable)link __attribute__((swift_name("init(token:channelId:title:type:emoji:link:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@property NSString * _Nullable link __attribute__((swift_name("link")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksAddResponse")))
@interface KslackCoreBookmarksAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreBookmarksAddResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreBookmark * _Nullable bookmark __attribute__((swift_name("bookmark")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksEditRequest")))
@interface KslackCoreBookmarksEditRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token bookmarkId:(NSString * _Nullable)bookmarkId channelId:(NSString * _Nullable)channelId emoji:(NSString * _Nullable)emoji link:(NSString * _Nullable)link title:(NSString * _Nullable)title __attribute__((swift_name("init(token:bookmarkId:channelId:emoji:link:title:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable bookmarkId __attribute__((swift_name("bookmarkId")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));
@property NSString * _Nullable link __attribute__((swift_name("link")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksEditResponse")))
@interface KslackCoreBookmarksEditResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreBookmarksEditResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreBookmark * _Nullable bookmark __attribute__((swift_name("bookmark")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksListRequest")))
@interface KslackCoreBookmarksListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channelId:(NSString * _Nullable)channelId __attribute__((swift_name("init(token:channelId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksListResponse")))
@interface KslackCoreBookmarksListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreBookmarksListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreBookmark *> * _Nullable bookmarks __attribute__((swift_name("bookmarks")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksRemoveRequest")))
@interface KslackCoreBookmarksRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token bookmarkId:(NSString * _Nullable)bookmarkId channelId:(NSString * _Nullable)channelId __attribute__((swift_name("init(token:bookmarkId:channelId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable bookmarkId __attribute__((swift_name("bookmarkId")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksRemoveResponse")))
@interface KslackCoreBookmarksRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreBookmarksRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotsInfoRequest")))
@interface KslackCoreBotsInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token bot:(NSString * _Nullable)bot __attribute__((swift_name("init(token:bot:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Bot user to get info on */
@property NSString * _Nullable bot __attribute__((swift_name("bot")));

/** Authentication token. Requires scope: `users:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotsInfoResponse")))
@interface KslackCoreBotsInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreBotsInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreBot * _Nullable bot __attribute__((swift_name("bot")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsAddRequest")))
@interface KslackCoreCallsAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token externalUniqueId:(NSString * _Nullable)externalUniqueId joinUrl:(NSString * _Nullable)joinUrl createdBy:(NSString * _Nullable)createdBy dateStart:(KslackInt * _Nullable)dateStart desktopAppJoinUrl:(NSString * _Nullable)desktopAppJoinUrl externalDisplayId:(NSString * _Nullable)externalDisplayId title:(NSString * _Nullable)title users:(NSString * _Nullable)users __attribute__((swift_name("init(token:externalUniqueId:joinUrl:createdBy:dateStart:desktopAppJoinUrl:externalDisplayId:title:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property KslackInt * _Nullable dateStart __attribute__((swift_name("dateStart")));
@property NSString * _Nullable desktopAppJoinUrl __attribute__((swift_name("desktopAppJoinUrl")));
@property NSString * _Nullable externalDisplayId __attribute__((swift_name("externalDisplayId")));
@property NSString * _Nullable externalUniqueId __attribute__((swift_name("externalUniqueId")));
@property NSString * _Nullable joinUrl __attribute__((swift_name("joinUrl")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsAddResponse")))
@interface KslackCoreCallsAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreCallsAddResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreCall * _Nullable call __attribute__((swift_name("call")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsEndRequest")))
@interface KslackCoreCallsEndRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token id:(NSString * _Nullable)id duration:(KslackInt * _Nullable)duration __attribute__((swift_name("init(token:id:duration:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable duration __attribute__((swift_name("duration")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsEndResponse")))
@interface KslackCoreCallsEndResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreCallsEndResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsInfoRequest")))
@interface KslackCoreCallsInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token id:(NSString * _Nullable)id __attribute__((swift_name("init(token:id:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsInfoResponse")))
@interface KslackCoreCallsInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreCallsInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreCall * _Nullable call __attribute__((swift_name("call")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsParticipantsAddRequest")))
@interface KslackCoreCallsParticipantsAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token id:(NSString * _Nullable)id users:(NSString * _Nullable)users __attribute__((swift_name("init(token:id:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsParticipantsAddResponse")))
@interface KslackCoreCallsParticipantsAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreCallsParticipantsAddResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsParticipantsRemoveRequest")))
@interface KslackCoreCallsParticipantsRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token id:(NSString * _Nullable)id users:(NSString * _Nullable)users __attribute__((swift_name("init(token:id:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsParticipantsRemoveResponse")))
@interface KslackCoreCallsParticipantsRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreCallsParticipantsRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsUpdateRequest")))
@interface KslackCoreCallsUpdateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token id:(NSString * _Nullable)id desktopAppJoinUrl:(NSString * _Nullable)desktopAppJoinUrl joinUrl:(NSString * _Nullable)joinUrl title:(NSString * _Nullable)title __attribute__((swift_name("init(token:id:desktopAppJoinUrl:joinUrl:title:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable desktopAppJoinUrl __attribute__((swift_name("desktopAppJoinUrl")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable joinUrl __attribute__((swift_name("joinUrl")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsUpdateResponse")))
@interface KslackCoreCallsUpdateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreCallsUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreCall * _Nullable call __attribute__((swift_name("call")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatAppendStreamRequest")))
@interface KslackCoreChatAppendStreamRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token streamId:(NSString * _Nullable)streamId channel:(NSString * _Nullable)channel text:(NSString * _Nullable)text __attribute__((swift_name("init(token:streamId:channel:text:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable streamId __attribute__((swift_name("streamId")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatAppendStreamResponse")))
@interface KslackCoreChatAppendStreamResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatAppendStreamResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatDeleteRequest")))
@interface KslackCoreChatDeleteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token ts:(NSString * _Nullable)ts channel:(NSString * _Nullable)channel isAsUser:(BOOL)isAsUser __attribute__((swift_name("init(token:ts:channel:isAsUser:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel containing the message to be deleted. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Pass true to delete the message as the authed user with `chat:write:user` scope.
 * [Bot users](/bot-users) in this context are considered authed users.
 * If unused or false, the message will be deleted with `chat:write:bot` scope.
 */
@property BOOL isAsUser __attribute__((swift_name("isAsUser")));

/** Authentication token. Requires scope: `chat:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Timestamp of the message to be deleted. */
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatDeleteResponse")))
@interface KslackCoreChatDeleteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatDeleteResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatDeleteScheduledMessageRequest")))
@interface KslackCoreChatDeleteScheduledMessageRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel scheduledMessageId:(NSString * _Nullable)scheduledMessageId isAsUser:(KslackBoolean * _Nullable)isAsUser __attribute__((swift_name("init(token:channel:scheduledMessageId:isAsUser:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The channel the scheduled_message is posting to */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Pass true to delete the message as the authed user with chat:write:user scope.
 * Bot users in this context are considered authed users.
 * If unused or false, the message will be deleted with chat:write:bot scope.
 */
@property KslackBoolean * _Nullable isAsUser __attribute__((swift_name("isAsUser")));

/** scheduled_message_id returned from call to chat.scheduleMessage */
@property NSString * _Nullable scheduledMessageId __attribute__((swift_name("scheduledMessageId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatDeleteScheduledMessageResponse")))
@interface KslackCoreChatDeleteScheduledMessageResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatDeleteScheduledMessageResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * A request to retrieve a permalink URL for a specific extant message
 * @see [Slack chat.getPermalink API](https://api.slack.com/methods/chat.getPermalink)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatGetPermalinkRequest")))
@interface KslackCoreChatGetPermalinkRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel messageTs:(NSString * _Nullable)messageTs __attribute__((swift_name("init(token:channel:messageTs:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The ID of the conversation or channel containing the message */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** A message's `ts` value, uniquely identifying it within a channel */
@property NSString * _Nullable messageTs __attribute__((swift_name("messageTs")));

/** Authentication token. Requires scope: `none` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatGetPermalinkResponse")))
@interface KslackCoreChatGetPermalinkResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatGetPermalinkResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable permalink __attribute__((swift_name("permalink")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatMeMessageRequest")))
@interface KslackCoreChatMeMessageRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel text:(NSString * _Nullable)text __attribute__((swift_name("init(token:channel:text:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel to send message to. Can be a public channel, private group or IM channel. Can be an encoded ID, or a name. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Text of the message to send. */
@property NSString * _Nullable text __attribute__((swift_name("text")));

/** Authentication token. Requires scope: `chat:write:user` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatMeMessageResponse")))
@interface KslackCoreChatMeMessageResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatMeMessageResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatPostEphemeralRequest")))
@interface KslackCoreChatPostEphemeralRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel text:(NSString * _Nullable)text user:(NSString * _Nullable)user isAsUser:(BOOL)isAsUser blocks:(KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable)blocks blocksAsString:(NSString * _Nullable)blocksAsString attachments:(KslackKotlinArray<KslackCoreAttachment *> * _Nullable)attachments attachmentsAsString:(NSString * _Nullable)attachmentsAsString isLinkNames:(BOOL)isLinkNames parse:(NSString * _Nullable)parse __attribute__((swift_name("init(token:channel:text:user:isAsUser:blocks:blocksAsString:attachments:attachmentsAsString:isLinkNames:parse:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property NSString * _Nullable attachmentsAsString __attribute__((swift_name("attachmentsAsString")));

/** A JSON-based array of structured blocks, presented as a URL-encoded string. */
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));

/** A JSON-based array of structured blocks as a String, presented as a URL-encoded string. */
@property NSString * _Nullable blocksAsString __attribute__((swift_name("blocksAsString")));

/** Channel, private group, or IM channel to send message to. Can be an encoded ID, or a name. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Pass true to post the message as the authed bot. Defaults to false. */
@property BOOL isAsUser __attribute__((swift_name("isAsUser")));

/** Find and link channel names and usernames. */
@property BOOL isLinkNames __attribute__((swift_name("isLinkNames")));

/** Change how messages are treated. Defaults to `none`. See [below](#formatting). */
@property NSString * _Nullable parse __attribute__((swift_name("parse")));

/**
 * Text of the message to send.
 * See below for an explanation of [formatting](#formatting).
 * This field is usually required, unless you're providing only `attachments` instead.
 */
@property NSString * _Nullable text __attribute__((swift_name("text")));

/** Authentication token. Requires scope: `chat:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** `id` of the user who will receive the ephemeral message. The user should be in the channel specified by the `channel` argument. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatPostEphemeralResponse")))
@interface KslackCoreChatPostEphemeralResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatPostEphemeralResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable messageTs __attribute__((swift_name("messageTs")));
@end


/**
 * https://api.slack.com/methods/chat.postMessage
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatPostMessageRequest")))
@interface KslackCoreChatPostMessageRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token username:(NSString * _Nullable)username threadTs:(NSString * _Nullable)threadTs channel:(NSString * _Nullable)channel text:(NSString * _Nullable)text parse:(NSString * _Nullable)parse isLinkNames:(BOOL)isLinkNames blocks:(KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable)blocks blocksAsString:(NSString * _Nullable)blocksAsString attachments:(KslackKotlinArray<KslackCoreAttachment *> * _Nullable)attachments attachmentsAsString:(NSString * _Nullable)attachmentsAsString isUnfurlLinks:(BOOL)isUnfurlLinks isUnfurlMedia:(BOOL)isUnfurlMedia isAsUser:(KslackBoolean * _Nullable)isAsUser isMrkdwn:(BOOL)isMrkdwn iconUrl:(NSString * _Nullable)iconUrl iconEmoji:(NSString * _Nullable)iconEmoji isReplyBroadcast:(BOOL)isReplyBroadcast __attribute__((swift_name("init(token:username:threadTs:channel:text:parse:isLinkNames:blocks:blocksAsString:attachments:attachmentsAsString:isUnfurlLinks:isUnfurlMedia:isAsUser:isMrkdwn:iconUrl:iconEmoji:isReplyBroadcast:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property NSString * _Nullable attachmentsAsString __attribute__((swift_name("attachmentsAsString")));

/** A JSON-based array of structured blocks, presented as a URL-encoded string. */
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));

/** A JSON-based array of structured blocks as a String, presented as a URL-encoded string. */
@property NSString * _Nullable blocksAsString __attribute__((swift_name("blocksAsString")));

/**
 * Channel, private group, or IM channel to send message to.
 * Can be an encoded ID, or a name. See [below](#channels) for more details.
 */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Emoji to use as the icon for this message. Overrides `icon_url`.
 * Must be used in conjunction with `as_user` set to `false`, otherwise ignored. See [authorship](#authorship) below.
 */
@property NSString * _Nullable iconEmoji __attribute__((swift_name("iconEmoji")));

/**
 * URL to an image to use as the icon for this message.
 * Must be used in conjunction with `as_user` set to false, otherwise ignored. See [authorship](#authorship) below.
 */
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));

/**
 * Pass true to post the message as the authed user, instead of as a bot.
 * Defaults to false. See [authorship](#authorship) below.
 * NOTE: The default value is intentionally null to support workplace apps.
 */
@property KslackBoolean * _Nullable isAsUser __attribute__((swift_name("isAsUser")));

/** Find and link channel names and usernames.*/
@property BOOL isLinkNames __attribute__((swift_name("isLinkNames")));

/** Disable Slack markup parsing by setting to `false`. Enabled by default. */
@property BOOL isMrkdwn __attribute__((swift_name("isMrkdwn")));

/**
 * Used in conjunction with `thread_ts` and indicates whether reply should be made visible to
 * everyone in the channel or conversation. Defaults to `false`.
 */
@property BOOL isReplyBroadcast __attribute__((swift_name("isReplyBroadcast")));

/** Pass true to enable unfurling of primarily text-based content. */
@property BOOL isUnfurlLinks __attribute__((swift_name("isUnfurlLinks")));

/** Pass false to disable unfurling of media content. */
@property BOOL isUnfurlMedia __attribute__((swift_name("isUnfurlMedia")));

/** Change how messages are treated. Defaults to `none`. See [below](#formatting). */
@property NSString * _Nullable parse __attribute__((swift_name("parse")));

/**
 * Text of the message to send. See below for an explanation of [formatting](#formatting).
 * This field is usually required, unless you're providing only `attachments` instead.
 */
@property NSString * _Nullable text __attribute__((swift_name("text")));

/** Provide another message's `ts` value to make this message a reply. Avoid using a reply's `ts` value; use its parent instead. */
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));

/** Authentication token. Requires scope: `chat:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * aSet your bot's user name.
 * Must be used in conjunction with `as_user` set to false, otherwise ignored. See [authorship](#authorship) below.
 */
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatPostMessageResponse")))
@interface KslackCoreChatPostMessageResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatPostMessageResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackKotlinx_serialization_jsonJsonElement * _Nullable message __attribute__((swift_name("message")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatScheduleMessageRequest")))
@interface KslackCoreChatScheduleMessageRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel postAt:(KslackInt * _Nullable)postAt text:(NSString * _Nullable)text isAsUser:(KslackBoolean * _Nullable)isAsUser attachments:(KslackKotlinArray<KslackCoreAttachment *> * _Nullable)attachments attachmentsAsString:(NSString * _Nullable)attachmentsAsString blocks:(KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable)blocks blocksAsString:(NSString * _Nullable)blocksAsString isLinkNames:(BOOL)isLinkNames parse:(NSString * _Nullable)parse isReplyBroadcast:(BOOL)isReplyBroadcast threadTs:(NSString * _Nullable)threadTs isUnfurlLinks:(BOOL)isUnfurlLinks isUnfurlMedia:(BOOL)isUnfurlMedia __attribute__((swift_name("init(token:channel:postAt:text:isAsUser:attachments:attachmentsAsString:blocks:blocksAsString:isLinkNames:parse:isReplyBroadcast:threadTs:isUnfurlLinks:isUnfurlMedia:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property NSString * _Nullable attachmentsAsString __attribute__((swift_name("attachmentsAsString")));

/** A JSON-based array of structured blocks, presented as a URL-encoded string. */
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));

/** A JSON-based array of structured blocks as a String, presented as a URL-encoded string. */
@property NSString * _Nullable blocksAsString __attribute__((swift_name("blocksAsString")));

/** Channel, private group, or DM channel to send message to. Can be an encoded ID, or a name. See below for more details. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Pass true to post the message as the authed user, instead of as a bot. Defaults to false. See authorship below. */
@property KslackBoolean * _Nullable isAsUser __attribute__((swift_name("isAsUser")));

/** Find and link channel names and usernames. */
@property BOOL isLinkNames __attribute__((swift_name("isLinkNames")));

/**
 * Used in conjunction with thread_ts and indicates whether reply should be made visible to everyone
 * in the channel or conversation. Defaults to false.
 */
@property BOOL isReplyBroadcast __attribute__((swift_name("isReplyBroadcast")));

/** Pass true to enable unfurling of primarily text-based content. */
@property BOOL isUnfurlLinks __attribute__((swift_name("isUnfurlLinks")));

/** Pass false to disable unfurling of media content. */
@property BOOL isUnfurlMedia __attribute__((swift_name("isUnfurlMedia")));

/** Change how messages are treated. Defaults to none. See below. */
@property NSString * _Nullable parse __attribute__((swift_name("parse")));

/** Unix EPOCH timestamp of time in future to send the message. */
@property KslackInt * _Nullable postAt __attribute__((swift_name("postAt")));

/**
 * Text of the message to send. See below for an explanation of formatting.
 * This field is usually required, unless you're providing only attachments instead.
 * Provide no more than 40,000 characters or risk truncation.
 */
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * Provide another message's ts value to make this message a reply.
 * Avoid using a reply's ts value; use its parent instead.
 */
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));

/** Authentication token. Requires scope: `chat:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatScheduleMessageResponse")))
@interface KslackCoreChatScheduleMessageResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatScheduleMessageResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackCoreMessage * _Nullable message __attribute__((swift_name("message")));
@property KslackInt * _Nullable postAt __attribute__((swift_name("postAt")));
@property NSString * _Nullable scheduledMessageId __attribute__((swift_name("scheduledMessageId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatScheduleMessagesListRequest")))
@interface KslackCoreChatScheduleMessagesListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel cursor:(NSString * _Nullable)cursor latest:(NSString * _Nullable)latest limit:(KslackInt * _Nullable)limit oldest:(NSString * _Nullable)oldest __attribute__((swift_name("init(token:channel:cursor:latest:limit:oldest:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * The channel of the scheduled messages
 */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * For pagination purposes, this is the cursor value returned from a previous call to chat.scheduledmessages.list
 * indicating where you want to start this call from.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/**
 * A UNIX timestamp of the latest value in the time range
 */
@property NSString * _Nullable latest __attribute__((swift_name("latest")));

/**
 * Maximum number of original entries to return.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/**
 * A UNIX timestamp of the oldest value in the time range
 */
@property NSString * _Nullable oldest __attribute__((swift_name("oldest")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatScheduleMessagesListResponse")))
@interface KslackCoreChatScheduleMessagesListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatScheduleMessagesListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property KslackKotlinArray<KslackCoreScheduledMessage *> * _Nullable scheduledMessages __attribute__((swift_name("scheduledMessages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatStartStreamRequest")))
@interface KslackCoreChatStartStreamRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel threadTs:(NSString * _Nullable)threadTs text:(NSString * _Nullable)text __attribute__((swift_name("init(token:channel:threadTs:text:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatStartStreamResponse")))
@interface KslackCoreChatStartStreamResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatStartStreamResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="stream_id")
*/
@property NSString * _Nullable streamId __attribute__((swift_name("streamId")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatStopStreamRequest")))
@interface KslackCoreChatStopStreamRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token streamId:(NSString * _Nullable)streamId channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:streamId:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable streamId __attribute__((swift_name("streamId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatStopStreamResponse")))
@interface KslackCoreChatStopStreamResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatStopStreamResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end


/**
 * Provide custom unfurl behavior for user-posted URLs
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUnfurlRequest")))
@interface KslackCoreChatUnfurlRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token userAuthMessage:(NSString * _Nullable)userAuthMessage isUserAuthRequired:(BOOL)isUserAuthRequired rawUnfurls:(NSString * _Nullable)rawUnfurls unfurls:(NSDictionary<NSString *, KslackCoreChatUnfurlRequestUnfurlDetail *> * _Nullable)unfurls ts:(NSString * _Nullable)ts userAuthUrl:(NSString * _Nullable)userAuthUrl channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:userAuthMessage:isUserAuthRequired:rawUnfurls:unfurls:ts:userAuthUrl:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel ID of the message */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Set to `true` or `1` to indicate the user must install your Slack app to trigger unfurls for this domain */
@property BOOL isUserAuthRequired __attribute__((swift_name("isUserAuthRequired")));

/** URL-encoded JSON map with keys set to URLs featured in the the message, pointing to their unfurl message attachments.*/
@property NSString * _Nullable rawUnfurls __attribute__((swift_name("rawUnfurls")));

/** Authentication token. Requires scope: `links:write`*/
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Timestamp of the message to add unfurl behavior to. */
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSDictionary<NSString *, KslackCoreChatUnfurlRequestUnfurlDetail *> * _Nullable unfurls __attribute__((swift_name("unfurls")));

/**
 * Provide a simply-formatted string to send as an ephemeral message to the user
 * as invitation to authenticate further and enable full unfurling behavior
 */
@property NSString * _Nullable userAuthMessage __attribute__((swift_name("userAuthMessage")));

/**
 * Send users to this custom URL where they will complete authentication in your app to fully trigger unfurling.
 * Value should be properly URL-encoded.
 */
@property NSString * _Nullable userAuthUrl __attribute__((swift_name("userAuthUrl")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUnfurlResponse")))
@interface KslackCoreChatUnfurlResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatUnfurlResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUpdateRequest")))
@interface KslackCoreChatUpdateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel ts:(NSString * _Nullable)ts text:(NSString * _Nullable)text user:(NSString * _Nullable)user isAsUser:(BOOL)isAsUser blocks:(KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable)blocks blocksAsString:(NSString * _Nullable)blocksAsString attachments:(KslackKotlinArray<KslackCoreAttachment *> * _Nullable)attachments attachmentsAsString:(NSString * _Nullable)attachmentsAsString isLinkNames:(BOOL)isLinkNames parse:(NSString * _Nullable)parse __attribute__((swift_name("init(token:channel:ts:text:user:isAsUser:blocks:blocksAsString:attachments:attachmentsAsString:isLinkNames:parse:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));

/** A JSON-based array of structured attachments, presented as a URL-encoded string. */
@property NSString * _Nullable attachmentsAsString __attribute__((swift_name("attachmentsAsString")));

/** A JSON-based array of structured blocks, presented as a URL-encoded string. */
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));

/** A JSON-based array of structured blocks as a String, presented as a URL-encoded string. */
@property NSString * _Nullable blocksAsString __attribute__((swift_name("blocksAsString")));

/** Channel, private group, or IM channel to send message to. Can be an encoded ID, or a name. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Pass true to post the message as the authed bot. Defaults to false. */
@property BOOL isAsUser __attribute__((swift_name("isAsUser")));

/** Find and link channel names and usernames. */
@property BOOL isLinkNames __attribute__((swift_name("isLinkNames")));

/** Change how messages are treated. Defaults to `none`. See [below](#formatting). */
@property NSString * _Nullable parse __attribute__((swift_name("parse")));

/**
 * Text of the message to send.
 * See below for an explanation of [formatting](#formatting).
 * This field is usually required, unless you're providing only `attachments` instead.
 */
@property NSString * _Nullable text __attribute__((swift_name("text")));

/** Authentication token. Requires scope: `chat:write`*/
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Timestamp of the message to be updated. */
@property NSString * _Nullable ts __attribute__((swift_name("ts")));

/** `id` of the user who will receive the ephemeral message. The user should be in the channel specified by the `channel` argument. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUpdateResponse")))
@interface KslackCoreChatUpdateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreChatUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackCoreMessage * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsAcceptSharedInviteRequest")))
@interface KslackCoreConversationsAcceptSharedInviteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channelName:(NSString * _Nullable)channelName channelId:(NSString * _Nullable)channelId freeTrialAccepted:(KslackBoolean * _Nullable)freeTrialAccepted inviteId:(NSString * _Nullable)inviteId isPrivate:(KslackBoolean * _Nullable)isPrivate teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:channelName:channelId:freeTrialAccepted:inviteId:isPrivate:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable channelName __attribute__((swift_name("channelName")));
@property KslackBoolean * _Nullable freeTrialAccepted __attribute__((swift_name("freeTrialAccepted")));
@property NSString * _Nullable inviteId __attribute__((swift_name("inviteId")));
@property KslackBoolean * _Nullable isPrivate __attribute__((swift_name("isPrivate")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsAcceptSharedInviteResponse")))
@interface KslackCoreConversationsAcceptSharedInviteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsAcceptSharedInviteResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel_id")
*/
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="implicit_approval")
*/
@property KslackBoolean * _Nullable implicitApproval __attribute__((swift_name("implicitApproval")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsApproveSharedInviteRequest")))
@interface KslackCoreConversationsApproveSharedInviteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token inviteId:(NSString * _Nullable)inviteId targetApprovalsChannelId:(NSString * _Nullable)targetApprovalsChannelId __attribute__((swift_name("init(token:inviteId:targetApprovalsChannelId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable inviteId __attribute__((swift_name("inviteId")));
@property NSString * _Nullable targetApprovalsChannelId __attribute__((swift_name("targetApprovalsChannelId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsApproveSharedInviteResponse")))
@interface KslackCoreConversationsApproveSharedInviteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsApproveSharedInviteResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsArchiveRequest")))
@interface KslackCoreConversationsArchiveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of conversation to archive */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsArchiveResponse")))
@interface KslackCoreConversationsArchiveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsArchiveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCanvasesCreateRequest")))
@interface KslackCoreConversationsCanvasesCreateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channelId:(NSString * _Nullable)channelId documentContent:(NSString * _Nullable)documentContent __attribute__((swift_name("init(token:channelId:documentContent:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable documentContent __attribute__((swift_name("documentContent")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCanvasesCreateResponse")))
@interface KslackCoreConversationsCanvasesCreateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsCanvasesCreateResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="canvas_id")
*/
@property NSString * _Nullable canvasId __attribute__((swift_name("canvasId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCloseRequest")))
@interface KslackCoreConversationsCloseRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Conversation to close. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCloseResponse")))
@interface KslackCoreConversationsCloseResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsCloseResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCreateRequest")))
@interface KslackCoreConversationsCreateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token name:(NSString * _Nullable)name isPrivate:(BOOL)isPrivate __attribute__((swift_name("init(token:name:isPrivate:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Create a private channel instead of a public one */
@property BOOL isPrivate __attribute__((swift_name("isPrivate")));

/** Name of the public or private channel to create */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Authentication token. Requires scope: `conversations:write`*/
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCreateResponse")))
@interface KslackCoreConversationsCreateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsCreateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable detail __attribute__((swift_name("detail")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsDeclineSharedInviteRequest")))
@interface KslackCoreConversationsDeclineSharedInviteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token inviteId:(NSString * _Nullable)inviteId targetApprovalsChannelId:(NSString * _Nullable)targetApprovalsChannelId __attribute__((swift_name("init(token:inviteId:targetApprovalsChannelId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable inviteId __attribute__((swift_name("inviteId")));
@property NSString * _Nullable targetApprovalsChannelId __attribute__((swift_name("targetApprovalsChannelId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsDeclineSharedInviteResponse")))
@interface KslackCoreConversationsDeclineSharedInviteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsDeclineSharedInviteResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsHistoryRequest")))
@interface KslackCoreConversationsHistoryRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel cursor:(NSString * _Nullable)cursor oldest:(NSString * _Nullable)oldest latest:(NSString * _Nullable)latest limit:(KslackInt * _Nullable)limit isInclusive:(BOOL)isInclusive __attribute__((swift_name("init(token:channel:cursor:oldest:latest:limit:isInclusive:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Conversation ID to fetch history for.
 */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Paginate through collections of data by setting the `cursor` parameter to a `next_cursor` attribute
 * returned by a previous request's `response_metadata`.
 *
 *
 * Default value fetches the first \"page\" of the collection. See [pagination](/docs/pagination) for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/**
 * Include messages with latest or oldest timestamp in results only when either timestamp is specified.
 */
@property BOOL isInclusive __attribute__((swift_name("isInclusive")));

/**
 * End of time range of messages to include in results.
 */
@property NSString * _Nullable latest __attribute__((swift_name("latest")));

/**
 * The maximum number of items to return. Fewer than the requested number of items may be returned,
 * even if the end of the users list hasn't been reached.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/**
 * Start of time range of messages to include in results.
 */
@property NSString * _Nullable oldest __attribute__((swift_name("oldest")));

/**
 * Authentication token. Requires scope: `conversations:history`
 */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsHistoryResponse")))
@interface KslackCoreConversationsHistoryResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsHistoryResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable channelActionsCount __attribute__((swift_name("channelActionsCount")));
@property NSString * _Nullable channelActionsTs __attribute__((swift_name("channelActionsTs")));
@property BOOL isHasMore __attribute__((swift_name("isHasMore")));
@property NSString * _Nullable latest __attribute__((swift_name("latest")));
@property KslackKotlinArray<KslackCoreMessage *> * _Nullable messages __attribute__((swift_name("messages")));
@property KslackInt * _Nullable pinCount __attribute__((swift_name("pinCount")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInfoRequest")))
@interface KslackCoreConversationsInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel isIncludeLocale:(BOOL)isIncludeLocale isIncludeNumMembers:(BOOL)isIncludeNumMembers __attribute__((swift_name("init(token:channel:isIncludeLocale:isIncludeNumMembers:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Conversation ID to learn more about */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Set this to `true` to receive the locale for this conversation.
 * Defaults to `false`
 */
@property BOOL isIncludeLocale __attribute__((swift_name("isIncludeLocale")));

/**
 * Set to true to include the member count for the specified conversation.
 * Defaults to false
 */
@property BOOL isIncludeNumMembers __attribute__((swift_name("isIncludeNumMembers")));

/** Authentication token. Requires scope: `conversations:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInfoResponse")))
@interface KslackCoreConversationsInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInviteRequest")))
@interface KslackCoreConversationsInviteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel users:(KslackKotlinArray<NSString *> * _Nullable)users __attribute__((swift_name("init(token:channel:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The ID of the public or private channel to invite user(s) to. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** A comma separated list of user IDs. Up to 30 users may be listed. */
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInviteResponse")))
@interface KslackCoreConversationsInviteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsInviteResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@property KslackKotlinArray<KslackCoreError *> * _Nullable errors __attribute__((swift_name("errors")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInviteSharedRequest")))
@interface KslackCoreConversationsInviteSharedRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel emails:(NSString * _Nullable)emails userIds:(NSString * _Nullable)userIds externalLimited:(KslackBoolean * _Nullable)externalLimited __attribute__((swift_name("init(token:channel:emails:userIds:externalLimited:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable emails __attribute__((swift_name("emails")));
@property KslackBoolean * _Nullable externalLimited __attribute__((swift_name("externalLimited")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable userIds __attribute__((swift_name("userIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInviteSharedResponse")))
@interface KslackCoreConversationsInviteSharedResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsInviteSharedResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conf_code")
*/
@property NSString * _Nullable confCode __attribute__((swift_name("confCode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invite_id")
*/
@property NSString * _Nullable inviteId __attribute__((swift_name("inviteId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_legacy_shared_channel")
*/
@property KslackBoolean * _Nullable isLegacySharedChannel __attribute__((swift_name("isLegacySharedChannel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsJoinRequest")))
@interface KslackCoreConversationsJoinRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of conversation to join */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `channels:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsJoinResponse")))
@interface KslackCoreConversationsJoinResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsJoinResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsKickRequest")))
@interface KslackCoreConversationsKickRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel user:(NSString * _Nullable)user __attribute__((swift_name("init(token:channel:user:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of conversation to remove user from. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** User ID to be removed. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsKickResponse")))
@interface KslackCoreConversationsKickResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsKickResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsLeaveRequest")))
@interface KslackCoreConversationsLeaveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Conversation to leave */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsLeaveResponse")))
@interface KslackCoreConversationsLeaveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsLeaveResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isNotInChannel __attribute__((swift_name("isNotInChannel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListRequest")))
@interface KslackCoreConversationsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor isExcludeArchived:(BOOL)isExcludeArchived limit:(KslackInt * _Nullable)limit types:(KslackKotlinArray<KslackCoreConversationType *> * _Nullable)types __attribute__((swift_name("init(token:cursor:isExcludeArchived:limit:types:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Paginate through collections of data by setting the `cursor` parameter to
 * a `next_cursor` attribute returned by a previous request's `response_metadata`.
 * Default value fetches the first \"page\" of the collection. See [pagination](/docs/pagination) for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** Set to `true` to exclude archived channels from the list */
@property BOOL isExcludeArchived __attribute__((swift_name("isExcludeArchived")));

/**
 * The maximum number of items to return. Fewer than the requested number of items may be returned,
 * even if the end of the list hasn't been reached. Must be an integer no larger than 1000.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Authentication token. Requires scope: `conversations:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * Mix and match channel types by providing a comma-separated list of
 * any combination of `public_channel`, `private_channel`, `mpim`, `im`
 */
@property KslackKotlinArray<KslackCoreConversationType *> * _Nullable types __attribute__((swift_name("types")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListResponse")))
@interface KslackCoreConversationsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreConversation *> * _Nullable channels __attribute__((swift_name("channels")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListConnectInvitesRequest")))
@interface KslackCoreConversationsListConnectInvitesRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token count:(KslackInt * _Nullable)count cursor:(NSString * _Nullable)cursor teamId:(NSString * _Nullable)teamId __attribute__((swift_name("init(token:count:cursor:teamId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListConnectInvitesResponse")))
@interface KslackCoreConversationsListConnectInvitesResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsListConnectInvitesResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreSharedInvite *> * _Nullable invites __attribute__((swift_name("invites")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="response_metadata")
*/
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsMarkRequest")))
@interface KslackCoreConversationsMarkRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel ts:(NSString * _Nullable)ts __attribute__((swift_name("init(token:channel:ts:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel or conversation to set the read cursor for. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Unique identifier of message you want marked as most recently seen in this conversation. */
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsMarkResponse")))
@interface KslackCoreConversationsMarkResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsMarkResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsMembersRequest")))
@interface KslackCoreConversationsMembersRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit __attribute__((swift_name("init(token:channel:cursor:limit:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of the conversation to retrieve members for */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Paginate through collections of data by setting the `cursor` parameter to a `next_cursor` attribute
 * returned by a previous request's `response_metadata`.
 * Default value fetches the first \"page\" of the collection.
 * See [pagination](/docs/pagination) for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/**
 * The maximum number of items to return.
 * Fewer than the requested number of items may be returned, even if the end of the users list hasn't been reached.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Authentication token. Requires scope: `conversations:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsMembersResponse")))
@interface KslackCoreConversationsMembersResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsMembersResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable members __attribute__((swift_name("members")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsOpenRequest")))
@interface KslackCoreConversationsOpenRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel isReturnIm:(BOOL)isReturnIm users:(KslackKotlinArray<NSString *> * _Nullable)users __attribute__((swift_name("init(token:channel:isReturnIm:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Resume a conversation by supplying an `im` or `mpim`'s ID. Or provide the `users` field instead. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Boolean, indicates you want the full IM channel definition in the response. */
@property BOOL isReturnIm __attribute__((swift_name("isReturnIm")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * Comma separated lists of users. If only one user is included, this creates a 1:1 DM.
 * The ordering of the users is preserved whenever a multi-person direct message is returned.
 * Supply a `channel` when not supplying `users`.
 */
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsOpenResponse")))
@interface KslackCoreConversationsOpenResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsOpenResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@property BOOL isAlreadyOpen __attribute__((swift_name("isAlreadyOpen")));
@property BOOL isNoOp __attribute__((swift_name("isNoOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRenameRequest")))
@interface KslackCoreConversationsRenameRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel name:(NSString * _Nullable)name __attribute__((swift_name("init(token:channel:name:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of conversation to rename */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * New name for conversation.
 *
 * Conversation names can only contain lowercase letters, numbers, hyphens, and underscores, and must
 * be 21 characters or less. We will validate the submitted channel name and modify it to meet the above
 * criteria. When calling this method, we recommend storing the channel's name value that is returned
 * in the response.
 */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRenameResponse")))
@interface KslackCoreConversationsRenameResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsRenameResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRepliesRequest")))
@interface KslackCoreConversationsRepliesRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token isInclusive:(BOOL)isInclusive ts:(NSString * _Nullable)ts cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit channel:(NSString * _Nullable)channel oldest:(NSString * _Nullable)oldest latest:(NSString * _Nullable)latest __attribute__((swift_name("init(token:isInclusive:ts:cursor:limit:channel:oldest:latest:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Conversation ID to fetch thread from. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Paginate through collections of data by setting the `cursor` parameter to a `next_cursor` attribute
 * returned by a previous request's `response_metadata`.
 * Default value fetches the first \"page\" of the collection. See [pagination](/docs/pagination) for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** Include messages with latest or oldest timestamp in results only when either timestamp is specified. */
@property BOOL isInclusive __attribute__((swift_name("isInclusive")));

/** End of time range of messages to include in results.*/
@property NSString * _Nullable latest __attribute__((swift_name("latest")));

/**
 * The maximum number of items to return.
 * Fewer than the requested number of items may be returned, even if the end of the users list hasn't been reached.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Start of time range of messages to include in results. */
@property NSString * _Nullable oldest __attribute__((swift_name("oldest")));

/** Authentication token. Requires scope: `conversations:history` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Unique identifier of a thread's parent message. */
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRepliesResponse")))
@interface KslackCoreConversationsRepliesResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsRepliesResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isHasMore __attribute__((swift_name("isHasMore")));
@property KslackKotlinArray<KslackCoreMessage *> * _Nullable messages __attribute__((swift_name("messages")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteApproveRequest")))
@interface KslackCoreConversationsRequestSharedInviteApproveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token inviteId:(NSString * _Nullable)inviteId channelId:(NSString * _Nullable)channelId __attribute__((swift_name("init(token:inviteId:channelId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable inviteId __attribute__((swift_name("inviteId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteApproveResponse")))
@interface KslackCoreConversationsRequestSharedInviteApproveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsRequestSharedInviteApproveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteDenyRequest")))
@interface KslackCoreConversationsRequestSharedInviteDenyRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token inviteId:(NSString * _Nullable)inviteId __attribute__((swift_name("init(token:inviteId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable inviteId __attribute__((swift_name("inviteId")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteDenyResponse")))
@interface KslackCoreConversationsRequestSharedInviteDenyResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsRequestSharedInviteDenyResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteListRequest")))
@interface KslackCoreConversationsRequestSharedInviteListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit isApproved:(KslackBoolean * _Nullable)isApproved __attribute__((swift_name("init(token:cursor:limit:isApproved:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KslackBoolean * _Nullable isApproved __attribute__((swift_name("isApproved")));
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteListResponse")))
@interface KslackCoreConversationsRequestSharedInviteListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsRequestSharedInviteListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreSharedInvite *> * _Nullable invites __attribute__((swift_name("invites")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="response_metadata")
*/
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsSetPurposeRequest")))
@interface KslackCoreConversationsSetPurposeRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel purpose:(NSString * _Nullable)purpose __attribute__((swift_name("init(token:channel:purpose:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Conversation to set the purpose of */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** A new, specialer purpose */
@property NSString * _Nullable purpose __attribute__((swift_name("purpose")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsSetPurposeResponse")))
@interface KslackCoreConversationsSetPurposeResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsSetPurposeResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsSetTopicRequest")))
@interface KslackCoreConversationsSetTopicRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel topic:(NSString * _Nullable)topic __attribute__((swift_name("init(token:channel:topic:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Conversation to set the topic of */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The new topic string. Does not support formatting or linkification. */
@property NSString * _Nullable topic __attribute__((swift_name("topic")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsSetTopicResponse")))
@interface KslackCoreConversationsSetTopicResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsSetTopicResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConversation * _Nullable channel __attribute__((swift_name("channel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsUnarchiveRequest")))
@interface KslackCoreConversationsUnarchiveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of conversation to unarchive */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `conversations:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsUnarchiveResponse")))
@interface KslackCoreConversationsUnarchiveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationsUnarchiveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialogOpenRequest")))
@interface KslackCoreDialogOpenRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token dialog:(KslackCoreDialog * _Nullable)dialog dialogAsString:(NSString * _Nullable)dialogAsString triggerId:(NSString * _Nullable)triggerId __attribute__((swift_name("init(token:dialog:dialogAsString:triggerId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The dialog definition. This must be a JSON-encoded string. */
@property KslackCoreDialog * _Nullable dialog __attribute__((swift_name("dialog")));
@property NSString * _Nullable dialogAsString __attribute__((swift_name("dialogAsString")));

/** Authentication token. Requires scope: `none` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * Exchange a trigger to post to the user.
 *
 * Apps can invoke dialogs when users interact with slash commands, message buttons,
 * or message menus. Each interaction will include a trigger_id.
 *
 * As apps can only open a dialog in response to such a user action, the
 * `trigger_id` is a required parameter.
 *
 * @see [Implementing dialogs](https://api.slack.com/dialogs.implementation)
 */
@property NSString * _Nullable triggerId __attribute__((swift_name("triggerId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialogOpenResponse")))
@interface KslackCoreDialogOpenResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreDialogOpenResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreDialogResponseMetadata * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndEndDndRequest")))
@interface KslackCoreDndEndDndRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `dnd:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndEndDndResponse")))
@interface KslackCoreDndEndDndResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreDndEndDndResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndEndSnoozeRequest")))
@interface KslackCoreDndEndSnoozeRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Authentication token. Requires scope: `dnd:write`
 */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndEndSnoozeResponse")))
@interface KslackCoreDndEndSnoozeResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreDndEndSnoozeResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isDndEnabled __attribute__((swift_name("isDndEnabled")));
@property BOOL isSnoozeEnabled __attribute__((swift_name("isSnoozeEnabled")));
@property KslackInt * _Nullable nextDndEndTs __attribute__((swift_name("nextDndEndTs")));
@property KslackInt * _Nullable nextDndStartTs __attribute__((swift_name("nextDndStartTs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndInfoRequest")))
@interface KslackCoreDndInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user __attribute__((swift_name("init(token:user:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `dnd:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** User to fetch status for (defaults to current user) */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndInfoResponse")))
@interface KslackCoreDndInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreDndInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isDndEnabled __attribute__((swift_name("isDndEnabled")));
@property BOOL isSnoozeEnabled __attribute__((swift_name("isSnoozeEnabled")));
@property KslackInt * _Nullable nextDndEndTs __attribute__((swift_name("nextDndEndTs")));
@property KslackInt * _Nullable nextDndStartTs __attribute__((swift_name("nextDndStartTs")));
@property KslackInt * _Nullable snoozeEndtime __attribute__((swift_name("snoozeEndtime")));
@property KslackInt * _Nullable snoozeRemaining __attribute__((swift_name("snoozeRemaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndSetSnoozeRequest")))
@interface KslackCoreDndSetSnoozeRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token numMinutes:(KslackInt * _Nullable)numMinutes __attribute__((swift_name("init(token:numMinutes:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Number of minutes, from now, to snooze until. */
@property KslackInt * _Nullable numMinutes __attribute__((swift_name("numMinutes")));

/** Authentication token. Requires scope: `dnd:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndSetSnoozeResponse")))
@interface KslackCoreDndSetSnoozeResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreDndSetSnoozeResponseCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isSnoozeEnabled __attribute__((swift_name("isSnoozeEnabled")));
@property KslackInt * _Nullable snoozeEndtime __attribute__((swift_name("snoozeEndtime")));
@property KslackInt * _Nullable snoozeRemaining __attribute__((swift_name("snoozeRemaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndTeamInfoRequest")))
@interface KslackCoreDndTeamInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token users:(KslackKotlinArray<NSString *> * _Nullable)users __attribute__((swift_name("init(token:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `dnd:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Comma-separated list of users to fetch Do Not Disturb status for */
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndTeamInfoResponse")))
@interface KslackCoreDndTeamInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreDndTeamInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<NSString *, KslackCoreDndTeamMemberInfo *> * _Nullable users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiListRequest")))
@interface KslackCoreEmojiListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `emoji:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiListResponse")))
@interface KslackCoreEmojiListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreEmojiListResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable cacheTs __attribute__((swift_name("cacheTs")));
@property NSDictionary<NSString *, NSString *> * _Nullable emoji __attribute__((swift_name("emoji")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesCompleteUploadExternalRequest")))
@interface KslackCoreFilesCompleteUploadExternalRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token files:(NSString * _Nullable)files channelId:(NSString * _Nullable)channelId initialComment:(NSString * _Nullable)initialComment threadTs:(NSString * _Nullable)threadTs __attribute__((swift_name("init(token:files:channelId:initialComment:threadTs:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel ID where the file will be shared. */
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));

/** JSON array of file id and title. e.g. [{"id":"F123","title":"My File"}] */
@property NSString * _Nullable files __attribute__((swift_name("files")));

/** The message text introducing the file in specified channel. */
@property NSString * _Nullable initialComment __attribute__((swift_name("initialComment")));

/** Provide another message's ts value to upload this file as a reply. */
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));

/** Authentication token. Requires scope: `files:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesCompleteUploadExternalResponse")))
@interface KslackCoreFilesCompleteUploadExternalResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesCompleteUploadExternalResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreFile *> * _Nullable files __attribute__((swift_name("files")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesDeleteRequest")))
@interface KslackCoreFilesDeleteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file __attribute__((swift_name("init(token:file:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** ID of file to delete. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** Authentication token. Requires scope: `files:write:user` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesDeleteResponse")))
@interface KslackCoreFilesDeleteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesDeleteResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesGetUploadURLExternalRequest")))
@interface KslackCoreFilesGetUploadURLExternalRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token filename:(NSString * _Nullable)filename length:(KslackInt * _Nullable)length altTxt:(NSString * _Nullable)altTxt snippetType:(NSString * _Nullable)snippetType __attribute__((swift_name("init(token:filename:length:altTxt:snippetType:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Description of image for screen-reader. */
@property NSString * _Nullable altTxt __attribute__((swift_name("altTxt")));

/** Name of the file being uploaded. */
@property NSString * _Nullable filename __attribute__((swift_name("filename")));

/** Size in bytes of the file being uploaded. */
@property KslackInt * _Nullable length __attribute__((swift_name("length")));

/** Syntax type of the snippet being uploaded. */
@property NSString * _Nullable snippetType __attribute__((swift_name("snippetType")));

/** Authentication token. Requires scope: `files:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesGetUploadURLExternalResponse")))
@interface KslackCoreFilesGetUploadURLExternalResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesGetUploadURLExternalResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable fileId __attribute__((swift_name("fileId")));
@property NSString * _Nullable uploadUrl __attribute__((swift_name("uploadUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesInfoRequest")))
@interface KslackCoreFilesInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:file:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));

/** Specify a file by providing its ID. */
@property NSString * _Nullable file __attribute__((swift_name("file")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Authentication token. Requires scope: `files:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesInfoResponse")))
@interface KslackCoreFilesInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreFileComment *> * _Nullable comments __attribute__((swift_name("comments")));
@property NSString * _Nullable content __attribute__((swift_name("content")));
@property NSString * _Nullable contentHighlightCss __attribute__((swift_name("contentHighlightCss")));
@property NSString * _Nullable contentHighlightHtml __attribute__((swift_name("contentHighlightHtml")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_truncated")
*/
@property BOOL isTruncated __attribute__((swift_name("isTruncated")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesListRequest")))
@interface KslackCoreFilesListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user channel:(NSString * _Nullable)channel tsFrom:(NSString * _Nullable)tsFrom tsTo:(NSString * _Nullable)tsTo types:(KslackKotlinArray<NSString *> * _Nullable)types count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page isShowFilesHiddenByLimit:(BOOL)isShowFilesHiddenByLimit __attribute__((swift_name("init(token:user:channel:tsFrom:tsTo:types:count:page:isShowFilesHiddenByLimit:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Filter files appearing in a specific channel, indicated by its ID. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));

/**
 * https://api.slack.com/changelog/2019-03-wild-west-for-files-no-more
 *
 * In order to gather information on tombstoned files in Free workspaces,
 * so that you can delete or revoke them, pass the show_files_hidden_by_limit parameter.
 * While the yielded files will still be redacted,
 * you'll gain the id of the files so that you can delete or revoke them.
 */
@property BOOL isShowFilesHiddenByLimit __attribute__((swift_name("isShowFilesHiddenByLimit")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Authentication token. Requires scope: `files:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Filter files created after this timestamp (inclusive). */
@property NSString * _Nullable tsFrom __attribute__((swift_name("tsFrom")));

/** Filter files created before this timestamp (inclusive). */
@property NSString * _Nullable tsTo __attribute__((swift_name("tsTo")));

/**
 * Filter files by type:\n\n* `all` - All files
 *
 * `spaces` - Posts\n* `snippets` - Snippets
 * `images` - Image files
 * `gdocs` - Google docs
 * `zips` - Zip files
 * `pdfs` - PDF files
 *
 * You can pass multiple values in the types argument, like `types=spaces,snippets`.
 * The default value is `all`, which does not filter the list.
 */
@property KslackKotlinArray<NSString *> * _Nullable types __attribute__((swift_name("types")));

/** Filter files created by a single user. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesListResponse")))
@interface KslackCoreFilesListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreFile *> * _Nullable files __attribute__((swift_name("files")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end


/**
 * https://api.slack.com/methods/files.remote.add
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteAddRequest")))
@interface KslackCoreFilesRemoteAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token externalId:(NSString * _Nullable)externalId externalUrl:(NSString * _Nullable)externalUrl title:(NSString * _Nullable)title filetype:(NSString * _Nullable)filetype indexableFileContents:(KslackKotlinByteArray *)indexableFileContents previewImage:(KslackKotlinByteArray *)previewImage __attribute__((swift_name("init(token:externalId:externalUrl:title:filetype:indexableFileContents:previewImage:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Creator defined GUID for the file. */
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/** URL of the remote file. */
@property NSString * _Nullable externalUrl __attribute__((swift_name("externalUrl")));

/** Type of file */
@property NSString * _Nullable filetype __attribute__((swift_name("filetype")));

/** File containing contents that can be used to improve searchability for the remote file. */
@property KslackKotlinByteArray *indexableFileContents __attribute__((swift_name("indexableFileContents")));

/** Preview of the document via multipart/form-data. */
@property KslackKotlinByteArray *previewImage __attribute__((swift_name("previewImage")));

/** Title of the file being shared. */
@property NSString * _Nullable title __attribute__((swift_name("title")));

/** Authentication token. Requires scope: `remote_files:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteAddResponse")))
@interface KslackCoreFilesRemoteAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRemoteAddResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@end


/**
 * https://api.slack.com/methods/files.remote.info
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteInfoRequest")))
@interface KslackCoreFilesRemoteInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token externalId:(NSString * _Nullable)externalId file:(NSString * _Nullable)file __attribute__((swift_name("init(token:externalId:file:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Creator defined GUID for the file. */
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/** Specify a file by providing its ID. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** Authentication token. Requires scope: `remote_files:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteInfoResponse")))
@interface KslackCoreFilesRemoteInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRemoteInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@end


/**
 * https://api.slack.com/methods/files.remote.list
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteListRequest")))
@interface KslackCoreFilesRemoteListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit tsFrom:(NSString * _Nullable)tsFrom tsTo:(NSString * _Nullable)tsTo __attribute__((swift_name("init(token:channel:cursor:limit:tsFrom:tsTo:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Filter files appearing in a specific channel, indicated by its ID. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/**
 * Paginate through collections of data by setting the cursor parameter to a next_cursor attribute
 * returned by a previous request's response_metadata.
 * Default value fetches the first "page" of the collection.
 * See pagination for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** The maximum number of items to return. */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Authentication token. Requires scope: `remote_files:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Filter files created after this timestamp (inclusive). */
@property NSString * _Nullable tsFrom __attribute__((swift_name("tsFrom")));

/** Filter files created before this timestamp (inclusive). */
@property NSString * _Nullable tsTo __attribute__((swift_name("tsTo")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteListResponse")))
@interface KslackCoreFilesRemoteListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRemoteListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreFile *> * _Nullable files __attribute__((swift_name("files")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteRemoveRequest")))
@interface KslackCoreFilesRemoteRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token externalId:(NSString * _Nullable)externalId file:(NSString * _Nullable)file __attribute__((swift_name("init(token:externalId:file:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Creator defined GUID for the file. */
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/** Specify a file by providing its ID. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** Authentication token. Requires scope: `remote_files:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteRemoveResponse")))
@interface KslackCoreFilesRemoteRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRemoteRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteShareRequest")))
@interface KslackCoreFilesRemoteShareRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token externalId:(NSString * _Nullable)externalId file:(NSString * _Nullable)file channels:(KslackKotlinArray<NSString *> * _Nullable)channels __attribute__((swift_name("init(token:externalId:file:channels:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Comma-separated list of channel IDs where the file will be shared. */
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));

/** Creator defined GUID for the file. */
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/** Specify a file by providing its ID. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** Authentication token. Requires scope: `remote_files:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteShareResponse")))
@interface KslackCoreFilesRemoteShareResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRemoteShareResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteUpdateRequest")))
@interface KslackCoreFilesRemoteUpdateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token externalId:(NSString * _Nullable)externalId externalUrl:(NSString * _Nullable)externalUrl title:(NSString * _Nullable)title filetype:(NSString * _Nullable)filetype indexableFileContents:(KslackKotlinByteArray *)indexableFileContents previewImage:(KslackKotlinByteArray *)previewImage __attribute__((swift_name("init(token:externalId:externalUrl:title:filetype:indexableFileContents:previewImage:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Creator defined GUID for the file. */
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/** URL of the remote file. */
@property NSString * _Nullable externalUrl __attribute__((swift_name("externalUrl")));

/** Type of file */
@property NSString * _Nullable filetype __attribute__((swift_name("filetype")));

/** File containing contents that can be used to improve searchability for the remote file. */
@property KslackKotlinByteArray *indexableFileContents __attribute__((swift_name("indexableFileContents")));

/** Preview of the document via multipart/form-data. */
@property KslackKotlinByteArray *previewImage __attribute__((swift_name("previewImage")));

/** Title of the file being shared. */
@property NSString * _Nullable title __attribute__((swift_name("title")));

/** Authentication token. Requires scope: `remote_files:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteUpdateResponse")))
@interface KslackCoreFilesRemoteUpdateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRemoteUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRevokePublicURLRequest")))
@interface KslackCoreFilesRevokePublicURLRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file __attribute__((swift_name("init(token:file:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** File to revoke */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** Authentication token. Requires scope: `files:write:user` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRevokePublicURLResponse")))
@interface KslackCoreFilesRevokePublicURLResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesRevokePublicURLResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesSharedPublicURLRequest")))
@interface KslackCoreFilesSharedPublicURLRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file __attribute__((swift_name("init(token:file:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** File to share */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** Authentication token. Requires scope: `files:write:user` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesSharedPublicURLResponse")))
@interface KslackCoreFilesSharedPublicURLResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreFilesSharedPublicURLResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreFileComment *> * _Nullable comments __attribute__((swift_name("comments")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end


/**
 * For Enterprise Grid workspaces, map local user IDs to global user IDs
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMigrationExchangeRequest")))
@interface KslackCoreMigrationExchangeRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token isToOld:(BOOL)isToOld users:(KslackKotlinArray<NSString *> * _Nullable)users __attribute__((swift_name("init(token:isToOld:users:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Specify `true` to convert `W` global user IDs to workspace-specific `U` IDs. Defaults to `false`. */
@property BOOL isToOld __attribute__((swift_name("isToOld")));

/** Authentication token. Requires scope: `tokens.basic` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** A comma-separated list of user ids, up to 400 per request */
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMigrationExchangeResponse")))
@interface KslackCoreMigrationExchangeResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreMigrationExchangeResponseCompanion *companion __attribute__((swift_name("companion")));

/** The enterprise grid organization ID containing the workspace/team. */
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));

/** A list of User IDs that cannot be mapped or found */
@property KslackKotlinArray<NSString *> * _Nullable invalidUserIds __attribute__((swift_name("invalidUserIds")));

/** The workspace/team ID containing the mapped users */
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/** A mapping of provided user IDs with mapped user IDs */
@property NSDictionary<NSString *, NSString *> * _Nullable userIdMap __attribute__((swift_name("userIdMap")));
@end


/**
 * https://api.slack.com/docs/oauth
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAccessRequest")))
@interface KslackCoreOAuthAccessRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret code:(NSString * _Nullable)code redirectUri:(NSString * _Nullable)redirectUri isSingleChannel:(BOOL)isSingleChannel __attribute__((swift_name("init(token:clientId:clientSecret:code:redirectUri:isSingleChannel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Issued when you created your application. */
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/** Issued when you created your application. */
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));

/** The `code` param returned via the OAuth callback. */
@property NSString * _Nullable code __attribute__((swift_name("code")));

/** Request the user to add your app only to a single channel. */
@property BOOL isSingleChannel __attribute__((swift_name("isSingleChannel")));

/** This must match the originally submitted URI (if one was sent). */
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAccessResponse")))
@interface KslackCoreOAuthAccessResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreOAuthAccessResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property KslackCoreOAuthAuthorizingUser * _Nullable authorizingUser __attribute__((swift_name("authorizingUser"))) __attribute__((deprecated("")));
@property KslackCoreOAuthBot * _Nullable bot __attribute__((swift_name("bot")));
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));
@property KslackCoreOAuthIncomingWebhook * _Nullable incomingWebhook __attribute__((swift_name("incomingWebhook")));
@property KslackCoreOAuthInstallerUser * _Nullable installerUser __attribute__((swift_name("installerUser"))) __attribute__((deprecated("")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@property KslackCoreOAuthScopes * _Nullable scopes __attribute__((swift_name("scopes"))) __attribute__((deprecated("")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable teamName __attribute__((swift_name("teamName")));
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * Exchanges a temporary OAuth verifier code for a workspace token.
 *
 * https://api.slack.com/docs/oauth
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthTokenRequest")))
@interface KslackCoreOAuthTokenRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret code:(NSString * _Nullable)code redirectUri:(NSString * _Nullable)redirectUri isSingleChannel:(BOOL)isSingleChannel __attribute__((swift_name("init(token:clientId:clientSecret:code:redirectUri:isSingleChannel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Issued when you created your application. */
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/** Issued when you created your application. */
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));

/** The `code` param returned via the OAuth callback. */
@property NSString * _Nullable code __attribute__((swift_name("code")));

/** Request the user to add your app only to a single channel. */
@property BOOL isSingleChannel __attribute__((swift_name("isSingleChannel")));

/** This must match the originally submitted URI (if one was sent). */
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthTokenResponse")))
@interface KslackCoreOAuthTokenResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreOAuthTokenResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property KslackCoreOAuthBot * _Nullable bot __attribute__((swift_name("bot")));
@property KslackCoreOAuthIncomingWebhook * _Nullable incomingWebhook __attribute__((swift_name("incomingWebhook")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable teamName __attribute__((swift_name("teamName")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * https://api.slack.com/authentication/basics
 * https://api.slack.com/methods/oauth.v2.access
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2AccessRequest")))
@interface KslackCoreOAuthV2AccessRequest : KslackBase <KslackCoreSlackApiRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret code:(NSString * _Nullable)code redirectUri:(NSString * _Nullable)redirectUri __attribute__((swift_name("init(token:clientId:clientSecret:code:redirectUri:)"))) __attribute__((objc_designated_initializer));

/** Issued when you created your application. */
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/** Issued when you created your application. */
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));

/** The `code` param returned via the OAuth callback. */
@property NSString * _Nullable code __attribute__((swift_name("code")));

/** This must match the originally submitted URI (if one was sent). */
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * https://api.slack.com/methods/oauth.v2.access
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2AccessResponse")))
@interface KslackCoreOAuthV2AccessResponse : KslackCoreSlackApiResponse

/**
 * https://api.slack.com/methods/oauth.v2.access
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/methods/oauth.v2.access
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreOAuthV2AccessResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property KslackCoreOAuthAuthedUser * _Nullable authedUser __attribute__((swift_name("authedUser")));
@property NSString * _Nullable botUserId __attribute__((swift_name("botUserId")));
@property KslackCoreOAuthEnterprise * _Nullable enterprise __attribute__((swift_name("enterprise")));
@property KslackCoreOAuthIncomingWebhook * _Nullable incomingWebhook __attribute__((swift_name("incomingWebhook")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@property KslackCoreOAuthTeam * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeRequest")))
@interface KslackCoreOAuthV2ExchangeRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret __attribute__((swift_name("init(token:clientId:clientSecret:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeResponse")))
@interface KslackCoreOAuthV2ExchangeResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreOAuthV2ExchangeResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="authed_user")
*/
@property KslackCoreOAuthV2ExchangeAuthedUser * _Nullable authedUser __attribute__((swift_name("authedUser")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot_user_id")
*/
@property NSString * _Nullable botUserId __attribute__((swift_name("botUserId")));
@property KslackCoreOAuthV2ExchangeEnterprise * _Nullable enterprise __attribute__((swift_name("enterprise")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@property KslackCoreOAuthV2ExchangeTeam * _Nullable team __attribute__((swift_name("team")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOpenIDConnectTokenRequest")))
@interface KslackCoreOpenIDConnectTokenRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token clientId:(NSString * _Nullable)clientId clientSecret:(NSString * _Nullable)clientSecret code:(NSString * _Nullable)code redirectUri:(NSString * _Nullable)redirectUri grantType:(NSString * _Nullable)grantType refreshToken:(NSString * _Nullable)refreshToken __attribute__((swift_name("init(token:clientId:clientSecret:code:redirectUri:grantType:refreshToken:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable grantType __attribute__((swift_name("grantType")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOpenIDConnectTokenResponse")))
@interface KslackCoreOpenIDConnectTokenResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreOpenIDConnectTokenResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_id")
*/
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_in")
*/
@property KslackInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id_token")
*/
@property NSString * _Nullable idToken __attribute__((swift_name("idToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refresh_token")
*/
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="team_id")
*/
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOpenIDConnectUserInfoRequest")))
@interface KslackCoreOpenIDConnectUserInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOpenIDConnectUserInfoResponse")))
@interface KslackCoreOpenIDConnectUserInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreOpenIDConnectUserInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email_verified")
*/
@property KslackBoolean * _Nullable emailVerified __attribute__((swift_name("emailVerified")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="family_name")
*/
@property NSString * _Nullable familyName __attribute__((swift_name("familyName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="given_name")
*/
@property NSString * _Nullable givenName __attribute__((swift_name("givenName")));
@property NSString * _Nullable locale __attribute__((swift_name("locale")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable picture __attribute__((swift_name("picture")));
@property NSString * _Nullable sub __attribute__((swift_name("sub")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="team_id")
*/
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsAddRequest")))
@interface KslackCorePinsAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(token:channel:file:fileComment:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel to pin the item in. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to pin. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to pin. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** Timestamp of the message to pin. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `pins:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsAddResponse")))
@interface KslackCorePinsAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCorePinsAddResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsListRequest")))
@interface KslackCorePinsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel __attribute__((swift_name("init(token:channel:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel to get pinned items for. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** Authentication token. Requires scope: `pins:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsListResponse")))
@interface KslackCorePinsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCorePinsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreMessageItem *> * _Nullable items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsRemoveRequest")))
@interface KslackCorePinsRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token channel:(NSString * _Nullable)channel file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(token:channel:file:fileComment:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel where the item is pinned to. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to un-pin. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to un-pin. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** Timestamp of the message to un-pin. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `pins:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsRemoveResponse")))
@interface KslackCorePinsRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCorePinsRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsAddRequest")))
@interface KslackCoreReactionsAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token name:(NSString * _Nullable)name file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment channel:(NSString * _Nullable)channel timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(token:name:file:fileComment:channel:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel where the message to add reaction to was posted. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to add reaction to. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to add reaction to. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** Reaction (emoji) name. */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Timestamp of the message to add reaction to. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `reactions:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsAddResponse")))
@interface KslackCoreReactionsAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreReactionsAddResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsGetRequest")))
@interface KslackCoreReactionsGetRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment channel:(NSString * _Nullable)channel timestamp:(NSString * _Nullable)timestamp isFull:(BOOL)isFull __attribute__((swift_name("init(token:file:fileComment:channel:timestamp:isFull:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel where the message to get reactions for was posted. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to get reactions for. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to get reactions for. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** If true always return the complete reaction list. */
@property BOOL isFull __attribute__((swift_name("isFull")));

/** Timestamp of the message to get reactions for. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `reactions:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsGetResponse")))
@interface KslackCoreReactionsGetResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreReactionsGetResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackCoreMessage * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsListRequest")))
@interface KslackCoreReactionsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user isFull:(BOOL)isFull count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:user:isFull:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));

/** If true always return the complete reaction list. */
@property BOOL isFull __attribute__((swift_name("isFull")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Authentication token. Requires scope: `reactions:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Show reactions made by this user. Defaults to the authed user. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsListResponse")))
@interface KslackCoreReactionsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreReactionsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreItem *> * _Nullable items __attribute__((swift_name("items")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsRemoveRequest")))
@interface KslackCoreReactionsRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token name:(NSString * _Nullable)name file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment channel:(NSString * _Nullable)channel timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(token:name:file:fileComment:channel:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel where the message to remove reaction from was posted. */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to remove reaction from. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to remove reaction from. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** Reaction (emoji) name.*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Timestamp of the message to remove reaction from. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `reactions:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsRemoveResponse")))
@interface KslackCoreReactionsRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreReactionsRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersAddRequest")))
@interface KslackCoreRemindersAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token text:(NSString * _Nullable)text time:(NSString * _Nullable)time user:(NSString * _Nullable)user __attribute__((swift_name("init(token:text:time:user:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The content of the reminder */
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * When this reminder should happen: the Unix timestamp (up to five years from now),
 * the number of seconds until the reminder (if within 24 hours), or a natural language description
 * (Ex. \"in 15 minutes,\" or \"every Thursday\")
 */
@property NSString * _Nullable time __attribute__((swift_name("time")));

/** Authentication token. Requires scope: `reminders:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The user who will receive the reminder. If no user is specified, the reminder will go to user who created it. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersAddResponse")))
@interface KslackCoreRemindersAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreRemindersAddResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreReminder * _Nullable reminder __attribute__((swift_name("reminder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersCompleteRequest")))
@interface KslackCoreRemindersCompleteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token reminder:(NSString * _Nullable)reminder __attribute__((swift_name("init(token:reminder:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The ID of the reminder to be marked as complete */
@property NSString * _Nullable reminder __attribute__((swift_name("reminder")));

/** Authentication token. Requires scope: `reminders:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersCompleteResponse")))
@interface KslackCoreRemindersCompleteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreRemindersCompleteResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersDeleteRequest")))
@interface KslackCoreRemindersDeleteRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token reminder:(NSString * _Nullable)reminder __attribute__((swift_name("init(token:reminder:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The ID of the reminder */
@property NSString * _Nullable reminder __attribute__((swift_name("reminder")));

/** Authentication token. Requires scope: `reminders:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersDeleteResponse")))
@interface KslackCoreRemindersDeleteResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreRemindersDeleteResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersInfoRequest")))
@interface KslackCoreRemindersInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token reminder:(NSString * _Nullable)reminder __attribute__((swift_name("init(token:reminder:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** The ID of the reminder */
@property NSString * _Nullable reminder __attribute__((swift_name("reminder")));

/** Authentication token. Requires scope: `reminders:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersInfoResponse")))
@interface KslackCoreRemindersInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreRemindersInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreReminder * _Nullable reminder __attribute__((swift_name("reminder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersListRequest")))
@interface KslackCoreRemindersListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `reminders:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersListResponse")))
@interface KslackCoreRemindersListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreRemindersListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreReminder *> * _Nullable reminders __attribute__((swift_name("reminders")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchAllRequest")))
@interface KslackCoreSearchAllRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token query:(NSString * _Nullable)query sort:(NSString * _Nullable)sort sortDir:(NSString * _Nullable)sortDir isHighlight:(BOOL)isHighlight count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:query:sort:sortDir:isHighlight:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));

/** Pass a value of `true` to enable query highlight markers (see below). */
@property BOOL isHighlight __attribute__((swift_name("isHighlight")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Search query. May contains booleans, etc. */
@property NSString * _Nullable query __attribute__((swift_name("query")));

/** Return matches sorted by either `score` or `timestamp`. */
@property NSString * _Nullable sort __attribute__((swift_name("sort")));

/** Change sort direction to ascending (`asc`) or descending (`desc`). */
@property NSString * _Nullable sortDir __attribute__((swift_name("sortDir")));

/** Authentication token. Requires scope: `search:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchAllResponse")))
@interface KslackCoreSearchAllResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreSearchAllResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreSearchResult * _Nullable files __attribute__((swift_name("files")));
@property KslackCoreSearchResult * _Nullable messages __attribute__((swift_name("messages")));
@property KslackCoreSearchAllResponsePosts * _Nullable posts __attribute__((swift_name("posts")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchFilesRequest")))
@interface KslackCoreSearchFilesRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token sortDir:(NSString * _Nullable)sortDir query:(NSString * _Nullable)query sort:(NSString * _Nullable)sort isHighlight:(BOOL)isHighlight count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:sortDir:query:sort:isHighlight:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));

/** Pass a value of `true` to enable query highlight markers (see below). */
@property BOOL isHighlight __attribute__((swift_name("isHighlight")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Search query. May contain booleans, etc. */
@property NSString * _Nullable query __attribute__((swift_name("query")));

/** Return matches sorted by either `score` or `timestamp`. */
@property NSString * _Nullable sort __attribute__((swift_name("sort")));

/** Change sort direction to ascending (`asc`) or descending (`desc`). */
@property NSString * _Nullable sortDir __attribute__((swift_name("sortDir")));

/** Authentication token. Requires scope: `search:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchFilesResponse")))
@interface KslackCoreSearchFilesResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreSearchFilesResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreSearchResult * _Nullable files __attribute__((swift_name("files")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchMessagesRequest")))
@interface KslackCoreSearchMessagesRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token sortDir:(NSString * _Nullable)sortDir query:(NSString * _Nullable)query sort:(NSString * _Nullable)sort isHighlight:(BOOL)isHighlight count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:sortDir:query:sort:isHighlight:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));

/** Pass a value of `true` to enable query highlight markers (see below). */
@property BOOL isHighlight __attribute__((swift_name("isHighlight")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Search query. May contain booleans, etc. */
@property NSString * _Nullable query __attribute__((swift_name("query")));

/** Return matches sorted by either `score` or `timestamp`. */
@property NSString * _Nullable sort __attribute__((swift_name("sort")));

/** Change sort direction to ascending (`asc`) or descending (`desc`). */
@property NSString * _Nullable sortDir __attribute__((swift_name("sortDir")));

/** Authentication token. Requires scope: `search:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchMessagesResponse")))
@interface KslackCoreSearchMessagesResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreSearchMessagesResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreSearchResult * _Nullable messages __attribute__((swift_name("messages")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsAddRequest")))
@interface KslackCoreStarsAddRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment channel:(NSString * _Nullable)channel timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(token:file:fileComment:channel:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel to add star to, or channel where the message to add star to was posted (used with `timestamp`). */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to add star to. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to add star to. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** Timestamp of the message to add star to. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `stars:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsAddResponse")))
@interface KslackCoreStarsAddResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreStarsAddResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsListRequest")))
@interface KslackCoreStarsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Authentication token. Requires scope: `stars:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsListResponse")))
@interface KslackCoreStarsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreStarsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreItem *> * _Nullable items __attribute__((swift_name("items")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsRemoveRequest")))
@interface KslackCoreStarsRemoveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token file:(NSString * _Nullable)file fileComment:(NSString * _Nullable)fileComment channel:(NSString * _Nullable)channel timestamp:(NSString * _Nullable)timestamp __attribute__((swift_name("init(token:file:fileComment:channel:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Channel to remove star from, or channel where the message to remove star from was posted (used with `timestamp`). */
@property NSString * _Nullable channel __attribute__((swift_name("channel")));

/** File to remove star from. */
@property NSString * _Nullable file __attribute__((swift_name("file")));

/** File comment to remove star from. */
@property NSString * _Nullable fileComment __attribute__((swift_name("fileComment")));

/** Timestamp of the message to remove star from. */
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));

/** Authentication token. Requires scope: `stars:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsRemoveResponse")))
@interface KslackCoreStarsRemoveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreStarsRemoveResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCurrentStatus")))
@interface KslackCoreCurrentStatus : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreCurrentStatusCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreSlackIssue *> * _Nullable activeIncidents __attribute__((swift_name("activeIncidents")));
@property NSString * _Nullable dateCreated __attribute__((swift_name("dateCreated")));
@property NSString * _Nullable dateUpdated __attribute__((swift_name("dateUpdated")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSlackIssue")))
@interface KslackCoreSlackIssue : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSlackIssueCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable dateCreated __attribute__((swift_name("dateCreated")));
@property NSString * _Nullable dateUpdated __attribute__((swift_name("dateUpdated")));
@property KslackInt * _Nullable id __attribute__((swift_name("id")));
@property KslackKotlinArray<KslackCoreNote *> * _Nullable notes __attribute__((swift_name("notes")));
@property KslackKotlinArray<NSString *> * _Nullable services __attribute__((swift_name("services")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KslackKotlinArray<T> : KslackBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KslackInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KslackKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamAccessLogsRequest")))
@interface KslackCoreTeamAccessLogsRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token before:(KslackInt * _Nullable)before count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:before:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** End of time range of logs to include in results (inclusive). */
@property KslackInt * _Nullable before __attribute__((swift_name("before")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Authentication token. Requires scope: `admin` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamAccessLogsResponse")))
@interface KslackCoreTeamAccessLogsResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamAccessLogsResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreLogin *> * _Nullable logins __attribute__((swift_name("logins")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamBillableInfoRequest")))
@interface KslackCoreTeamBillableInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user __attribute__((swift_name("init(token:user:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `admin` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** A user to retrieve the billable information for. Defaults to all users. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamBillableInfoResponse")))
@interface KslackCoreTeamBillableInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamBillableInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSDictionary<NSString *, KslackCoreBillableInfo *> * _Nullable billableInfo __attribute__((swift_name("billableInfo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamBillingInfoRequest")))
@interface KslackCoreTeamBillingInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamBillingInfoResponse")))
@interface KslackCoreTeamBillingInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamBillingInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable plan __attribute__((swift_name("plan")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamExternalTeamsDisconnectRequest")))
@interface KslackCoreTeamExternalTeamsDisconnectRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token targetTeam:(NSString * _Nullable)targetTeam __attribute__((swift_name("init(token:targetTeam:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable targetTeam __attribute__((swift_name("targetTeam")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamExternalTeamsDisconnectResponse")))
@interface KslackCoreTeamExternalTeamsDisconnectResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamExternalTeamsDisconnectResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamExternalTeamsListRequest")))
@interface KslackCoreTeamExternalTeamsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token connectionStatusFilter:(NSString * _Nullable)connectionStatusFilter cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit slackConnectPrefFilter:(NSString * _Nullable)slackConnectPrefFilter sortDirection:(NSString * _Nullable)sortDirection sortField:(NSString * _Nullable)sortField workspaceFilter:(NSString * _Nullable)workspaceFilter __attribute__((swift_name("init(token:connectionStatusFilter:cursor:limit:slackConnectPrefFilter:sortDirection:sortField:workspaceFilter:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable connectionStatusFilter __attribute__((swift_name("connectionStatusFilter")));
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable slackConnectPrefFilter __attribute__((swift_name("slackConnectPrefFilter")));
@property NSString * _Nullable sortDirection __attribute__((swift_name("sortDirection")));
@property NSString * _Nullable sortField __attribute__((swift_name("sortField")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable workspaceFilter __attribute__((swift_name("workspaceFilter")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamExternalTeamsListResponse")))
@interface KslackCoreTeamExternalTeamsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamExternalTeamsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreExternalTeam *> * _Nullable organizations __attribute__((swift_name("organizations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="response_metadata")
*/
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamInfoRequest")))
@interface KslackCoreTeamInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `team:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamInfoResponse")))
@interface KslackCoreTeamInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreTeam * _Nullable team __attribute__((swift_name("team")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamIntegrationLogsRequest")))
@interface KslackCoreTeamIntegrationLogsRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token serviceId:(NSString * _Nullable)serviceId user:(NSString * _Nullable)user appId:(KslackInt * _Nullable)appId changeType:(NSString * _Nullable)changeType count:(KslackInt * _Nullable)count page:(KslackInt * _Nullable)page __attribute__((swift_name("init(token:serviceId:user:appId:changeType:count:page:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Filter logs to this Slack app. Defaults to all logs. */
@property KslackInt * _Nullable appId __attribute__((swift_name("appId")));

/** Filter logs with this change type. Defaults to all logs. */
@property NSString * _Nullable changeType __attribute__((swift_name("changeType")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));

/** Filter logs to this service. Defaults to all logs. */
@property NSString * _Nullable serviceId __attribute__((swift_name("serviceId")));

/** Authentication token. Requires scope: `admin` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Filter logs generated by this user\u2019s actions. Defaults to all logs. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamIntegrationLogsResponse")))
@interface KslackCoreTeamIntegrationLogsResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamIntegrationLogsResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreIntegrationLog *> * _Nullable logs __attribute__((swift_name("logs")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamPreferencesListRequest")))
@interface KslackCoreTeamPreferencesListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamPreferencesListResponse")))
@interface KslackCoreTeamPreferencesListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamPreferencesListResponseCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allow_message_deletion")
*/
@property KslackBoolean * _Nullable allowMessageDeletion __attribute__((swift_name("allowMessageDeletion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_real_names")
*/
@property KslackBoolean * _Nullable displayRealNames __attribute__((swift_name("displayRealNames")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="msg_edit_window_mins")
*/
@property KslackInt * _Nullable msgEditWindowMins __attribute__((swift_name("msgEditWindowMins")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="who_can_post_general")
*/
@property NSString * _Nullable whoCanPostGeneral __attribute__((swift_name("whoCanPostGeneral")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamProfileGetRequest")))
@interface KslackCoreTeamProfileGetRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token visibility:(NSString * _Nullable)visibility __attribute__((swift_name("init(token:visibility:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `users.profile:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** Filter by visibility. */
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamProfileGetResponse")))
@interface KslackCoreTeamProfileGetResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTeamProfileGetResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreProfiles * _Nullable profile __attribute__((swift_name("profile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupUsersListRequest")))
@interface KslackCoreUsergroupUsersListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token usergroup:(NSString * _Nullable)usergroup isIncludeDisabled:(BOOL)isIncludeDisabled __attribute__((swift_name("init(token:usergroup:isIncludeDisabled:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Allow results that involve disabled User Groups. */
@property BOOL isIncludeDisabled __attribute__((swift_name("isIncludeDisabled")));

/** Authentication token. Requires scope: `usergroups:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The encoded ID of the User Group to update. */
@property NSString * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupUsersListResponse")))
@interface KslackCoreUsergroupUsersListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsergroupUsersListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupUsersUpdateRequest")))
@interface KslackCoreUsergroupUsersUpdateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token usergroup:(NSString * _Nullable)usergroup users:(KslackKotlinArray<NSString *> * _Nullable)users isIncludeCount:(BOOL)isIncludeCount __attribute__((swift_name("init(token:usergroup:users:isIncludeCount:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Include the number of users in the User Group. */
@property BOOL isIncludeCount __attribute__((swift_name("isIncludeCount")));

/** Authentication token. Requires scope: `usergroups:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The encoded ID of the User Group to update. */
@property NSString * _Nullable usergroup __attribute__((swift_name("usergroup")));

/** A comma separated string of encoded user IDs that represent the entire list of users for the User Group. */
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserGroupUsersUpdateResponse")))
@interface KslackCoreUserGroupUsersUpdateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUserGroupUsersUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreUserGroup * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsCreateRequest")))
@interface KslackCoreUsergroupsCreateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token name:(NSString * _Nullable)name handle:(NSString * _Nullable)handle description:(NSString * _Nullable)description channels:(KslackKotlinArray<NSString *> * _Nullable)channels isIncludeCount:(BOOL)isIncludeCount __attribute__((swift_name("init(token:name:handle:description:channels:isIncludeCount:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A comma separated string of encoded channel IDs for which the User Group uses as a default. */
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));

/** A short description of the User Group. */
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/** A mention handle. Must be unique among channels, users and User Groups. */
@property NSString * _Nullable handle __attribute__((swift_name("handle")));

/** Include the number of users in each User Group. */
@property BOOL isIncludeCount __attribute__((swift_name("isIncludeCount")));

/** A name for the User Group. Must be unique among User Groups. */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Authentication token. Requires scope: `usergroups:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserGroupsCreateResponse")))
@interface KslackCoreUserGroupsCreateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property KslackCoreUserGroup * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsDisableRequest")))
@interface KslackCoreUsergroupsDisableRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token usergroup:(NSString * _Nullable)usergroup isIncludeCount:(BOOL)isIncludeCount __attribute__((swift_name("init(token:usergroup:isIncludeCount:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Include the number of users in the User Group. */
@property BOOL isIncludeCount __attribute__((swift_name("isIncludeCount")));

/** Authentication token. Requires scope: `usergroups:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The encoded ID of the User Group to disable. */
@property NSString * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserGroupsDisableResponse")))
@interface KslackCoreUserGroupsDisableResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property KslackCoreUserGroup * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsEnableRequest")))
@interface KslackCoreUsergroupsEnableRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token usergroup:(NSString * _Nullable)usergroup isIncludeCount:(BOOL)isIncludeCount __attribute__((swift_name("init(token:usergroup:isIncludeCount:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Include the number of users in the User Group. */
@property BOOL isIncludeCount __attribute__((swift_name("isIncludeCount")));

/** Authentication token. Requires scope: `usergroups:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The encoded ID of the User Group to enable. */
@property NSString * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsEnableResponse")))
@interface KslackCoreUsergroupsEnableResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsergroupsEnableResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreUserGroup * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsListRequest")))
@interface KslackCoreUsergroupsListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token isIncludeDisabled:(BOOL)isIncludeDisabled isIncludeCount:(BOOL)isIncludeCount isIncludeUsers:(BOOL)isIncludeUsers __attribute__((swift_name("init(token:isIncludeDisabled:isIncludeCount:isIncludeUsers:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Include the number of users in each User Group */
@property BOOL isIncludeCount __attribute__((swift_name("isIncludeCount")));

/** Include disabled User Groups. */
@property BOOL isIncludeDisabled __attribute__((swift_name("isIncludeDisabled")));

/** Include the list of users for each User Group. */
@property BOOL isIncludeUsers __attribute__((swift_name("isIncludeUsers")));

/** Authentication token. Requires scope: `usergroups:read */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsListResponse")))
@interface KslackCoreUsergroupsListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsergroupsListResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreUserGroup *> * _Nullable usergroups __attribute__((swift_name("usergroups")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsUpdateRequest")))
@interface KslackCoreUsergroupsUpdateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token usergroup:(NSString * _Nullable)usergroup name:(NSString * _Nullable)name handle:(NSString * _Nullable)handle description:(NSString * _Nullable)description channels:(KslackKotlinArray<NSString *> * _Nullable)channels isIncludeCount:(BOOL)isIncludeCount __attribute__((swift_name("init(token:usergroup:name:handle:description:channels:isIncludeCount:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** A comma separated string of encoded channel IDs for which the User Group uses as a default. */
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));

/** A short description of the User Group. */
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/** A mention handle. Must be unique among channels, users and User Groups. */
@property NSString * _Nullable handle __attribute__((swift_name("handle")));

/** Include the number of users in the User Group. */
@property BOOL isIncludeCount __attribute__((swift_name("isIncludeCount")));

/** A name for the User Group. Must be unique among User Groups. */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Authentication token. Requires scope: `usergroups:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** The encoded ID of the User Group to update. */
@property NSString * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsUpdateResponse")))
@interface KslackCoreUsergroupsUpdateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsergroupsUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreUserGroup * _Nullable usergroup __attribute__((swift_name("usergroup")));
@end


/**
 * List conversations the calling user may access.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersConversationsRequest")))
@interface KslackCoreUsersConversationsRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user cursor:(NSString * _Nullable)cursor isExcludeArchived:(BOOL)isExcludeArchived limit:(KslackInt * _Nullable)limit types:(KslackKotlinArray<KslackCoreConversationType *> * _Nullable)types __attribute__((swift_name("init(token:user:cursor:isExcludeArchived:limit:types:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Paginate through collections of data by setting the `cursor` parameter to
 * a `next_cursor` attribute returned by a previous request's `response_metadata`.
 * Default value fetches the first \"page\" of the collection. See [pagination](/docs/pagination) for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** Set to `true` to exclude archived channels from the list */
@property BOOL isExcludeArchived __attribute__((swift_name("isExcludeArchived")));

/**
 * The maximum number of items to return. Fewer than the requested number of items may be returned,
 * even if the end of the list hasn't been reached. Must be an integer no larger than 1000.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Authentication token. Requires scope: `conversations:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/**
 * Mix and match channel types by providing a comma-separated list of
 * any combination of `public_channel`, `private_channel`, `mpim`, `im`
 */
@property KslackKotlinArray<KslackCoreConversationType *> * _Nullable types __attribute__((swift_name("types")));

/**
 * Browse conversations by a specific user ID's membership.
 * Non-public channels are restricted to those where the calling user shares membership."
 */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersConversationsResponse")))
@interface KslackCoreUsersConversationsResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersConversationsResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreConversation *> * _Nullable channels __attribute__((swift_name("channels")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end


/**
 * Delete the user profile photo
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersDeletePhotoRequest")))
@interface KslackCoreUsersDeletePhotoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `users.profile:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersDeletePhotoResponse")))
@interface KslackCoreUsersDeletePhotoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersDeletePhotoResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersDiscoverableContactsLookupRequest")))
@interface KslackCoreUsersDiscoverableContactsLookupRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token email:(NSString * _Nullable)email visibility:(NSString * _Nullable)visibility __attribute__((swift_name("init(token:email:visibility:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersDiscoverableContactsLookupResponse")))
@interface KslackCoreUsersDiscoverableContactsLookupResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersDiscoverableContactsLookupResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreUser * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersGetPresenceRequest")))
@interface KslackCoreUsersGetPresenceRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user __attribute__((swift_name("init(token:user:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `users:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** User to get presence info on. Defaults to the authed user. */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersGetPresenceResponse")))
@interface KslackCoreUsersGetPresenceResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersGetPresenceResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable connectionCount __attribute__((swift_name("connectionCount")));
@property BOOL isAutoAway __attribute__((swift_name("isAutoAway")));
@property BOOL isManualAway __attribute__((swift_name("isManualAway")));
@property BOOL isOnline __attribute__((swift_name("isOnline")));
@property KslackInt * _Nullable lastActivity __attribute__((swift_name("lastActivity")));
@property NSString * _Nullable presence __attribute__((swift_name("presence")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersIdentityRequest")))
@interface KslackCoreUsersIdentityRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `identity.basic` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersIdentityResponse")))
@interface KslackCoreUsersIdentityResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersIdentityResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreTeam * _Nullable team __attribute__((swift_name("team")));
@property KslackCoreUser * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersInfoRequest")))
@interface KslackCoreUsersInfoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user isIncludeLocale:(BOOL)isIncludeLocale __attribute__((swift_name("init(token:user:isIncludeLocale:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Set this to `true` to receive the locale for this user. Defaults to `false` */
@property BOOL isIncludeLocale __attribute__((swift_name("isIncludeLocale")));

/** Authentication token. Requires scope: `users:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** User to get info on */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersInfoResponse")))
@interface KslackCoreUsersInfoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersInfoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreUser * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListRequest")))
@interface KslackCoreUsersListRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token cursor:(NSString * _Nullable)cursor limit:(KslackInt * _Nullable)limit isIncludeLocale:(BOOL)isIncludeLocale isPresence:(BOOL)isPresence __attribute__((swift_name("init(token:cursor:limit:isIncludeLocale:isPresence:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/**
 * Paginate through collections of data by setting the `cursor` parameter to a `next_cursor` attribute
 * returned by a previous request's `response_metadata`.
 * Default value fetches the first \"page\" of the collection. See [pagination](/docs/pagination) for more detail.
 */
@property NSString * _Nullable cursor __attribute__((swift_name("cursor")));

/** Set this to `true` to receive the locale for users. Defaults to `false` */
@property BOOL isIncludeLocale __attribute__((swift_name("isIncludeLocale")));

/**
 * Deprecated. Whether to include presence data in the output.
 * Defaults to `false`. Setting this to `true` reduces performance, especially with large teams.
 */
@property BOOL isPresence __attribute__((swift_name("isPresence"))) __attribute__((deprecated("")));

/**
 * The maximum number of items to return.
 * Fewer than the requested number of items may be returned, even if the end of the users list hasn't been reached.
 */
@property KslackInt * _Nullable limit __attribute__((swift_name("limit")));

/** Authentication token. Requires scope: `users:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListResponse")))
@interface KslackCoreUsersListResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersListResponseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable cacheTs __attribute__((swift_name("cacheTs")));
@property KslackKotlinArray<KslackCoreUser *> * _Nullable members __attribute__((swift_name("members")));
@property NSString * _Nullable offset __attribute__((swift_name("offset")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersLookupByEmailRequest")))
@interface KslackCoreUsersLookupByEmailRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token email:(NSString * _Nullable)email __attribute__((swift_name("init(token:email:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** An email address belonging to a user in the workspace */
@property NSString * _Nullable email __attribute__((swift_name("email")));

/** Authentication token. Requires scope: `users:read.email` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersLookupByEmailResponse")))
@interface KslackCoreUsersLookupByEmailResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersLookupByEmailResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreUser * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersProfileGetRequest")))
@interface KslackCoreUsersProfileGetRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user isIncludeLabels:(BOOL)isIncludeLabels __attribute__((swift_name("init(token:user:isIncludeLabels:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Include labels for each ID in custom profile fields */
@property BOOL isIncludeLabels __attribute__((swift_name("isIncludeLabels")));

/** Authentication token. Requires scope: `users.profile:read` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** User to retrieve profile info for */
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersProfileGetResponse")))
@interface KslackCoreUsersProfileGetResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersProfileGetResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreProfile * _Nullable profile __attribute__((swift_name("profile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersProfileSetRequest")))
@interface KslackCoreUsersProfileSetRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token user:(NSString * _Nullable)user profile:(KslackCoreProfile * _Nullable)profile name:(NSString * _Nullable)name value:(NSString * _Nullable)value __attribute__((swift_name("init(token:user:profile:name:value:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Name of a single key to set. Usable only if profile is not passed. */
@property NSString * _Nullable name __attribute__((swift_name("name")));

/** Collection of key:value pairs presented as a URL-encoded JSON hash. */
@property KslackCoreProfile * _Nullable profile __attribute__((swift_name("profile")));

/** Authentication token. Requires scope: `users.profile:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));

/** ID of user to change. This argument may only be specified by team admins on paid teams. */
@property NSString * _Nullable user __attribute__((swift_name("user")));

/** Value to set a single key to. Usable only if profile is not passed. */
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersProfileSetResponse")))
@interface KslackCoreUsersProfileSetResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersProfileSetResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreProfile * _Nullable profile __attribute__((swift_name("profile")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetActiveRequest")))
@interface KslackCoreUsersSetActiveRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Authentication token. Requires scope: `users:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetActiveResponse")))
@interface KslackCoreUsersSetActiveResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersSetActiveResponseCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * Set the user profile photo
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetPhotoRequest")))
@interface KslackCoreUsersSetPhotoRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token imageData:(KslackKotlinByteArray *)imageData cropX:(KslackInt * _Nullable)cropX cropY:(KslackInt * _Nullable)cropY cropW:(KslackInt * _Nullable)cropW __attribute__((swift_name("init(token:imageData:cropX:cropY:cropW:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Width/height of crop box (always square) */
@property KslackInt * _Nullable cropW __attribute__((swift_name("cropW")));

/** X coordinate of top-left corner of crop box */
@property KslackInt * _Nullable cropX __attribute__((swift_name("cropX")));

/** Y coordinate of top-left corner of crop box */
@property KslackInt * _Nullable cropY __attribute__((swift_name("cropY")));

/** File contents via `multipart/form-data`. */
@property KslackKotlinByteArray *imageData __attribute__((swift_name("imageData")));

/** Authentication token. Requires scope: `users.profile:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetPhotoResponse")))
@interface KslackCoreUsersSetPhotoResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersSetPhotoResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreProfile * _Nullable profile __attribute__((swift_name("profile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetPresenceRequest")))
@interface KslackCoreUsersSetPresenceRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token presence:(NSString * _Nullable)presence __attribute__((swift_name("init(token:presence:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));

/** Either `auto` or `away` */
@property NSString * _Nullable presence __attribute__((swift_name("presence")));

/** Authentication token. Requires scope: `users:write` */
@property NSString * _Nullable token __attribute__((swift_name("token")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetPresenceResponse")))
@interface KslackCoreUsersSetPresenceResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreUsersSetPresenceResponseCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsOpenRequest")))
@interface KslackCoreViewsOpenRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token triggerId:(NSString * _Nullable)triggerId view:(KslackCoreView * _Nullable)view viewAsString:(NSString * _Nullable)viewAsString __attribute__((swift_name("init(token:triggerId:view:viewAsString:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable triggerId __attribute__((swift_name("triggerId")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@property NSString * _Nullable viewAsString __attribute__((swift_name("viewAsString")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsOpenResponse")))
@interface KslackCoreViewsOpenResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreViewsOpenResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsPublishRequest")))
@interface KslackCoreViewsPublishRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token view:(KslackCoreView * _Nullable)view viewAsString:(NSString * _Nullable)viewAsString userId:(NSString * _Nullable)userId hash:(NSString * _Nullable)hash __attribute__((swift_name("init(token:view:viewAsString:userId:hash:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property (getter=hash_) NSString * _Nullable hash __attribute__((swift_name("hash")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@property NSString * _Nullable viewAsString __attribute__((swift_name("viewAsString")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsPublishResponse")))
@interface KslackCoreViewsPublishResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreViewsPublishResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsPushRequest")))
@interface KslackCoreViewsPushRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token triggerId:(NSString * _Nullable)triggerId view:(KslackCoreView * _Nullable)view viewAsString:(NSString * _Nullable)viewAsString __attribute__((swift_name("init(token:triggerId:view:viewAsString:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property NSString * _Nullable triggerId __attribute__((swift_name("triggerId")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@property NSString * _Nullable viewAsString __attribute__((swift_name("viewAsString")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsPushResponse")))
@interface KslackCoreViewsPushResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreViewsPushResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsUpdateRequest")))
@interface KslackCoreViewsUpdateRequest : KslackBase <KslackCoreSlackApiRequest, KslackCoreFormRequest>
- (instancetype)initWithToken:(NSString * _Nullable)token view:(KslackCoreView * _Nullable)view viewAsString:(NSString * _Nullable)viewAsString externalId:(NSString * _Nullable)externalId hash:(NSString * _Nullable)hash viewId:(NSString * _Nullable)viewId __attribute__((swift_name("init(token:view:viewAsString:externalId:hash:viewId:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, id> *)toMap __attribute__((swift_name("toMap()")));
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (getter=hash_) NSString * _Nullable hash __attribute__((swift_name("hash")));
@property NSString * _Nullable token __attribute__((swift_name("token")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@property NSString * _Nullable viewAsString __attribute__((swift_name("viewAsString")));
@property NSString * _Nullable viewId __attribute__((swift_name("viewId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsUpdateResponse")))
@interface KslackCoreViewsUpdateResponse : KslackCoreSlackApiResponse
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 isOk:(BOOL)isOk warning:(NSString * _Nullable)warning error:(NSString * _Nullable)error needed:(NSString * _Nullable)needed provided:(NSString * _Nullable)provided serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:isOk:warning:error:needed:provided:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreViewsUpdateResponseCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreResponseMetadata_ * _Nullable responseMetadata __attribute__((swift_name("responseMetadata")));
@property KslackCoreView * _Nullable view __attribute__((swift_name("view")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpParameter")))
@interface KslackKhttpclientHttpParameter : KslackBase
- (instancetype)initWithType:(KslackKhttpclientHttpParameterType *)type key:(NSString *)key value:(NSString * _Nullable)value fileName:(NSString * _Nullable)fileName fileBody:(KslackKotlinByteArray * _Nullable)fileBody __attribute__((swift_name("init(type:key:value:fileName:fileBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KslackKhttpclientHttpParameterCompanion *companion __attribute__((swift_name("companion")));
- (KslackKtor_httpContentType *)fileContentType __attribute__((swift_name("fileContentType()")));
- (NSString * _Nullable)fileExtension __attribute__((swift_name("fileExtension()")));
@property (readonly) KslackKotlinByteArray * _Nullable fileBody __attribute__((swift_name("fileBody")));
@property (readonly) NSString * _Nullable fileName __attribute__((swift_name("fileName")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) KslackKhttpclientHttpParameterType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSlackApiResponse.Companion")))
@interface KslackCoreSlackApiResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSlackApiResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsApproveResponse.Companion")))
@interface KslackCoreAdminAppsApproveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminAppsApproveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsRequestsListResponse.Companion")))
@interface KslackCoreAdminAppsRequestsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminAppsRequestsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/admin/AppRequest.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppRequest")))
@interface KslackCoreAppRequest : KslackBase

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/admin/AppRequest.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/admin/AppRequest.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreAppRequestCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreApp * _Nullable app __attribute__((swift_name("app")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_created")
*/
@property KslackInt * _Nullable dateCreated __attribute__((swift_name("dateCreated")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_user_app_collaborator")
*/
@property KslackBoolean * _Nullable isUserAppCollaborator __attribute__((swift_name("isUserAppCollaborator")));
@property NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="previous_resolution")
*/
@property KslackCorePreviousResolution * _Nullable previousResolution __attribute__((swift_name("previousResolution")));
@property KslackKotlinArray<KslackCoreScope *> * _Nullable scopes __attribute__((swift_name("scopes")));
@property KslackCoreTeam_ * _Nullable team __attribute__((swift_name("team")));
@property KslackCoreUser_ * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * An attribute included within the response of the newest Slack APIs which contains a `next_cursor`
 * value.  By using this value as a cursor parameter in a subsequent request, along with limit, you may
 * navigate through the collection page by virtual page.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseMetadata")))
@interface KslackCoreResponseMetadata : KslackBase

/**
 * An attribute included within the response of the newest Slack APIs which contains a `next_cursor`
 * value.  By using this value as a cursor parameter in a subsequent request, along with limit, you may
 * navigate through the collection page by virtual page.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An attribute included within the response of the newest Slack APIs which contains a `next_cursor`
 * value.  By using this value as a cursor parameter in a subsequent request, along with limit, you may
 * navigate through the collection page by virtual page.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreResponseMetadataCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable messages __attribute__((swift_name("messages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_cursor")
*/
@property NSString * _Nullable nextCursor __attribute__((swift_name("nextCursor")));
@property KslackKotlinArray<NSString *> * _Nullable warnings __attribute__((swift_name("warnings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminAppsRestrictResponse.Companion")))
@interface KslackCoreAdminAppsRestrictResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminAppsRestrictResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsApproveResponse.Companion")))
@interface KslackCoreAdminInviteRequestsApproveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminInviteRequestsApproveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsApprovedListResponse.Companion")))
@interface KslackCoreAdminInviteRequestsApprovedListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminInviteRequestsApprovedListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsDeniedListResponse.Companion")))
@interface KslackCoreAdminInviteRequestsDeniedListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminInviteRequestsDeniedListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsDenyResponse.Companion")))
@interface KslackCoreAdminInviteRequestsDenyResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminInviteRequestsDenyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminInviteRequestsListResponse.Companion")))
@interface KslackCoreAdminInviteRequestsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminInviteRequestsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsAdminsListResponse.Companion")))
@interface KslackCoreAdminTeamsAdminsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminTeamsAdminsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsCreateResponse.Companion")))
@interface KslackCoreAdminTeamsCreateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminTeamsCreateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseMetadata_")))
@interface KslackCoreResponseMetadata_ : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreResponseMetadata_Companion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable messages __attribute__((swift_name("messages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsOwnersListResponse.Companion")))
@interface KslackCoreAdminTeamsOwnersListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminTeamsOwnersListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetDescriptionResponse.Companion")))
@interface KslackCoreAdminTeamsSettingsSetDescriptionResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminTeamsSettingsSetDescriptionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetIconResponse.Companion")))
@interface KslackCoreAdminTeamsSettingsSetIconResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminTeamsSettingsSetIconResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminTeamsSettingsSetNameResponse.Companion")))
@interface KslackCoreAdminTeamsSettingsSetNameResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminTeamsSettingsSetNameResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersAssignResponse.Companion")))
@interface KslackCoreAdminUsersAssignResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersAssignResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersInviteResponse.Companion")))
@interface KslackCoreAdminUsersInviteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersInviteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersRemoveResponse.Companion")))
@interface KslackCoreAdminUsersRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSessionResetResponse.Companion")))
@interface KslackCoreAdminUsersSessionResetResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersSessionResetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetAdminResponse.Companion")))
@interface KslackCoreAdminUsersSetAdminResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersSetAdminResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetOwnerResponse.Companion")))
@interface KslackCoreAdminUsersSetOwnerResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersSetOwnerResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAdminUsersSetRegularResponse.Companion")))
@interface KslackCoreAdminUsersSetRegularResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAdminUsersSetRegularResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApiTestResponse.Companion")))
@interface KslackCoreApiTestResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreApiTestResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreArgs")))
@interface KslackCoreArgs : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreArgsCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable error __attribute__((swift_name("error")));
@property NSString * _Nullable foo __attribute__((swift_name("foo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsConnectionsOpenResponse.Companion")))
@interface KslackCoreAppsConnectionsOpenResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAppsConnectionsOpenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsUninstallResponse.Companion")))
@interface KslackCoreAppsUninstallResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAppsUninstallResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthRevokeResponse.Companion")))
@interface KslackCoreAuthRevokeResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAuthRevokeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthTeamsListResponse.Companion")))
@interface KslackCoreAuthTeamsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAuthTeamsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeam")))
@interface KslackCoreTeam : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreTeamCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_base_url")
*/
@property NSString * _Nullable avatarBaseUrl __attribute__((swift_name("avatarBaseUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="default_channels")
*/
@property KslackKotlinArray<NSString *> * _Nullable defaultChannels __attribute__((swift_name("defaultChannels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discoverable")
*/
@property NSString * _Nullable discoverable __attribute__((swift_name("discoverable")));
@property NSString * _Nullable domain __attribute__((swift_name("domain")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email_domain")
*/
@property NSString * _Nullable emailDomain __attribute__((swift_name("emailDomain")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_domain")
*/
@property NSString * _Nullable enterpriseDomain __attribute__((swift_name("enterpriseDomain")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_id")
*/
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_name")
*/
@property NSString * _Nullable enterpriseName __attribute__((swift_name("enterpriseName")));
@property KslackCoreTeamIcon * _Nullable icon __attribute__((swift_name("icon")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_verified")
*/
@property KslackBoolean * _Nullable isVerified __attribute__((swift_name("isVerified")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="lob_sales_home_enabled")
*/
@property KslackBoolean * _Nullable lobSalesHomeEnabled __attribute__((swift_name("lobSalesHomeEnabled")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAuthTestResponse.Companion")))
@interface KslackCoreAuthTestResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAuthTestResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksAddResponse.Companion")))
@interface KslackCoreBookmarksAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBookmarksAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmark")))
@interface KslackCoreBookmark : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreBookmarkCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel_id")
*/
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_created")
*/
@property KslackInt * _Nullable dateCreated __attribute__((swift_name("dateCreated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_updated")
*/
@property KslackInt * _Nullable dateUpdated __attribute__((swift_name("dateUpdated")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="icon_url")
*/
@property NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_updated_by_team_id")
*/
@property NSString * _Nullable lastUpdatedByTeamId __attribute__((swift_name("lastUpdatedByTeamId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_updated_by_user_id")
*/
@property NSString * _Nullable lastUpdatedByUserId __attribute__((swift_name("lastUpdatedByUserId")));
@property NSString * _Nullable link __attribute__((swift_name("link")));
@property NSString * _Nullable rank __attribute__((swift_name("rank")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksEditResponse.Companion")))
@interface KslackCoreBookmarksEditResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBookmarksEditResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksListResponse.Companion")))
@interface KslackCoreBookmarksListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBookmarksListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksRemoveResponse.Companion")))
@interface KslackCoreBookmarksRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBookmarksRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotsInfoResponse.Companion")))
@interface KslackCoreBotsInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBotsInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBot")))
@interface KslackCoreBot : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreBotCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property KslackCoreBotIcons * _Nullable icons __attribute__((swift_name("icons")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KslackInt * _Nullable updated __attribute__((swift_name("updated")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsAddResponse.Companion")))
@interface KslackCoreCallsAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallsAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCall")))
@interface KslackCoreCall : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreCallCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_created")
*/
@property KslackInt * _Nullable dateCreated __attribute__((swift_name("dateCreated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="desktop_app_join_url")
*/
@property NSString * _Nullable desktopAppJoinUrl __attribute__((swift_name("desktopAppJoinUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_display_id")
*/
@property NSString * _Nullable externalDisplayId __attribute__((swift_name("externalDisplayId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_unique_id")
*/
@property NSString * _Nullable externalUniqueId __attribute__((swift_name("externalUniqueId")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="join_url")
*/
@property NSString * _Nullable joinUrl __attribute__((swift_name("joinUrl")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property KslackKotlinArray<KslackCoreCallParticipant *> * _Nullable users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsEndResponse.Companion")))
@interface KslackCoreCallsEndResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallsEndResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsInfoResponse.Companion")))
@interface KslackCoreCallsInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallsInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsParticipantsAddResponse.Companion")))
@interface KslackCoreCallsParticipantsAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallsParticipantsAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsParticipantsRemoveResponse.Companion")))
@interface KslackCoreCallsParticipantsRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallsParticipantsRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallsUpdateResponse.Companion")))
@interface KslackCoreCallsUpdateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallsUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatAppendStreamResponse.Companion")))
@interface KslackCoreChatAppendStreamResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatAppendStreamResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatDeleteResponse.Companion")))
@interface KslackCoreChatDeleteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatDeleteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatDeleteScheduledMessageResponse.Companion")))
@interface KslackCoreChatDeleteScheduledMessageResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatDeleteScheduledMessageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatGetPermalinkResponse.Companion")))
@interface KslackCoreChatGetPermalinkResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatGetPermalinkResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatMeMessageResponse.Companion")))
@interface KslackCoreChatMeMessageResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatMeMessageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Block Kit is a new UI framework that offers you more control and flexibility
 * when building messages for Slack. Comprised of "blocks," stackable bits of
 * message UI, you can customize the order and appearance of information
 * delivered by your app in Slack.
 *
 * @see [Block Kit Guide](https://api.slack.com/block-kit)
 *
 * @see [Block Kit Reference](https://api.slack.com/reference/messaging/blocks)
 */
__attribute__((swift_name("CoreLayoutBlock")))
@protocol KslackCoreLayoutBlock
@required

/**
 * Determines the type of layout block, e.g. section, divider, context, actions
 * and image.
 */
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * https://api.slack.com/docs/message-attachments
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachment")))
@interface KslackCoreAttachment : KslackBase

/**
 * https://api.slack.com/docs/message-attachments
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/docs/message-attachments
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreAttachmentCompanion *companion __attribute__((swift_name("companion")));

/**
 * Actions are defined as an array, and hashes contained within it will be displayed in as buttons in the message attachment.
 */
@property KslackKotlinArray<KslackCoreAction *> * _Nullable actions __attribute__((swift_name("actions")));
@property NSString * _Nullable appUnfurlUrl __attribute__((swift_name("appUnfurlUrl")));

/**
 * A valid URL that displays a small 16x16px image to the left of the author_name text. Will only work if author_name is present.
 */
@property NSString * _Nullable authorIcon __attribute__((swift_name("authorIcon")));

/**
 * A valid URL that will hyperlink the author_name text mentioned above. Will only work if author_name is present.
 */
@property NSString * _Nullable authorLink __attribute__((swift_name("authorLink")));

/**
 * Small text used to display the author's name.
 */
@property NSString * _Nullable authorName __attribute__((swift_name("authorName")));
@property NSString * _Nullable authorSubname __attribute__((swift_name("authorSubname")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable botId __attribute__((swift_name("botId")));

/**
 * This is optional value that specifies callback id when there are buttons.
 */
@property NSString * _Nullable callbackId __attribute__((swift_name("callbackId")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable channelName __attribute__((swift_name("channelName")));

/**
 * Like traffic signals, color-coding messages can quickly communicate intent
 * and help separate them from the flow of other messages in the timeline.
 *
 *
 * An optional value that can either be one of good, warning, danger, or any hex color code (eg. #439FE0).
 * This value is used to color the border along the left side of the message attachment.
 */
@property NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * A plain-text summary of the attachment. This text will be used in clients that don't show formatted text
 * (eg. IRC, mobile notifications) and should not contain any markup.
 */
@property NSString * _Nullable fallback __attribute__((swift_name("fallback")));

/**
 * Fields are defined as an array, and hashes contained within it will be displayed in a table inside the message attachment.
 */
@property KslackKotlinArray<KslackCoreField *> * _Nullable fields __attribute__((swift_name("fields")));
@property NSString * _Nullable filename __attribute__((swift_name("filename")));

/**
 * Add some brief text to help contextualize and identify an attachment.
 * Limited to 300 characters, and may be truncated further when displayed to users in environments with limited screen real estate.
 */
@property NSString * _Nullable footer __attribute__((swift_name("footer")));

/**
 * To render a small icon beside your footer text, provide a publicly accessible URL string in the footer_icon field.
 * You must also provide a footer for the field to be recognized.
 *
 *
 * We'll render what you provide at 16px by 16px. It's best to use an image that is similarly sized.
 */
@property NSString * _Nullable footerIcon __attribute__((swift_name("footerIcon")));
@property NSString * _Nullable fromUrl __attribute__((swift_name("fromUrl")));
@property KslackInt * _Nullable id __attribute__((swift_name("id")));
@property KslackInt * _Nullable imageBytes __attribute__((swift_name("imageBytes")));
@property KslackInt * _Nullable imageHeight __attribute__((swift_name("imageHeight")));

/**
 * A valid URL to an image file that will be displayed inside a message attachment.
 * We currently support the following formats: GIF, JPEG, PNG, and BMP.
 *
 *
 * Large images will be resized to a maximum width of 400px or a maximum height of 500px,
 * while still maintaining the original aspect ratio.
 */
@property NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property KslackInt * _Nullable imageWidth __attribute__((swift_name("imageWidth")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_app_unfurl")
*/
@property KslackBoolean * _Nullable isAppUnfurl __attribute__((swift_name("isAppUnfurl")));
@property KslackBoolean * _Nullable isIndent __attribute__((swift_name("isIndent")));

/**
 * NOTE: The the following Booleans (is_msg_unfurl, is_reply_unfurl, is_thread_root_unfurl,
 * is_app_unfurl) default to null intentionally to support block attachments.
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_msg_unfurl")
*/
@property KslackBoolean * _Nullable isMsgUnfurl __attribute__((swift_name("isMsgUnfurl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_reply_unfurl")
*/
@property KslackBoolean * _Nullable isReplyUnfurl __attribute__((swift_name("isReplyUnfurl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_thread_root_unfurl")
*/
@property KslackBoolean * _Nullable isThreadRootUnfurl __attribute__((swift_name("isThreadRootUnfurl")));
@property KslackCoreAttachmentMetadata * _Nullable metadata __attribute__((swift_name("metadata")));
@property NSString * _Nullable mimetype __attribute__((swift_name("mimetype")));

/**
 * By default,
 * [message text
 * in attachments](https://api.slack.com/docs/message-formatting#message_formatting) are not formatted. To enable formatting on attachment fields, add the
 * name of the field (as defined in the API) in this list.
 */
@property KslackKotlinArray<NSString *> * _Nullable mrkdwnIn __attribute__((swift_name("mrkdwnIn")));
@property NSString * _Nullable msgSubtype __attribute__((swift_name("msgSubtype")));
@property NSString * _Nullable originalUrl __attribute__((swift_name("originalUrl")));

/**
 * This is optional text that appears above the message attachment block.
 */
@property NSString * _Nullable pretext __attribute__((swift_name("pretext")));
@property NSString * _Nullable serviceIcon __attribute__((swift_name("serviceIcon")));
@property NSString * _Nullable serviceName __attribute__((swift_name("serviceName")));
@property NSString * _Nullable serviceUrl __attribute__((swift_name("serviceUrl")));
@property KslackInt * _Nullable size __attribute__((swift_name("size")));

/**
 * This is the main text in a message attachment, and can contain standard message markup (see details below).
 * The content will automatically collapse if it contains 700+ characters or 5+ linebreaks,
 * and will display a "Show more..." link to expand the content.
 *
 *
 * https://api.slack.com/docs/message-attachments#message_formatting
 */
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property KslackInt * _Nullable thumbHeight __attribute__((swift_name("thumbHeight")));

/**
 * A valid URL to an image file that will be displayed as a thumbnail on the right side of a message attachment.
 * We currently support the following formats: GIF, JPEG, PNG, and BMP.
 *
 *
 * The thumbnail's longest dimension will be scaled down to 75px while maintaining the aspect ratio of the image.
 * The filesize of the image must also be less than 500 KB.
 *
 *
 * For best results, please use images that are already 75px by 75px.
 */
@property NSString * _Nullable thumbUrl __attribute__((swift_name("thumbUrl")));
@property KslackInt * _Nullable thumbWidth __attribute__((swift_name("thumbWidth")));

/**
 * The title is displayed as larger, bold text near the top of a message attachment.
 * By passing a valid URL in the title_link parameter (optional), the title text will be hyperlinked.
 */
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * The title is displayed as larger, bold text near the top of a message attachment.
 * By passing a valid URL in the title_link parameter (optional), the title text will be hyperlinked.
 */
@property NSString * _Nullable titleLink __attribute__((swift_name("titleLink")));

/**
 * ts (timestamp)
 * Does your attachment relate to something happening at a specific time?
 *
 *
 * By providing the ts field with an integer value in "epoch time",
 * the attachment will display an additional timestamp value as part of the attachment's footer.
 *
 *
 * Use ts when referencing articles or happenings. Your message will have its own timestamp when published.
 */
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable videoHtml __attribute__((swift_name("videoHtml")));
@property KslackInt * _Nullable videoHtmlHeight __attribute__((swift_name("videoHtmlHeight")));
@property KslackInt * _Nullable videoHtmlWidth __attribute__((swift_name("videoHtmlWidth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatPostEphemeralResponse.Companion")))
@interface KslackCoreChatPostEphemeralResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatPostEphemeralResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatPostMessageResponse.Companion")))
@interface KslackCoreChatPostMessageResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatPostMessageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KslackKotlinx_serialization_jsonJsonElement : KslackBase
@property (class, readonly, getter=companion) KslackKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatScheduleMessageResponse.Companion")))
@interface KslackCoreChatScheduleMessageResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatScheduleMessageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessage")))
@interface KslackCoreMessage : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMessageCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable botId __attribute__((swift_name("botId")));
@property NSString * _Nullable botLink __attribute__((swift_name("botLink")));
@property KslackCoreBotProfile * _Nullable botProfile __attribute__((swift_name("botProfile")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable clientMsgId __attribute__((swift_name("clientMsgId")));
@property KslackCoreMessageItem_ * _Nullable comment __attribute__((swift_name("comment")));
@property KslackCoreMessageEdited * _Nullable edited __attribute__((swift_name("edited")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@property KslackKotlinArray<KslackCoreFile *> * _Nullable files __attribute__((swift_name("files")));
@property KslackCoreMessageIcons * _Nullable icons __attribute__((swift_name("icons")));
@property NSString * _Nullable inviter __attribute__((swift_name("inviter")));
@property BOOL isDisplayAsBot __attribute__((swift_name("isDisplayAsBot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_intro")
*/
@property BOOL isIntro __attribute__((swift_name("isIntro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_starred")
*/
@property BOOL isStarred __attribute__((swift_name("isStarred")));
@property BOOL isSubscribed __attribute__((swift_name("isSubscribed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_thread_broadcast")
*/
@property BOOL isThreadBroadcast __attribute__((swift_name("isThreadBroadcast")));
@property BOOL isUnfurlLinks __attribute__((swift_name("isUnfurlLinks")));
@property BOOL isUnfurlMedia __attribute__((swift_name("isUnfurlMedia")));
@property BOOL isUpload __attribute__((swift_name("isUpload")));
@property BOOL isWibblr __attribute__((swift_name("isWibblr")));
@property KslackCoreMessageItem_ * _Nullable item __attribute__((swift_name("item")));
@property NSString * _Nullable itemType __attribute__((swift_name("itemType")));
@property NSString * _Nullable lastRead __attribute__((swift_name("lastRead")));
@property NSString * _Nullable latestReply __attribute__((swift_name("latestReply")));
@property NSString * _Nullable parentUserId __attribute__((swift_name("parentUserId")));
@property KslackKotlinArray<NSString *> * _Nullable pinnedTo __attribute__((swift_name("pinnedTo")));
@property NSString * _Nullable purpose __attribute__((swift_name("purpose")));
@property KslackKotlinArray<KslackCoreReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property KslackInt * _Nullable replyCount __attribute__((swift_name("replyCount")));
@property KslackKotlinArray<NSString *> * _Nullable replyUsers __attribute__((swift_name("replyUsers")));
@property KslackInt * _Nullable replyUsersCount __attribute__((swift_name("replyUsersCount")));
@property KslackCoreMessageRoot * _Nullable root __attribute__((swift_name("root")));
@property NSString * _Nullable subtype __attribute__((swift_name("subtype")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));
@property NSString * _Nullable topic __attribute__((swift_name("topic")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@property KslackKotlinArray<NSString *> * _Nullable xFiles __attribute__((swift_name("xFiles")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatScheduleMessagesListResponse.Companion")))
@interface KslackCoreChatScheduleMessagesListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatScheduleMessagesListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledMessage")))
@interface KslackCoreScheduledMessage : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreScheduledMessageCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property KslackInt * _Nullable dateCreated __attribute__((swift_name("dateCreated")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KslackInt * _Nullable postAt __attribute__((swift_name("postAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatStartStreamResponse.Companion")))
@interface KslackCoreChatStartStreamResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatStartStreamResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatStopStreamResponse.Companion")))
@interface KslackCoreChatStopStreamResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatStopStreamResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUnfurlRequest.UnfurlDetail")))
@interface KslackCoreChatUnfurlRequestUnfurlDetail : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KslackKotlinArray<KslackCoreAction *> * _Nullable actions __attribute__((swift_name("actions")));
@property NSString * _Nullable attachmentType __attribute__((swift_name("attachmentType")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable callbackId __attribute__((swift_name("callbackId")));
@property NSString * _Nullable fallback __attribute__((swift_name("fallback")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUnfurlResponse.Companion")))
@interface KslackCoreChatUnfurlResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatUnfurlResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChatUpdateResponse.Companion")))
@interface KslackCoreChatUpdateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChatUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsAcceptSharedInviteResponse.Companion")))
@interface KslackCoreConversationsAcceptSharedInviteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsAcceptSharedInviteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsApproveSharedInviteResponse.Companion")))
@interface KslackCoreConversationsApproveSharedInviteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsApproveSharedInviteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsArchiveResponse.Companion")))
@interface KslackCoreConversationsArchiveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsArchiveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCanvasesCreateResponse.Companion")))
@interface KslackCoreConversationsCanvasesCreateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsCanvasesCreateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCloseResponse.Companion")))
@interface KslackCoreConversationsCloseResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsCloseResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsCreateResponse.Companion")))
@interface KslackCoreConversationsCreateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsCreateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents a [conversation](https://api.slack.com/types/conversation)
 * as used with the `conversations` API
 *
 * @see "https://api.slack.com/docs/conversations-api"
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation")))
@interface KslackCoreConversation : KslackBase

/**
 * Represents a [conversation](https://api.slack.com/types/conversation)
 * as used with the `conversations` API
 *
 * @see "https://api.slack.com/docs/conversations-api"
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Represents a [conversation](https://api.slack.com/types/conversation)
 * as used with the `conversations` API
 *
 * @see "https://api.slack.com/docs/conversations-api"
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreConversationCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable connectedTeamIds __attribute__((swift_name("connectedTeamIds")));
@property NSString * _Nullable conversationHostId __attribute__((swift_name("conversationHostId")));
@property NSString * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable creator __attribute__((swift_name("creator")));
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KslackKotlinArray<NSString *> * _Nullable internalTeamIds __attribute__((swift_name("internalTeamIds")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_archived")
*/
@property BOOL isArchived __attribute__((swift_name("isArchived")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_channel")
*/
@property BOOL isChannel __attribute__((swift_name("isChannel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_ext_shared")
*/
@property BOOL isExtShared __attribute__((swift_name("isExtShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_general")
*/
@property BOOL isGeneral __attribute__((swift_name("isGeneral")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_global_shared")
*/
@property BOOL isGlobalShared __attribute__((swift_name("isGlobalShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_group")
*/
@property BOOL isGroup __attribute__((swift_name("isGroup")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_im")
*/
@property BOOL isIm __attribute__((swift_name("isIm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_member")
*/
@property BOOL isMember __attribute__((swift_name("isMember")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_moved")
*/
@property KslackInt * _Nullable isMoved __attribute__((swift_name("isMoved")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_mpim")
*/
@property BOOL isMpim __attribute__((swift_name("isMpim")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_non_threadable")
*/
@property BOOL isNonThreadable __attribute__((swift_name("isNonThreadable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_open")
*/
@property BOOL isOpen __attribute__((swift_name("isOpen")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_org_default")
*/
@property BOOL isOrgDefault __attribute__((swift_name("isOrgDefault")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_org_mandatory")
*/
@property BOOL isOrgMandatory __attribute__((swift_name("isOrgMandatory")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_org_shared")
*/
@property BOOL isOrgShared __attribute__((swift_name("isOrgShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_pending_ext_shared")
*/
@property BOOL isPendingExtShared __attribute__((swift_name("isPendingExtShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_private")
*/
@property BOOL isPrivate __attribute__((swift_name("isPrivate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_read_only")
*/
@property BOOL isReadOnly __attribute__((swift_name("isReadOnly")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_shared")
*/
@property BOOL isShared __attribute__((swift_name("isShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_thread_only")
*/
@property BOOL isThreadOnly __attribute__((swift_name("isThreadOnly")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_read")
*/
@property NSString * _Nullable lastRead __attribute__((swift_name("lastRead")));
@property KslackCoreLatest * _Nullable latest __attribute__((swift_name("latest")));
@property NSString * _Nullable locale __attribute__((swift_name("locale")));
@property KslackKotlinArray<NSString *> * _Nullable members __attribute__((swift_name("members")));
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name_normalized")
*/
@property NSString * _Nullable nameNormalized __attribute__((swift_name("nameNormalized")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="num_members")
*/
@property KslackInt * _Nullable numOfMembers __attribute__((swift_name("numOfMembers")));
@property NSString * _Nullable parentConversation __attribute__((swift_name("parentConversation")));
@property KslackKotlinArray<NSString *> * _Nullable pendingConnectedTeamIds __attribute__((swift_name("pendingConnectedTeamIds")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pending_shared")
*/
@property KslackKotlinArray<NSString *> * _Nullable pendingShared __attribute__((swift_name("pendingShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="previous_names")
*/
@property KslackKotlinArray<NSString *> * _Nullable previousNames __attribute__((swift_name("previousNames")));
@property KslackDouble * _Nullable priority __attribute__((swift_name("priority")));
@property KslackCorePurpose * _Nullable purpose __attribute__((swift_name("purpose")));
@property KslackKotlinArray<NSString *> * _Nullable sharedTeamIds __attribute__((swift_name("sharedTeamIds")));
@property KslackCoreTopic * _Nullable topic __attribute__((swift_name("topic")));
@property KslackInt * _Nullable unlinked __attribute__((swift_name("unlinked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_count")
*/
@property KslackInt * _Nullable unreadCount __attribute__((swift_name("unreadCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_count_display")
*/
@property KslackInt * _Nullable unreadCountDisplay __attribute__((swift_name("unreadCountDisplay")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsDeclineSharedInviteResponse.Companion")))
@interface KslackCoreConversationsDeclineSharedInviteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsDeclineSharedInviteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsHistoryResponse.Companion")))
@interface KslackCoreConversationsHistoryResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsHistoryResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInfoResponse.Companion")))
@interface KslackCoreConversationsInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInviteResponse.Companion")))
@interface KslackCoreConversationsInviteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsInviteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreError")))
@interface KslackCoreError : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreErrorCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable error __attribute__((swift_name("error")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ok")
*/
@property BOOL isOk __attribute__((swift_name("isOk")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsInviteSharedResponse.Companion")))
@interface KslackCoreConversationsInviteSharedResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsInviteSharedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsJoinResponse.Companion")))
@interface KslackCoreConversationsJoinResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsJoinResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsKickResponse.Companion")))
@interface KslackCoreConversationsKickResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsKickResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsLeaveResponse.Companion")))
@interface KslackCoreConversationsLeaveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsLeaveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KslackKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KslackKotlinEnum<E> : KslackBase <KslackKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KslackKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * Represents a type of conversation such as a public channel or IM.
 *
 * @see [Conversations.list API](https://api.slack.com/methods/conversations.list)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationType")))
@interface KslackCoreConversationType : KslackKotlinEnum<KslackCoreConversationType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a type of conversation such as a public channel or IM.
 *
 * @see [Conversations.list API](https://api.slack.com/methods/conversations.list)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreConversationTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KslackCoreConversationType *publicChannel __attribute__((swift_name("publicChannel")));
@property (class, readonly) KslackCoreConversationType *privateChannel __attribute__((swift_name("privateChannel")));
@property (class, readonly) KslackCoreConversationType *mpim __attribute__((swift_name("mpim")));
@property (class, readonly) KslackCoreConversationType *im __attribute__((swift_name("im")));
+ (KslackKotlinArray<KslackCoreConversationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KslackCoreConversationType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListResponse.Companion")))
@interface KslackCoreConversationsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsListConnectInvitesResponse.Companion")))
@interface KslackCoreConversationsListConnectInvitesResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsListConnectInvitesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharedInvite")))
@interface KslackCoreSharedInvite : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSharedInviteCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreSharedInviteChannel * _Nullable channel __attribute__((swift_name("channel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_created")
*/
@property KslackInt * _Nullable dateCreated __attribute__((swift_name("dateCreated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_invalid")
*/
@property KslackInt * _Nullable dateInvalid __attribute__((swift_name("dateInvalid")));
@property NSString * _Nullable direction __attribute__((swift_name("direction")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invite_payload")
*/
@property KslackCoreSharedInvitePayload * _Nullable invitePayload __attribute__((swift_name("invitePayload")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invite_type")
*/
@property NSString * _Nullable inviteType __attribute__((swift_name("inviteType")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsMarkResponse.Companion")))
@interface KslackCoreConversationsMarkResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsMarkResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsMembersResponse.Companion")))
@interface KslackCoreConversationsMembersResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsMembersResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsOpenResponse.Companion")))
@interface KslackCoreConversationsOpenResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsOpenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRenameResponse.Companion")))
@interface KslackCoreConversationsRenameResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsRenameResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRepliesResponse.Companion")))
@interface KslackCoreConversationsRepliesResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsRepliesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteApproveResponse.Companion")))
@interface KslackCoreConversationsRequestSharedInviteApproveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsRequestSharedInviteApproveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteDenyResponse.Companion")))
@interface KslackCoreConversationsRequestSharedInviteDenyResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsRequestSharedInviteDenyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsRequestSharedInviteListResponse.Companion")))
@interface KslackCoreConversationsRequestSharedInviteListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsRequestSharedInviteListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsSetPurposeResponse.Companion")))
@interface KslackCoreConversationsSetPurposeResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsSetPurposeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsSetTopicResponse.Companion")))
@interface KslackCoreConversationsSetTopicResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsSetTopicResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationsUnarchiveResponse.Companion")))
@interface KslackCoreConversationsUnarchiveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationsUnarchiveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents a Slack Modal Dialog
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialog")))
@interface KslackCoreDialog : KslackBase

/**
 * Represents a Slack Modal Dialog
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Represents a Slack Modal Dialog
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreDialogCompanion *companion __attribute__((swift_name("companion")));

/**
 * An identifier strictly for you to recognize submissions of this particular instance of
 * a dialog. Use something meaningful to your app. 255 characters maximum.
 * Absolutely required.
 */
@property NSString * _Nullable callbackId __attribute__((swift_name("callbackId")));

/**
 * Up to 5 form elements are allowed per dialog. Required.
 */
@property KslackKotlinArray<id<KslackCoreDialogElement>> * _Nullable elements __attribute__((swift_name("elements")));

/**
 * Default is false. When set to true, we'll notify your request URL
 * whenever there's a user-induced dialog cancellation.
 */
@property BOOL isNotifyOnCancel __attribute__((swift_name("isNotifyOnCancel")));

/**
 * An optional string that will be echoed back to your app when a user interacts with your dialog.
 * Use it as a pointer to reference sensitive data stored elsewhere.
 */
@property NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * User-facing string for whichever button-like thing submits the form, depending on
 * form factor. Defaults to `Submit`, localized in whichever language the end user
 * prefers. 24 characters maximum, and may contain only a single word.
 */
@property NSString * _Nullable submitLabel __attribute__((swift_name("submitLabel")));

/**
 * User-facing title of this entire dialog. 24 characters to work with and it's required.
 */
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialogOpenResponse.Companion")))
@interface KslackCoreDialogOpenResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDialogOpenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialogResponseMetadata")))
@interface KslackCoreDialogResponseMetadata : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreDialogResponseMetadataCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable messages __attribute__((swift_name("messages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndEndDndResponse.Companion")))
@interface KslackCoreDndEndDndResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDndEndDndResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndEndSnoozeResponse.Companion")))
@interface KslackCoreDndEndSnoozeResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDndEndSnoozeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndInfoResponse.Companion")))
@interface KslackCoreDndInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDndInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndSetSnoozeResponse.Companion")))
@interface KslackCoreDndSetSnoozeResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDndSetSnoozeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndTeamInfoResponse.Companion")))
@interface KslackCoreDndTeamInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDndTeamInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndTeamMemberInfo")))
@interface KslackCoreDndTeamMemberInfo : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreDndTeamMemberInfoCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isDndEnabled __attribute__((swift_name("isDndEnabled")));
@property KslackInt * _Nullable nextDndEndTs __attribute__((swift_name("nextDndEndTs")));
@property KslackInt * _Nullable nextDndStartTs __attribute__((swift_name("nextDndStartTs")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmojiListResponse.Companion")))
@interface KslackCoreEmojiListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreEmojiListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesCompleteUploadExternalResponse.Companion")))
@interface KslackCoreFilesCompleteUploadExternalResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesCompleteUploadExternalResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://api.slack.com/types/file
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFile")))
@interface KslackCoreFile : KslackBase

/**
 * https://api.slack.com/types/file
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/types/file
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFileCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property NSString * _Nullable appName __attribute__((swift_name("appName")));
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable botId __attribute__((swift_name("botId")));
@property KslackKotlinArray<KslackCoreFileAddress *> * _Nullable cc __attribute__((swift_name("cc")));
@property KslackInt * _Nullable channelActionsCount __attribute__((swift_name("channelActionsCount")));
@property NSString * _Nullable channelActionsTs __attribute__((swift_name("channelActionsTs")));
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));
@property KslackInt * _Nullable commentsCount __attribute__((swift_name("commentsCount")));
@property NSString * _Nullable convertedPdf __attribute__((swift_name("convertedPdf")));
@property KslackInt * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable deanimateGif __attribute__((swift_name("deanimateGif")));
@property NSString * _Nullable editLink __attribute__((swift_name("editLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_type")
*/
@property NSString * _Nullable externalType __attribute__((swift_name("externalType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_url")
*/
@property NSString * _Nullable externalUrl __attribute__((swift_name("externalUrl")));
@property NSString * _Nullable filetype __attribute__((swift_name("filetype")));
@property KslackKotlinArray<KslackCoreFileAddress *> * _Nullable from __attribute__((swift_name("from")));
@property KslackKotlinArray<NSString *> * _Nullable groups __attribute__((swift_name("groups")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KslackInt * _Nullable imageExifRotation __attribute__((swift_name("imageExifRotation")));
@property KslackKotlinArray<NSString *> * _Nullable ims __attribute__((swift_name("ims")));
@property KslackCoreFileComment * _Nullable initialComment __attribute__((swift_name("initialComment")));
@property BOOL isDisplayAsBot __attribute__((swift_name("isDisplayAsBot")));
@property BOOL isEditable __attribute__((swift_name("isEditable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_external")
*/
@property BOOL isExternal __attribute__((swift_name("isExternal")));
@property BOOL isHasMore __attribute__((swift_name("isHasMore")));
@property BOOL isHasRichPreview __attribute__((swift_name("isHasRichPreview")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="preview_is_truncated")
*/
@property BOOL isPreviewTruncated __attribute__((swift_name("isPreviewTruncated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_public")
*/
@property BOOL isPublic __attribute__((swift_name("isPublic")));
@property BOOL isPublicUrlShared __attribute__((swift_name("isPublicUrlShared")));
@property BOOL isSentToSelf __attribute__((swift_name("isSentToSelf")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_starred")
*/
@property BOOL isStarred __attribute__((swift_name("isStarred")));
@property KslackInt * _Nullable lines __attribute__((swift_name("lines")));
@property KslackInt * _Nullable linesMore __attribute__((swift_name("linesMore")));
@property NSString * _Nullable mimetype __attribute__((swift_name("mimetype")));
@property NSString * _Nullable mode __attribute__((swift_name("mode")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KslackInt * _Nullable numStars __attribute__((swift_name("numStars")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_h")
*/
@property NSString * _Nullable originalHeight __attribute__((swift_name("originalHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_w")
*/
@property NSString * _Nullable originalWidth __attribute__((swift_name("originalWidth")));
@property NSString * _Nullable permalink __attribute__((swift_name("permalink")));
@property NSString * _Nullable permalinkPublic __attribute__((swift_name("permalinkPublic")));
@property NSDictionary<NSString *, KslackCoreFilePinnedInfo *> * _Nullable pinnedInfo __attribute__((swift_name("pinnedInfo")));
@property KslackKotlinArray<NSString *> * _Nullable pinnedTo __attribute__((swift_name("pinnedTo")));
@property NSString * _Nullable pjpeg __attribute__((swift_name("pjpeg")));
@property NSString * _Nullable plainText __attribute__((swift_name("plainText")));
@property NSString * _Nullable prettyType __attribute__((swift_name("prettyType")));
@property NSString * _Nullable preview __attribute__((swift_name("preview")));
@property NSString * _Nullable previewHighlight __attribute__((swift_name("previewHighlight")));
@property NSString * _Nullable previewPlainText __attribute__((swift_name("previewPlainText")));
@property KslackKotlinArray<KslackCoreReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property KslackCoreFileShares * _Nullable shares __attribute__((swift_name("shares")));
@property KslackInt * _Nullable size __attribute__((swift_name("size")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024")
*/
@property NSString * _Nullable thumb1024 __attribute__((swift_name("thumb1024")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024_gif")
*/
@property NSString * _Nullable thumb1024Gif __attribute__((swift_name("thumb1024Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024_h")
*/
@property NSString * _Nullable thumb1024Height __attribute__((swift_name("thumb1024Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024_w")
*/
@property NSString * _Nullable thumb1024Width __attribute__((swift_name("thumb1024Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160")
*/
@property NSString * _Nullable thumb160 __attribute__((swift_name("thumb160")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160_gif")
*/
@property NSString * _Nullable thumb160Gif __attribute__((swift_name("thumb160Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160_h")
*/
@property NSString * _Nullable thumb160Height __attribute__((swift_name("thumb160Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160_w")
*/
@property NSString * _Nullable thumb160Width __attribute__((swift_name("thumb160Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360")
*/
@property NSString * _Nullable thumb360 __attribute__((swift_name("thumb360")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_gif")
*/
@property NSString * _Nullable thumb360Gif __attribute__((swift_name("thumb360Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_h")
*/
@property NSString * _Nullable thumb360Height __attribute__((swift_name("thumb360Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_w")
*/
@property NSString * _Nullable thumb360Width __attribute__((swift_name("thumb360Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480")
*/
@property NSString * _Nullable thumb480 __attribute__((swift_name("thumb480")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480_gif")
*/
@property NSString * _Nullable thumb480Gif __attribute__((swift_name("thumb480Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480_h")
*/
@property NSString * _Nullable thumb480Height __attribute__((swift_name("thumb480Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480_w")
*/
@property NSString * _Nullable thumb480Width __attribute__((swift_name("thumb480Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64")
*/
@property NSString * _Nullable thumb64 __attribute__((swift_name("thumb64")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64_gif")
*/
@property NSString * _Nullable thumb64Gif __attribute__((swift_name("thumb64Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64_h")
*/
@property NSString * _Nullable thumb64Height __attribute__((swift_name("thumb64Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64_w")
*/
@property NSString * _Nullable thumb64Width __attribute__((swift_name("thumb64Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720")
*/
@property NSString * _Nullable thumb720 __attribute__((swift_name("thumb720")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720_gif")
*/
@property NSString * _Nullable thumb720Gif __attribute__((swift_name("thumb720Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720_h")
*/
@property NSString * _Nullable thumb720Height __attribute__((swift_name("thumb720Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720_w")
*/
@property NSString * _Nullable thumb720Width __attribute__((swift_name("thumb720Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80")
*/
@property NSString * _Nullable thumb80 __attribute__((swift_name("thumb80")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800")
*/
@property NSString * _Nullable thumb800 __attribute__((swift_name("thumb800")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800_gif")
*/
@property NSString * _Nullable thumb800Gif __attribute__((swift_name("thumb800Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800_h")
*/
@property NSString * _Nullable thumb800Height __attribute__((swift_name("thumb800Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800_w")
*/
@property NSString * _Nullable thumb800Width __attribute__((swift_name("thumb800Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80_gif")
*/
@property NSString * _Nullable thumb80Gif __attribute__((swift_name("thumb80Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80_h")
*/
@property NSString * _Nullable thumb80Height __attribute__((swift_name("thumb80Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80_w")
*/
@property NSString * _Nullable thumb80Width __attribute__((swift_name("thumb80Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960")
*/
@property NSString * _Nullable thumb960 __attribute__((swift_name("thumb960")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960_gif")
*/
@property NSString * _Nullable thumb960Gif __attribute__((swift_name("thumb960Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960_h")
*/
@property NSString * _Nullable thumb960Height __attribute__((swift_name("thumb960Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960_w")
*/
@property NSString * _Nullable thumb960Width __attribute__((swift_name("thumb960Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_pdf")
*/
@property NSString * _Nullable thumbPdf __attribute__((swift_name("thumbPdf")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_pdf_h")
*/
@property NSString * _Nullable thumbPdfHeight __attribute__((swift_name("thumbPdfHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_pdf_w")
*/
@property NSString * _Nullable thumbPdfWidth __attribute__((swift_name("thumbPdfWidth")));
@property NSString * _Nullable thumbTiny __attribute__((swift_name("thumbTiny")));
@property NSString * _Nullable thumbVideo __attribute__((swift_name("thumbVideo")));
@property KslackInt * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property KslackKotlinArray<KslackCoreFileAddress *> * _Nullable to __attribute__((swift_name("to")));
@property NSString * _Nullable urlPrivate __attribute__((swift_name("urlPrivate")));
@property NSString * _Nullable urlPrivateDownload __attribute__((swift_name("urlPrivateDownload")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesDeleteResponse.Companion")))
@interface KslackCoreFilesDeleteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesDeleteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesGetUploadURLExternalResponse.Companion")))
@interface KslackCoreFilesGetUploadURLExternalResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesGetUploadURLExternalResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesInfoResponse.Companion")))
@interface KslackCoreFilesInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://api.slack.com/methods/files.comments.add
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileComment")))
@interface KslackCoreFileComment : KslackBase

/**
 * https://api.slack.com/methods/files.comments.add
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/methods/files.comments.add
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFileCommentCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property KslackInt * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_intro")
*/
@property BOOL isIntro __attribute__((swift_name("isIntro")));
@property KslackInt * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Paging.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePaging")))
@interface KslackCorePaging : KslackBase

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Paging.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Paging.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCorePagingCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property NSString * _Nullable iid __attribute__((swift_name("iid")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));
@property KslackInt * _Nullable pages __attribute__((swift_name("pages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="per_page")
*/
@property KslackInt * _Nullable perPage __attribute__((swift_name("perPage")));
@property KslackInt * _Nullable spill __attribute__((swift_name("spill")));
@property KslackInt * _Nullable total __attribute__((swift_name("total")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesListResponse.Companion")))
@interface KslackCoreFilesListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KslackKotlinByteArray : KslackBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KslackByte *(^)(KslackInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KslackKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteAddResponse.Companion")))
@interface KslackCoreFilesRemoteAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRemoteAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteInfoResponse.Companion")))
@interface KslackCoreFilesRemoteInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRemoteInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteListResponse.Companion")))
@interface KslackCoreFilesRemoteListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRemoteListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteRemoveResponse.Companion")))
@interface KslackCoreFilesRemoteRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRemoteRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteShareResponse.Companion")))
@interface KslackCoreFilesRemoteShareResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRemoteShareResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRemoteUpdateResponse.Companion")))
@interface KslackCoreFilesRemoteUpdateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRemoteUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesRevokePublicURLResponse.Companion")))
@interface KslackCoreFilesRevokePublicURLResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesRevokePublicURLResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilesSharedPublicURLResponse.Companion")))
@interface KslackCoreFilesSharedPublicURLResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilesSharedPublicURLResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMigrationExchangeResponse.Companion")))
@interface KslackCoreMigrationExchangeResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMigrationExchangeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAccessResponse.Companion")))
@interface KslackCoreOAuthAccessResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthAccessResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAuthorizingUser")))
@interface KslackCoreOAuthAuthorizingUser : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthAuthorizingUserCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appHome __attribute__((swift_name("appHome")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthBot")))
@interface KslackCoreOAuthBot : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthBotCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable botAccessToken __attribute__((swift_name("botAccessToken")));
@property NSString * _Nullable botUserId __attribute__((swift_name("botUserId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthIncomingWebhook")))
@interface KslackCoreOAuthIncomingWebhook : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthIncomingWebhookCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property NSString * _Nullable channelId __attribute__((swift_name("channelId")));
@property NSString * _Nullable configurationUrl __attribute__((swift_name("configurationUrl")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthInstallerUser")))
@interface KslackCoreOAuthInstallerUser : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthInstallerUserCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appHome __attribute__((swift_name("appHome")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthScopes")))
@interface KslackCoreOAuthScopes : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthScopesCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable appHome __attribute__((swift_name("appHome")));
@property KslackKotlinArray<NSString *> * _Nullable channel __attribute__((swift_name("channel")));
@property KslackKotlinArray<NSString *> * _Nullable group __attribute__((swift_name("group")));
@property KslackKotlinArray<NSString *> * _Nullable im __attribute__((swift_name("im")));
@property KslackKotlinArray<NSString *> * _Nullable mpim __attribute__((swift_name("mpim")));
@property KslackKotlinArray<NSString *> * _Nullable team __attribute__((swift_name("team")));
@property KslackKotlinArray<NSString *> * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthTokenResponse.Companion")))
@interface KslackCoreOAuthTokenResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://api.slack.com/methods/oauth.v2.access
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2AccessResponse.Companion")))
@interface KslackCoreOAuthV2AccessResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/methods/oauth.v2.access
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthV2AccessResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/methods/oauth.v2.access
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAuthedUser")))
@interface KslackCoreOAuthAuthedUser : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthAuthedUserCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthEnterprise")))
@interface KslackCoreOAuthEnterprise : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthEnterpriseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthTeam")))
@interface KslackCoreOAuthTeam : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthTeamCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeResponse.Companion")))
@interface KslackCoreOAuthV2ExchangeResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthV2ExchangeResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeAuthedUser")))
@interface KslackCoreOAuthV2ExchangeAuthedUser : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthV2ExchangeAuthedUserCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeEnterprise")))
@interface KslackCoreOAuthV2ExchangeEnterprise : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthV2ExchangeEnterpriseCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeTeam")))
@interface KslackCoreOAuthV2ExchangeTeam : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOAuthV2ExchangeTeamCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOpenIDConnectTokenResponse.Companion")))
@interface KslackCoreOpenIDConnectTokenResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOpenIDConnectTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOpenIDConnectUserInfoResponse.Companion")))
@interface KslackCoreOpenIDConnectUserInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOpenIDConnectUserInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsAddResponse.Companion")))
@interface KslackCorePinsAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePinsAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsListResponse.Companion")))
@interface KslackCorePinsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePinsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageItem")))
@interface KslackCoreMessageItem : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMessageItemCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackCoreFileComment * _Nullable comment __attribute__((swift_name("comment")));
@property KslackInt * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@property KslackCoreMessage * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePinsRemoveResponse.Companion")))
@interface KslackCorePinsRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePinsRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsAddResponse.Companion")))
@interface KslackCoreReactionsAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreReactionsAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsGetResponse.Companion")))
@interface KslackCoreReactionsGetResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreReactionsGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsListResponse.Companion")))
@interface KslackCoreReactionsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreReactionsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreItem")))
@interface KslackCoreItem : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreItemCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackCoreComment * _Nullable comment __attribute__((swift_name("comment")));
@property KslackInt * _Nullable dateCreate __attribute__((swift_name("dateCreate")));
@property KslackCoreFile * _Nullable file __attribute__((swift_name("file")));
@property KslackCoreMessage * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReactionsRemoveResponse.Companion")))
@interface KslackCoreReactionsRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreReactionsRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersAddResponse.Companion")))
@interface KslackCoreRemindersAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreRemindersAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * - https://api.slack.com/methods/reminders.add
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReminder")))
@interface KslackCoreReminder : KslackBase

/**
 * - https://api.slack.com/methods/reminders.add
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://api.slack.com/methods/reminders.add
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreReminderCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="complete_ts")
*/
@property KslackInt * _Nullable completeTs __attribute__((swift_name("completeTs")));
@property NSString * _Nullable creator __attribute__((swift_name("creator")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recurring")
*/
@property BOOL isRecurring __attribute__((swift_name("isRecurring")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property KslackInt * _Nullable time __attribute__((swift_name("time")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersCompleteResponse.Companion")))
@interface KslackCoreRemindersCompleteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreRemindersCompleteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersDeleteResponse.Companion")))
@interface KslackCoreRemindersDeleteResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreRemindersDeleteResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersInfoResponse.Companion")))
@interface KslackCoreRemindersInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreRemindersInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRemindersListResponse.Companion")))
@interface KslackCoreRemindersListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreRemindersListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchAllResponse.Companion")))
@interface KslackCoreSearchAllResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSearchAllResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResult")))
@interface KslackCoreSearchResult : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSearchResultCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreMatchedItem *> * _Nullable matches __attribute__((swift_name("matches")));
@property KslackCoreSearchPagination * _Nullable pagination __attribute__((swift_name("pagination")));
@property KslackCorePaging * _Nullable paging __attribute__((swift_name("paging")));
@property KslackKotlinArray<NSString *> * _Nullable refinements __attribute__((swift_name("refinements")));
@property KslackInt * _Nullable total __attribute__((swift_name("total")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchAllResponse.Posts")))
@interface KslackCoreSearchAllResponsePosts : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSearchAllResponsePostsCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable matches __attribute__((swift_name("matches")));
@property KslackInt * _Nullable total __attribute__((swift_name("total")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchFilesResponse.Companion")))
@interface KslackCoreSearchFilesResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSearchFilesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchMessagesResponse.Companion")))
@interface KslackCoreSearchMessagesResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSearchMessagesResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsAddResponse.Companion")))
@interface KslackCoreStarsAddResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreStarsAddResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsListResponse.Companion")))
@interface KslackCoreStarsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreStarsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStarsRemoveResponse.Companion")))
@interface KslackCoreStarsRemoveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreStarsRemoveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCurrentStatus.Companion")))
@interface KslackCoreCurrentStatusCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCurrentStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSlackIssue.Companion")))
@interface KslackCoreSlackIssueCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSlackIssueCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNote")))
@interface KslackCoreNote : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreNoteCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable body __attribute__((swift_name("body")));
@property NSString * _Nullable dateCreated __attribute__((swift_name("dateCreated")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KslackKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamAccessLogsResponse.Companion")))
@interface KslackCoreTeamAccessLogsResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamAccessLogsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Login.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLogin")))
@interface KslackCoreLogin : KslackBase

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Login.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Login.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreLoginCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property NSString * _Nullable country __attribute__((swift_name("country")));
@property KslackInt * _Nullable dateFirst __attribute__((swift_name("dateFirst")));
@property KslackInt * _Nullable dateLast __attribute__((swift_name("dateLast")));
@property NSString * _Nullable ip __attribute__((swift_name("ip")));
@property NSString * _Nullable isp __attribute__((swift_name("isp")));
@property NSString * _Nullable region __attribute__((swift_name("region")));
@property NSString * _Nullable userAgent __attribute__((swift_name("userAgent")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamBillableInfoResponse.Companion")))
@interface KslackCoreTeamBillableInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamBillableInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBillableInfo")))
@interface KslackCoreBillableInfo : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreBillableInfoCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isBillingActive __attribute__((swift_name("isBillingActive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamBillingInfoResponse.Companion")))
@interface KslackCoreTeamBillingInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamBillingInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamExternalTeamsDisconnectResponse.Companion")))
@interface KslackCoreTeamExternalTeamsDisconnectResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamExternalTeamsDisconnectResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamExternalTeamsListResponse.Companion")))
@interface KslackCoreTeamExternalTeamsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamExternalTeamsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreExternalTeam")))
@interface KslackCoreExternalTeam : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreExternalTeamCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="connection_status")
*/
@property NSString * _Nullable connectionStatus __attribute__((swift_name("connectionStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_connected")
*/
@property KslackInt * _Nullable dateConnected __attribute__((swift_name("dateConnected")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="team_url")
*/
@property NSString * _Nullable teamUrl __attribute__((swift_name("teamUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamInfoResponse.Companion")))
@interface KslackCoreTeamInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamIntegrationLogsResponse.Companion")))
@interface KslackCoreTeamIntegrationLogsResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamIntegrationLogsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIntegrationLog")))
@interface KslackCoreIntegrationLog : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreIntegrationLogCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property NSString * _Nullable appType __attribute__((swift_name("appType")));
@property NSString * _Nullable changeType __attribute__((swift_name("changeType")));
@property NSString * _Nullable channel __attribute__((swift_name("channel")));
@property KslackInt * _Nullable date __attribute__((swift_name("date")));
@property BOOL isRssFeed __attribute__((swift_name("isRssFeed")));
@property NSString * _Nullable reason __attribute__((swift_name("reason")));
@property NSString * _Nullable resolution __attribute__((swift_name("resolution")));
@property NSString * _Nullable rssFeedChangeType __attribute__((swift_name("rssFeedChangeType")));
@property NSString * _Nullable rssFeedTitle __attribute__((swift_name("rssFeedTitle")));
@property NSString * _Nullable rssFeedUrl __attribute__((swift_name("rssFeedUrl")));
@property NSString * _Nullable scope __attribute__((swift_name("scope")));
@property NSString * _Nullable serviceId __attribute__((swift_name("serviceId")));
@property NSString * _Nullable serviceType __attribute__((swift_name("serviceType")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@property NSString * _Nullable userName __attribute__((swift_name("userName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamPreferencesListResponse.Companion")))
@interface KslackCoreTeamPreferencesListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamPreferencesListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamProfileGetResponse.Companion")))
@interface KslackCoreTeamProfileGetResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamProfileGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfiles")))
@interface KslackCoreProfiles : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreProfilesCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreProfile_ *> * _Nullable fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupUsersListResponse.Companion")))
@interface KslackCoreUsergroupUsersListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsergroupUsersListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserGroupUsersUpdateResponse.Companion")))
@interface KslackCoreUserGroupUsersUpdateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUserGroupUsersUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://api.slack.com/types/usergroup
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserGroup")))
@interface KslackCoreUserGroup : KslackBase

/**
 * https://api.slack.com/types/usergroup
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/types/usergroup
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreUserGroupCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auto_type")
*/
@property NSString * _Nullable autoType __attribute__((swift_name("autoType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="channel_count")
*/
@property (readonly) KslackInt * _Nullable channelCount __attribute__((swift_name("channelCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_by")
*/
@property NSString * _Nullable createdBy __attribute__((swift_name("createdBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_create")
*/
@property KslackInt * _Nullable dateCreate __attribute__((swift_name("dateCreate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_delete")
*/
@property KslackInt * _Nullable dateDelete __attribute__((swift_name("dateDelete")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="date_update")
*/
@property KslackInt * _Nullable dateUpdate __attribute__((swift_name("dateUpdate")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted_by")
*/
@property NSString * _Nullable deletedBy __attribute__((swift_name("deletedBy")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_subteam_id")
*/
@property NSString * _Nullable enterpriseSubteamId __attribute__((swift_name("enterpriseSubteamId")));
@property NSString * _Nullable handle __attribute__((swift_name("handle")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="auto_provision")
*/
@property BOOL isAutoProvision __attribute__((swift_name("isAutoProvision")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_external")
*/
@property BOOL isExternal __attribute__((swift_name("isExternal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_subteam")
*/
@property BOOL isSubteam __attribute__((swift_name("isSubteam")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_usergroup")
*/
@property BOOL isUsergroup __attribute__((swift_name("isUsergroup")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KslackCorePrefs * _Nullable prefs __attribute__((swift_name("prefs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="team_id")
*/
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="updated_by")
*/
@property NSString * _Nullable updatedBy __attribute__((swift_name("updatedBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_count")
*/
@property KslackInt * _Nullable userCount __attribute__((swift_name("userCount")));
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsEnableResponse.Companion")))
@interface KslackCoreUsergroupsEnableResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsergroupsEnableResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsListResponse.Companion")))
@interface KslackCoreUsergroupsListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsergroupsListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsergroupsUpdateResponse.Companion")))
@interface KslackCoreUsergroupsUpdateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsergroupsUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersConversationsResponse.Companion")))
@interface KslackCoreUsersConversationsResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersConversationsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersDeletePhotoResponse.Companion")))
@interface KslackCoreUsersDeletePhotoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersDeletePhotoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersDiscoverableContactsLookupResponse.Companion")))
@interface KslackCoreUsersDiscoverableContactsLookupResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersDiscoverableContactsLookupResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * - https://api.slack.com/types/user
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser")))
@interface KslackCoreUser : KslackBase

/**
 * - https://api.slack.com/types/user
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://api.slack.com/types/user
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreUserCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable color __attribute__((swift_name("color")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_user")
*/
@property KslackCoreEnterpriseUser * _Nullable enterpriseUser __attribute__((swift_name("enterpriseUser")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_admin")
*/
@property BOOL isAdmin __attribute__((swift_name("isAdmin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_app_user")
*/
@property BOOL isAppUser __attribute__((swift_name("isAppUser")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_bot")
*/
@property BOOL isBot __attribute__((swift_name("isBot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_connector_bot")
*/
@property (readonly) BOOL isConnectorBot __attribute__((swift_name("isConnectorBot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="deleted")
*/
@property BOOL isDeleted __attribute__((swift_name("isDeleted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_email_confirmed")
*/
@property BOOL isEmailConfirmed __attribute__((swift_name("isEmailConfirmed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_2fa")
*/
@property BOOL isHas2fa __attribute__((swift_name("isHas2fa")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="has_files")
*/
@property BOOL isHasFiles __attribute__((swift_name("isHasFiles")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_invited_user")
*/
@property BOOL isInvitedUser __attribute__((swift_name("isInvitedUser")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_owner")
*/
@property BOOL isOwner __attribute__((swift_name("isOwner")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_primary_owner")
*/
@property BOOL isPrimaryOwner __attribute__((swift_name("isPrimaryOwner")));

/**
 * is_restricted indicates the user is a multi-channel guest.
 * see also: https://get.slack.help/hc/en-us/articles/201314026-roles-and-permissions-in-slack
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_restricted")
*/
@property BOOL isRestricted __attribute__((swift_name("isRestricted")));

/**
 * is_ultra_restricted indicates they are a single channel guest.
 * see also: https://get.slack.help/hc/en-us/articles/201314026-roles-and-permissions-in-slack
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_ultra_restricted")
*/
@property BOOL isUltraRestricted __attribute__((swift_name("isUltraRestricted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_workflow_bot")
*/
@property BOOL isWorkflowBot __attribute__((swift_name("isWorkflowBot")));
@property NSString * _Nullable locale __attribute__((swift_name("locale")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable presence __attribute__((swift_name("presence")));
@property KslackCoreProfile * _Nullable profile __attribute__((swift_name("profile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="real_name")
*/
@property NSString * _Nullable realName __attribute__((swift_name("realName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="team_id")
*/
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="two_factor_type")
*/
@property NSString * _Nullable twoFactorType __attribute__((swift_name("twoFactorType")));
@property NSString * _Nullable tz __attribute__((swift_name("tz")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tz_label")
*/
@property NSString * _Nullable tzLabel __attribute__((swift_name("tzLabel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tz_offset")
*/
@property KslackInt * _Nullable tzOffset __attribute__((swift_name("tzOffset")));
@property KslackInt * _Nullable updated __attribute__((swift_name("updated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="who_can_share_contact_card")
*/
@property NSString * _Nullable whoCanShareContactCard __attribute__((swift_name("whoCanShareContactCard")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersGetPresenceResponse.Companion")))
@interface KslackCoreUsersGetPresenceResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersGetPresenceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersIdentityResponse.Companion")))
@interface KslackCoreUsersIdentityResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersIdentityResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersInfoResponse.Companion")))
@interface KslackCoreUsersInfoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersInfoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersListResponse.Companion")))
@interface KslackCoreUsersListResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersListResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersLookupByEmailResponse.Companion")))
@interface KslackCoreUsersLookupByEmailResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersLookupByEmailResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersProfileGetResponse.Companion")))
@interface KslackCoreUsersProfileGetResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersProfileGetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://api.slack.com/types/user
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfile")))
@interface KslackCoreProfile : KslackBase

/**
 * https://api.slack.com/types/user
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/types/user
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreProfileCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="api_app_id")
*/
@property NSString * _Nullable apiAppId __attribute__((swift_name("apiAppId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_hash")
*/
@property NSString * _Nullable avatarHash __attribute__((swift_name("avatarHash")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot_id")
*/
@property NSString * _Nullable botId __attribute__((swift_name("botId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name_normalized")
*/
@property NSString * _Nullable displayNameNormalized __attribute__((swift_name("displayNameNormalized")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSDictionary<NSString *, KslackCoreProfileField *> * _Nullable fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="first_name")
*/
@property NSString * _Nullable firstName __attribute__((swift_name("firstName"))) __attribute__((deprecated("")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="guest_channels")
*/
@property NSString * _Nullable guestChannels __attribute__((swift_name("guestChannels")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="guest_expiration_ts")
*/
@property KslackInt * _Nullable guestExpirationTs __attribute__((swift_name("guestExpirationTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="guest_invited_by")
*/
@property (readonly) NSString * _Nullable guestInvitedBy __attribute__((swift_name("guestInvitedBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="huddle_state")
*/
@property (readonly) NSString * _Nullable huddleState __attribute__((swift_name("huddleState")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="huddle_state_expiration_ts")
*/
@property (readonly) KslackInt * _Nullable huddleStateExpirationTs __attribute__((swift_name("huddleStateExpirationTs")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_1024")
*/
@property NSString * _Nullable image1024 __attribute__((swift_name("image1024")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_192")
*/
@property NSString * _Nullable image192 __attribute__((swift_name("image192")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_24")
*/
@property NSString * _Nullable image24 __attribute__((swift_name("image24")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_32")
*/
@property NSString * _Nullable image32 __attribute__((swift_name("image32")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_48")
*/
@property NSString * _Nullable image48 __attribute__((swift_name("image48")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_512")
*/
@property NSString * _Nullable image512 __attribute__((swift_name("image512")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_72")
*/
@property NSString * _Nullable image72 __attribute__((swift_name("image72")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_original")
*/
@property NSString * _Nullable imageOriginal __attribute__((swift_name("imageOriginal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="always_active")
*/
@property BOOL isAlwaysActive __attribute__((swift_name("isAlwaysActive")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_custom_image")
*/
@property BOOL isCustomImage __attribute__((swift_name("isCustomImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_name")
*/
@property NSString * _Nullable lastName __attribute__((swift_name("lastName"))) __attribute__((deprecated("")));
@property NSString * _Nullable phone __attribute__((swift_name("phone")));
@property NSString * _Nullable pronouns __attribute__((swift_name("pronouns")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="real_name")
*/
@property NSString * _Nullable realName __attribute__((swift_name("realName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="real_name_normalized")
*/
@property NSString * _Nullable realNameNormalized __attribute__((swift_name("realNameNormalized")));
@property NSString * _Nullable skype __attribute__((swift_name("skype")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_emoji")
*/
@property NSString * _Nullable statusEmoji __attribute__((swift_name("statusEmoji")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_emoji_display_info")
*/
@property KslackKotlinArray<KslackCoreStatusEmojiDisplayInfo *> * _Nullable statusEmojiDisplayInfo __attribute__((swift_name("statusEmojiDisplayInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_emoji_url")
*/
@property NSString * _Nullable statusEmojiUrl __attribute__((swift_name("statusEmojiUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_expiration")
*/
@property KslackInt * _Nullable statusExpiration __attribute__((swift_name("statusExpiration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_text")
*/
@property NSString * _Nullable statusText __attribute__((swift_name("statusText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_text_canonical")
*/
@property NSString * _Nullable statusTextCanonical __attribute__((swift_name("statusTextCanonical")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersProfileSetResponse.Companion")))
@interface KslackCoreUsersProfileSetResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersProfileSetResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetActiveResponse.Companion")))
@interface KslackCoreUsersSetActiveResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersSetActiveResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetPhotoResponse.Companion")))
@interface KslackCoreUsersSetPhotoResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersSetPhotoResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUsersSetPresenceResponse.Companion")))
@interface KslackCoreUsersSetPresenceResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUsersSetPresenceResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents a Slack Modal View
 *
 * @see [Modals](https://api.slack.com/block-kit/surfaces/modals)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreView")))
@interface KslackCoreView : KslackBase

/**
 * Represents a Slack Modal View
 *
 * @see [Modals](https://api.slack.com/block-kit/surfaces/modals)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Represents a Slack Modal View
 *
 * @see [Modals](https://api.slack.com/block-kit/surfaces/modals)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreViewCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property NSString * _Nullable botId __attribute__((swift_name("botId")));
@property NSString * _Nullable callbackId __attribute__((swift_name("callbackId")));
@property KslackBoolean * _Nullable clearOnClose __attribute__((swift_name("clearOnClose")));
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property (getter=hash_) NSString * _Nullable hash __attribute__((swift_name("hash")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KslackBoolean * _Nullable notifyOnClose __attribute__((swift_name("notifyOnClose")));
@property NSString * _Nullable previousViewId __attribute__((swift_name("previousViewId")));
@property NSString * _Nullable privateMetadata __attribute__((swift_name("privateMetadata")));
@property NSString * _Nullable rootViewId __attribute__((swift_name("rootViewId")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsOpenResponse.Companion")))
@interface KslackCoreViewsOpenResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreViewsOpenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsPublishResponse.Companion")))
@interface KslackCoreViewsPublishResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreViewsPublishResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsPushResponse.Companion")))
@interface KslackCoreViewsPushResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreViewsPushResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreViewsUpdateResponse.Companion")))
@interface KslackCoreViewsUpdateResponseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreViewsUpdateResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpParameter.Type_")))
@interface KslackKhttpclientHttpParameterType : KslackKotlinEnum<KslackKhttpclientHttpParameterType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KslackKhttpclientHttpParameterType *query __attribute__((swift_name("query")));
@property (class, readonly) KslackKhttpclientHttpParameterType *param __attribute__((swift_name("param")));
@property (class, readonly) KslackKhttpclientHttpParameterType *file __attribute__((swift_name("file")));
@property (class, readonly) KslackKhttpclientHttpParameterType *json __attribute__((swift_name("json")));
+ (KslackKotlinArray<KslackKhttpclientHttpParameterType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KslackKhttpclientHttpParameterType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpParameter.Companion")))
@interface KslackKhttpclientHttpParameterCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackKhttpclientHttpParameterCompanion *shared __attribute__((swift_name("shared")));
- (KslackKhttpclientHttpParameter *)fileKey:(NSString *)key fileName:(NSString *)fileName fileBody:(KslackKotlinByteArray *)fileBody __attribute__((swift_name("file(key:fileName:fileBody:)")));
- (KslackKhttpclientHttpParameter *)jsonJson:(NSString *)json __attribute__((swift_name("json(json:)")));
- (KslackKhttpclientHttpParameter *)paramKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("param(key:value:)")));
- (KslackKhttpclientHttpParameter *)queryKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("query(key:value:)")));
@end


/**
 * Represents a header value that consist of [content] followed by [parameters].
 * Useful for headers such as `Content-Type`, `Content-Disposition` and so on.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters)
 *
 * @property content header's content without parameters
 * @property parameters
 */
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KslackKtor_httpHeaderValueWithParameters : KslackBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KslackKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KslackKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));

/**
 * The first value for the parameter with [name] comparing case-insensitively or `null` if no such parameters found
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.parameter)
 */
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KslackKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end


/**
 * Represents a value for a `Content-Type` header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType)
 *
 * @property contentType represents a type part of the media type.
 * @property contentSubtype represents a subtype part of the media type.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KslackKtor_httpContentType : KslackKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KslackKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KslackKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 * The `this` type must be a more specific type than the [pattern] type. In other words:
 *
 * ```kotlin
 * ContentType("a", "b").match(ContentType("a", "b").withParameter("foo", "bar")) === false
 * ContentType("a", "b").withParameter("foo", "bar").match(ContentType("a", "b")) === true
 * ContentType("a", "*").match(ContentType("a", "b")) === false
 * ContentType("a", "b").match(ContentType("a", "*")) === true
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern:(KslackKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));

/**
 * Creates a copy of `this` type with the added parameter with the [name] and [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withParameter)
 */
- (KslackKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));

/**
 * Creates a copy of `this` type without any parameters
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withoutParameters)
 */
- (KslackKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KslackKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KslackKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KslackKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KslackKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KslackKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KslackKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KslackKotlinx_serialization_coreKSerializer <KslackKotlinx_serialization_coreSerializationStrategy, KslackKotlinx_serialization_coreDeserializationStrategy>
@required
@end


/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/admin/AppRequest.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppRequest.Companion")))
@interface KslackCoreAppRequestCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/admin/AppRequest.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAppRequestCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/admin/AppRequest.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApp")))
@interface KslackCoreApp : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreAppCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additional_info")
*/
@property NSString * _Nullable additionalInfo __attribute__((swift_name("additionalInfo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="app_directory_url")
*/
@property NSString * _Nullable appDirectoryUrl __attribute__((swift_name("appDirectoryUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="app_homepage_url")
*/
@property NSString * _Nullable appHomepageUrl __attribute__((swift_name("appHomepageUrl")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="help_url")
*/
@property NSString * _Nullable helpUrl __attribute__((swift_name("helpUrl")));
@property KslackCoreAppIcons * _Nullable icons __attribute__((swift_name("icons")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_app_directory_approved")
*/
@property BOOL isAppDirectoryApproved __attribute__((swift_name("isAppDirectoryApproved")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_internal")
*/
@property BOOL isInternal __attribute__((swift_name("isInternal")));
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="privacy_policy_url")
*/
@property NSString * _Nullable privacyPolicyUrl __attribute__((swift_name("privacyPolicyUrl")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePreviousResolution")))
@interface KslackCorePreviousResolution : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCorePreviousResolutionCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreScope *> * _Nullable scopes __attribute__((swift_name("scopes")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScope")))
@interface KslackCoreScope : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreScopeCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_sensitive")
*/
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeam_")))
@interface KslackCoreTeam_ : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreTeam_Companion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable domain __attribute__((swift_name("domain")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser_")))
@interface KslackCoreUser_ : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreUser_Companion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * An attribute included within the response of the newest Slack APIs which contains a `next_cursor`
 * value.  By using this value as a cursor parameter in a subsequent request, along with limit, you may
 * navigate through the collection page by virtual page.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseMetadata.Companion")))
@interface KslackCoreResponseMetadataCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * An attribute included within the response of the newest Slack APIs which contains a `next_cursor`
 * value.  By using this value as a cursor parameter in a subsequent request, along with limit, you may
 * navigate through the collection page by virtual page.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreResponseMetadataCompanion *shared __attribute__((swift_name("shared")));

/**
 * An attribute included within the response of the newest Slack APIs which contains a `next_cursor`
 * value.  By using this value as a cursor parameter in a subsequent request, along with limit, you may
 * navigate through the collection page by virtual page.
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseMetadata_.Companion")))
@interface KslackCoreResponseMetadata_Companion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreResponseMetadata_Companion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreArgs.Companion")))
@interface KslackCoreArgsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreArgsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeam.Companion")))
@interface KslackCoreTeamCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamIcon")))
@interface KslackCoreTeamIcon : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreTeamIconCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_102")
*/
@property NSString * _Nullable image102 __attribute__((swift_name("image102")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_132")
*/
@property NSString * _Nullable image132 __attribute__((swift_name("image132")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_230")
*/
@property NSString * _Nullable image230 __attribute__((swift_name("image230")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_34")
*/
@property NSString * _Nullable image34 __attribute__((swift_name("image34")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_44")
*/
@property NSString * _Nullable image44 __attribute__((swift_name("image44")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_68")
*/
@property NSString * _Nullable image68 __attribute__((swift_name("image68")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_88")
*/
@property NSString * _Nullable image88 __attribute__((swift_name("image88")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_original")
*/
@property NSString * _Nullable imageOriginal __attribute__((swift_name("imageOriginal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_image_default")
*/
@property BOOL isImageDefault __attribute__((swift_name("isImageDefault")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmark.Companion")))
@interface KslackCoreBookmarkCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBookmarkCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBot.Companion")))
@interface KslackCoreBotCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBotCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotIcons")))
@interface KslackCoreBotIcons : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreBotIconsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_36")
*/
@property NSString * _Nullable image36 __attribute__((swift_name("image36")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_48")
*/
@property NSString * _Nullable image48 __attribute__((swift_name("image48")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_72")
*/
@property NSString * _Nullable image72 __attribute__((swift_name("image72")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCall.Companion")))
@interface KslackCoreCallCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallParticipant")))
@interface KslackCoreCallParticipant : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreCallParticipantCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_url")
*/
@property NSString * _Nullable avatarUrl __attribute__((swift_name("avatarUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="external_id")
*/
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="slack_id")
*/
@property NSString * _Nullable slackId __attribute__((swift_name("slackId")));
@end


/**
 * https://api.slack.com/docs/message-attachments
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachment.Companion")))
@interface KslackCoreAttachmentCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/docs/message-attachments
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAttachmentCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/docs/message-attachments
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAction")))
@interface KslackCoreAction : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreActionCompanion *companion __attribute__((swift_name("companion")));
@property KslackCoreConfirmation * _Nullable confirm __attribute__((swift_name("confirm")));
@property NSString * _Nullable dataSource __attribute__((swift_name("dataSource")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KslackInt * _Nullable minQueryLength __attribute__((swift_name("minQueryLength")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KslackKotlinArray<KslackCoreActionOptionGroup *> * _Nullable optionGroups __attribute__((swift_name("optionGroups")));
@property KslackKotlinArray<KslackCoreOption *> * _Nullable options __attribute__((swift_name("options")));
@property KslackKotlinArray<KslackCoreOption *> * _Nullable selectedOptions __attribute__((swift_name("selectedOptions")));
@property NSString * _Nullable style __attribute__((swift_name("style")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property KslackCoreType * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * https://api.slack.com/docs/message-attachments
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField")))
@interface KslackCoreField : KslackBase

/**
 * https://api.slack.com/docs/message-attachments
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://api.slack.com/docs/message-attachments
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFieldCompanion *companion __attribute__((swift_name("companion")));

/**
 * An optional flag indicating whether the value is short enough to be displayed side-by-side with other values.
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="short")
*/
@property BOOL isValueShortEnough __attribute__((swift_name("isValueShortEnough")));

/**
 * Shown as a bold heading above the value text. It cannot contain markup and will be escaped for you.
 */
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * The text value of the field. It may contain standard message markup (see details below) and must be escaped as normal. May be multi-line.
 * https://api.slack.com/docs/message-attachments#message_formatting
 */
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachmentMetadata")))
@interface KslackCoreAttachmentMetadata : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreAttachmentMetadataCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable extension __attribute__((swift_name("extension")));
@property NSString * _Nullable format __attribute__((swift_name("format")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_h")
*/
@property KslackInt * _Nullable originalHeight __attribute__((swift_name("originalHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_w")
*/
@property KslackInt * _Nullable originalWidth __attribute__((swift_name("originalWidth")));
@property KslackInt * _Nullable rotation __attribute__((swift_name("rotation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160")
*/
@property KslackBoolean * _Nullable thumb160 __attribute__((swift_name("thumb160")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_h")
*/
@property KslackInt * _Nullable thumb360Height __attribute__((swift_name("thumb360Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_w")
*/
@property KslackInt * _Nullable thumb360Width __attribute__((swift_name("thumb360Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64")
*/
@property KslackBoolean * _Nullable thumb64 __attribute__((swift_name("thumb64")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80")
*/
@property KslackBoolean * _Nullable thumb80 __attribute__((swift_name("thumb80")));
@property NSString * _Nullable thumbTiny __attribute__((swift_name("thumbTiny")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KslackKotlinx_serialization_jsonJsonElementCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessage.Companion")))
@interface KslackCoreMessageCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotProfile")))
@interface KslackCoreBotProfile : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreBotProfileCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property KslackCoreBotIcons * _Nullable icons __attribute__((swift_name("icons")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property KslackInt * _Nullable updated __attribute__((swift_name("updated")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageItem_")))
@interface KslackCoreMessageItem_ : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMessageItem_Companion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property NSString * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable editLink __attribute__((swift_name("editLink")));
@property NSString * _Nullable externalType __attribute__((swift_name("externalType")));
@property NSString * _Nullable filetype __attribute__((swift_name("filetype")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property BOOL isDisplayAsBot __attribute__((swift_name("isDisplayAsBot")));
@property BOOL isEditable __attribute__((swift_name("isEditable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_external")
*/
@property BOOL isExternal __attribute__((swift_name("isExternal")));
@property BOOL isHasRichPreview __attribute__((swift_name("isHasRichPreview")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_intro")
*/
@property BOOL isIntro __attribute__((swift_name("isIntro")));
@property BOOL isPermalinkPublic __attribute__((swift_name("isPermalinkPublic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="preview_is_truncated")
*/
@property BOOL isPreviewTruncated __attribute__((swift_name("isPreviewTruncated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_public")
*/
@property BOOL isPublic __attribute__((swift_name("isPublic")));
@property BOOL isPublicUrlShared __attribute__((swift_name("isPublicUrlShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_starred")
*/
@property BOOL isStarred __attribute__((swift_name("isStarred")));
@property BOOL isUrlPrivateDownload __attribute__((swift_name("isUrlPrivateDownload")));
@property KslackInt * _Nullable lines __attribute__((swift_name("lines")));
@property KslackInt * _Nullable linesMore __attribute__((swift_name("linesMore")));
@property NSString * _Nullable mimetype __attribute__((swift_name("mimetype")));
@property NSString * _Nullable mode __attribute__((swift_name("mode")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable permalink __attribute__((swift_name("permalink")));
@property NSString * _Nullable prettyType __attribute__((swift_name("prettyType")));
@property NSString * _Nullable preview __attribute__((swift_name("preview")));
@property NSString * _Nullable previewHighlight __attribute__((swift_name("previewHighlight")));
@property KslackInt * _Nullable size __attribute__((swift_name("size")));
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable urlPrivate __attribute__((swift_name("urlPrivate")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageEdited")))
@interface KslackCoreMessageEdited : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMessageEditedCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageIcons")))
@interface KslackCoreMessageIcons : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMessageIconsCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable emoji __attribute__((swift_name("emoji")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_36")
*/
@property NSString * _Nullable image36 __attribute__((swift_name("image36")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_48")
*/
@property NSString * _Nullable image48 __attribute__((swift_name("image48")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_64")
*/
@property NSString * _Nullable image64 __attribute__((swift_name("image64")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_72")
*/
@property NSString * _Nullable image72 __attribute__((swift_name("image72")));
@end


/**
 * - https://api.slack.com/methods/reactions.get
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Reaction.java#L17
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReaction")))
@interface KslackCoreReaction : KslackBase

/**
 * - https://api.slack.com/methods/reactions.get
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Reaction.java#L17
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://api.slack.com/methods/reactions.get
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Reaction.java#L17
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreReactionCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable count __attribute__((swift_name("count")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@property KslackKotlinArray<NSString *> * _Nullable users __attribute__((swift_name("users")));
@end


/**
 * The root message information of a "thread_broadcast" message.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageRoot")))
@interface KslackCoreMessageRoot : KslackBase

/**
 * The root message information of a "thread_broadcast" message.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * The root message information of a "thread_broadcast" message.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMessageRootCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable botId __attribute__((swift_name("botId")));
@property BOOL isMrkdwn __attribute__((swift_name("isMrkdwn")));
@property BOOL isSubscribed __attribute__((swift_name("isSubscribed")));
@property NSString * _Nullable lastRead __attribute__((swift_name("lastRead")));
@property NSString * _Nullable latestReply __attribute__((swift_name("latestReply")));
@property KslackInt * _Nullable replyCount __attribute__((swift_name("replyCount")));
@property KslackKotlinArray<NSString *> * _Nullable replyUsers __attribute__((swift_name("replyUsers")));
@property KslackInt * _Nullable replyUsersCount __attribute__((swift_name("replyUsersCount")));
@property NSString * _Nullable subtype __attribute__((swift_name("subtype")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property KslackInt * _Nullable unreadCount __attribute__((swift_name("unreadCount")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledMessage.Companion")))
@interface KslackCoreScheduledMessageCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreScheduledMessageCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents a [conversation](https://api.slack.com/types/conversation)
 * as used with the `conversations` API
 *
 * @see "https://api.slack.com/docs/conversations-api"
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation.Companion")))
@interface KslackCoreConversationCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a [conversation](https://api.slack.com/types/conversation)
 * as used with the `conversations` API
 *
 * @see "https://api.slack.com/docs/conversations-api"
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents a [conversation](https://api.slack.com/types/conversation)
 * as used with the `conversations` API
 *
 * @see "https://api.slack.com/docs/conversations-api"
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLatest")))
@interface KslackCoreLatest : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreLatestCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="app_id")
*/
@property NSString * _Nullable appId __attribute__((swift_name("appId")));
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot_id")
*/
@property NSString * _Nullable botId __attribute__((swift_name("botId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot_link")
*/
@property NSString * _Nullable botLink __attribute__((swift_name("botLink")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot_profile")
*/
@property KslackCoreBotProfile * _Nullable botProfile __attribute__((swift_name("botProfile")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_msg_id")
*/
@property NSString * _Nullable clientMsgId __attribute__((swift_name("clientMsgId")));
@property KslackCoreEdited * _Nullable edited __attribute__((swift_name("edited")));
@property KslackKotlinArray<KslackCoreFile *> * _Nullable files __attribute__((swift_name("files")));
@property KslackCoreMessageIcons * _Nullable icons __attribute__((swift_name("icons")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_as_bot")
*/
@property BOOL isDisplayAsBot __attribute__((swift_name("isDisplayAsBot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="upload")
*/
@property BOOL isUpload __attribute__((swift_name("isUpload")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_user_id")
*/
@property NSString * _Nullable parentUserId __attribute__((swift_name("parentUserId")));
@property KslackKotlinArray<KslackCoreReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property KslackCoreMessageRoot * _Nullable root __attribute__((swift_name("root")));
@property NSString * _Nullable subtype __attribute__((swift_name("subtype")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thread_ts")
*/
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));
@property NSString * _Nullable topic __attribute__((swift_name("topic")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable username __attribute__((swift_name("username")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x_files")
*/
@property KslackKotlinArray<NSString *> * _Nullable xFiles __attribute__((swift_name("xFiles")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Purpose.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePurpose")))
@interface KslackCorePurpose : KslackBase

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Purpose.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Purpose.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCorePurposeCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable creator __attribute__((swift_name("creator")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_set")
*/
@property KslackInt * _Nullable lastSet __attribute__((swift_name("lastSet")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Topic.java#L6
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTopic")))
@interface KslackCoreTopic : KslackBase

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Topic.java#L6
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Topic.java#L6
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreTopicCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable creator __attribute__((swift_name("creator")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_set")
*/
@property KslackInt * _Nullable lastSet __attribute__((swift_name("lastSet")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreError.Companion")))
@interface KslackCoreErrorCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KslackKotlinEnumCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Represents a type of conversation such as a public channel or IM.
 *
 * @see [Conversations.list API](https://api.slack.com/methods/conversations.list)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversationType.Companion")))
@interface KslackCoreConversationTypeCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a type of conversation such as a public channel or IM.
 *
 * @see [Conversations.list API](https://api.slack.com/methods/conversations.list)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConversationTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents a type of conversation such as a public channel or IM.
 *
 * @see [Conversations.list API](https://api.slack.com/methods/conversations.list)
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Represents a type of conversation such as a public channel or IM.
 *
 * @see [Conversations.list API](https://api.slack.com/methods/conversations.list)
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(KslackKotlinArray<id<KslackKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharedInvite.Companion")))
@interface KslackCoreSharedInviteCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSharedInviteCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharedInviteChannel")))
@interface KslackCoreSharedInviteChannel : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSharedInviteChannelCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_private")
*/
@property KslackBoolean * _Nullable isPrivate __attribute__((swift_name("isPrivate")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharedInvitePayload")))
@interface KslackCoreSharedInvitePayload : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSharedInvitePayloadCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recipient_email")
*/
@property NSString * _Nullable recipientEmail __attribute__((swift_name("recipientEmail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="recipient_user_id")
*/
@property NSString * _Nullable recipientUserId __attribute__((swift_name("recipientUserId")));
@end


/**
 * Represents a Slack Modal Dialog
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialog.Companion")))
@interface KslackCoreDialogCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a Slack Modal Dialog
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDialogCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents a Slack Modal Dialog
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A dialog Form DialogElement such as `text`, `textarea`, or `select`
 * or `select`.
 *
 * @see [Slack Modal Dialog](https://api.slack.com/dialogs)
 */
__attribute__((swift_name("CoreDialogElement")))
@protocol KslackCoreDialogElement
@required
@property BOOL isOptional __attribute__((swift_name("isOptional")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDialogResponseMetadata.Companion")))
@interface KslackCoreDialogResponseMetadataCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDialogResponseMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDndTeamMemberInfo.Companion")))
@interface KslackCoreDndTeamMemberInfoCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreDndTeamMemberInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://api.slack.com/types/file
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFile.Companion")))
@interface KslackCoreFileCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/types/file
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFileCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/types/file
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileAddress")))
@interface KslackCoreFileAddress : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFileAddressCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable address __attribute__((swift_name("address")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable original __attribute__((swift_name("original")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilePinnedInfo")))
@interface KslackCoreFilePinnedInfo : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFilePinnedInfoCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable pinnedBy __attribute__((swift_name("pinnedBy")));
@property KslackInt * _Nullable pinnedTs __attribute__((swift_name("pinnedTs")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileShares")))
@interface KslackCoreFileShares : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFileSharesCompanion *companion __attribute__((swift_name("companion")));

/** The key of the Map: channel ID
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="private")
*/
@property NSDictionary<NSString *, KslackKotlinArray<KslackCoreFileShareDetail *> *> * _Nullable privateChannels __attribute__((swift_name("privateChannels")));

/** The key of the Map: channel ID
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="public")
*/
@property NSDictionary<NSString *, KslackKotlinArray<KslackCoreFileShareDetail *> *> * _Nullable publicChannels __attribute__((swift_name("publicChannels")));
@end


/**
 * https://api.slack.com/methods/files.comments.add
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileComment.Companion")))
@interface KslackCoreFileCommentCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/methods/files.comments.add
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFileCommentCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/methods/files.comments.add
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Paging.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePaging.Companion")))
@interface KslackCorePagingCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Paging.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePagingCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Paging.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KslackKotlinByteIterator : KslackBase <KslackKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KslackByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAuthorizingUser.Companion")))
@interface KslackCoreOAuthAuthorizingUserCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthAuthorizingUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthBot.Companion")))
@interface KslackCoreOAuthBotCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthBotCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthIncomingWebhook.Companion")))
@interface KslackCoreOAuthIncomingWebhookCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthIncomingWebhookCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthInstallerUser.Companion")))
@interface KslackCoreOAuthInstallerUserCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthInstallerUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthScopes.Companion")))
@interface KslackCoreOAuthScopesCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthScopesCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAuthedUser.Companion")))
@interface KslackCoreOAuthAuthedUserCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthAuthedUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthEnterprise.Companion")))
@interface KslackCoreOAuthEnterpriseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthEnterpriseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthTeam.Companion")))
@interface KslackCoreOAuthTeamCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthTeamCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeAuthedUser.Companion")))
@interface KslackCoreOAuthV2ExchangeAuthedUserCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthV2ExchangeAuthedUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeEnterprise.Companion")))
@interface KslackCoreOAuthV2ExchangeEnterpriseCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthV2ExchangeEnterpriseCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthV2ExchangeTeam.Companion")))
@interface KslackCoreOAuthV2ExchangeTeamCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOAuthV2ExchangeTeamCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageItem.Companion")))
@interface KslackCoreMessageItemCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMessageItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreItem.Companion")))
@interface KslackCoreItemCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreComment")))
@interface KslackCoreComment : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreCommentCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property KslackInt * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_intro")
*/
@property BOOL isIntro __attribute__((swift_name("isIntro")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_starred")
*/
@property BOOL isStarred __attribute__((swift_name("isStarred")));
@property KslackInt * _Nullable numStars __attribute__((swift_name("numStars")));
@property KslackInt * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * - https://api.slack.com/methods/reminders.add
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReminder.Companion")))
@interface KslackCoreReminderCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://api.slack.com/methods/reminders.add
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreReminderCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://api.slack.com/methods/reminders.add
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchResult.Companion")))
@interface KslackCoreSearchResultCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSearchResultCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMatchedItem")))
@interface KslackCoreMatchedItem : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreMatchedItemCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable botId __attribute__((swift_name("botId")));
@property KslackKotlinArray<KslackCoreAddress *> * _Nullable cc __attribute__((swift_name("cc")));
@property KslackCoreChannel * _Nullable channel __attribute__((swift_name("channel")));
@property KslackInt * _Nullable channelActionsCount __attribute__((swift_name("channelActionsCount")));
@property NSString * _Nullable channelActionsTs __attribute__((swift_name("channelActionsTs")));
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property NSString * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable deanimateGif __attribute__((swift_name("deanimateGif")));
@property NSString * _Nullable editLink __attribute__((swift_name("editLink")));
@property NSString * _Nullable externalId __attribute__((swift_name("externalId")));
@property NSString * _Nullable externalType __attribute__((swift_name("externalType")));
@property NSString * _Nullable externalUrl __attribute__((swift_name("externalUrl")));
@property NSString * _Nullable fileId __attribute__((swift_name("fileId")));
@property NSString * _Nullable filetype __attribute__((swift_name("filetype")));
@property KslackKotlinArray<KslackCoreAddress *> * _Nullable from __attribute__((swift_name("from")));
@property KslackKotlinArray<NSString *> * _Nullable groups __attribute__((swift_name("groups")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable iid __attribute__((swift_name("iid")));
@property KslackInt * _Nullable imageExifRotation __attribute__((swift_name("imageExifRotation")));
@property KslackKotlinArray<NSString *> * _Nullable ims __attribute__((swift_name("ims")));
@property BOOL isDisplayAsBot __attribute__((swift_name("isDisplayAsBot")));
@property BOOL isEditable __attribute__((swift_name("isEditable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_external")
*/
@property BOOL isExternal __attribute__((swift_name("isExternal")));
@property BOOL isHasMore __attribute__((swift_name("isHasMore")));
@property BOOL isHasRichPreview __attribute__((swift_name("isHasRichPreview")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_mpim")
*/
@property BOOL isMpim __attribute__((swift_name("isMpim")));
@property BOOL isPermalinkPublic __attribute__((swift_name("isPermalinkPublic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="preview_is_truncated")
*/
@property BOOL isPreviewTruncated __attribute__((swift_name("isPreviewTruncated")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_public")
*/
@property BOOL isPublic __attribute__((swift_name("isPublic")));
@property BOOL isPublicUrlShared __attribute__((swift_name("isPublicUrlShared")));
@property BOOL isSentToSelf __attribute__((swift_name("isSentToSelf")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_starred")
*/
@property BOOL isStarred __attribute__((swift_name("isStarred")));
@property BOOL isTopFile __attribute__((swift_name("isTopFile")));
@property BOOL isUrlPrivateDownload __attribute__((swift_name("isUrlPrivateDownload")));
@property KslackInt * _Nullable lines __attribute__((swift_name("lines")));
@property KslackInt * _Nullable linesMore __attribute__((swift_name("linesMore")));
@property NSString * _Nullable mimetype __attribute__((swift_name("mimetype")));
@property NSString * _Nullable mode __attribute__((swift_name("mode")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property KslackCoreOtherItem * _Nullable next __attribute__((swift_name("next")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="next_2")
*/
@property KslackCoreOtherItem * _Nullable next2 __attribute__((swift_name("next2")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_h")
*/
@property NSString * _Nullable originalHeight __attribute__((swift_name("originalHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="original_w")
*/
@property NSString * _Nullable originalWidth __attribute__((swift_name("originalWidth")));
@property NSString * _Nullable permalink __attribute__((swift_name("permalink")));
@property NSString * _Nullable plainText __attribute__((swift_name("plainText")));
@property NSString * _Nullable prettyType __attribute__((swift_name("prettyType")));
@property NSString * _Nullable preview __attribute__((swift_name("preview")));
@property NSString * _Nullable previewHighlight __attribute__((swift_name("previewHighlight")));
@property NSString * _Nullable previewPlainText __attribute__((swift_name("previewPlainText")));
@property KslackCoreOtherItem * _Nullable previous __attribute__((swift_name("previous")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="previous_2")
*/
@property KslackCoreOtherItem * _Nullable previous2 __attribute__((swift_name("previous2")));
@property NSString * _Nullable score __attribute__((swift_name("score")));
@property KslackInt * _Nullable size __attribute__((swift_name("size")));
@property NSString * _Nullable subject __attribute__((swift_name("subject")));
@property NSString * _Nullable team __attribute__((swift_name("team")));
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024")
*/
@property NSString * _Nullable thumb1024 __attribute__((swift_name("thumb1024")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024_gif")
*/
@property NSString * _Nullable thumb1024Gif __attribute__((swift_name("thumb1024Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024_h")
*/
@property NSString * _Nullable thumb1024Height __attribute__((swift_name("thumb1024Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_1024_w")
*/
@property NSString * _Nullable thumb1024Width __attribute__((swift_name("thumb1024Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160")
*/
@property NSString * _Nullable thumb160 __attribute__((swift_name("thumb160")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160_gif")
*/
@property NSString * _Nullable thumb160Gif __attribute__((swift_name("thumb160Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160_h")
*/
@property NSString * _Nullable thumb160Height __attribute__((swift_name("thumb160Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_160_w")
*/
@property NSString * _Nullable thumb160Width __attribute__((swift_name("thumb160Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360")
*/
@property NSString * _Nullable thumb360 __attribute__((swift_name("thumb360")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_gif")
*/
@property NSString * _Nullable thumb360Gif __attribute__((swift_name("thumb360Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_h")
*/
@property NSString * _Nullable thumb360Height __attribute__((swift_name("thumb360Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_360_w")
*/
@property NSString * _Nullable thumb360Width __attribute__((swift_name("thumb360Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480")
*/
@property NSString * _Nullable thumb480 __attribute__((swift_name("thumb480")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480_gif")
*/
@property NSString * _Nullable thumb480Gif __attribute__((swift_name("thumb480Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480_h")
*/
@property NSString * _Nullable thumb480Height __attribute__((swift_name("thumb480Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_480_w")
*/
@property NSString * _Nullable thumb480Width __attribute__((swift_name("thumb480Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64")
*/
@property NSString * _Nullable thumb64 __attribute__((swift_name("thumb64")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64_gif")
*/
@property NSString * _Nullable thumb64Gif __attribute__((swift_name("thumb64Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64_h")
*/
@property NSString * _Nullable thumb64Height __attribute__((swift_name("thumb64Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_64_w")
*/
@property NSString * _Nullable thumb64Width __attribute__((swift_name("thumb64Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720")
*/
@property NSString * _Nullable thumb720 __attribute__((swift_name("thumb720")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720_gif")
*/
@property NSString * _Nullable thumb720Gif __attribute__((swift_name("thumb720Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720_h")
*/
@property NSString * _Nullable thumb720Height __attribute__((swift_name("thumb720Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_720_w")
*/
@property NSString * _Nullable thumb720Width __attribute__((swift_name("thumb720Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80")
*/
@property NSString * _Nullable thumb80 __attribute__((swift_name("thumb80")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800")
*/
@property NSString * _Nullable thumb800 __attribute__((swift_name("thumb800")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800_gif")
*/
@property NSString * _Nullable thumb800Gif __attribute__((swift_name("thumb800Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800_h")
*/
@property NSString * _Nullable thumb800Height __attribute__((swift_name("thumb800Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_800_w")
*/
@property NSString * _Nullable thumb800Width __attribute__((swift_name("thumb800Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80_gif")
*/
@property NSString * _Nullable thumb80Gif __attribute__((swift_name("thumb80Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80_h")
*/
@property NSString * _Nullable thumb80Height __attribute__((swift_name("thumb80Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_80_w")
*/
@property NSString * _Nullable thumb80Width __attribute__((swift_name("thumb80Width")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960")
*/
@property NSString * _Nullable thumb960 __attribute__((swift_name("thumb960")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960_gif")
*/
@property NSString * _Nullable thumb960Gif __attribute__((swift_name("thumb960Gif")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960_h")
*/
@property NSString * _Nullable thumb960Height __attribute__((swift_name("thumb960Height")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_960_w")
*/
@property NSString * _Nullable thumb960Width __attribute__((swift_name("thumb960Width")));
@property NSString * _Nullable thumbPdf __attribute__((swift_name("thumbPdf")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_pdf_h")
*/
@property NSString * _Nullable thumbPdfHeight __attribute__((swift_name("thumbPdfHeight")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumb_pdf_w")
*/
@property NSString * _Nullable thumbPdfWidth __attribute__((swift_name("thumbPdfWidth")));
@property NSString * _Nullable thumbTiny __attribute__((swift_name("thumbTiny")));
@property NSString * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property KslackKotlinArray<KslackCoreAddress *> * _Nullable to __attribute__((swift_name("to")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable urlPrivate __attribute__((swift_name("urlPrivate")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchPagination")))
@interface KslackCoreSearchPagination : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreSearchPaginationCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable first __attribute__((swift_name("first")));
@property KslackInt * _Nullable last __attribute__((swift_name("last")));
@property KslackInt * _Nullable page __attribute__((swift_name("page")));
@property KslackInt * _Nullable pageCount __attribute__((swift_name("pageCount")));
@property KslackInt * _Nullable perPage __attribute__((swift_name("perPage")));
@property KslackInt * _Nullable totalCount __attribute__((swift_name("totalCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchAllResponse.PostsCompanion")))
@interface KslackCoreSearchAllResponsePostsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSearchAllResponsePostsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNote.Companion")))
@interface KslackCoreNoteCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreNoteCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Login.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLogin.Companion")))
@interface KslackCoreLoginCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Login.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreLoginCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Login.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBillableInfo.Companion")))
@interface KslackCoreBillableInfoCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBillableInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreExternalTeam.Companion")))
@interface KslackCoreExternalTeamCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreExternalTeamCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreIntegrationLog.Companion")))
@interface KslackCoreIntegrationLogCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreIntegrationLogCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfiles.Companion")))
@interface KslackCoreProfilesCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreProfilesCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfile_")))
@interface KslackCoreProfile_ : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreProfile_Companion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="field_name")
*/
@property NSString * _Nullable fieldName __attribute__((swift_name("fieldName")));
@property NSString * _Nullable hint __attribute__((swift_name("hint")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_inverse")
*/
@property KslackBoolean * _Nullable inverse __attribute__((swift_name("inverse")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_hidden")
*/
@property BOOL isHidden __attribute__((swift_name("isHidden")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property KslackCoreProfileOptions * _Nullable options __attribute__((swift_name("options")));
@property KslackInt * _Nullable ordering __attribute__((swift_name("ordering")));
@property KslackCoreProfilePermissions * _Nullable permissions __attribute__((swift_name("permissions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="possible_values")
*/
@property KslackKotlinArray<NSString *> * _Nullable possibleValues __attribute__((swift_name("possibleValues")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="section_id")
*/
@property NSString * _Nullable sectionId __attribute__((swift_name("sectionId")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end


/**
 * https://api.slack.com/types/usergroup
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUserGroup.Companion")))
@interface KslackCoreUserGroupCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/types/usergroup
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUserGroupCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/types/usergroup
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePrefs")))
@interface KslackCorePrefs : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCorePrefsCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable channels __attribute__((swift_name("channels")));
@property KslackKotlinArray<NSString *> * _Nullable groups __attribute__((swift_name("groups")));
@end


/**
 * - https://api.slack.com/types/user
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser.Companion")))
@interface KslackCoreUserCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://api.slack.com/types/user
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUserCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://api.slack.com/types/user
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEnterpriseUser")))
@interface KslackCoreEnterpriseUser : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreEnterpriseUserCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_id")
*/
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enterprise_name")
*/
@property NSString * _Nullable enterpriseName __attribute__((swift_name("enterpriseName")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_admin")
*/
@property BOOL isAdmin __attribute__((swift_name("isAdmin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_owner")
*/
@property BOOL isOwner __attribute__((swift_name("isOwner")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_primary_owner")
*/
@property BOOL primaryOwner __attribute__((swift_name("primaryOwner")));
@property KslackKotlinArray<NSString *> * _Nullable teams __attribute__((swift_name("teams")));
@end


/**
 * https://api.slack.com/types/user
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfile.Companion")))
@interface KslackCoreProfileCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/types/user
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreProfileCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/types/user
 * https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/User.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileField")))
@interface KslackCoreProfileField : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreProfileFieldCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable alt __attribute__((swift_name("alt")));
@property NSString * _Nullable label __attribute__((swift_name("label")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusEmojiDisplayInfo")))
@interface KslackCoreStatusEmojiDisplayInfo : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreStatusEmojiDisplayInfoCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_alias")
*/
@property (readonly) NSString * _Nullable displayAlias __attribute__((swift_name("displayAlias")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_url")
*/
@property (readonly) NSString * _Nullable displayUrl __attribute__((swift_name("displayUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emoji_name")
*/
@property (readonly) NSString * _Nullable emojiName __attribute__((swift_name("emojiName")));
@property (readonly) NSString * _Nullable unicode __attribute__((swift_name("unicode")));
@end


/**
 * Represents a Slack Modal View
 *
 * @see [Modals](https://api.slack.com/block-kit/surfaces/modals)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreView.Companion")))
@interface KslackCoreViewCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents a Slack Modal View
 *
 * @see [Modals](https://api.slack.com/block-kit/surfaces/modals)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreViewCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents a Slack Modal View
 *
 * @see [Modals](https://api.slack.com/block-kit/surfaces/modals)
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KslackKtor_httpHeaderValueParam : KslackBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (KslackKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KslackKtor_httpHeaderValueWithParametersCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse header with parameter and pass it to [init] function to instantiate particular type
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.Companion.parse)
 */
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KslackKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KslackKtor_httpContentTypeCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parses a string representing a `Content-Type` header into a [ContentType] instance.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.parse)
 */
- (KslackKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));

/**
 * Represents a pattern `* / *` to match any content type.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.Any)
 */
@property (readonly) KslackKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KslackKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KslackKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KslackKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KslackKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KslackKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KslackKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KslackKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KslackKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KslackKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KslackKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KslackKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KslackKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KslackKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KslackKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KslackKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KslackKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KslackKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KslackKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KslackKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApp.Companion")))
@interface KslackCoreAppCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAppCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppIcons")))
@interface KslackCoreAppIcons : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreAppIconsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_1024")
*/
@property NSString * _Nullable image1024 __attribute__((swift_name("image1024")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_128")
*/
@property NSString * _Nullable image128 __attribute__((swift_name("image128")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_192")
*/
@property NSString * _Nullable image192 __attribute__((swift_name("image192")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_32")
*/
@property NSString * _Nullable image32 __attribute__((swift_name("image32")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_36")
*/
@property NSString * _Nullable image36 __attribute__((swift_name("image36")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_48")
*/
@property NSString * _Nullable image48 __attribute__((swift_name("image48")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_512")
*/
@property NSString * _Nullable image512 __attribute__((swift_name("image512")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_64")
*/
@property NSString * _Nullable image64 __attribute__((swift_name("image64")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_72")
*/
@property NSString * _Nullable image72 __attribute__((swift_name("image72")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_96")
*/
@property NSString * _Nullable image96 __attribute__((swift_name("image96")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_original")
*/
@property NSString * _Nullable imageOriginal __attribute__((swift_name("imageOriginal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePreviousResolution.Companion")))
@interface KslackCorePreviousResolutionCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePreviousResolutionCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScope.Companion")))
@interface KslackCoreScopeCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreScopeCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeam_.Companion")))
@interface KslackCoreTeam_Companion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeam_Companion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreUser_.Companion")))
@interface KslackCoreUser_Companion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreUser_Companion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTeamIcon.Companion")))
@interface KslackCoreTeamIconCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTeamIconCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotIcons.Companion")))
@interface KslackCoreBotIconsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBotIconsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCallParticipant.Companion")))
@interface KslackCoreCallParticipantCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCallParticipantCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAction.Companion")))
@interface KslackCoreActionCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreActionCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConfirmation")))
@interface KslackCoreConfirmation : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreConfirmationCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable dismissText __attribute__((swift_name("dismissText")));
@property NSString * _Nullable okText __attribute__((swift_name("okText")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActionOptionGroup")))
@interface KslackCoreActionOptionGroup : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreActionOptionGroupCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreActionOption *> * _Nullable options __attribute__((swift_name("options")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Option.java
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOption")))
@interface KslackCoreOption : KslackBase

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Option.java
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Option.java
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOptionCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * Represents the type of action (e.g Message button or message menu)
 *
 * @see [Interaction Types](https://api.slack.com/interactive-messages.interaction_types)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreType")))
@interface KslackCoreType : KslackKotlinEnum<KslackCoreType *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents the type of action (e.g Message button or message menu)
 *
 * @see [Interaction Types](https://api.slack.com/interactive-messages.interaction_types)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KslackCoreTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KslackCoreType *button __attribute__((swift_name("button")));
@property (class, readonly) KslackCoreType *select __attribute__((swift_name("select")));
+ (KslackKotlinArray<KslackCoreType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KslackCoreType *> *entries __attribute__((swift_name("entries")));
- (NSString *)value_ __attribute__((swift_name("value()")));
@end


/**
 * https://api.slack.com/docs/message-attachments
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField.Companion")))
@interface KslackCoreFieldCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://api.slack.com/docs/message-attachments
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFieldCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://api.slack.com/docs/message-attachments
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachmentMetadata.Companion")))
@interface KslackCoreAttachmentMetadataCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAttachmentMetadataCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBotProfile.Companion")))
@interface KslackCoreBotProfileCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreBotProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageItem_.Companion")))
@interface KslackCoreMessageItem_Companion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMessageItem_Companion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageEdited.Companion")))
@interface KslackCoreMessageEditedCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMessageEditedCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageIcons.Companion")))
@interface KslackCoreMessageIconsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMessageIconsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * - https://api.slack.com/methods/reactions.get
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Reaction.java#L17
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReaction.Companion")))
@interface KslackCoreReactionCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://api.slack.com/methods/reactions.get
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Reaction.java#L17
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreReactionCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://api.slack.com/methods/reactions.get
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Reaction.java#L17
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * The root message information of a "thread_broadcast" message.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMessageRoot.Companion")))
@interface KslackCoreMessageRootCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The root message information of a "thread_broadcast" message.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMessageRootCompanion *shared __attribute__((swift_name("shared")));

/**
 * The root message information of a "thread_broadcast" message.
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLatest.Companion")))
@interface KslackCoreLatestCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreLatestCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEdited")))
@interface KslackCoreEdited : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreEditedCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Purpose.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePurpose.Companion")))
@interface KslackCorePurposeCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Purpose.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePurposeCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Purpose.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Topic.java#L6
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTopic.Companion")))
@interface KslackCoreTopicCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Topic.java#L6
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTopicCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Topic.java#L6
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharedInviteChannel.Companion")))
@interface KslackCoreSharedInviteChannelCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSharedInviteChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSharedInvitePayload.Companion")))
@interface KslackCoreSharedInvitePayloadCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSharedInvitePayloadCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileAddress.Companion")))
@interface KslackCoreFileAddressCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFileAddressCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilePinnedInfo.Companion")))
@interface KslackCoreFilePinnedInfoCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFilePinnedInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileShares.Companion")))
@interface KslackCoreFileSharesCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFileSharesCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileShareDetail")))
@interface KslackCoreFileShareDetail : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreFileShareDetailCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable channelName __attribute__((swift_name("channelName")));
@property NSString * _Nullable latestReply __attribute__((swift_name("latestReply")));
@property KslackInt * _Nullable replyCount __attribute__((swift_name("replyCount")));
@property KslackKotlinArray<NSString *> * _Nullable replyUsers __attribute__((swift_name("replyUsers")));
@property KslackInt * _Nullable replyUsersCount __attribute__((swift_name("replyUsersCount")));
@property NSString * _Nullable teamId __attribute__((swift_name("teamId")));
@property NSString * _Nullable threadTs __attribute__((swift_name("threadTs")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreComment.Companion")))
@interface KslackCoreCommentCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreCommentCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMatchedItem.Companion")))
@interface KslackCoreMatchedItemCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreMatchedItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAddress")))
@interface KslackCoreAddress : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreAddressCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable address __attribute__((swift_name("address")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable original __attribute__((swift_name("original")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel")))
@interface KslackCoreChannel : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreChannelCompanion *companion __attribute__((swift_name("companion")));
@property KslackInt * _Nullable created __attribute__((swift_name("created")));
@property NSString * _Nullable creator __attribute__((swift_name("creator")));
@property NSString * _Nullable enterpriseId __attribute__((swift_name("enterpriseId")));
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_archived")
*/
@property BOOL isArchived __attribute__((swift_name("isArchived")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_channel")
*/
@property BOOL isChannel __attribute__((swift_name("isChannel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_ext_shared")
*/
@property BOOL isExtShared __attribute__((swift_name("isExtShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_general")
*/
@property BOOL isGeneral __attribute__((swift_name("isGeneral")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_global_shared")
*/
@property BOOL isGlobalShared __attribute__((swift_name("isGlobalShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_group")
*/
@property BOOL isGroup __attribute__((swift_name("isGroup")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_im")
*/
@property BOOL isIm __attribute__((swift_name("isIm")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_member")
*/
@property BOOL isMember __attribute__((swift_name("isMember")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_moved")
*/
@property KslackInt * _Nullable isMoved __attribute__((swift_name("isMoved")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_mpim")
*/
@property BOOL isMpim __attribute__((swift_name("isMpim")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_org_default")
*/
@property BOOL isOrgDefault __attribute__((swift_name("isOrgDefault")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_org_mandatory")
*/
@property BOOL isOrgMandatory __attribute__((swift_name("isOrgMandatory")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_org_shared")
*/
@property BOOL isOrgShared __attribute__((swift_name("isOrgShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_pending_ext_shared")
*/
@property BOOL isPendingExtShared __attribute__((swift_name("isPendingExtShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_private")
*/
@property BOOL isPrivateChannel __attribute__((swift_name("isPrivateChannel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_read_only")
*/
@property BOOL isReadOnly __attribute__((swift_name("isReadOnly")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_shared")
*/
@property BOOL isShared __attribute__((swift_name("isShared")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_thread_only")
*/
@property BOOL isThreadOnly __attribute__((swift_name("isThreadOnly")));
@property NSString * _Nullable lastRead __attribute__((swift_name("lastRead")));
@property KslackCoreLatest * _Nullable latest __attribute__((swift_name("latest")));
@property KslackKotlinArray<NSString *> * _Nullable members __attribute__((swift_name("members")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable nameNormalized __attribute__((swift_name("nameNormalized")));
@property KslackInt * _Nullable numMembers __attribute__((swift_name("numMembers")));
@property KslackKotlinArray<NSString *> * _Nullable pendingShared __attribute__((swift_name("pendingShared")));
@property KslackKotlinArray<NSString *> * _Nullable previousNames __attribute__((swift_name("previousNames")));
@property KslackDouble * _Nullable priority __attribute__((swift_name("priority")));
@property KslackCorePurpose * _Nullable purpose __attribute__((swift_name("purpose")));
@property KslackCoreTopic * _Nullable topic __attribute__((swift_name("topic")));
@property KslackInt * _Nullable unlinked __attribute__((swift_name("unlinked")));
@property KslackInt * _Nullable unreadCount __attribute__((swift_name("unreadCount")));
@property KslackInt * _Nullable unreadCountDisplay __attribute__((swift_name("unreadCountDisplay")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOtherItem")))
@interface KslackCoreOtherItem : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreOtherItemCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<KslackCoreAttachment *> * _Nullable attachments __attribute__((swift_name("attachments")));
@property KslackKotlinArray<id<KslackCoreLayoutBlock>> * _Nullable blocks __attribute__((swift_name("blocks")));
@property NSString * _Nullable iid __attribute__((swift_name("iid")));
@property NSString * _Nullable permalink __attribute__((swift_name("permalink")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable ts __attribute__((swift_name("ts")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@property NSString * _Nullable username __attribute__((swift_name("username")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchPagination.Companion")))
@interface KslackCoreSearchPaginationCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreSearchPaginationCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfile_.Companion")))
@interface KslackCoreProfile_Companion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreProfile_Companion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileOptions")))
@interface KslackCoreProfileOptions : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreProfileOptionsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_protected")
*/
@property BOOL isProtected __attribute__((swift_name("isProtected")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_scim")
*/
@property KslackBoolean * _Nullable scim __attribute__((swift_name("scim")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfilePermissions")))
@interface KslackCoreProfilePermissions : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreProfilePermissionsCompanion *companion __attribute__((swift_name("companion")));
@property KslackKotlinArray<NSString *> * _Nullable api __attribute__((swift_name("api")));
@property KslackBoolean * _Nullable scim __attribute__((swift_name("scim")));
@property KslackBoolean * _Nullable ui __attribute__((swift_name("ui")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePrefs.Companion")))
@interface KslackCorePrefsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCorePrefsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEnterpriseUser.Companion")))
@interface KslackCoreEnterpriseUserCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreEnterpriseUserCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileField.Companion")))
@interface KslackCoreProfileFieldCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreProfileFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusEmojiDisplayInfo.Companion")))
@interface KslackCoreStatusEmojiDisplayInfoCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreStatusEmojiDisplayInfoCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KslackKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KslackKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KslackKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KslackKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KslackKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KslackKotlinx_serialization_coreSerializersModule : KslackBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KslackKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KslackKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KslackKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KslackKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KslackKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KslackKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KslackKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KslackKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KslackKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KslackKotlinx_serialization_coreSerialKind : KslackBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KslackKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KslackKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KslackKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KslackKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KslackKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KslackKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KslackKotlinNothing : KslackBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppIcons.Companion")))
@interface KslackCoreAppIconsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAppIconsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConfirmation.Companion")))
@interface KslackCoreConfirmationCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreConfirmationCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) NSString *DISMISS __attribute__((swift_name("DISMISS")));
@property (readonly) NSString *OKAY __attribute__((swift_name("OKAY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActionOptionGroup.Companion")))
@interface KslackCoreActionOptionGroupCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreActionOptionGroupCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActionOption")))
@interface KslackCoreActionOption : KslackBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KslackCoreActionOptionCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable text __attribute__((swift_name("text")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Option.java
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOption.Companion")))
@interface KslackCoreOptionCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Option.java
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOptionCompanion *shared __attribute__((swift_name("shared")));

/**
 * - https://github.com/slackapi/java-slack-sdk/blob/main/slack-api-model/src/main/java/com/slack/api/model/Option.java
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents the type of action (e.g Message button or message menu)
 *
 * @see [Interaction Types](https://api.slack.com/interactive-messages.interaction_types)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreType.Companion")))
@interface KslackCoreTypeCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents the type of action (e.g Message button or message menu)
 *
 * @see [Interaction Types](https://api.slack.com/interactive-messages.interaction_types)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents the type of action (e.g Message button or message menu)
 *
 * @see [Interaction Types](https://api.slack.com/interactive-messages.interaction_types)
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * Represents the type of action (e.g Message button or message menu)
 *
 * @see [Interaction Types](https://api.slack.com/interactive-messages.interaction_types)
 */
- (id<KslackKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(KslackKotlinArray<id<KslackKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEdited.Companion")))
@interface KslackCoreEditedCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreEditedCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFileShareDetail.Companion")))
@interface KslackCoreFileShareDetailCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreFileShareDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAddress.Companion")))
@interface KslackCoreAddressCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreAddressCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreChannel.Companion")))
@interface KslackCoreChannelCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreChannelCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOtherItem.Companion")))
@interface KslackCoreOtherItemCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreOtherItemCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfileOptions.Companion")))
@interface KslackCoreProfileOptionsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreProfileOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreProfilePermissions.Companion")))
@interface KslackCoreProfilePermissionsCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreProfilePermissionsCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KslackKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KslackKotlinKClass>)kClass provider:(id<KslackKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KslackKotlinx_serialization_coreKSerializer>> *typeArgumentsSerializers))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KslackKotlinKClass>)kClass serializer:(id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KslackKotlinKClass>)baseClass actualClass:(id<KslackKotlinKClass>)actualClass actualSerializer:(id<KslackKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KslackKotlinKClass>)baseClass defaultDeserializerProvider:(id<KslackKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KslackKotlinKClass>)baseClass defaultDeserializerProvider:(id<KslackKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable className))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KslackKotlinKClass>)baseClass defaultSerializerProvider:(id<KslackKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id value))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KslackKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KslackKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KslackKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KslackKotlinKClass <KslackKotlinKDeclarationContainer, KslackKotlinKAnnotatedElement, KslackKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreActionOption.Companion")))
@interface KslackCoreActionOptionCompanion : KslackBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KslackCoreActionOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<KslackKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
