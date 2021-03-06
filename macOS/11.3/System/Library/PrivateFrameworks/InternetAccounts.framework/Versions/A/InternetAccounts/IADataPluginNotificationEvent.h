/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InternetAccounts.framework/Versions/A/InternetAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IADataPluginNotificationEvent : NSObject {

	NSString* _uid;
	NSString* _pluginID;
	NSString* _eventType;
	NSDate* _date;

}

@property (retain) NSString * uid;                    //@synthesize uid=_uid - In the implementation block
@property (retain) NSString * pluginID;               //@synthesize pluginID=_pluginID - In the implementation block
@property (retain) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (retain) NSDate * date;                     //@synthesize date=_date - In the implementation block
+(id)eventForPlugin:(id)arg1 uid:(id)arg2 eventType:(id)arg3 date:(id)arg4 ;
-(id)description;
-(NSDate *)date;
-(NSString *)uid;
-(void)setUid:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)eventType;
-(void)setEventType:(NSString *)arg1 ;
-(void)setPluginID:(NSString *)arg1 ;
-(NSString *)pluginID;
@end

