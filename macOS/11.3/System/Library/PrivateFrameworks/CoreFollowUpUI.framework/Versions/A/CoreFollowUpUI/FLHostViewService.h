/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/Versions/A/CoreFollowUpUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSServiceViewController.h>
#import <libobjc.A.dylib/FLExtensionViewServiceInterface.h>

@class NSWindow, NSString;

@interface FLHostViewService : NSServiceViewController <FLExtensionViewServiceInterface> {

	NSWindow* _window;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)exportedInterface;
-(void)loadView;
-(id)serviceViewControllerInterface;
-(void)connectToContextWithSessionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

