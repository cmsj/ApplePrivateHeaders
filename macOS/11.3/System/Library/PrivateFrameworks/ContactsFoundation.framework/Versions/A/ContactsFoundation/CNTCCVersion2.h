/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/Versions/A/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNTCC.h>
#import <libobjc.A.dylib/CNTCCSettings.h>
#import <libobjc.A.dylib/CNTCCSimulation.h>

@protocol OS_tcc_message_options, OS_tcc_server, OS_tcc_service;
@class NSObject, NSNumber;

@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation> {

	NSObject*<OS_tcc_message_options> _syncOptions;
	NSObject*<OS_tcc_server> _server;
	NSObject*<OS_tcc_service> _service;
	NSNumber* _simulateStatus;
	NSNumber* _isUnitTestingOnSimulatorCachedValue;

}

@property (nonatomic,readonly) NSObject*<OS_tcc_message_options> syncOptions;              //@synthesize syncOptions=_syncOptions - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_tcc_server> server;                            //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_tcc_service> service;                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNumber * simulateStatus;                                    //@synthesize simulateStatus=_simulateStatus - In the implementation block
@property (nonatomic,retain) NSNumber * isUnitTestingOnSimulatorCachedValue;               //@synthesize isUnitTestingOnSimulatorCachedValue=_isUnitTestingOnSimulatorCachedValue - In the implementation block
-(id)init;
-(NSObject*<OS_tcc_server>)server;
-(NSObject*<OS_tcc_service>)service;
-(char)isUnitTesting;
-(NSNumber *)simulateStatus;
-(void)setSimulateStatus:(NSNumber *)arg1 ;
-(id)checkIfUnitTesting;
-(long long)checkAuthorizationStatusOfCurrentProcess;
-(long long)checkAuthorizationStatusOfAuditToken:(SCD_Struct_CN1)arg1 ;
-(char)isAuthorizationRestricted;
-(void)requestAuthorization:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)authorizationRecords;
-(id)authorizationRecordForBundleIdentifier:(id)arg1 ;
-(void)saveAuthorizationRecord:(id)arg1 ;
-(void)simulateStatus:(long long)arg1 ;
-(void)stopSimulation;
-(NSNumber *)isUnitTestingOnSimulatorCachedValue;
-(void)setIsUnitTestingOnSimulatorCachedValue:(NSNumber *)arg1 ;
-(NSObject*<OS_tcc_message_options>)syncOptions;
@end
