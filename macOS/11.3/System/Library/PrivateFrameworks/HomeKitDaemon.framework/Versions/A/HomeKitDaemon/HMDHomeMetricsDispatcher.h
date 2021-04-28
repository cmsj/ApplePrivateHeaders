/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSUUID, HMDLogEventDispatcher, NSString;

@interface HMDHomeMetricsDispatcher : HMFObject <HMFLogging> {

	NSUUID* _identifier;
	HMDLogEventDispatcher* _logEventDispatcher;

}

@property (copy,readonly) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) HMDLogEventDispatcher * logEventDispatcher;              //@synthesize logEventDispatcher=_logEventDispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSUUID *)identifier;
-(id)logIdentifier;
-(HMDLogEventDispatcher *)logEventDispatcher;
-(void)submitMigrationEventMetricsForModel:(id)arg1 reason:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2 ;
-(void)submitMigrationEventMetricsForModels:(id)arg1 reason:(id)arg2 ;
@end
