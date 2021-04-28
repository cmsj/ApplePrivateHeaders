/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPerformance.framework/Versions/A/AccessibilityPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityPerformance/AccessibilityPerformance-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSDate, NSString;

@interface AXPSignpostParserConfiguration : NSObject <NSCopying> {

	NSSet* _subsystemCategoryFilters;
	NSDate* _beginTime;
	NSDate* _endTime;
	NSSet* _nameFilters;
	NSString* _logArchivePath;

}

@property (nonatomic,copy) NSString * logArchivePath;                     //@synthesize logArchivePath=_logArchivePath - In the implementation block
@property (nonatomic,copy) NSSet * subsystemCategoryFilters;              //@synthesize subsystemCategoryFilters=_subsystemCategoryFilters - In the implementation block
@property (nonatomic,retain) NSDate * beginTime;                          //@synthesize beginTime=_beginTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                            //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,copy) NSSet * nameFilters;                           //@synthesize nameFilters=_nameFilters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSDate *)beginTime;
-(void)setBeginTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSString *)logArchivePath;
-(NSSet *)subsystemCategoryFilters;
-(NSSet *)nameFilters;
-(void)setSubsystemCategoryFilters:(NSSet *)arg1 ;
-(void)setNameFilters:(NSSet *)arg1 ;
-(void)setLogArchivePath:(NSString *)arg1 ;
@end
