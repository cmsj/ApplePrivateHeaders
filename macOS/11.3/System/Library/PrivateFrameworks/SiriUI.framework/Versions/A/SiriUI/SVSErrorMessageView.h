/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>

@class NSStackView, SiriUIContentLabel, NSView, NSButton, NSString;

@interface SVSErrorMessageView : NSView {

	NSStackView* _stackView;
	SiriUIContentLabel* _headerLabel;
	SiriUIContentLabel* _subHeaderLabel;
	NSView* _actionButtonContainer;
	NSButton* _actionButton;
	NSString* _headerText;
	NSString* _subHeaderText;
	NSString* _actionButtonText;
	/*^block*/id _actionButtonBlock;

}

@property (nonatomic,retain) NSString * headerText;                    //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) NSString * subHeaderText;                 //@synthesize subHeaderText=_subHeaderText - In the implementation block
@property (nonatomic,retain) NSString * actionButtonText;              //@synthesize actionButtonText=_actionButtonText - In the implementation block
@property (nonatomic,copy) id actionButtonBlock;                       //@synthesize actionButtonBlock=_actionButtonBlock - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)fittingSize;
-(void)_createConstraints;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(id)actionButtonBlock;
-(void)setActionButtonBlock:(id)arg1 ;
-(void)_onActionButton:(id)arg1 ;
-(void)setSubHeaderText:(NSString *)arg1 ;
-(void)setActionButtonText:(NSString *)arg1 ;
-(NSString *)subHeaderText;
-(NSString *)actionButtonText;
@end

