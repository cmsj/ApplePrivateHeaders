/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/Versions/A/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FTCServiceAvailabilityCenter : NSObject {

	NSMutableDictionary* _availabilityHandlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_postNotificationForService:(long long)arg1 availability:(long long)arg2 ;
-(void)_handleServiceMonitorNotification:(id)arg1 ;
-(char)_isValidServiceType:(long long)arg1 ;
-(void)_startListeningToMonitor:(id)arg1 ;
-(id)containerForService:(long long)arg1 create:(char)arg2 ;
-(void)_stopListeningToMonitor:(id)arg1 ;
-(char)hasListenerID:(id)arg1 forService:(long long)arg2 ;
-(char)addListenerID:(id)arg1 forService:(long long)arg2 ;
-(char)removeListenerID:(id)arg1 forService:(long long)arg2 ;
-(long long)availabilityForListenerID:(id)arg1 forService:(long long)arg2 ;
@end

