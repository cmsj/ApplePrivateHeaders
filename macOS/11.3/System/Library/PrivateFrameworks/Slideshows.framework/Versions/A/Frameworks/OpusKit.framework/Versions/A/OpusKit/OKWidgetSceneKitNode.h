/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <SceneKit/SCNNode.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKWidgetSceneKitViewProxyExports.h>

@class OKWidgetSceneKitView, NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface OKWidgetSceneKitNode : SCNNode <OKSettingsSupport, OKWidgetSceneKitViewProxyExports> {

	OKWidgetSceneKitView* _widgetScene;
	NSString* _c3dFile;
	NSArray* _nodeNames;
	NSDictionary* _animationsPath;
	NSMutableDictionary* _animations;
	NSDictionary* _options;
	NSArray* _constraints;

}

@property (assign,nonatomic) OKWidgetSceneKitView * widgetScene;              //@synthesize widgetScene=_widgetScene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(void)setupConstraints;
-(id)settingName;
-(void)setSettingName:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(SCNVector3)settingScale;
-(void)setSettingScale:(SCNVector3)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)loadSettings:(id)arg1 ;
-(SCNVector3)settingPosition;
-(void)setSettingPosition:(SCNVector3)arg1 ;
-(SCNVector4)settingRotation;
-(void)setSettingRotation:(SCNVector4)arg1 ;
-(double)settingOpacity;
-(void)setSettingOpacity:(double)arg1 ;
-(char)settingHidden;
-(void)setSettingHidden:(char)arg1 ;
-(id)settingChildNodes;
-(void)setSettingChildNodes:(id)arg1 ;
-(unsigned long long)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(void)setWidgetScene:(OKWidgetSceneKitView *)arg1 ;
-(void)parentLoaded;
-(id)settingC3dFile;
-(void)setSettingC3dFile:(id)arg1 ;
-(id)settingOptions;
-(void)setSettingOptions:(id)arg1 ;
-(void)setSettingNodeNames:(id)arg1 ;
-(void)setSettingAnimations:(id)arg1 ;
-(void)setSettingConstraints:(id)arg1 ;
-(OKWidgetSceneKitView *)widgetScene;
-(void)setupFile;
-(void)setupAnimations;
-(void)setupOptions;
-(void)playAnimationWithKey:(id)arg1 removeOnCompletion:(char)arg2 ;
-(id)settingNodeNames;
-(id)settingAnimations;
-(id)settingConstraints;
@end

