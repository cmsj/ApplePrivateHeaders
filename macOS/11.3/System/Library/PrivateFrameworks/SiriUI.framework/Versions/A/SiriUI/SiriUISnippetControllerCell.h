/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/NSCollectionViewElement.h>
#import <SiriUI/SiriUIReusableView.h>

@protocol NSCollectionViewElementSiriUIReusableView;
@class SiriUISnippetViewController, SiriUIContentButton, NSTextField, NSView, NSMutableArray, NSString;

@interface SiriUISnippetControllerCell : NSView <NSCollectionViewElement, SiriUIReusableView> {

	SiriUIContentButton* _snippetPunchOutButton;
	NSTextField* _cancelledLabel;
	NSView*<NSCollectionViewElement>*<SiriUIReusableView> _headerView;
	NSView*<NSCollectionViewElement>*<SiriUIReusableView> _footerView;
	NSView*<NSCollectionViewElement>*<SiriUIReusableView> _transparentHeaderView;
	NSView*<NSCollectionViewElement>*<SiriUIReusableView> _transparentFooterView;
	NSMutableArray* _allConstraints;
	SiriUISnippetViewController* _snippetViewController;
	NSEdgeInsets _snippetEdgeInsets;

}

@property (assign,setter=_setSnippetEdgeInsets:,getter=_snippetEdgeInsets,nonatomic) NSEdgeInsets snippetEdgeInsets;              //@synthesize snippetEdgeInsets=_snippetEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * identifier; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;                                          //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(id)reuseIdentifier;
+(id)elementKind;
+(double)defaultHeight;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)layout;
-(char)isFlipped;
-(char)allowsVibrancy;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(void)updateConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)_snippetPunchOutButtonTapped:(id)arg1 ;
-(double)_heightForTransparentHeaderView;
-(double)_heightForHeaderView;
-(double)_heightForContent;
-(double)_heightForFooterView;
-(double)_heightForTransparentFooterView;
-(void)_setHeaderView:(id)arg1 ;
-(void)_setFooterView:(id)arg1 ;
-(void)_setTransparentHeaderView:(id)arg1 ;
-(void)_setTransparentFooterView:(id)arg1 ;
-(void)_setSnippetEdgeInsets:(NSEdgeInsets)arg1 ;
-(void)_configureSubviewsForCurrentInset;
-(void)animateSnippetCancellationWithCompletion:(/*^block*/id)arg1 ;
-(void)animateSnippetConfirmationWithCompletion:(/*^block*/id)arg1 ;
-(NSEdgeInsets)_snippetEdgeInsets;
@end

