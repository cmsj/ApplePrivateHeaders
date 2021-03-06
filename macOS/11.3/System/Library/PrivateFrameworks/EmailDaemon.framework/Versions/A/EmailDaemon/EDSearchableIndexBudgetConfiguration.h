/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSString;

@interface EDSearchableIndexBudgetConfiguration : NSObject <EFPubliclyDescribable> {

	char _enableActivityBasedScheduling;
	char _autoStartMaintenanceIndexing;
	char _allowBacklogIndexingOnPower;
	double _time;
	double _periodDuration;
	long long _numberOfItemsToIndexOnResume;

}

@property (assign,nonatomic) char enableActivityBasedScheduling;                    //@synthesize enableActivityBasedScheduling=_enableActivityBasedScheduling - In the implementation block
@property (assign,nonatomic) char autoStartMaintenanceIndexing;                     //@synthesize autoStartMaintenanceIndexing=_autoStartMaintenanceIndexing - In the implementation block
@property (assign,nonatomic) char allowBacklogIndexingOnPower;                      //@synthesize allowBacklogIndexingOnPower=_allowBacklogIndexingOnPower - In the implementation block
@property (nonatomic,readonly) double time;                                         //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) double periodDuration;                               //@synthesize periodDuration=_periodDuration - In the implementation block
@property (nonatomic,readonly) long long numberOfItemsToIndexOnResume;              //@synthesize numberOfItemsToIndexOnResume=_numberOfItemsToIndexOnResume - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultConfiguration;
+(id)nonSchedulingBudgetConfiguration;
-(NSString *)description;
-(id)init;
-(double)time;
-(NSString *)ef_publicDescription;
-(id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 enableActivityBasedScheduling:(char)arg4 autoStartMaintenanceIndexing:(char)arg5 allowBacklogIndexingOnPower:(char)arg6 ;
-(id)initWithTime:(double)arg1 periodDuration:(double)arg2 numberOfItemsToIndexOnResume:(long long)arg3 ;
-(double)periodDuration;
-(long long)numberOfItemsToIndexOnResume;
-(char)enableActivityBasedScheduling;
-(void)setEnableActivityBasedScheduling:(char)arg1 ;
-(char)autoStartMaintenanceIndexing;
-(void)setAutoStartMaintenanceIndexing:(char)arg1 ;
-(char)allowBacklogIndexingOnPower;
-(void)setAllowBacklogIndexingOnPower:(char)arg1 ;
@end

