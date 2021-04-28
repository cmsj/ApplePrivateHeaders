/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/IOBluetoothUI.framework/Versions/A/IOBluetoothUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>

@interface IOBluetoothObjectPushUIController : NSWindowController
+(id)alloc;
-(char)isKindOfClass:(Class)arg1 ;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(void)runModal;
-(void)stop;
-(int)beginSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void*)arg4 ;
-(id)getDevice;
-(id)getTitle;
-(void)runPanel;
-(void)setIconImage:(id)arg1 ;
-(id)initObjectPushWithBluetoothDevice:(id)arg1 withFiles:(id)arg2 delegate:(id)arg3 ;
-(char)isTransferInProgress;
@end
