/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol SKStoreProductViewControllerDelegate;
@class SKUIStoreProductViewController;

@interface SKStoreProductViewController : NSViewController {

	SKUIStoreProductViewController* _productViewController;
	id<SKStoreProductViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKStoreProductViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SKStoreProductViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SKStoreProductViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)loadProductWithParameters:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
