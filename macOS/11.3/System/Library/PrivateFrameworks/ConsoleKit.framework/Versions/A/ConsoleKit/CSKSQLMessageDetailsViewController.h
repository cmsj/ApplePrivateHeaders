/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConsoleKit/CSKDetailsViewController.h>

@class CSKMessage, NSFont, CSKTextViewController;

@interface CSKSQLMessageDetailsViewController : CSKDetailsViewController {

	CSKMessage* _message;
	NSFont* _defaultFont;
	CSKTextViewController* _textViewController;

}

@property (nonatomic,retain) CSKTextViewController * textViewController;              //@synthesize textViewController=_textViewController - In the implementation block
@property (nonatomic,retain) CSKMessage * message;                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSFont * defaultFont;                                    //@synthesize defaultFont=_defaultFont - In the implementation block
-(CSKMessage *)message;
-(void)setMessage:(CSKMessage *)arg1 ;
-(void)awakeFromNib;
-(void)viewDidLoad;
-(NSFont *)defaultFont;
-(void)setDefaultFont:(NSFont *)arg1 ;
-(id)tabViewController:(id)arg1 viewForTabItemAtIndex:(unsigned long long)arg2 ;
-(void)_updateMessageDetailsWithCurrentMessage;
-(void)_updateTextViewFont:(id)arg1 ;
-(void)setTextViewController:(CSKTextViewController *)arg1 ;
-(CSKTextViewController *)textViewController;
@end

