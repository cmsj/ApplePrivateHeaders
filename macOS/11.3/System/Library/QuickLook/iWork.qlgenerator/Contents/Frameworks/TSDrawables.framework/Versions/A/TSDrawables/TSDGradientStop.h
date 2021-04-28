/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor;

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;
	double mFraction;
	double mInflection;

}

@property (nonatomic,copy,readonly) TSUColor * color; 
@property (nonatomic,readonly) double fraction; 
@property (nonatomic,readonly) double inflection; 
+(id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3 ;
+(id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(TSUColor *)color;
-(double)fraction;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)initWithArchive:(const GradientArchive_GradientStop*)arg1 unarchiver:(id)arg2 ;
-(id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3 ;
-(void)p_setColor:(id)arg1 ;
-(void)p_setFraction:(double)arg1 ;
-(void)p_setInflection:(double)arg1 ;
-(double)inflection;
-(id)initWithColor:(id)arg1 fraction:(double)arg2 ;
-(id)initWithGradientStop:(id)arg1 ;
-(id)gradientStopWithColor:(id)arg1 ;
-(id)gradientStopWithInflection:(double)arg1 ;
-(void)saveToArchive:(GradientArchive_GradientStop*)arg1 archiver:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
@end
