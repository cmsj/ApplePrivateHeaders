/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/Versions/A/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface PPLabelStrengthSets : NSObject {

	NSSet* _weak;
	NSSet* _strong;

}

@property (nonatomic,readonly) NSSet * weak;                //@synthesize weak=_weak - In the implementation block
@property (nonatomic,readonly) NSSet * strong;              //@synthesize strong=_strong - In the implementation block
+(id)labelStrengthSetsWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(NSSet *)weak;
-(id)initWithWeakSet:(id)arg1 strongSet:(id)arg2 ;
-(NSSet *)strong;
@end
