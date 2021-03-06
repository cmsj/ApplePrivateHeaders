/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {

	NSString* _bundleID;
	long long _discoverableTrinary;

}

@property (assign,nonatomic) long long discoverableTrinary;              //@synthesize discoverableTrinary=_discoverableTrinary - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                          //@synthesize bundleID=_bundleID - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)initWithOperation:(id)arg1 ;
-(long long)databaseScope;
-(void)setDiscoverable:(char)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(char)requiresTokenRegistration;
-(void)setDiscoverableTrinary:(long long)arg1 ;
-(long long)discoverableTrinary;
@end

