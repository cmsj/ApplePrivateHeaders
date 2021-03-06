/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/Versions/A/SearchUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUICardKitProviderSupport/SearchUIFeedbackDelegate.h>
#import <libobjc.A.dylib/CRKFeedbackDelegateProxying.h>

@protocol CRKFeedbackDelegate;
@class NSString;

@interface SUICKPFeedbackAdapter : NSObject <SearchUIFeedbackDelegate, CRKFeedbackDelegateProxying> {

	id<CRKFeedbackDelegate> _feedbackDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CRKFeedbackDelegate> feedbackDelegate;              //@synthesize feedbackDelegate=_feedbackDelegate - In the implementation block
-(void)cardViewDidDisappear:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)didReportUserResponseFeedback:(id)arg1 ;
-(id)feedbackListener;
-(void)setFeedbackDelegate:(id<CRKFeedbackDelegate>)arg1 ;
-(void)presentViewController:(id)arg1 ;
-(void)willDismissViewController:(id)arg1 ;
-(void)presentViewControllerForCard:(id)arg1 animate:(char)arg2 ;
-(void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(char)arg2 ;
-(id<CRKFeedbackDelegate>)feedbackDelegate;
-(char)shouldHandleCardSectionEngagement:(id)arg1 ;
@end

