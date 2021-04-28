/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/_NSQuickAction.h>

@protocol _NSServiceAction;
@interface _NSLegacyServiceQuickAction : _NSQuickAction {

	id<_NSServiceAction> _legacyServiceAction;

}

@property (readonly) id<_NSServiceAction> _legacyServiceAction;              //@synthesize legacyServiceAction=_legacyServiceAction - In the implementation block
+(id)quickActionForPresentation:(id)arg1 serviceAction:(id)arg2 ;
-(id)init;
-(long long)type;
-(id)_bundleURL;
-(id)title;
-(id<_NSServiceAction>)_legacyServiceAction;
-(char)canMoveToTrash;
-(void)performWithItemSource:(id)arg1 ;
-(void)loadIconOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadColorOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)_validationClass;
-(Class)_preferencesClass;
-(char)hasIcon;
-(char)hasColor;
-(char)needsItemSource;
-(id)initForPresentation:(id)arg1 legacyServiceAction:(id)arg2 ;
@end
