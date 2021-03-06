/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVCaption.h>

@class AVMutableCaptionInternal, NSString;

@interface AVMutableCaption : AVCaption {

	AVMutableCaptionInternal* _mutableInternal;

}

@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) SCD_Struct_CM5 timeRange; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)animation;
-(NSString *)text;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setRegion:(id)arg1 ;
-(long long)textAlignment;
-(void)setText:(NSString *)arg1 ;
-(void)setTimeRange:(SCD_Struct_CM5)arg1 ;
-(SCD_Struct_CM5)timeRange;
-(void)setTextColor:(CGColorRef)arg1 inRange:(NSRange)arg2 ;
-(void)setBackgroundColor:(CGColorRef)arg1 inRange:(NSRange)arg2 ;
-(void)setFontWeight:(long long)arg1 inRange:(NSRange)arg2 ;
-(void)setFontStyle:(long long)arg1 inRange:(NSRange)arg2 ;
-(void)setDecoration:(long long)arg1 inRange:(NSRange)arg2 ;
-(void)setTextCombine:(long long)arg1 inRange:(NSRange)arg2 ;
-(void)setRuby:(id)arg1 inRange:(NSRange)arg2 ;
-(void)removeTextColorInRange:(NSRange)arg1 ;
-(void)removeBackgroundColorInRange:(NSRange)arg1 ;
-(void)removeFontWeightInRange:(NSRange)arg1 ;
-(void)removeFontStyleInRange:(NSRange)arg1 ;
-(void)removeDecorationInRange:(NSRange)arg1 ;
-(void)removeTextCombineInRange:(NSRange)arg1 ;
-(void)removeRuby:(NSRange)arg1 ;
-(void)setAnimation:(long long)arg1 ;
@end

