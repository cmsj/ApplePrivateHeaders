/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKCardPresentationDelegate <NSObject>
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@optional
-(long long)cardPresentation:(id)arg1 compareCardViewControllerProviderOne:(id)arg2 providerTwo:(id)arg3;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(double)boundingWidthForPresentation:(id)arg1;
-(long long)cardPresentation:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
-(void)cardPresentation:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;

@end
