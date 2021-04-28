/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slideshows/Slideshows-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString, NSMutableDictionary, NSMutableArray;

@interface MPClusterSlide : NSObject <NSCopying> {

	NSDate* mCaptureDate;
	NSString* mPath;
	long long mReferenceCounter;
	NSMutableDictionary* mUsageCounterPerLayer;
	NSMutableArray* mUsableSlideClusters;
	long long mIndex;

}

@property (copy) NSDate * captureDate; 
@property (copy) NSString * path; 
@property (assign) long long referenceCounter; 
@property (assign) long long index; 
@property (retain) NSMutableDictionary * usageCounterPerLayer; 
@property (retain) NSMutableArray * usableSlideClusters; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(NSDate *)captureDate;
-(long long)referenceCounter;
-(NSMutableArray *)usableSlideClusters;
-(id)usageCountDescription;
-(void)resetAllUsageCounters;
-(NSMutableDictionary *)usageCounterPerLayer;
-(void)setUsageCounterPerLayer:(NSMutableDictionary *)arg1 ;
-(long long)overallUsageCounter;
-(void)setUsableSlideClusters:(NSMutableArray *)arg1 ;
-(void)setReferenceCounter:(long long)arg1 ;
-(void)setCaptureDate:(NSDate *)arg1 ;
-(void)setUsageCounterForLayer:(id)arg1 to:(long long)arg2 ;
-(void)increaseUsageCounterForLayer:(id)arg1 ;
-(long long)usageCounterForLayer:(id)arg1 ;
@end
