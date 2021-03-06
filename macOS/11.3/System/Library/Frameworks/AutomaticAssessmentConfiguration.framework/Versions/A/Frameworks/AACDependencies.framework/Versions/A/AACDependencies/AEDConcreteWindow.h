/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AutomaticAssessmentConfiguration.framework/Versions/A/Frameworks/AACDependencies.framework/Versions/A/AACDependencies
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AACDependencies/AACDependencies-Structs.h>
#import <libobjc.A.dylib/AEDWindow.h>

@protocol OS_dispatch_queue;
@class NSWindow, NSNotificationCenter, NSObject, NSString;

@interface AEDConcreteWindow : NSObject <AEDWindow> {

	unsigned _connectionID;
	long long _windowNumber;
	NSWindow* _window;
	NSNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) long long windowNumber;                     //@synthesize windowNumber=_windowNumber - In the implementation block
@property (nonatomic,readonly) CGRect frame; 
@property (getter=isVisible,nonatomic,readonly) char visible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)close;
-(CGRect)frame;
-(long long)windowNumber;
-(char)isVisible;
-(void)show;
-(int)refresh;
-(void)rebindToSpaceWithScreenGeometry;
-(int)excludeRegionFromContentCapture:(CGRect)arg1 ;
-(id)observeWindowResizeEventsWithHandler:(/*^block*/id)arg1 ;
@end

