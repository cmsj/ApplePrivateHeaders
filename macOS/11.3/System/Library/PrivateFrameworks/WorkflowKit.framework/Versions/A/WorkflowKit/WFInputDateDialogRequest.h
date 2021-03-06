/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDialogRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFDatePickerConfiguration, NSString, WFDialogButton;

@interface WFInputDateDialogRequest : WFDialogRequest <NSSecureCoding> {

	WFDatePickerConfiguration* _configuration;
	NSString* _message;
	WFDialogButton* _cancelButton;
	WFDialogButton* _doneButton;

}

@property (nonatomic,copy,readonly) WFDatePickerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                                     //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * cancelButton;                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,copy,readonly) WFDialogButton * doneButton;                            //@synthesize doneButton=_doneButton - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)message;
-(WFDatePickerConfiguration *)configuration;
-(WFDialogButton *)cancelButton;
-(WFDialogButton *)doneButton;
-(id)initWithDatePickerConfiguration:(id)arg1 message:(id)arg2 attribution:(id)arg3 prompt:(id)arg4 ;
@end

