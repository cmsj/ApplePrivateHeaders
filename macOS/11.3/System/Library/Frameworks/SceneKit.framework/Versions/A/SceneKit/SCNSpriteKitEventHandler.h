/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKScene, NSMutableDictionary;

@interface SCNSpriteKitEventHandler : NSObject {

	SKScene* _scene;
	NSMutableDictionary* _touchMap;
	char _mouseIsDown;
	char _rightMouseIsDown;

}

@property (nonatomic,retain) SKScene * scene;              //@synthesize scene=_scene - In the implementation block
-(void)dealloc;
-(id)init;
-(char)acceptsFirstResponder;
-(void)pressureChangeWithEvent:(id)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(char)mouseMoved:(id)arg1 ;
-(char)rightMouseDown:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)rightMouseUp:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(char)rightMouseDragged:(id)arg1 ;
-(SKScene *)scene;
-(void)setScene:(SKScene *)arg1 ;
@end

