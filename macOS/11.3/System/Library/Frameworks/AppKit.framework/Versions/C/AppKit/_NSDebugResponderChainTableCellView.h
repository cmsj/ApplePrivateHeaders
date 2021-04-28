/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSTextField;

@interface _NSDebugResponderChainTableCellView : NSTableCellView {

	NSTextField* _secondaryLabel;

}

@property (retain) NSTextField * secondaryLabel;              //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
-(void)dealloc;
-(void)layout;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSTextField *)secondaryLabel;
-(void)setSecondaryLabel:(NSTextField *)arg1 ;
@end
