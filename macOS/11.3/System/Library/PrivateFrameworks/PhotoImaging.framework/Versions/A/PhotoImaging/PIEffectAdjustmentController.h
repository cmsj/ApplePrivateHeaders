/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/Versions/A/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PIAdjustmentController.h>

@class NSString;

@interface PIEffectAdjustmentController : PIAdjustmentController

@property (nonatomic,copy) NSString * kind; 
@property (assign,nonatomic) long long version; 
@property (assign,nonatomic) double intensity; 
+(id)intensityKey;
+(id)versionKey;
+(id)kindKey;
-(long long)version;
-(NSString *)kind;
-(void)setVersion:(long long)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(double)intensity;
-(void)setIntensity:(double)arg1 ;
-(char)isSettingEqual:(id)arg1 forKey:(id)arg2 ;
@end
