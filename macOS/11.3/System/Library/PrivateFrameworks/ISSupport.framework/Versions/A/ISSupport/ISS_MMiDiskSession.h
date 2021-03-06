/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISSupport-Structs.h>
#import <ISSupport/ISS_MMTransactionGenerator.h>
#import <libobjc.A.dylib/MMSecurity.h>

@class NSString, NSLock;

@interface ISS_MMiDiskSession : NSObject <ISS_MMTransactionGenerator, MMSecurity> {

	id _credentials;
	NSString* _owner;
	id _delegate;
	char _use_synchronous;
	double _lockDuration;
	id _session_data;
	char _checked;
	char _checkPreAuth;
	char _auto_dispatch;
	char _normalize;
	char _secure;
	NSLock* _auth_lock;
	char _ia_checked;
	NSLock* _ia_lock;
	id _comment_store;
	id _index_session;
	id _reporting_session;
	id _mp_config_session;
	id _client_id;
	id _my_private_ivars;

}
+(void)initialize;
+(char)_initLockDictionary;
+(id)iDiskSessionWithCredentials:(id)arg1 ;
+(id)iDiskSessionWithCredentials:(id)arg1 andOwner:(id)arg2 ;
+(id)iDiskSessionWithAccount:(id)arg1 ;
+(id)_iDiskSessionWithCredentials:(id)arg1 owner:(id)arg2 host:(id)arg3 port:(int)arg4 scheme:(id)arg5 ;
+(id)_iDiskSessionWithAccount:(id)arg1 host:(id)arg2 port:(int)arg3 scheme:(id)arg4 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(char)fileExistsAtPath:(id)arg1 ;
-(id)owner;
-(char)removeFileAtPath:(id)arg1 handler:(id)arg2 ;
-(char)fileExistsAtPath:(id)arg1 isDirectory:(char*)arg2 ;
-(char)copyPath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(char)movePath:(id)arg1 toPath:(id)arg2 handler:(id)arg3 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(char)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(char)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(id)contentsAtPath:(id)arg1 ;
-(id)_contentType;
-(void)_setContentType:(id)arg1 ;
-(char)isSynchronous;
-(char)_isChecked;
-(id)account;
-(id)_sourceID;
-(id)_clientID;
-(id)initWithAccount:(id)arg1 ;
-(void)_setAccount:(id)arg1 ;
-(id)_sourceId;
-(id)_sessionData;
-(void)setIsSynchronous:(char)arg1 ;
-(id)credentials;
-(void)_setOwner:(id)arg1 ;
-(id)initWithCredentials:(id)arg1 ;
-(id)initWithCredentials:(id)arg1 andOwner:(id)arg2 ;
-(id)_initWithCredentials:(id)arg1 owner:(id)arg2 host:(id)arg3 port:(int)arg4 scheme:(id)arg5 ;
-(void)_setCredentials:(id)arg1 ;
-(void)_setIsAutoDispatchEnabled:(char)arg1 ;
-(void)_setDoUseSecureConfigURL:(char)arg1 ;
-(void)_setIsChecked:(char)arg1 ;
-(void)_setDoCheckPreAuth:(char)arg1 ;
-(void)_setDoNormalizePaths:(char)arg1 ;
-(void)setDefaultLockDuration:(double)arg1 ;
-(char)_initSessionDataWithHost:(id)arg1 port:(int)arg2 scheme:(id)arg3 ;
-(id)_defaultClientID;
-(void)_setClientID:(id)arg1 ;
-(id)_authLock;
-(int)_validateSessionCredentials;
-(char)_hasPublicUsername;
-(int)_validateCredentialsWithPath:(id)arg1 andDAVSession:(id)arg2 ;
-(void)_setSessionData:(id)arg1 ;
-(id)_iDiskPathForURI:(id)arg1 ;
-(void)_addHeaders:(id)arg1 toRequest:(id)arg2 ;
-(id)_dispatchRequest:(id)arg1 requiringResult:(char)arg2 ;
-(id)_getRequestPostHandler:(id)arg1 ;
-(id)_dispatchRequest:(id)arg1 withPostHandler:(SEL)arg2 requiringResult:(char)arg3 ;
-(id)_failedTransactionWithRequest:(id)arg1 error:(id)arg2 ;
-(void)_addQueryParameters:(id)arg1 toRequest:(id)arg2 ;
-(id)_genericRequestPostHandler:(id)arg1 ;
-(id)_uploadData:(id)arg1 toPath:(id)arg2 withProps:(id)arg3 andHeaders:(id)arg4 ;
-(id)_uploadLocalFileAtPath:(id)arg1 toPath:(id)arg2 withProps:(id)arg3 andHeaders:(id)arg4 ;
-(id)putData:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3 rangeStart:(unsigned long long)arg4 rangeEnd:(unsigned long long)arg5 ;
-(id)_lockTokenForURI:(id)arg1 ;
-(id)putData:(id)arg1 toPath:(id)arg2 withByteRange:(NSRange)arg3 andHeaders:(id)arg4 ;
-(id)putLocalFileAtPath:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3 ;
-(id)transactionDelegate;
-(id)_xmlrpcRequestPostHandler:(id)arg1 ;
-(id)makeCollectionAtPath:(id)arg1 ;
-(id)_makePathRequestPostHandler:(id)arg1 ;
-(double)defaultLockDuration;
-(id)_lockResourceAtPath:(id)arg1 withDuration:(double)arg2 owner:(id)arg3 eTag:(id)arg4 ;
-(id)_lockRequestPostHandler:(id)arg1 ;
-(id)lockResourceAtPath:(id)arg1 withDuration:(double)arg2 ;
-(void)_setLockToken:(id)arg1 forURI:(id)arg2 withDuration:(double)arg3 ;
-(id)relockResourceAtPath:(id)arg1 withDuration:(double)arg2 ;
-(id)_lockTokenForURI:(id)arg1 orForParent:(char)arg2 ;
-(id)_queryServerForLockToken:(id)arg1 ;
-(id)_unlockRequestPostHandler:(id)arg1 ;
-(void)_removeLockTokenForURI:(id)arg1 ;
-(id)_unzipRequestPostHandler:(id)arg1 ;
-(id)_setPropertiesRequestPostHandler:(id)arg1 ;
-(id)_makeCollectionsRequestPostHandler:(id)arg1 ;
-(id)_overlayRequestPostHandler:(id)arg1 ;
-(id)moveResourceAtPath:(id)arg1 toPath:(id)arg2 allowingOverwrite:(char)arg3 ;
-(id)_moveSource:(id)arg1 toDestination:(id)arg2 allowingOverwrite:(char)arg3 ;
-(id)copyResourceAtPath:(id)arg1 toPath:(id)arg2 allowingOverwrite:(char)arg3 ;
-(id)_copySource:(id)arg1 toDestination:(id)arg2 allowingOverwrite:(char)arg3 ;
-(id)_deleteRequestPostHandler:(id)arg1 ;
-(id)_doesResourceExistRequestPostHandler:(id)arg1 ;
-(id)_basicAttributesRequestPostHandler:(id)arg1 ;
-(id)_attributes:(id)arg1 atPath:(id)arg2 ;
-(id)_attributesRequestPostHandler:(id)arg1 ;
-(id)_accessRequestPostHandler:(id)arg1 ;
-(id)_listRequestPostHandler:(id)arg1 ;
-(id)_propFindRequestPostHandler:(id)arg1 ;
-(char)_isAutoDispatchEnabled;
-(id)_quotaAttributesRequestPostHandler:(id)arg1 ;
-(id)_getEmailAliasesPostHandler:(id)arg1 ;
-(id)_aliasesFromXMLData:(id)arg1 ;
-(id)_createDictionaryFromAlias:(id)arg1 ;
-(char)_doCheckPreAuth;
-(void)_setReportingSession:(id)arg1 ;
-(id)_recentLockTokens;
-(id)_lockIdentifierForURI:(id)arg1 ;
-(id)_createXMLDataForReportingInfo:(id)arg1 ;
-(id)_reportingSession;
-(id)_issuePropPatchAtPath:(id)arg1 updatingProps:(id)arg2 inNameSpace:(id)arg3 ;
-(id)_issuePropFindAtPath:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 ;
-(id)_issuePropFindAtPath:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 includingParent:(char)arg4 ;
-(char)_doUseSecureConfigURL;
-(char)_initReportingSessionWithHost:(id)arg1 port:(int)arg2 scheme:(id)arg3 ;
-(char)_doNormalizePaths;
-(void)_checkPreAuth;
-(id)_dispatchRequest:(id)arg1 withPostHandler:(SEL)arg2 andNotes:(id)arg3 requiringResult:(char)arg4 ;
-(void)_setTrustHeaderValue:(id)arg1 ;
-(void)_setUseBasicAuth:(char)arg1 ;
-(char)_useBasicAuth;
-(id)_accessAtPath:(id)arg1 ;
-(id)_versionInfoPostHandler:(id)arg1 ;
-(id)_accessRightsRequestPostHandler:(id)arg1 ;
-(id)_accessRights:(id)arg1 atPath:(id)arg2 forPrincipal:(id)arg3 ;
-(void)setTransactionDelegate:(id)arg1 ;
-(id)setAccess:(id)arg1 toEntity:(id)arg2 ;
-(id)accessToEntity:(id)arg1 ;
-(id)_initWithAccount:(id)arg1 host:(id)arg2 port:(int)arg3 scheme:(id)arg4 ;
-(int)validateAccess;
-(void)_setUserAgent:(id)arg1 ;
-(id)_issueHeadForResourceAtPath:(id)arg1 withHeaders:(id)arg2 ;
-(id)getDataAtPath:(id)arg1 ;
-(id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2 ;
-(id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2 withByteRange:(NSRange)arg3 ;
-(id)getDataAtPath:(id)arg1 ifModifiedSince:(id)arg2 rangeStart:(unsigned long long)arg3 rangeEnd:(unsigned long long)arg4 localDestination:(id)arg5 ;
-(id)getDataAtPath:(id)arg1 withHeaders:(id)arg2 andQueryParameters:(id)arg3 ;
-(id)_issueRequestWithMethod:(id)arg1 path:(id)arg2 headers:(id)arg3 queryParameters:(id)arg4 andBody:(id)arg5 ;
-(id)_uploadData:(id)arg1 toPath:(id)arg2 withProps:(id)arg3 ;
-(id)_uploadLocalFileAtPath:(id)arg1 toPath:(id)arg2 withProps:(id)arg3 ;
-(id)_createCollectionAtPath:(id)arg1 withProps:(id)arg2 ;
-(id)putData:(id)arg1 toPath:(id)arg2 ;
-(id)putData:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3 ;
-(id)putData:(id)arg1 toPath:(id)arg2 withByteRange:(NSRange)arg3 ;
-(id)putLocalFileAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)putResourceAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)_postData:(id)arg1 toPath:(id)arg2 withHeaders:(id)arg3 ;
-(id)_makeXMLRPCRequest:(id)arg1 toPath:(id)arg2 ;
-(id)makeCollectionAtPath:(id)arg1 includingIntermediateCollections:(char)arg2 ;
-(id)lockResourceAtPath:(id)arg1 ;
-(id)lockResourceAtPath:(id)arg1 withETag:(id)arg2 ;
-(id)lockResourceAtPath:(id)arg1 withDuration:(double)arg2 andETag:(id)arg3 ;
-(id)_lockResourceAtPath:(id)arg1 withDuration:(double)arg2 andOwner:(id)arg3 ;
-(id)relockResourceAtPath:(id)arg1 ;
-(id)_relockResourceAtPath:(id)arg1 withDuration:(double)arg2 andOwner:(id)arg3 ;
-(id)unlockResourceAtPath:(id)arg1 ;
-(id)_unlockResourceAtPath:(id)arg1 usingLockToken:(id)arg2 ;
-(id)unzipArchiveAtPath:(id)arg1 ;
-(id)_setPropertiesForResourcesAtPaths:(id)arg1 ;
-(id)_makeCollectionsAtPaths:(id)arg1 ;
-(id)overlayResourceAtPath:(id)arg1 ontoPath:(id)arg2 ;
-(id)moveResourceAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)_moveSource:(id)arg1 toDestination:(id)arg2 ;
-(id)copyResourceAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)_copySource:(id)arg1 toDestination:(id)arg2 ;
-(id)renameResourceAtPath:(id)arg1 toPath:(id)arg2 allowingOverwrite:(char)arg3 ;
-(id)deleteResourceAtPath:(id)arg1 ;
-(char)resourceExistsAtPath:(id)arg1 ;
-(id)doesResourceExistAtPath:(id)arg1 ;
-(id)basicAttributesAtPath:(id)arg1 ;
-(id)extendedAttributesAtPath:(id)arg1 ;
-(id)listCollectionAtPath:(id)arg1 ;
-(id)_listCollectionAtPath:(id)arg1 lookingForProps:(id)arg2 ;
-(id)quotaAttributes;
-(id)_getEmailAliasesIfModifiedSince:(id)arg1 ;
-(void)_releaseCredentials;
-(id)_sendReportingInfo:(id)arg1 ;
-(id)_issuePropPatchAtPath:(id)arg1 updatingProps:(id)arg2 ;
-(id)_issuePropFindAtPath:(id)arg1 withDepth:(id)arg2 lookingForProps:(id)arg3 inNameSpace:(id)arg4 ;
-(void)_setIndexSession:(id)arg1 ;
-(id)_indexSession;
-(void)_setMobilePublishConfigSession:(id)arg1 ;
-(id)_mobilePublishConfigSession;
-(void)_setIsIndexingAuthChecked:(char)arg1 ;
-(char)_isIndexingAuthChecked;
-(id)_indexingAuthLock;
-(void)_setReadTimeOut:(unsigned)arg1 ;
-(unsigned)_readTimeOut;
-(void)_setAddTrustHeader:(char)arg1 ;
-(char)_addTrustHeader;
-(id)effectiveAccessToEntity:(id)arg1 forPrincipal:(id)arg2 ;
-(id)versionInfoForResourceAtPath:(id)arg1 withQualifiers:(id)arg2 ;
-(id)accessToEntity:(id)arg1 forPrincipals:(id)arg2 ;
-(id)accessToEntity:(id)arg1 forPrincipal:(id)arg2 ;
-(id)setAccess:(id)arg1 toEntity:(id)arg2 forPrincipals:(id)arg3 ;
-(id)resetAccessToChildrenOfEntity:(id)arg1 ;
-(char)_synchronousTransactionStatus:(id)arg1 requiringResult:(char)arg2 ;
-(char)_uploadPath:(id)arg1 toPath:(id)arg2 ;
-(char)_downloadPath:(id)arg1 toPath:(id)arg2 ;
-(char)_downloadDir:(id)arg1 toPath:(id)arg2 ;
-(char)_downloadFile:(id)arg1 toPath:(id)arg2 ;
-(id)_detailedContentsAtPath:(id)arg1 ;
-(char)_uploadLocalFileAtPath:(id)arg1 toPath:(id)arg2 ;
@end

