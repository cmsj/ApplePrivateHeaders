/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol;
@class NSMutableSet, NSURL, AMSProcessInfo;

@interface AMSOpenURL : NSObject {

	NSMutableSet* _attemptedTargets;
	NSURL* _URL;
	AMSProcessInfo* _clientInfo;
	id<AMSBagProtocol> _bag;

}

@property (retain) NSMutableSet * attemptedTargets;              //@synthesize attemptedTargets=_attemptedTargets - In the implementation block
@property (readonly) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (retain) AMSProcessInfo * clientInfo;                  //@synthesize clientInfo=_clientInfo - In the implementation block
@property (retain) id<AMSBagProtocol> bag;                       //@synthesize bag=_bag - In the implementation block
+(id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 ;
+(char)openStandardURL:(id)arg1 ;
+(id)_sortedTargets;
+(id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2 ;
+(void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3 ;
-(NSURL *)URL;
-(AMSProcessInfo *)clientInfo;
-(void)setClientInfo:(AMSProcessInfo *)arg1 ;
-(id<AMSBagProtocol>)bag;
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3 ;
-(id)_performOpen;
-(void)setAttemptedTargets:(NSMutableSet *)arg1 ;
-(char)_openURL:(id)arg1 bundleInfo:(id)arg2 ;
-(char)_shouldOpenURL:(id)arg1 ;
-(NSMutableSet *)attemptedTargets;
@end

