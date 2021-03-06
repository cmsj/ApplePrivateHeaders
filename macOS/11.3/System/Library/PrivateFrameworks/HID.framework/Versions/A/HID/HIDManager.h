/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HID.framework/Versions/A/HID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HID/HID-Structs.h>
@class NSArray;

@interface HIDManager : NSObject {

	IOHIDManagerRef _manager;
	/*^block*/id _elementHandler;
	/*^block*/id _deviceNotificationHandler;
	/*^block*/id _inputReportHandler;
	/*^block*/id _cancelHandler;

}

@property (readonly) NSArray * devices; 
-(void)dealloc;
-(id)description;
-(id)init;
-(void)open;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithOptions:(long long)arg1 ;
-(void)cancel;
-(void)activate;
-(NSArray *)devices;
-(void)setDispatchQueue:(id)arg1 ;
-(void)setCancelHandler:(/*^block*/id)arg1 ;
-(void)setInputElementHandler:(/*^block*/id)arg1 ;
-(void)setInputElementMatching:(id)arg1 ;
-(void)setDeviceMatching:(id)arg1 ;
-(void)setDeviceNotificationHandler:(/*^block*/id)arg1 ;
-(void)setInputReportHandler:(/*^block*/id)arg1 ;
@end

