/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject {

	NSDate* _startTime;
	NSString* _messageName;
	long long _qualityOfService;
	/*^block*/id _responseHandler;

}

@property (nonatomic,readonly) NSDate * startTime;                   //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSString * messageName;               //@synthesize messageName=_messageName - In the implementation block
@property (readonly) long long qualityOfService;                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSDate *)startTime;
-(long long)qualityOfService;
-(NSString *)messageName;
-(id)responseHandler;
-(id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

