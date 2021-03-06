/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>
#import <libobjc.A.dylib/WKInspectorViewControllerDelegate.h>

@class NSString;

@interface WKRemoteWebInspectorProxyObjCAdapter : NSObject <NSWindowDelegate, WKInspectorViewControllerDelegate> {

	RemoteWebInspectorProxy* _inspectorProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(CGRect)arg3 ;
-(void)inspectorViewControllerInspectorDidCrash:(id)arg1 ;
-(char)inspectorViewControllerInspectorIsUnderTest:(id)arg1 ;
-(id)initWithRemoteWebInspectorProxy:(RemoteWebInspectorProxy*)arg1 ;
-(void)inspectorWKWebViewDidBecomeActive:(id)arg1 ;
@end

