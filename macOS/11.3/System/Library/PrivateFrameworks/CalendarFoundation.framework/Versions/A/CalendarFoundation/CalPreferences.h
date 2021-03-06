/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {

	NSString* _domain;
	NSMutableSet* _registeredNotificationsToReflect;

}
-(void)dealloc;
-(id)init;
-(id)initWithDomain:(id)arg1 ;
-(id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2 ;
-(void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(void)_preferenceChangedInternally:(id)arg1 ;
-(void)_synchronizePreferences;
-(void)registerReflectionForPreferenceWithNotificationName:(id)arg1 ;
-(char)getBooleanPreference:(id)arg1 defaultValue:(char)arg2 ;
-(void)setBooleanPreference:(id)arg1 value:(char)arg2 notificationName:(id)arg3 ;
-(long long)getIntegerPreference:(id)arg1 defaultValue:(long long)arg2 ;
-(void)setIntegerPreference:(id)arg1 value:(long long)arg2 notificationName:(id)arg3 ;
-(void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3 ;
-(void)_preferenceChangedExternally:(id)arg1 ;
@end

