/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaDestinationControllerLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMediaDestinationControllerFailureLogEvent : HMDMediaDestinationControllerLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _destinationControllerErrorCode;
	NSString* _errorCode;
	NSString* _errorDomain;

}

@property (copy,readonly) NSString * destinationControllerErrorCode;              //@synthesize destinationControllerErrorCode=_destinationControllerErrorCode - In the implementation block
@property (copy,readonly) NSString * errorCode;                                   //@synthesize errorCode=_errorCode - In the implementation block
@property (copy,readonly) NSString * errorDomain;                                 //@synthesize errorDomain=_errorDomain - In the implementation block
-(id)eventName;
-(NSString *)errorCode;
-(NSString *)errorDomain;
-(id)serializedEvent;
-(id)initWithDestinationControllerErrorCode:(id)arg1 errorCode:(id)arg2 errorDomain:(id)arg3 isTriggeredOnControllerDevice:(id)arg4 userPrivilege:(id)arg5 ;
-(NSString *)destinationControllerErrorCode;
@end

