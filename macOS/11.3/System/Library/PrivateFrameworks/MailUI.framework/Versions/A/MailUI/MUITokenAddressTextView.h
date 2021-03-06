/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailUI.framework/Versions/A/MailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailUI/MailUI-Structs.h>
#import <AppKit/NSTokenTextView.h>

@class MUIAddressField;

@interface MUITokenAddressTextView : NSTokenTextView {

	MUIAddressField* _addressField;

}

@property (assign,nonatomic,__weak) MUIAddressField * addressField;              //@synthesize addressField=_addressField - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(id)designatedFocusRingView;
-(char)performDragOperation:(id)arg1 ;
-(void)noteFocusRingMaskChanged;
-(void)mouseUp:(id)arg1 ;
-(void)setAddressField:(MUIAddressField *)arg1 ;
-(MUIAddressField *)addressField;
-(void)_muiTokenAddressTextViewCommonInit;
@end

