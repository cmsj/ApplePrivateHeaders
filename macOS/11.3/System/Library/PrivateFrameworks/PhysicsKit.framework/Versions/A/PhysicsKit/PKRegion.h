/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/Versions/A/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKRegion : NSObject <NSCopying, NSSecureCoding> {

	int _shape;
	BOOL _isExclusive;
	vec4 _halfExtent;
	shared_ptr<PKCPathHolder>* _path;
	int _regionOp;
	int _shape2;
	vec4 _halfExtent2;
	shared_ptr<PKCPathHolder>* _path2;

}

@property (nonatomic,readonly) CGPathRef path; 
+(char)supportsSecureCoding;
+(id)infiniteRegion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPathRef)path;
-(id)initWithPath:(CGPathRef)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(char)isInfinite;
-(id)initWithRadius:(float)arg1 ;
-(id)inverseRegion;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(char)isEqualToRegion:(id)arg1 ;
@end

