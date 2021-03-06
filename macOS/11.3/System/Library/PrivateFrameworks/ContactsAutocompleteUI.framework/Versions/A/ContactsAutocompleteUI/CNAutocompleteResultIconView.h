/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/Versions/A/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/ContactsAutocompleteUI-Structs.h>
#import <AppKit/NSTableCellView.h>

@class NSImage, NSImageView;

@interface CNAutocompleteResultIconView : NSTableCellView {

	NSImage* _image;
	NSImage* _selectedImage;
	NSImageView* _iconView;

}

@property (nonatomic,retain) NSImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSImage * selectedImage;              //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) NSImageView * iconView;               //@synthesize iconView=_iconView - In the implementation block
+(id)iconViewWithImage:(id)arg1 ;
-(void)setImage:(NSImage *)arg1 ;
-(CGSize)fittingSize;
-(NSImage *)image;
-(void)setBackgroundStyle:(long long)arg1 ;
-(NSImageView *)iconView;
-(void)setIconView:(NSImageView *)arg1 ;
-(void)setSelectedImage:(NSImage *)arg1 ;
-(NSImage *)selectedImage;
-(void)setupConstraintsWithLeftMargin:(double)arg1 rightMargin:(double)arg2 imageSize:(CGSize)arg3 ;
-(void)updateIconViewForDisplayOverBackgroundWithStyle:(long long)arg1 ;
-(id)initWithImage:(id)arg1 selectedImage:(id)arg2 leftMargin:(double)arg3 rightMargin:(double)arg4 ;
@end

