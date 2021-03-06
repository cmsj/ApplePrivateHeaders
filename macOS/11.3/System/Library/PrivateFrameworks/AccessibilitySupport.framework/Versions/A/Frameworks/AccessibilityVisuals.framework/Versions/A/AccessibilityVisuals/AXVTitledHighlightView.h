/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityVisuals.framework/Versions/A/AccessibilityVisuals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityVisuals/AccessibilityVisuals-Structs.h>
#import <AccessibilityVisuals/AXVHighlightView.h>

@class NSString, NSTextField;

@interface AXVTitledHighlightView : AXVHighlightView {

	NSString* _titleText;
	NSTextField* __titleTextField;

}

@property (setter=_setTitleTextField:,nonatomic,retain) NSTextField * _titleTextField;              //@synthesize _titleTextField=__titleTextField - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                    //@synthesize titleText=_titleText - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(NSTextField *)_titleTextField;
-(void)_setTitleTextField:(id)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)_updateTitleTextFieldFrame;
@end

