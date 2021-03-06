/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/Versions/A/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class BrightnessSystemClientInternal, NSObject;

@interface BrightnessSystemClient : NSObject {

	BrightnessSystemClientInternal* bsci;
	NSObject*<OS_os_log> _logHandle;
	/*^block*/id _displayNotificationBlock;
	/*^block*/id _keyboardNotificationBlock;
	/*^block*/id _propertyNotificationBlock;

}
-(void)dealloc;
-(id)init;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)copyPropertyForKey:(id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationBlock:(/*^block*/id)arg1 forProperties:(id)arg2 ;
-(void)unregisterDisplayNotificationBlock;
-(void)unregisterPropertyNotificationBlock;
-(BOOL)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3 ;
-(id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerDisplayNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKey:(id)arg1 ;
-(void)unregisterNotificationForKey:(id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 ;
-(void)unregisterNotificationForKeys:(id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2 ;
-(char)isAlsSupported;
-(id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(char)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3 ;
-(void)unregisterKeyboardNotificationBlock;
-(void)registerKeyboardNotificationCallbackBlock:(/*^block*/id)arg1 ;
-(void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
-(void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 ;
@end

