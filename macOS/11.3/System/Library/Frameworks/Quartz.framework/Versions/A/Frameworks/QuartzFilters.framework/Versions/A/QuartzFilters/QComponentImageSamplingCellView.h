/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTextField, QFilterImageInfo;

@interface QComponentImageSamplingCellView : NSTableCellView {

	NSButton* _setScaleCheckbox;
	NSButton* _setResolutionCheckbox;
	NSButton* _constrainSizeCheckbox;
	NSTextField* _scaleText;
	NSTextField* _resolutionText;
	NSTextField* _minSizeText;

}

@property (retain) NSButton * setScaleCheckbox;                           //@synthesize setScaleCheckbox=_setScaleCheckbox - In the implementation block
@property (retain) NSButton * setResolutionCheckbox;                      //@synthesize setResolutionCheckbox=_setResolutionCheckbox - In the implementation block
@property (retain) NSButton * constrainSizeCheckbox;                      //@synthesize constrainSizeCheckbox=_constrainSizeCheckbox - In the implementation block
@property (retain) NSTextField * scaleText;                               //@synthesize scaleText=_scaleText - In the implementation block
@property (retain) NSTextField * resolutionText;                          //@synthesize resolutionText=_resolutionText - In the implementation block
@property (retain) NSTextField * minSizeText;                             //@synthesize minSizeText=_minSizeText - In the implementation block
@property (nonatomic,readonly) QFilterImageInfo * imageInfo; 
-(void)dealloc;
-(void)setObjectValue:(id)arg1 ;
-(QFilterImageInfo *)imageInfo;
-(NSButton *)setScaleCheckbox;
-(NSButton *)setResolutionCheckbox;
-(NSButton *)constrainSizeCheckbox;
-(NSTextField *)scaleText;
-(NSTextField *)resolutionText;
-(NSTextField *)minSizeText;
-(void)setScaleCheckboxAction:(id)arg1 ;
-(void)setResolutionCheckboxAction:(id)arg1 ;
-(void)constrainSizeCheckboxAction:(id)arg1 ;
-(void)setSetScaleCheckbox:(NSButton *)arg1 ;
-(void)setSetResolutionCheckbox:(NSButton *)arg1 ;
-(void)setConstrainSizeCheckbox:(NSButton *)arg1 ;
-(void)setScaleText:(NSTextField *)arg1 ;
-(void)setResolutionText:(NSTextField *)arg1 ;
-(void)setMinSizeText:(NSTextField *)arg1 ;
@end

