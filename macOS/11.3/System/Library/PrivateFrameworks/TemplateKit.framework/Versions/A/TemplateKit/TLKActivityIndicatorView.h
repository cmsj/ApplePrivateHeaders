/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKView.h>

@class TLKMultilineText, NSProgressIndicator, TLKLabel;

@interface TLKActivityIndicatorView : TLKView {

	TLKMultilineText* _subtitle;
	NSProgressIndicator* _activityIndicator;
	TLKLabel* _subtitleLabel;

}

@property (nonatomic,retain) NSProgressIndicator * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) TLKLabel * subtitleLabel;                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TLKMultilineText * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
-(TLKMultilineText *)subtitle;
-(void)setSubtitle:(TLKMultilineText *)arg1 ;
-(void)viewDidChangeEffectiveAppearance;
-(void)viewDidMoveToWindow;
-(TLKLabel *)subtitleLabel;
-(void)setSubtitleLabel:(TLKLabel *)arg1 ;
-(NSProgressIndicator *)activityIndicator;
-(void)setActivityIndicator:(NSProgressIndicator *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(id)subtitleLabelText;
-(char)usesDefaultLayoutMargins;
@end

