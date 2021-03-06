/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class QCSCN_View;

@interface QCSCN_EventHandler : NSObject {

	id _reserved;

}

@property (readonly) QCSCN_View * view; 
-(void)dealloc;
-(id)init;
-(QCSCN_View *)view;
-(void)setView:(QCSCN_View *)arg1 ;
-(char)mouseDown:(id)arg1 ;
-(void)viewWillDraw;
-(char)scrollWheel:(id)arg1 ;
-(char)mouseDragged:(id)arg1 ;
-(char)mouseUp:(id)arg1 ;
-(char)magnifyWithEvent:(id)arg1 ;
-(char)rotateWithEvent:(id)arg1 ;
-(char)wantsRedraw;
-(void)viewDidDraw;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(void)sceneWillChange;
-(void)sceneDidChange;
@end

