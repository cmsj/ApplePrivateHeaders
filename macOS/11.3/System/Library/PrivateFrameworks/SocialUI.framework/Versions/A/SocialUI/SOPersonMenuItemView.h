/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSImageView, NSTextField, NSString;

@interface SOPersonMenuItemView : NSView {

	NSImageView* _checkmarkImageView;
	NSTextField* _titleTextField;
	NSTextField* _labelTextField;
	NSImageView* _iconImageView;

}

@property (retain) NSImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (retain) NSTextField * titleTextField;                  //@synthesize titleTextField=_titleTextField - In the implementation block
@property (retain) NSTextField * labelTextField;                  //@synthesize labelTextField=_labelTextField - In the implementation block
@property (retain) NSImageView * iconImageView;                   //@synthesize iconImageView=_iconImageView - In the implementation block
@property (copy) NSString * title; 
@property (copy) NSString * label; 
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)title;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(NSTextField *)titleTextField;
-(NSImageView *)iconImageView;
-(void)setIconImageView:(NSImageView *)arg1 ;
-(void)setTitleTextField:(NSTextField *)arg1 ;
-(NSTextField *)labelTextField;
-(NSImageView *)checkmarkImageView;
-(void)setCheckmarkImageView:(NSImageView *)arg1 ;
-(void)setLabelTextField:(NSTextField *)arg1 ;
@end

