/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Frameworks/OpusKit.framework/Versions/A/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@class OKWidgetView, NSString, OFNSImageView, OFNSView, SCNView, OKSCNOrigamiNode;

@interface OKWidgetSCNOrigamiViewProxy : OKWidgetView <SCNSceneRendererDelegate> {

	OKWidgetView* _frontWidgetView;
	OKWidgetView* _backWidgetView;
	NSString* _backSnapshotWidgetName;
	OKWidgetView* _backSnapshotWidgetView;
	OFNSImageView* _backSnapshotView;
	OFNSView* _backContents;
	SCNView* _sceneView;
	OKSCNOrigamiNode* _origamiNode;

}

@property (assign,nonatomic) OKSCNOrigamiNode * origamiNode;              //@synthesize origamiNode=_origamiNode - In the implementation block
@property (assign,nonatomic) SCNView * sceneView;                         //@synthesize sceneView=_sceneView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(SCNView *)sceneView;
-(void)setSceneView:(SCNView *)arg1 ;
-(void)renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)prepareForReload;
-(char)prepareForDisplay:(char)arg1 ;
-(id)initWithWidget:(id)arg1 ;
-(OKSCNOrigamiNode *)origamiNode;
-(void)toggleAnimation;
-(void)_prepareBackContentsIfNeeded;
-(void)_updateBackSnapshotView;
-(void)_prepareBackSnapshotWidgetView;
-(void)_prepare:(char)arg1 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(void)prepareForRefresh;
-(void)setSettingFrontWidget:(id)arg1 ;
-(void)setSettingBackWidget:(id)arg1 ;
-(void)setSettingBackSnapshotWidgetName:(id)arg1 ;
-(void)setSettingDefaultState:(id)arg1 ;
-(void)_widgetViewReadinessNotification:(id)arg1 ;
-(void)setOrigamiNode:(OKSCNOrigamiNode *)arg1 ;
@end

