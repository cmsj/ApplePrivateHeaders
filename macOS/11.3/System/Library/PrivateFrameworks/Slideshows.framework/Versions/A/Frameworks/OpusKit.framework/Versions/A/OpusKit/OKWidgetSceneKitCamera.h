/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetSceneKitNode.h>

@class SCNCamera;

@interface OKWidgetSceneKitCamera : OKWidgetSceneKitNode {

	SCNCamera* _camera;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingCameraName:(id)arg1 ;
-(void)setSettingZNear:(double)arg1 ;
-(void)setSettingZFar:(double)arg1 ;
-(void)setSettingYFov:(double)arg1 ;
-(void)setSettingXFov:(double)arg1 ;
-(void)setSettingUsesOrthographicProjection:(char)arg1 ;
-(id)settingCameraName;
-(double)settingZNear;
-(double)settingZFar;
-(double)settingYFov;
-(double)settingXFov;
-(char)settingUsesOrthographicProjection;
@end

