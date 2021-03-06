/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString, CKDContainerInfo;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {

	char _requireUserIDs;
	NSString* _containerIdentifier;
	CKDContainerInfo* _containerInfo;

}

@property (nonatomic,copy) CKDContainerInfo * containerInfo;              //@synthesize containerInfo=_containerInfo - In the implementation block
@property (assign,nonatomic) char requireUserIDs;                         //@synthesize requireUserIDs=_requireUserIDs - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
-(id)url;
-(NSString *)containerIdentifier;
-(long long)partitionType;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(long long)serverType;
-(char)usesiCloudAuthToken;
-(char)usesCloudKitAuthToken;
-(void)requestDidParseJSONObject:(id)arg1 ;
-(char)allowsAnonymousAccount;
-(char)requiresConfiguration;
-(char)allowsAuthedAccount;
-(char)requiresDeviceID;
-(char)hasRequestBody;
-(char)requireUserIDs;
-(void)setContainerInfo:(CKDContainerInfo *)arg1 ;
-(CKDContainerInfo *)containerInfo;
-(id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)setRequireUserIDs:(char)arg1 ;
@end

