/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/Versions/A/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCDatabaseProvider;
@class WFMetricStatusEvent, VCMetricCheckIn;

@interface VCMetricSubmitter : NSObject {

	WFMetricStatusEvent* _event;
	VCMetricCheckIn* _checkIn;
	id<VCDatabaseProvider> _databaseProvider;

}

@property (nonatomic,readonly) VCMetricCheckIn * checkIn;                            //@synthesize checkIn=_checkIn - In the implementation block
@property (nonatomic,readonly) id<VCDatabaseProvider> databaseProvider;              //@synthesize databaseProvider=_databaseProvider - In the implementation block
@property (nonatomic,readonly) WFMetricStatusEvent * event;                          //@synthesize event=_event - In the implementation block
+(id)activityIdentifier;
+(void)scheduleWithDatabaseProvider:(id)arg1 ;
+(void)scheduleWithScheduler:(id)arg1 databaseProvider:(id)arg2 ;
+(void)performWithDatabaseProvider:(id)arg1 ;
-(WFMetricStatusEvent *)event;
-(void)perform;
-(VCMetricCheckIn *)checkIn;
-(char)isSleepEnabled;
-(char)isAppInstalled;
-(id<VCDatabaseProvider>)databaseProvider;
-(id)initWithDatabaseProvider:(id)arg1 ;
-(id)initWithCheckIn:(id)arg1 event:(id)arg2 databaseProvider:(id)arg3 ;
-(char)isSharingEnabled;
-(char)personalAutomationsPresent:(id)arg1 ;
-(char)homeAutomationsPresent:(id*)arg1 ;
-(unsigned)averageShortcutCountPerFolder:(id)arg1 ;
-(unsigned)shortcutsCount:(id)arg1 ;
-(unsigned)uncategorizedShortcutCount:(id)arg1 ;
-(unsigned)watchShortcutCount:(id)arg1 ;
-(unsigned)folderCount:(id)arg1 ;
-(unsigned)numberOfPersonalAutomationsEnabled:(id)arg1 ;
-(char)addAutomationSuggestionMetricsToEvent:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(unsigned)numberOfShortcutRuns:(id)arg1 ;
-(unsigned)numberOfAppSessions:(id*)arg1 ;
-(unsigned)sleepShortcutCount:(id)arg1 ;
-(char)addWidgetMetricsToEvent:(id)arg1 error:(id*)arg2 ;
@end

