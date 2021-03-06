/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AXVScrollMenuSuggestedEventPayload : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_AX9 _delta;
	double _acceleration;
	CGPoint _point;

}

@property (assign,nonatomic) SCD_Struct_AX9 delta;              //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) double acceleration;               //@synthesize acceleration=_acceleration - In the implementation block
@property (assign,nonatomic) CGPoint point;                     //@synthesize point=_point - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)point;
-(SCD_Struct_AX9)delta;
-(void)setDelta:(SCD_Struct_AX9)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
-(double)acceleration;
-(void)setAcceleration:(double)arg1 ;
-(id)initWithDelta:(SCD_Struct_AX9)arg1 acceleration:(double)arg2 point:(CGPoint)arg3 ;
@end

