/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/DGOperation.h>

@class NSNumber;

@interface DGGNGDefinitionOperation : DGOperation {

	NSNumber* _inputRadius;
	NSNumber* _inputIntensity;

}

@property (nonatomic,copy) NSNumber * inputRadius;                 //@synthesize inputRadius=_inputRadius - In the implementation block
@property (nonatomic,copy) NSNumber * inputIntensity;              //@synthesize inputIntensity=_inputIntensity - In the implementation block
+(id)attributes;
+(id)_stringsTableName;
+(id)inputKeys;
+(id)outputKeys;
-(void)dealloc;
-(id)init;
-(id)initWithOperation:(id)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(id)_filterWithScalingFactor:(double)arg1 ;
@end
