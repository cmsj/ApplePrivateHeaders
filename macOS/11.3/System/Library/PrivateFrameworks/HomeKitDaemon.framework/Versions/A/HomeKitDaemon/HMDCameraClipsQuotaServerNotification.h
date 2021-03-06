/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDictionary;

@interface HMDCameraClipsQuotaServerNotification : HMFObject {

	NSString* _containerIdentifier;
	long long _reason;
	NSString* _requestID;
	NSString* _userDSID;

}

@property (copy,readonly) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (readonly) long long reason;                                          //@synthesize reason=_reason - In the implementation block
@property (copy,readonly) NSString * requestID;                                 //@synthesize requestID=_requestID - In the implementation block
@property (copy,readonly) NSString * userDSID;                                  //@synthesize userDSID=_userDSID - In the implementation block
@property (copy,readonly) NSDictionary * dictionaryRepresentation; 
-(long long)reason;
-(NSDictionary *)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)containerIdentifier;
-(NSString *)requestID;
-(NSString *)userDSID;
-(id)initWithContainerIdentifier:(id)arg1 reason:(long long)arg2 requestID:(id)arg3 userDSID:(id)arg4 ;
@end

