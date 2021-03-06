/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <InputMethodKit/IMKUIView.h>

@class NSArray, IMKUIWindowBasedCandidateController, NSButton;

@interface IMKCandidateSelectionView : IMKUIView {

	NSArray* _buttons;
	IMKUIWindowBasedCandidateController* _candidateController;
	unsigned long long _selectedIndex;
	NSArray* _sortingModes;
	NSButton* _radarButton;

}

@property (nonatomic,retain) NSArray * buttons;                                                      //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * sortingModes;                                                 //@synthesize sortingModes=_sortingModes - In the implementation block
@property (nonatomic,retain) NSButton * radarButton;                                                 //@synthesize radarButton=_radarButton - In the implementation block
@property (assign,nonatomic) IMKUIWindowBasedCandidateController * candidateController;              //@synthesize candidateController=_candidateController - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;                                       //@synthesize selectedIndex=_selectedIndex - In the implementation block
+(double)minimumWidthForSelectionModesWithRadarButton:(id)arg1 ;
+(double)minimumWidthForSelectionModes:(id)arg1 ;
+(double)totalButtonWidthWithButtons:(id)arg1 ;
+(id)_buttonWithTitle:(id)arg1 fontSize:(double)arg2 tag:(long long)arg3 target:(id)arg4 properties:(id)arg5 ;
+(id)_radarButtonWithTag:(long long)arg1 target:(id)arg2 properties:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 properties:(id)arg2 ;
-(void)setSortingModes:(id)arg1 localizedNames:(id)arg2 ;
-(void)setRadarButton:(NSButton *)arg1 ;
-(NSButton *)radarButton;
-(void)resetRadarButtonState;
-(void)setButtonFrames;
-(void)dealloc;
-(void)update;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedIndex;
-(NSArray *)buttons;
-(void)drawRect:(CGRect)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(IMKUIWindowBasedCandidateController *)candidateController;
-(void)setCandidateController:(IMKUIWindowBasedCandidateController *)arg1 ;
-(NSArray *)sortingModes;
-(void)setSortingModes:(NSArray *)arg1 ;
-(void)_buttonSelected:(id)arg1 ;
@end

