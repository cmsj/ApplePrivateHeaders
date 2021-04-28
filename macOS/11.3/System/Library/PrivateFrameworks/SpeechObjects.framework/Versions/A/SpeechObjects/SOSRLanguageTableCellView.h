/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SpeechObjects.framework/Versions/A/SpeechObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class SOSRLanguageRowCheckboxButton, NSTextField, NSPopUpButton;

@interface SOSRLanguageTableCellView : NSTableCellView {

	SOSRLanguageRowCheckboxButton* _activeCheckbox;
	NSTextField* _downloadMessageTextField;
	NSPopUpButton* _downloadVariantPopUpButton;

}

@property (nonatomic,readonly) SOSRLanguageRowCheckboxButton * activeCheckbox;              //@synthesize activeCheckbox=_activeCheckbox - In the implementation block
@property (nonatomic,readonly) NSTextField * downloadMessageTextField;                      //@synthesize downloadMessageTextField=_downloadMessageTextField - In the implementation block
@property (nonatomic,readonly) NSPopUpButton * downloadVariantPopUpButton;                  //@synthesize downloadVariantPopUpButton=_downloadVariantPopUpButton - In the implementation block
-(NSTextField *)downloadMessageTextField;
-(NSPopUpButton *)downloadVariantPopUpButton;
-(SOSRLanguageRowCheckboxButton *)activeCheckbox;
@end
