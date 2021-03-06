/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewDeviceOutreachMacUI.framework/Versions/A/NewDeviceOutreachMacUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewDeviceOutreachMacUI/NewDeviceOutreachMacUI-Structs.h>
#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/NSTextViewDelegate.h>

@class NSProgressIndicator, NSStackView, NSLayoutConstraint, NSView, NSTextField, NSImageView, NSButton, NSTextView;

@interface NewDeviceOutreachMacUI.NDOACCoverageViewController : NSViewController <NSTextViewDelegate> {

	 spinner;
	 primarySpinner;
	 primarySpinnerStackView;
	 activityIndicator;
	 containerStackView;
	 containerHeightConstraint;
	 primaryView;
	 primaryInfoStackView;
	 detailsView;
	 detailsStackView;
	 defaultCoverageView;
	 warrantyInfoView;
	 coverageBenefitsHBView;
	 acOfferEligibleView;
	 warrantyFooterView;
	 coverageExpiredTopView;
	 coverageLabel;
	 coverageSubtitleLabel;
	 coverageImageView;
	 coverageBenefitsStackView;
	 coverageBenefitsHBStackView;
	 coverBenefitsButtonSpaceConstraint;
	 coverBenefitsButtonTopConstraint;
	 acOfferLabel;
	 acOfferDescLabel;
	 acOfferButton;
	 warrantyFooter1Label;
	 warrantyFooter2Label;
	 warrantyFooter1HeightConstraint;
	 warrantyFooter2HeightConstraint;
	 coverageExpiredTitleLabel;
	 coverageExpiredDetailsLabel;
	 managePlanView;
	 appleCareVCWindow;
	 warranty;
	 fetchedWarranty;
	 isExecutingCoverageAPI;
	 coverageCallPendingPriority;
	 group;
	 purchaseRetryCount;
	 source;
	 footerForegroundColor;
	 footerFontSize;
	 containerWidth;
	 containerHeight;
	 defaultFooterHeight;
	 footerWidth;
	 defaultBenefitsLabelHeight;

}

