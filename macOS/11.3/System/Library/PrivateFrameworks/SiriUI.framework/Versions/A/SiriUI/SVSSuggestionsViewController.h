/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <SiriUI/SiriUISuggestionsViewDelegate.h>

@protocol SVSSuggestionsViewControllerDelegate;
@class SiriUISuggestionsView, NSString;

@interface SVSSuggestionsViewController : NSViewController <SiriUISuggestionsViewDelegate> {

	id<SVSSuggestionsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) SiriUISuggestionsView * view; 
@property (assign,nonatomic,__weak) id<SVSSuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SVSSuggestionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SVSSuggestionsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)animateOut;
-(void)_showHeaderText:(id)arg1 subheaderText:(id)arg2 largeSubheaderText:(id)arg3 ;
-(id)_initialHeaderText;
-(id)_nudgeHeaderText;
-(void)showAcousticIDSpinner;
-(void)hideAcousticIDSpinner;
-(double)statusViewHeightForSuggestionsView:(id)arg1 ;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2 ;
-(void)showNetworkUnavailable;
-(void)showMicrophoneUnavailable;
-(void)showGreeting;
-(void)showUserNudge;
-(void)showEmptyView;
-(double)textContentHeight;
@end
