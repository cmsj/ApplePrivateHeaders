/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKConstraint.h>

@class SKNode, SKRange;

@interface SKOrientationConstraint : SKConstraint {

	SKNode* _node;
	SKRange* _offset;
	CGPoint _point;

}

@property (__weak) SKNode * node;               //@synthesize node=_node - In the implementation block
@property (assign) CGPoint point;               //@synthesize point=_point - In the implementation block
@property (copy) SKRange * offset;              //@synthesize offset=_offset - In the implementation block
+(char)supportsSecureCoding;
+(id)constraintOrientingToPoint:(CGPoint)arg1 inNode:(id)arg2 offset:(id)arg3 ;
+(id)constraintOrientingToNode:(id)arg1 offset:(id)arg2 ;
+(id)constraintOrientingToPoint:(CGPoint)arg1 offset:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SKNode *)node;
-(SKRange *)offset;
-(void)setOffset:(SKRange *)arg1 ;
-(CGPoint)point;
-(void)setNode:(SKNode *)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
-(char)isEqualToOrientationConstraint:(id)arg1 ;
-(id)initWithNode:(id)arg1 point:(CGPoint)arg2 offset:(id)arg3 ;
@end