@property (assign,__weak,nonatomic) NSProgressIndicator * spinner; 
@property (assign,__weak,nonatomic) NSProgressIndicator * primarySpinner; 
@property (assign,__weak,nonatomic) NSStackView * primarySpinnerStackView; 
@property (assign,__weak,nonatomic) NSProgressIndicator * activityIndicator; 
@property (assign,__weak,nonatomic) NSStackView * containerStackView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * containerHeightConstraint; 
@property (assign,__weak,nonatomic) NSView * primaryView; 
@property (assign,__weak,nonatomic) NSStackView * primaryInfoStackView; 
@property (assign,__weak,nonatomic) NSView * detailsView; 
@property (assign,__weak,nonatomic) NSStackView * detailsStackView; 
@property (assign,__weak,nonatomic) NSView * defaultCoverageView; 
@property (assign,__weak,nonatomic) NSView * warrantyInfoView; 
@property (assign,__weak,nonatomic) NSView * coverageBenefitsHBView; 
@property (assign,__weak,nonatomic) NSView * acOfferEligibleView; 
@property (assign,__weak,nonatomic) NSView * warrantyFooterView; 
@property (assign,__weak,nonatomic) NSView * coverageExpiredTopView; 
@property (assign,__weak,nonatomic) NSTextField * coverageLabel; 
@property (assign,__weak,nonatomic) NSTextField * coverageSubtitleLabel; 
@property (assign,__weak,nonatomic) NSImageView * coverageImageView; 
@property (assign,__weak,nonatomic) NSStackView * coverageBenefitsStackView; 
@property (assign,__weak,nonatomic) NSStackView * coverageBenefitsHBStackView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * coverBenefitsButtonSpaceConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * coverBenefitsButtonTopConstraint; 
@property (assign,__weak,nonatomic) NSTextField * acOfferLabel; 
@property (assign,__weak,nonatomic) NSTextField * acOfferDescLabel; 
@property (assign,__weak,nonatomic) NSButton * acOfferButton; 
@property (assign,__weak,nonatomic) NSTextView * warrantyFooter1Label; 
@property (assign,__weak,nonatomic) NSTextView * warrantyFooter2Label; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * warrantyFooter1HeightConstraint; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * warrantyFooter2HeightConstraint; 
@property (assign,__weak,nonatomic) NSTextField * coverageExpiredTitleLabel; 
@property (assign,__weak,nonatomic) NSTextField * coverageExpiredDetailsLabel; 
@property (retain,nonatomic) NSView * managePlanView; 
-(char)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(long long)arg3 ;
-(char)canOpenURLFor:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
-(id)initWith:(id)arg1 ;
-(NSProgressIndicator *)spinner;
-(void)setSpinner:(NSProgressIndicator *)arg1 ;
-(void)setContainerStackView:(NSStackView *)arg1 ;
-(NSStackView *)containerStackView;
-(NSProgressIndicator *)activityIndicator;
-(void)setActivityIndicator:(NSProgressIndicator *)arg1 ;
-(void)didBecomeActive;
-(void)setDetailsView:(NSView *)arg1 ;
-(NSView *)detailsView;
-(NSStackView *)detailsStackView;
-(void)setDetailsStackView:(NSStackView *)arg1 ;
-(void)refreshView:(id)arg1 ;
-(NSProgressIndicator *)primarySpinner;
-(void)setPrimarySpinner:(NSProgressIndicator *)arg1 ;
-(NSStackView *)primarySpinnerStackView;
-(void)setPrimarySpinnerStackView:(NSStackView *)arg1 ;
-(NSLayoutConstraint *)containerHeightConstraint;
-(void)setContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSView *)primaryView;
-(void)setPrimaryView:(NSView *)arg1 ;
-(NSStackView *)primaryInfoStackView;
-(void)setPrimaryInfoStackView:(NSStackView *)arg1 ;
-(NSView *)defaultCoverageView;
-(void)setDefaultCoverageView:(NSView *)arg1 ;
-(NSView *)warrantyInfoView;
-(void)setWarrantyInfoView:(NSView *)arg1 ;
-(NSView *)coverageBenefitsHBView;
-(void)setCoverageBenefitsHBView:(NSView *)arg1 ;
-(NSView *)acOfferEligibleView;
-(void)setAcOfferEligibleView:(NSView *)arg1 ;
-(NSView *)warrantyFooterView;
-(void)setWarrantyFooterView:(NSView *)arg1 ;
-(NSView *)coverageExpiredTopView;
-(void)setCoverageExpiredTopView:(NSView *)arg1 ;
-(NSTextField *)coverageLabel;
-(void)setCoverageLabel:(NSTextField *)arg1 ;
-(NSTextField *)coverageSubtitleLabel;
-(void)setCoverageSubtitleLabel:(NSTextField *)arg1 ;
-(NSImageView *)coverageImageView;
-(void)setCoverageImageView:(NSImageView *)arg1 ;
-(NSStackView *)coverageBenefitsStackView;
-(void)setCoverageBenefitsStackView:(NSStackView *)arg1 ;
-(NSStackView *)coverageBenefitsHBStackView;
-(void)setCoverageBenefitsHBStackView:(NSStackView *)arg1 ;
-(NSLayoutConstraint *)coverBenefitsButtonSpaceConstraint;
-(void)setCoverBenefitsButtonSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)coverBenefitsButtonTopConstraint;
-(void)setCoverBenefitsButtonTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSTextField *)acOfferLabel;
-(void)setAcOfferLabel:(NSTextField *)arg1 ;
-(NSTextField *)acOfferDescLabel;
-(void)setAcOfferDescLabel:(NSTextField *)arg1 ;
-(NSButton *)acOfferButton;
-(void)setAcOfferButton:(NSButton *)arg1 ;
-(NSTextView *)warrantyFooter1Label;
-(void)setWarrantyFooter1Label:(NSTextView *)arg1 ;
-(NSTextView *)warrantyFooter2Label;
-(void)setWarrantyFooter2Label:(NSTextView *)arg1 ;
-(NSLayoutConstraint *)warrantyFooter1HeightConstraint;
-(void)setWarrantyFooter1HeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)warrantyFooter2HeightConstraint;
-(void)setWarrantyFooter2HeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSTextField *)coverageExpiredTitleLabel;
-(void)setCoverageExpiredTitleLabel:(NSTextField *)arg1 ;
-(NSTextField *)coverageExpiredDetailsLabel;
-(void)setCoverageExpiredDetailsLabel:(NSTextField *)arg1 ;
-(NSView *)managePlanView;
-(void)setManagePlanView:(NSView *)arg1 ;
-(void)addCoveragePressed:(id)arg1 ;
-(void)detailsButtonPressed:(id)arg1 ;
-(void)getSupportButtonPressed:(id)arg1 ;
-(void)managePlanPressed:(id)arg1 ;
-(void)checkCoverageClicked:(id)arg1 ;
-(void)getSupportClicked:(id)arg1 ;
@end

