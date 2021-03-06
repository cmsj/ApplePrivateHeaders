/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Lookup.framework/Versions/A/Lookup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Lookup/Lookup-Structs.h>
#import <AppKit/NSPopoverAnimationController.h>

@class LUSearchTermIndicator, NSAttributedString, LUPresenter;

@interface LUPresenterAnimationController : NSPopoverAnimationController {

	LUSearchTermIndicator* _searchTermIndicator;
	NSAttributedString* _displayedTerm;
	CGPoint _displayedTermOrigin;
	LUPresenter* _associatedPresenter;

}

@property (nonatomic,retain) LUPresenter * associatedPresenter;                        //@synthesize associatedPresenter=_associatedPresenter - In the implementation block
@property (nonatomic,retain) LUSearchTermIndicator * searchTermIndicator;              //@synthesize searchTermIndicator=_searchTermIndicator - In the implementation block
@property (nonatomic,retain) NSAttributedString * displayedTerm;                       //@synthesize displayedTerm=_displayedTerm - In the implementation block
@property (assign,nonatomic) CGPoint displayedTermOrigin;                              //@synthesize displayedTermOrigin=_displayedTermOrigin - In the implementation block
-(void)dealloc;
-(void)recognizerDidCompleteAnimation:(id)arg1 ;
-(void)showPopover;
-(LUSearchTermIndicator *)searchTermIndicator;
-(void)setSearchTermIndicator:(LUSearchTermIndicator *)arg1 ;
-(NSAttributedString *)displayedTerm;
-(void)setDisplayedTerm:(NSAttributedString *)arg1 ;
-(CGPoint)displayedTermOrigin;
-(void)setDisplayedTermOrigin:(CGPoint)arg1 ;
-(void)setAssociatedPresenter:(LUPresenter *)arg1 ;
-(void)commonLUPresenterAnimationControllerTeardown;
-(LUPresenter *)associatedPresenter;
@end

