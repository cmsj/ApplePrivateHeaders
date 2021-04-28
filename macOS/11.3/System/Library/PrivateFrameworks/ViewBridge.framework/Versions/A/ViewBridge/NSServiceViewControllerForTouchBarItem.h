/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <ViewBridge/NSServiceViewController.h>

@class NSString;

@interface NSServiceViewControllerForTouchBarItem : NSServiceViewController {

	NSString* _touchBarItemIdentifier;
	unsigned _observingBridge : 1;

}
+(id)controllerWithTouchBarItem:(id)arg1 andAppearance:(id)arg2 ;
+(id)touchBarProvidersForWindow:(id)arg1 includingWindowItself:(char)arg2 ;
+(id)touchBarsForProviders:(id)arg1 ;
+(id)describeTouchBars:(id)arg1 ;
+(void)showOverlayTouchBar:(id)arg1 withOptions:(id)arg2 ;
+(char)hideOverlayTouchBar:(id)arg1 ;
+(void)touchBarProviders:(id)arg1 inWindow:(id)arg2 includingWindowItself:(char)arg3 ;
+(id)viewServiceTouchBarControllerIdentifier:(id)arg1 ;
+(void)touchBarItemViewAbsentFromViewHierarchy:(id)arg1 ;
+(void)initialize;
+(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_didAssociateWithHostWindow;
-(void)informRemoteViewOfNewSize:(CGSize)arg1 ;
-(void)observeChangeToCompressionItemContainingItem:(id)arg1 ;
-(void)prepareItemsOfBar:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(char)_isSecondary;
-(id)initWithAppearance:(id)arg1 ;
-(unsigned long long)awakeFromRemoteView;
-(char)remoteViewSizeChanged:(CGSize)arg1 transaction:(id)arg2 ;
@end
