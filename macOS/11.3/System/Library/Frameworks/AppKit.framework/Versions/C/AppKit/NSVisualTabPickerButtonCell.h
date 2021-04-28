/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface NSVisualTabPickerButtonCell : NSButtonCell {

	char _useExternalHitTesting;

}

@property (assign,nonatomic) char useExternalHitTesting;              //@synthesize useExternalHitTesting=_useExternalHitTesting - In the implementation block
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(char)_useHitTestInTrackMouse;
-(void)setUseExternalHitTesting:(char)arg1 ;
-(char)useExternalHitTesting;
@end
