/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AMSEngagementAppData : NSObject {

	NSArray* _cachedResponses;
	NSString* _identifier;
	NSArray* _whitelist;

}

@property (retain) NSArray * cachedResponses;              //@synthesize cachedResponses=_cachedResponses - In the implementation block
@property (readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSArray * whitelist;                    //@synthesize whitelist=_whitelist - In the implementation block
-(NSString *)identifier;
-(void)setWhitelist:(NSArray *)arg1 ;
-(NSArray *)whitelist;
-(NSArray *)cachedResponses;
-(id)exportObject;
-(id)initWithIdentifier:(id)arg1 cacheObject:(id)arg2 ;
-(void)setCachedResponses:(NSArray *)arg1 ;
@end

