/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <TemplateKit/TLKView.h>

@class NSString, TLKStackView, TLKLabel;

@interface TLKButtonView : TLKView {

	NSString* _title;
	TLKStackView* _stackView;
	TLKLabel* _titleLabel;

}

@property (nonatomic,retain) TLKStackView * stackView;              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) TLKLabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                      //@synthesize title=_title - In the implementation block
+(NSEdgeInsets)defaultLayoutMargins;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(TLKStackView *)stackView;
-(void)setStackView:(TLKStackView *)arg1 ;
-(TLKLabel *)titleLabel;
-(void)setTitleLabel:(TLKLabel *)arg1 ;
-(id)setupContentView;
-(void)observedPropertiesChanged;
@end

