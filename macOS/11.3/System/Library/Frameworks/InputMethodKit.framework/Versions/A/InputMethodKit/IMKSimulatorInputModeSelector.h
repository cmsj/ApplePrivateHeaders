/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMKSimulatorInputModeSelectorFloatingPanel, NSArray;

@interface IMKSimulatorInputModeSelector : NSObject {

	IMKSimulatorInputModeSelectorFloatingPanel* _floatingPanel;
	NSArray* _inputModeURLs;

}

@property (nonatomic,retain) NSArray * inputModeURLs;                       //@synthesize inputModeURLs=_inputModeURLs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inputModeLabels; 
+(id)sharedInputModeSelector;
-(NSArray *)inputModeLabels;
-(void)selectInputModeUsingLabel:(id)arg1 ;
-(void)setInputModeURLs:(NSArray *)arg1 ;
-(NSArray *)inputModeURLs;
-(void)dealloc;
-(id)init;
@end

