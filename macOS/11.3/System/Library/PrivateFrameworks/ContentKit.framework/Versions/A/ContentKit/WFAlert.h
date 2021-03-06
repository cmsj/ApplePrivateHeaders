/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFAlertPresenter;
@class NSString, WFTextFieldConfiguration, WFDatePickerConfiguration, NSArray, NSDate, NSMutableArray, WFAlertButton, NSError;

@interface WFAlert : NSObject {

	char _prefersItemPickerSheetPresentation;
	NSString* _title;
	NSString* _message;
	long long _preferredStyle;
	WFTextFieldConfiguration* _textFieldConfiguration;
	WFDatePickerConfiguration* _datePickerConfiguration;
	NSArray* _textFieldResults;
	NSDate* _datePickerResult;
	id<WFAlertPresenter> _presenter;
	NSMutableArray* _mutableButtons;
	NSMutableArray* _mutableTextFieldConfigurationHandlers;
	unsigned long long _dialogAttributionMode;

}

@property (nonatomic,readonly) WFAlertButton * escapeButton; 
@property (assign,nonatomic,__weak) id<WFAlertPresenter> presenter; 
@property (nonatomic,readonly) NSArray * textFieldConfigurationHandlers; 
@property (nonatomic,readonly) NSError * associatedError; 
@property (assign,nonatomic,__weak) id<WFAlertPresenter> presenter;                               //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableButtons;                                     //@synthesize mutableButtons=_mutableButtons - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableTextFieldConfigurationHandlers;              //@synthesize mutableTextFieldConfigurationHandlers=_mutableTextFieldConfigurationHandlers - In the implementation block
@property (assign,nonatomic) char prefersItemPickerSheetPresentation;                             //@synthesize prefersItemPickerSheetPresentation=_prefersItemPickerSheetPresentation - In the implementation block
@property (assign,nonatomic) unsigned long long dialogAttributionMode;                            //@synthesize dialogAttributionMode=_dialogAttributionMode - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long preferredStyle;                                            //@synthesize preferredStyle=_preferredStyle - In the implementation block
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) WFTextFieldConfiguration * textFieldConfiguration;                   //@synthesize textFieldConfiguration=_textFieldConfiguration - In the implementation block
@property (nonatomic,retain) WFDatePickerConfiguration * datePickerConfiguration;                 //@synthesize datePickerConfiguration=_datePickerConfiguration - In the implementation block
@property (nonatomic,copy) NSArray * textFieldResults;                                            //@synthesize textFieldResults=_textFieldResults - In the implementation block
@property (nonatomic,copy) NSDate * datePickerResult;                                             //@synthesize datePickerResult=_datePickerResult - In the implementation block
+(id)alertWithError:(id)arg1 ;
+(id)alertWithPreferredStyle:(long long)arg1 ;
+(id)alertWithError:(id)arg1 confirmationHandler:(/*^block*/id)arg2 ;
-(id)init;
-(NSString *)message;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)title;
-(NSArray *)buttons;
-(void)addButton:(id)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(id<WFAlertPresenter>)presenter;
-(void)setPresenter:(id<WFAlertPresenter>)arg1 ;
-(NSError *)associatedError;
-(void)setPreferredStyle:(long long)arg1 ;
-(void)addTextFieldWithConfigurationHandler:(/*^block*/id)arg1 ;
-(long long)preferredStyle;
-(WFAlertButton *)escapeButton;
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFTextFieldConfiguration *)textFieldConfiguration;
-(void)setTextFieldConfiguration:(WFTextFieldConfiguration *)arg1 ;
-(WFDatePickerConfiguration *)datePickerConfiguration;
-(void)setDatePickerConfiguration:(WFDatePickerConfiguration *)arg1 ;
-(NSArray *)textFieldResults;
-(void)setTextFieldResults:(NSArray *)arg1 ;
-(NSDate *)datePickerResult;
-(void)setDatePickerResult:(NSDate *)arg1 ;
-(NSMutableArray *)mutableButtons;
-(void)setMutableButtons:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableTextFieldConfigurationHandlers;
-(void)setMutableTextFieldConfigurationHandlers:(NSMutableArray *)arg1 ;
-(char)prefersItemPickerSheetPresentation;
-(void)setPrefersItemPickerSheetPresentation:(char)arg1 ;
-(unsigned long long)dialogAttributionMode;
-(void)setDialogAttributionMode:(unsigned long long)arg1 ;
-(NSArray *)textFieldConfigurationHandlers;
@end

