/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUIMac.framework/Versions/A/StoreKitUIMac
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class _SKUIStoreProductRemoteViewController, NSObject;

@interface SKUIStoreProductViewController : NSViewController {

	_SKUIStoreProductRemoteViewController* _remoteViewController;
	NSObject*<OS_dispatch_queue> _loadProductQueue;
	NSObject*<OS_dispatch_semaphore> _remoteViewControllerSemaphore;

}
-(id)init;
-(void)loadView;
-(void)viewWillLayout;
-(void)loadProductWithParameters:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_loadRemoteViewController;
-(void)_serviceLoadProductWithParameters:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

