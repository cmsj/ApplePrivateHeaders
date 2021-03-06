/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <AppKit/NSPopoverColorWell.h>

@interface WKPopoverColorWell : NSPopoverColorWell {

	RetainPtr<NSColorList>* _suggestedColors;
	WeakObjCPtr<id<WKPopoverColorWellDelegate>> _webDelegate;

}

@property (assign,nonatomic,__weak) id<WKPopoverColorWellDelegate> webDelegate; 
+(id)_colorPopoverCreateIfNecessary:(char)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
-(void)_showPopover;
-(id<WKPopoverColorWellDelegate>)webDelegate;
-(void)setWebDelegate:(id<WKPopoverColorWellDelegate>)arg1 ;
-(void)setSuggestedColors:(id)arg1 ;
@end

