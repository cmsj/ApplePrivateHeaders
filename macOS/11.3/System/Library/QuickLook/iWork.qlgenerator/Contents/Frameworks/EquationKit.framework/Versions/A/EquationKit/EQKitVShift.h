/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/EquationKit.framework/Versions/A/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <EquationKit/EQKitBox.h>

@class EQKitBox;

@interface EQKitVShift : EQKitBox {

	EQKitBox* mBox;
	double mOffset;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (nonatomic,readonly) double offset; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(double)offset;
-(double)width;
-(double)height;
-(double)depth;
-(EQKitBox *)box;
-(char)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(char)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithBox:(id)arg1 offset:(double)arg2 ;
@end

