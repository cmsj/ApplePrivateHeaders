/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/Versions/A/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@interface _DKPluggedInMonitor : _DKMonitor {

	char _enabled;
	int _pluggedInToken;

}

@property (assign,nonatomic) char enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) int pluggedInToken;              //@synthesize pluggedInToken=_pluggedInToken - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(char)shouldMergeUnchangedEvents;
+(void)setIsPluggedIn:(char)arg1 ;
+(id)_eventWithState:(char)arg1 adapterType:(long long)arg2 isWireless:(char)arg3 ;
-(void)dealloc;
-(char)enabled;
-(void)setEnabled:(char)arg1 ;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(long long)currentAdapterType:(char*)arg1 ;
-(void)setCurrentState;
-(int)pluggedInToken;
-(void)setPluggedInToken:(int)arg1 ;
@end

