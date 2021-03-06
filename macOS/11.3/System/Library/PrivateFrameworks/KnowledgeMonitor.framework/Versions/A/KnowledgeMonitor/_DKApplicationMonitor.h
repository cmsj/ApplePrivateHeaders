/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/Versions/A/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@class NSString;

@interface _DKApplicationMonitor : _DKMonitor {

	void* _lsNotificationID;
	NSString* _lastIdentifierSet;

}

@property (assign,nonatomic) void* lsNotificationID;                    //@synthesize lsNotificationID=_lsNotificationID - In the implementation block
@property (nonatomic,retain) NSString * lastIdentifierSet;              //@synthesize lastIdentifierSet=_lastIdentifierSet - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(/*^block*/id)_eventFilterBlock;
+(id)_defaultEvent;
+(id)_eventWithBundleIdentifier:(id)arg1 launchReason:(id)arg2 ;
+(void)setFocalApplication:(id)arg1 launchReason:(id)arg2 ;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)deactivate;
-(void)synchronouslyReflectCurrentValue;
-(void)obtainCurrentValue;
-(void)registerForAppChangeNotifications;
-(void)platformSpecificStart;
-(void)platformSpecificStop;
-(NSString *)lastIdentifierSet;
-(void)setLastIdentifierSet:(NSString *)arg1 ;
-(void*)lsNotificationID;
-(void)setLsNotificationID:(void*)arg1 ;
@end

