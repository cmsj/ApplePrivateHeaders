/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKNode;

@interface IKLink : NSObject {

	float _angleInitial;
	float _angle;
	float _length;
	SKNode* _node;
	GLKVector2 _position;
	GLKVector2 _size;

}

@property (nonatomic,retain) SKNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) _GLKVector2 position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) float angleInitial;                //@synthesize angleInitial=_angleInitial - In the implementation block
@property (nonatomic,readonly) float angle;                     //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) float length;                      //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) _GLKVector2 size;                  //@synthesize size=_size - In the implementation block
-(_GLKVector2)size;
-(float)length;
-(void)setLength:(float)arg1 ;
-(SKNode *)node;
-(void)setSize:(_GLKVector2)arg1 ;
-(_GLKVector2)position;
-(void)setPosition:(_GLKVector2)arg1 ;
-(void)rotateByAngle:(float)arg1 ;
-(void)setNode:(SKNode *)arg1 ;
-(float)angle;
-(id)initWithNode:(id)arg1 ;
-(double)normalizeAngle:(double)arg1 ;
-(float)angleInitial;
-(void)setAngleInitial:(float)arg1 ;
@end

