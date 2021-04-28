/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationProfilesUI.framework/Versions/A/ConfigurationProfilesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSWindow, NSProgressIndicator, NSTextField;

@interface CPUI_EnrollmentHostWindowInfo : NSObject {

	NSWindow* _window;
	NSProgressIndicator* _progressSpinner;
	NSTextField* _progressField;

}

@property (retain) NSWindow * window;                                  //@synthesize window=_window - In the implementation block
@property (retain) NSProgressIndicator * progressSpinner;              //@synthesize progressSpinner=_progressSpinner - In the implementation block
@property (retain) NSTextField * progressField;                        //@synthesize progressField=_progressField - In the implementation block
+(id)hostWindowInfo;
-(NSWindow *)window;
-(void)setWindow:(NSWindow *)arg1 ;
-(void)hideProgress;
-(void)showProgress;
-(NSProgressIndicator *)progressSpinner;
-(void)setProgressSpinner:(NSProgressIndicator *)arg1 ;
-(NSTextField *)progressField;
-(void)setProgressField:(NSTextField *)arg1 ;
@end
