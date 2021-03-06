/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrustedAccessory.framework/Versions/A/TrustedAccessory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TANotificationDelegate.h>

@class TADeviceManager, NSString;

@interface TAOperation : NSObject <TANotificationDelegate> {

	char _started;
	TADeviceManager* _manager;

}

@property (assign,nonatomic) char started;                             //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) TADeviceManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TADeviceManager *)manager;
-(char)started;
-(char)cancelWithError:(id*)arg1 ;
-(void)setStarted:(char)arg1 ;
-(char)startWithError:(id*)arg1 ;
-(id)initWithDeviceManager:(id)arg1 ;
-(void)status:(unsigned)arg1 withValue:(void*)arg2 ;
@end

