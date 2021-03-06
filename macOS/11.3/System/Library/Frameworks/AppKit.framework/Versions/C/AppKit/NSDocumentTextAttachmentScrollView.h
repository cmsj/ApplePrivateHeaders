/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSScrollView.h>

@class NSImageView, NSView, NSLayoutManager;

@interface NSDocumentTextAttachmentScrollView : NSScrollView {

	NSImageView* _imageView;
	NSView* _expandedView;
	NSLayoutManager* _layoutManager;
	unsigned long long _charIndex;
	char _isExpanded;

}
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)image;
-(id)layoutManager;
-(void)setExpanded:(char)arg1 ;
-(char)isExpanded;
-(void)toggleExpanded:(id)arg1 ;
-(unsigned long long)charIndex;
-(id)expandedView;
-(void)setExpandedView:(id)arg1 ;
-(void)setCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 ;
@end

