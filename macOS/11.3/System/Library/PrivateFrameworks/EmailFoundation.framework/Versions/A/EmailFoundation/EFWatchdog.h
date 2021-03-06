/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EFWatchdog : NSObject {

	NSString* _monitoredBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * monitoredBundleIdentifier;              //@synthesize monitoredBundleIdentifier=_monitoredBundleIdentifier - In the implementation block
-(void)invalidate;
-(void)start;
-(id)initWithMonitoredBundleIdentifier:(id)arg1 ;
-(NSString *)monitoredBundleIdentifier;
@end

