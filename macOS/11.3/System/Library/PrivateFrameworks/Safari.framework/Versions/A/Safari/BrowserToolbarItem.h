/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSToolbarItem.h>

@interface BrowserToolbarItem : NSToolbarItem {

	unsigned long long _handledMouseDownModifiersMask;

}

@property (assign,nonatomic) unsigned long long handledMouseDownModifiersMask;              //@synthesize handledMouseDownModifiersMask=_handledMouseDownModifiersMask - In the implementation block
-(void)validate;
-(char)_allowToolbarToStealEvent:(id)arg1 ;
-(id)initWithItemIdentifier:(id)arg1 target:(id)arg2 button:(id)arg3 ;
-(id)initWithItemIdentifier:(id)arg1 target:(id)arg2 view:(id)arg3 ;
-(void)setHandledMouseDownModifiersMask:(unsigned long long)arg1 ;
-(char)_viewMightProcessModifiedMouseDownEvent;
-(unsigned long long)handledMouseDownModifiersMask;
@end

