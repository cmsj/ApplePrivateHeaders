/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationLinkStatusChanged : RTNotification {

	unsigned long long _linkStatus;
	NSArray* _accessPoints;

}

@property (nonatomic,readonly) unsigned long long linkStatus;              //@synthesize linkStatus=_linkStatus - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                     //@synthesize accessPoints=_accessPoints - In the implementation block
-(NSArray *)accessPoints;
-(id)initWithLinkStatus:(unsigned long long)arg1 accessPoints:(id)arg2 ;
-(unsigned long long)linkStatus;
@end

