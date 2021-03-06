/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/Versions/A/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSString, NSImageView, NSTextField, NSView;

@interface BCInvalidCertificatView : NSView {

	NSString* _host;
	NSImageView* _insecureIcon;
	NSTextField* _titleLabel;
	NSTextField* _messageLabel;
	NSView* _contentView;

}

@property (nonatomic,retain) NSString * host;                         //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSImageView * insecureIcon;              //@synthesize insecureIcon=_insecureIcon - In the implementation block
@property (nonatomic,retain) NSTextField * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSTextField * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(void)updateLayer;
-(NSView *)contentView;
-(void)setContentView:(NSView *)arg1 ;
-(NSTextField *)titleLabel;
-(void)setTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)messageLabel;
-(void)setupConstraints;
-(void)setMessageLabel:(NSTextField *)arg1 ;
-(id)initWithHost:(id)arg1 ;
-(void)setupSubviews;
-(NSImageView *)insecureIcon;
-(void)setInsecureIcon:(NSImageView *)arg1 ;
@end

