/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/NSRemoteViewController.h>

@protocol QLRemoteViewControllerDelegate;
@class NSString;

@interface QLRemoteViewController : NSRemoteViewController {

	NSString* _serviceName;
	NSString* _serviceViewControllerClass;
	id<QLRemoteViewControllerDelegate> _delegate;

}

@property (copy) NSString * serviceName;                                     //@synthesize serviceName=_serviceName - In the implementation block
@property (copy) NSString * serviceViewControllerClass;                      //@synthesize serviceViewControllerClass=_serviceViewControllerClass - In the implementation block
@property (__weak) id<QLRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)warmUpServiceName:(id)arg1 withViewControllerClassNamed:(id)arg2 ;
+(void)connectToUIServiceViewControllerWithServiceName:(id)arg1 serviceViewControllerClass:(id)arg2 completion:(/*^block*/id)arg3 ;
+(char)inhibitFirstResponder;
-(NSString *)serviceViewControllerClass;
-(void)setServiceViewControllerClass:(NSString *)arg1 ;
-(id<QLRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<QLRemoteViewControllerDelegate>)arg1 ;
-(NSString *)serviceName;
-(id)exportedInterface;
-(void)setServiceName:(NSString *)arg1 ;
-(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)doubleClickOnPreviewContent;
-(void)updateFullScreenFromMagnification:(double)arg1 ;
@end

