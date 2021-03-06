/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <ViewBridge/NSRemoteViewController.h>

@interface AUAudioUnitRemoteViewController : NSRemoteViewController {

	BOOL _sizePending;

}
+(void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_fetchViewControllerForRemoteV2:(id)arg1 audioUnitID:(id)arg2 audioUnit:(id)arg3 serviceName:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)_postUnhandledKeyboardEvent:(id)arg1 owner:(unsigned)arg2 ;
+(void)postEventToHost:(id)arg1 owner:(unsigned)arg2 ;
+(void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)exportedInterface;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(void)viewWillLayout;
-(void)sendUnhandledEvent:(id)arg1 owner:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
@end

