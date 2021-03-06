/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InternetAccounts/InternetAccounts-Structs.h>
#import <AppKit/NSTableRowView.h>

@class NSButton, NSTextField, NSImageView, NSProgressIndicator, IAApplication, NSString, NSImage;

@interface IAAppTableRow : NSTableRowView {

	NSButton* _checkbox;
	NSTextField* _appNameField;
	NSTextField* _secondaryTextField;
	NSImageView* _icon;
	NSProgressIndicator* _spinner;
	IAApplication* _application;
	NSString* _serviceDisplayName;
	NSString* _appDisplayName;
	NSString* _secondaryText;
	NSImage* _originalIcon;
	id _delegate;
	char _spinOnSelection;
	char _disableControls;
	char _controlsAreDisabled;

}

@property (nonatomic,retain) IAApplication * application;              //@synthesize application=_application - In the implementation block
@property (retain) NSString * serviceDisplayName;                      //@synthesize serviceDisplayName=_serviceDisplayName - In the implementation block
@property (retain) NSString * appDisplayName;                          //@synthesize appDisplayName=_appDisplayName - In the implementation block
@property (nonatomic,retain) NSString * secondaryText;                 //@synthesize secondaryText=_secondaryText - In the implementation block
@property (retain) id delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign) char disableControls;                               //@synthesize disableControls=_disableControls - In the implementation block
@property (assign) char spinOnSelection;                               //@synthesize spinOnSelection=_spinOnSelection - In the implementation block
+(id)createFromNib;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)select;
-(IAApplication *)application;
-(void)drawRect:(CGRect)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(void)stopSpinner;
-(void)startSpinner;
-(char)isSpinning;
-(void)setSpinOnSelection:(char)arg1 ;
-(void)syncUI;
-(void)checkboxClicked:(id)arg1 ;
-(char)spinOnSelection;
-(void)setApplication:(IAApplication *)arg1 ;
-(void)setServiceDisplayName:(NSString *)arg1 ;
-(void)setDisableControls:(char)arg1 ;
-(char)disableControls;
-(void)deselect;
-(NSString *)serviceDisplayName;
@end

