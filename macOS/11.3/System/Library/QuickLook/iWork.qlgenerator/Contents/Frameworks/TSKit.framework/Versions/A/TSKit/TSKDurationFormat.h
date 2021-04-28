/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSKit/TSKit-Structs.h>
#import <TSKit/TSKFormat.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSKDurationFormat : TSKFormat <NSCopying> {

	char _useAutomaticUnits;
	int _durationUnitSmallest;
	int _durationUnitLargest;
	int _durationStyle;

}

@property (nonatomic,readonly) TSCHDurationFormatProperties chartDurationFormatProperties; 
@property (nonatomic,readonly) char useAutomaticUnits;                                                  //@synthesize useAutomaticUnits=_useAutomaticUnits - In the implementation block
@property (nonatomic,readonly) int durationUnitSmallest;                                                //@synthesize durationUnitSmallest=_durationUnitSmallest - In the implementation block
@property (nonatomic,readonly) int durationUnitLargest;                                                 //@synthesize durationUnitLargest=_durationUnitLargest - In the implementation block
@property (nonatomic,readonly) int durationStyle;                                                       //@synthesize durationStyle=_durationStyle - In the implementation block
+(int)automaticMaxAndMinDurationUnitsForTimeInterval:(double)arg1 ;
-(TSCHDurationFormatProperties)chartDurationFormatProperties;
-(id)formatByApplyingTSCHDurationFormatProperties:(TSCHDurationFormatProperties)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithFormatType:(unsigned)arg1 ;
-(id)asDurationFormat;
-(char)useAutomaticUnits;
-(int)durationUnitSmallest;
-(int)durationUnitLargest;
-(int)durationStyle;
-(id)initWithUseAutomaticUnits:(char)arg1 durationUnitSmallest:(int)arg2 durationUnitLargest:(int)arg3 durationStyle:(int)arg4 ;
-(int)durationUnitLargestWithTimeInterval:(double)arg1 ;
-(id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2 ;
-(int)maxAndMinDurationUnitsForTimeInterval:(double)arg1 ;
-(id)stringFromDurationTimeInterval:(double)arg1 locale:(id)arg2 showPrecision:(char)arg3 ;
-(id)formatByFixingUnitsIfNecessaryForTimeInterval:(double)arg1 ;
@end
