/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSUI/AOSUISpyglassBaseViewController.h>

@class NSString, NSTextField, NSButton;

@interface AOSUIMsgActionViewController : AOSUISpyglassBaseViewController {

	NSString* _localizedTitle;
	NSString* _localizedDescription;
	NSString* _localizedActionTitle;
	/*^block*/id _actionHandler;
	NSTextField* _messageTitle;
	NSTextField* _messageDescription;
	NSButton* _actionTitle;

}

@property (nonatomic,retain) NSTextField * messageTitle;                    //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,retain) NSTextField * messageDescription;              //@synthesize messageDescription=_messageDescription - In the implementation block
@property (nonatomic,retain) NSButton * actionTitle;                        //@synthesize actionTitle=_actionTitle - In the implementation block
@property (copy) NSString * localizedTitle;                                 //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (copy) NSString * localizedDescription;                           //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * localizedActionTitle;                           //@synthesize localizedActionTitle=_localizedActionTitle - In the implementation block
@property (copy) id actionHandler;                                          //@synthesize actionHandler=_actionHandler - In the implementation block
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(id)nibName;
-(id)nibBundle;
-(void)viewDidLoad;
-(NSButton *)actionTitle;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)initWithAccountManager:(id)arg1 ;
-(void)helpPressed:(id)arg1 ;
-(void)setActionTitle:(NSButton *)arg1 ;
-(NSString *)localizedActionTitle;
-(void)actionButtonPressed:(id)arg1 ;
-(void)_setGenericStrings;
-(NSTextField *)messageTitle;
-(NSTextField *)messageDescription;
-(void)setLocalizedActionTitle:(NSString *)arg1 ;
-(void)setMessageTitle:(NSTextField *)arg1 ;
-(void)setMessageDescription:(NSTextField *)arg1 ;
@end

