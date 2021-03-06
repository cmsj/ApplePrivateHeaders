/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/Versions/A/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {

	SKC3DNode* _skc3DNode;

}

@property (assign) CGSize viewportSize; 
@property (nonatomic,retain) SCNScene * scnScene; 
@property (assign,nonatomic) double sceneTime; 
@property (getter=isPlaying) char playing; 
@property (assign,nonatomic) char loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) char autoenablesDefaultLighting; 
+(char)supportsSecureCoding;
+(id)nodeWithViewportSize:(CGSize)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isPlaying;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(void)commonInit;
-(void)setPlaying:(char)arg1 ;
-(char)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(char)arg1 ;
-(SCNNode *)pointOfView;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(3)projectPoint:;
-(3)unprojectPoint:;
-(CGSize)viewportSize;
-(void)setViewportSize:(CGSize)arg1 ;
-(void)_didMakeBackingNode;
-(SKCNode*)_makeBackingNode;
-(id)initWithViewportSize:(CGSize)arg1 ;
-(void)setScnScene:(SCNScene *)arg1 ;
-(SCNScene *)scnScene;
-(void)_scnSceneDidUpdate:(id)arg1 ;
-(void)_renderForTime:(double)arg1 ;
@end

