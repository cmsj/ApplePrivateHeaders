/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AppKit/NSWindow.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>

@class NSString;

@interface ABLargeTypeWindow : NSWindow <NSWindowDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)forceLTRString:(id)arg1 ;
+(void)showWithString:(id)arg1 onScreen:(id)arg2 ;
-(void)sendEvent:(id)arg1 ;
-(char)canBecomeKeyWindow;
-(char)canBecomeMainWindow;
-(void)windowDidResignMain:(id)arg1 ;
@end

