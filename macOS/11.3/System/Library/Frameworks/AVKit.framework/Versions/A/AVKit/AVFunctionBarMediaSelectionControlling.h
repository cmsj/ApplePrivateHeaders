/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AVFunctionBarMediaSelectionOption;


@protocol AVFunctionBarMediaSelectionControlling
@property (readonly) char hasFunctionBarMediaSelectionOptions; 
@property (readonly) char hasAudioFunctionBarMediaSelectionOptions; 
@property (readonly) NSArray * audioFunctionBarMediaSelectionOptions; 
@property (retain) AVFunctionBarMediaSelectionOption * currentAudioFunctionBarMediaSelectionOption; 
@property (readonly) char hasLegibleFunctionBarMediaSelectionOptions; 
@property (readonly) NSArray * legibleFunctionBarMediaSelectionOptions; 
@property (retain) AVFunctionBarMediaSelectionOption * currentLegibleFunctionBarMediaSelectionOption; 
@required
-(char)hasFunctionBarMediaSelectionOptions;
-(char)hasAudioFunctionBarMediaSelectionOptions;
-(NSArray *)audioFunctionBarMediaSelectionOptions;
-(AVFunctionBarMediaSelectionOption *)currentAudioFunctionBarMediaSelectionOption;
-(void)setCurrentAudioFunctionBarMediaSelectionOption:(id)arg1;
-(char)hasLegibleFunctionBarMediaSelectionOptions;
-(NSArray *)legibleFunctionBarMediaSelectionOptions;
-(AVFunctionBarMediaSelectionOption *)currentLegibleFunctionBarMediaSelectionOption;
-(void)setCurrentLegibleFunctionBarMediaSelectionOption:(id)arg1;

@end

