/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface PKActivityEvent : NSObject {

	char _unread;
	NSString* _eventType;
	NSString* _identifier;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * eventType;                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (getter=isUnread,nonatomic,readonly) char unread;              //@synthesize unread=_unread - In the implementation block
+(id)eventsWithTransactions:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)eventType;
-(char)isEqualToActivityEvent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(char)arg3 ;
-(char)isUnread;
@end

