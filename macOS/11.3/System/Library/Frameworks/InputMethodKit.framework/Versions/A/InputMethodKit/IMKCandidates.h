/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <AppKit/NSResponder.h>

@class IMKCandidatesPrivate;

@interface IMKCandidates : NSResponder {

	IMKCandidatesPrivate* _private;

}
-(void)setCandidateData:(id)arg1 ;
-(id)noCandidatesMessage;
-(void)selectFirstCandidate;
-(void)selectCurrentlyFocusedItem;
-(char)forceNoIncrementalSearchPositioning;
-(void)setForceNoIncrementalSearchPositioning:(char)arg1 ;
-(id)candidatesSelectableByKeyboard;
-(id)noCandidatesMessageAttributes;
-(void)candidateSelectionChanged:(id)arg1 ;
-(void)candidateSelected:(id)arg1 ;
-(id)simulatorDelegate;
-(void)setSimulatorDelegate:(id)arg1 ;
-(id)convertKeyCodeNumberToString:(id)arg1 ;
-(char)showingSelectors;
-(id)annotationAttributes;
-(void)setGridSizeFactor:(double)arg1 ;
-(char)dismissesAutomatically;
-(void)setDismissesAutomatically:(char)arg1 ;
-(unsigned long long)numberOfFixedSizeCandidates;
-(char)presentsAutomatically;
-(char)selectCandidateWithIdentifier:(long long)arg1 ;
-(char)changesSizeWhenScrolling;
-(double)gridSizeFactor;
-(double)lineDefaultCount;
-(id)selectedSortingMode;
-(void)setSelectedSortingMode:(id)arg1 userInitiated:(char)arg2 ;
-(char)showsRadarButtonInSortingBar;
-(void)setShowsRadarButtonInSortingBar:(char)arg1 ;
-(void)setWindowShouldAdjustToTotalCandidateSize:(char)arg1 ;
-(char)windowShouldAdjustToTotalCandidateSize;
-(id)fittingCandidatesForCandidates:(id)arg1 ;
-(char)singleClickCommitsCandidate;
-(id)expandableWindowController;
-(char)windowSizeCanShrink;
-(id)initWithServer:(id)arg1 panelType:(unsigned long long)arg2 styleType:(unsigned long long)arg3 ;
-(void)showSublist:(id)arg1 ;
-(void)showAnnotation:(id)arg1 ;
-(void)detachChild:(long long)arg1 ;
-(void)attachChild:(id)arg1 toCandidate:(long long)arg2 type:(unsigned long long)arg3 ;
-(void)showChild;
-(void)hideChild;
-(void)showSublist:(id)arg1 subListDelegate:(id)arg2 ;
-(void)annotationSelected:(id)arg1 number:(long long)arg2 sender:(id)arg3 ;
-(CGRect)candidateFrame;
-(void)setCandidateFrameTopLeft:(CGPoint)arg1 ;
-(long long)candidateStringIdentifier:(id)arg1 ;
-(id)selectedCandidateString;
-(long long)candidateIdentifierAtLineNumber:(long long)arg1 ;
-(long long)lineNumberForCandidateWithIdentifier:(long long)arg1 ;
-(void)setSelectionKeysKeylayout:(TISInputSourceRef)arg1 ;
-(TISInputSourceRef)selectionKeysKeylayout;
-(void)movePage:(long long)arg1 ;
-(id)descriptionStyleSheetURL;
-(void)setIncrementalSearchInputContext:(char)arg1 ;
-(CGSize)popoverMinimumSize;
-(void)setPopoverMinimumSize:(CGSize)arg1 ;
-(double)touchBarAnnotationFontSize;
-(long long)touchBarAnnotationType;
-(char)windowIsExpandable;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(char)isVisible;
-(id)appearance;
-(void)setAppearance:(id)arg1 ;
-(void)moveRight:(id)arg1 ;
-(void)moveLeft:(id)arg1 ;
-(void)keyDown:(id)arg1 ;
-(void)insertNewline:(id)arg1 ;
-(void)moveDown:(id)arg1 ;
-(void)moveUp:(id)arg1 ;
-(void)pageDown:(id)arg1 ;
-(void)pageUp:(id)arg1 ;
-(unsigned long long)windowLevel;
-(void)hide;
-(id)viewController;
-(char)isExpanded;
-(void)updateCandidates;
-(void)moveForward:(id)arg1 ;
-(void)moveBackward:(id)arg1 ;
-(void)scrollPageUp:(id)arg1 ;
-(void)scrollPageDown:(id)arg1 ;
-(double)fontSize;
-(void)expand;
-(void)collapse;
-(void)setFontSize:(double)arg1 ;
-(long long)selectedCandidate;
-(void)setCandidates:(id)arg1 ;
-(void)show:(unsigned long long)arg1 ;
-(void)clearSelection;
-(id)titleAttributes;
-(char)handleKeyboardEvent:(id)arg1 ;
-(void)setWindowLevel:(unsigned long long)arg1 ;
-(void)setTitleAttributes:(id)arg1 ;
-(void)setInlineText:(id)arg1 ;
-(id)inlineText;
-(id)candidateView;
-(void)setShowsChevron:(char)arg1 ;
-(char)showsChevron;
-(id)initWithServer:(id)arg1 panelType:(unsigned long long)arg2 ;
-(void)setTouchBarAnnotationFontSize:(double)arg1 ;
-(void)setPresentsAutomatically:(char)arg1 ;
-(void)setNumberOfFixedSizeCandidates:(unsigned long long)arg1 ;
-(void)setTouchBarAnnotationType:(long long)arg1 ;
-(void)setCandidateListDictionary:(id)arg1 ;
-(void)setNoCandidatesMessage:(id)arg1 ;
-(void)setTopVisibleLine:(unsigned long long)arg1 ;
-(id)sortingModes;
-(void)setSelectedSortingMode:(id)arg1 ;
-(void)setDescriptionStyleSheetURL:(id)arg1 ;
-(void)setAnnotationAttributes:(id)arg1 ;
-(void)setNoCandidatesMessageAttributes:(id)arg1 ;
-(char)numberKeyPressed:(unsigned long long)arg1 ;
-(unsigned long long)topVisibleLine;
-(void)setChangesSizeWhenScrolling:(char)arg1 ;
-(void)setLineDefaultCount:(double)arg1 ;
-(void)setSortingModes:(id)arg1 ;
-(void)setInformationView:(id)arg1 ;
-(void)setSelectionKeys:(id)arg1 ;
-(void)setDefinitionDictionary:(DCSDictionaryRef)arg1 ;
-(void)selectNextSortingMethod;
-(void)selectPreviousSortingMethod;
-(double)candidateLeadingMargin;
-(void)setFocusedCandidate:(id)arg1 ;
-(void)showCandidates;
-(void)setWindowSizeCanShrink:(char)arg1 ;
-(id)candidateListDictionary;
-(DCSDictionaryRef)definitionDictionary;
-(id)visibleCandidates;
-(void)selectCandidate:(long long)arg1 ;
-(char)selectionKeyPressed:(id)arg1 ;
-(id)selectionKeys;
-(unsigned long long)panelType;
-(void)setPanelType:(unsigned long long)arg1 ;
-(id)focusedCandidate;
-(void)setSingleClickCommitsCandidate:(char)arg1 ;
-(id)informationView;
@end

