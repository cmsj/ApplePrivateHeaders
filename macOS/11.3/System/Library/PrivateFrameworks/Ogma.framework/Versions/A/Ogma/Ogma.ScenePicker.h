/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Ogma.framework/Versions/A/Ogma
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Ogma/Ogma.OgmaScene.h>

@interface Ogma.ScenePicker : Ogma.OgmaScene {

	 sceneList;
	 pickerView;
	 launchButtonAction;
	 launchAsNewProcess;
	 loadAsClient;

}
-(id)init;
-(void)launch;
-(void)toggleLaunchAsNewProcessWithSender:(id)arg1 ;
-(void)toggleRunAsClientWithSender:(id)arg1 ;
-(void)launchInCurrentProcessWithSelectedScene:(id)arg1 ;
-(void)launchInNewProcessWithSelectedScene:(id)arg1 ;
@end

