/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/Versions/A/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDEventSystemClient : NSObject {

	IOHIDEventSystemClientRef _client;
	/*^block*/id _eventHandler;
	/*^block*/id _resetHandler;
	/*^block*/id _filterHandler;
	/*^block*/id _serviceHandler;
	/*^block*/id _propertyChangedHandler;
	/*^block*/id _cancelHandler;

}

@property (readonly) NSArray * services; 
-(id)initWithType:(long long)arg1 andAttributes:(id)arg2 ;
-(void)setEventFilterHandler:(/*^block*/id)arg1 ;
-(void)setPropertyChangedHandler:(/*^block*/id)arg1 matching:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)services;
-(void)cancel;
-(IOHIDEventSystemClientRef)client;
-(void)activate;
-(id)initWithType:(long long)arg1 ;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 ;
-(void)setMatching:(id)arg1 ;
-(void)setServiceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)setResetHandler:(/*^block*/id)arg1 ;
@end

