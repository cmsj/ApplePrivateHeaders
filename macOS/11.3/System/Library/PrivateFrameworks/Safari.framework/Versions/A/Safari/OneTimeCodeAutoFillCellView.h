/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/ColorInvertingTableCellView.h>

@class NSView, NSTextField, NSLayoutConstraint, SFAutoFillOneTimeCode;

@interface OneTimeCodeAutoFillCellView : ColorInvertingTableCellView {

	NSView* _iconView;
	NSTextField* _primaryLabelTextField;
	NSTextField* _secondaryLabelTextField;
	NSLayoutConstraint* _iconViewWidthContstraint;
	SFAutoFillOneTimeCode* _oneTimeCode;

}

@property (nonatomic,retain) SFAutoFillOneTimeCode * oneTimeCode;              //@synthesize oneTimeCode=_oneTimeCode - In the implementation block
+(CGSize)sizeWithOneTimeCode:(id)arg1 ;
-(char)wantsUpdateLayer;
-(void)awakeFromNib;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)configureWithOneTimeCode:(id)arg1 formURL:(id)arg2 ;
-(void)_updateMessagesColor;
-(void)setOneTimeCode:(SFAutoFillOneTimeCode *)arg1 ;
-(SFAutoFillOneTimeCode *)oneTimeCode;
@end
