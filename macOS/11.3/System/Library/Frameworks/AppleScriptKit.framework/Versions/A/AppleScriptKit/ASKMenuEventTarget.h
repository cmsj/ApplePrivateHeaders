/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppleScriptKit.framework/Versions/A/AppleScriptKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMenuItem, ASKChooseMenuItemEventHandler, ASKUpdateMenuItemEventHandler;

@interface ASKMenuEventTarget : NSObject {

	NSMenuItem* _menuItem;
	ASKChooseMenuItemEventHandler* _chooseHandler;
	ASKUpdateMenuItemEventHandler* _updateHandler;

}
+(id)targetForMenuItem:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)validateMenuItem:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)action:(id)arg1 ;
-(void)setChooseHandler:(id)arg1 ;
-(id)initWithMenuItem:(id)arg1 ;
-(id)chooseHandler;
@end

