/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/ADSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject, NSNumber, NSMutableDictionary;

@interface ADWatchDogManager : ADSingleton {

	NSObject*<OS_dispatch_queue> _watchdogQueue;
	NSNumber* _currentToken;
	NSMutableDictionary* _tokenCollection;

}

@property (nonatomic,retain) NSNumber * currentToken;                              //@synthesize currentToken=_currentToken - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * tokenCollection;              //@synthesize tokenCollection=_tokenCollection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSNumber *)currentToken;
-(void)setCurrentToken:(NSNumber *)arg1 ;
-(void)incrementToken;
-(char)removeWatchdogWithToken:(id)arg1 ;
-(id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2 ;
-(id)getNextToken;
-(NSMutableDictionary *)tokenCollection;
-(void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3 ;
-(char)updateReason:(id)arg1 forToken:(id)arg2 ;
@end

