/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityEvents.framework/Versions/A/AccessibilityEvents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXETimer.h>

@class NSTimer, NSString;

@interface AXENSTimer : NSObject <AXETimer> {

	NSTimer* __timer;

}

@property (nonatomic,retain) NSTimer * _timer;                      //@synthesize _timer=__timer - In the implementation block
@property (getter=isValid,readonly) char valid; 
@property (readonly) double timeInterval; 
@property (readonly) id userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(void)invalidate;
-(char)isValid;
-(double)timeInterval;
-(void)fire;
-(NSTimer *)_timer;
-(void)set_timer:(NSTimer *)arg1 ;
-(id)initWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(char)arg5 scheduled:(char)arg6 ;
@end
