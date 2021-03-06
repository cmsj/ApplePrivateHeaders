/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoginUIKit.framework/Versions/A/LoginUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoginUIKit/LoginUIKit-Structs.h>
#import <AppKit/NSStackView.h>

@class NSTextField, NSImageView;

@interface LUI2BatteryView : NSStackView {

	NSTextField* _batteryTextField;
	NSImageView* _batteryImageView;

}

@property (retain) NSTextField * batteryTextField;              //@synthesize batteryTextField=_batteryTextField - In the implementation block
@property (retain) NSImageView * batteryImageView;              //@synthesize batteryImageView=_batteryImageView - In the implementation block
-(NSTextField *)batteryTextField;
-(void)setBatteryTextField:(NSTextField *)arg1 ;
-(void)_setupBatteryView;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSImageView *)batteryImageView;
-(void)setBatteryImageView:(NSImageView *)arg1 ;
-(void)setBatteryPercentage:(id)arg1 ;
-(void)setBatteryImage:(id)arg1 ;
@end

