/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@protocol SSConnectionProgressViewControllerDelegate;
@class NSString, NSProgressIndicator, NSTextField, NSWindow, CNAvatarViewController, NSView, NSImageView;

@interface SSConnectionProgressViewController : NSViewController {

	char mIndeterminate;
	long long mPercentComplete;
	NSString* mDisplayString;
	id<SSConnectionProgressViewControllerDelegate> delegate;
	NSProgressIndicator* _mProgressIndicator;
	NSTextField* _mDisplayText;
	NSWindow* _parentWindow;
	CNAvatarViewController* _avatarViewController;
	NSView* _viewContainer;
	NSImageView* _yosemiteStaticImage;

}

@property (assign) NSProgressIndicator * mProgressIndicator;                             //@synthesize mProgressIndicator=_mProgressIndicator - In the implementation block
@property (assign) NSTextField * mDisplayText;                                           //@synthesize mDisplayText=_mDisplayText - In the implementation block
@property (assign) id<SSConnectionProgressViewControllerDelegate> delegate; 
@property (retain) NSWindow * parentWindow;                                              //@synthesize parentWindow=_parentWindow - In the implementation block
@property (assign) char indeterminateProgress; 
@property (assign) long long percentageComplete; 
@property (retain) NSString * displayText; 
@property (retain) CNAvatarViewController * avatarViewController;                        //@synthesize avatarViewController=_avatarViewController - In the implementation block
@property (retain) NSView * viewContainer;                                               //@synthesize viewContainer=_viewContainer - In the implementation block
@property (retain) NSImageView * yosemiteStaticImage;                                    //@synthesize yosemiteStaticImage=_yosemiteStaticImage - In the implementation block
+(id)stubContact;
-(void)dealloc;
-(id<SSConnectionProgressViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SSConnectionProgressViewControllerDelegate>)arg1 ;
-(NSWindow *)parentWindow;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)awakeFromNib;
-(void)setParentWindow:(NSWindow *)arg1 ;
-(void)setAppleID:(id)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSProgressIndicator *)mProgressIndicator;
-(void)startProgressAnimation;
-(void)stopProgressAnimation;
-(CNAvatarViewController *)avatarViewController;
-(void)setAvatarViewController:(CNAvatarViewController *)arg1 ;
-(NSView *)viewContainer;
-(void)setViewContainer:(NSView *)arg1 ;
-(void)setCNContact:(id)arg1 ;
-(void)setIndeterminateProgress:(char)arg1 ;
-(char)indeterminateProgress;
-(long long)percentageComplete;
-(NSTextField *)mDisplayText;
-(void)setYosemiteStaticImage:(NSImageView *)arg1 ;
-(NSImageView *)yosemiteStaticImage;
-(void)setPercentageComplete:(long long)arg1 ;
-(void)stopClicked:(id)arg1 ;
-(void)setMProgressIndicator:(NSProgressIndicator *)arg1 ;
-(void)setMDisplayText:(NSTextField *)arg1 ;
@end

