/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSTextField, NSNumberFormatter, NSArray, NSMenu;

@interface AMWithinLastDateRowTemplate : NSPredicateEditorRowTemplate {

	char hasCreatedViews;
	NSPopUpButton* datePopUpButton;
	NSTextField* unitTextField;
	NSNumberFormatter* unitTextFieldFormatter;
	NSPopUpButton* unitPopUpButton;

}

@property (assign) char hasCreatedViews; 
@property (retain) NSPopUpButton * datePopUpButton; 
@property (retain) NSTextField * unitTextField; 
@property (retain) NSNumberFormatter * unitTextFieldFormatter; 
@property (retain) NSPopUpButton * unitPopUpButton; 
@property (readonly) NSArray * matchingLeftExpressions; 
@property (readonly) NSMenu * menuForUnitPopUpButton; 
-(void)setPredicate:(id)arg1 ;
-(id)templateViews;
-(double)matchForPredicate:(id)arg1 ;
-(id)predicateWithSubpredicates:(id)arg1 ;
-(char)hasCreatedViews;
-(void)setHasCreatedViews:(char)arg1 ;
-(void)setDatePopUpButton:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)datePopUpButton;
-(void)createViewsIfNecessary;
-(NSArray *)matchingLeftExpressions;
-(void)setUnitTextField:(NSTextField *)arg1 ;
-(NSTextField *)unitTextField;
-(void)setUnitTextFieldFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)unitTextFieldFormatter;
-(void)setUnitPopUpButton:(NSPopUpButton *)arg1 ;
-(NSMenu *)menuForUnitPopUpButton;
-(NSPopUpButton *)unitPopUpButton;
@end

