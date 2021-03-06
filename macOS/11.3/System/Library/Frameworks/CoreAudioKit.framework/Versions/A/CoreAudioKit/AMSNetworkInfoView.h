/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/Versions/A/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <AppKit/NSView.h>

@class NSButton, NSTextField, AudioBox, NSBundle;

@interface AMSNetworkInfoView : NSView {

	NSButton* infoButton;
	NSTextField* deviceInfoLabel;
	NSTextField* serialLabel;
	NSTextField* firmwareLabel;
	NSTextField* deviceNameField;
	NSTextField* serialNumberField;
	NSTextField* firmwareField;
	NSTextField* noSelectionLabel;
	AudioBox* box;
	NSBundle* currentBundle;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeFromSuperview;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)displayInfoForAudioBox:(id)arg1 ;
@end

