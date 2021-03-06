/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDAnalyticsSignificantTimeEventData : HMFObject {

	char _offsetPresent;
	NSString* _significantEvent;

}

@property (nonatomic,copy) NSString * significantEvent;              //@synthesize significantEvent=_significantEvent - In the implementation block
@property (assign) char offsetPresent;                               //@synthesize offsetPresent=_offsetPresent - In the implementation block
-(NSString *)significantEvent;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setOffsetPresent:(char)arg1 ;
-(char)offsetPresent;
@end

