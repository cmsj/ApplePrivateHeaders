/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@class NSHashTable, NSMutableDictionary;

@interface IDSCTAdapter : NSObject {

	NSHashTable* _listeners;
	id _coreTelephonyClient;
	id _cache;
	NSMutableDictionary* _registrationStateByLabelID;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) char dualSIMCapabilityEnabled; 
@property (nonatomic,readonly) char isAnySIMUsable; 
@property (nonatomic,readonly) char isAnySIMInserted; 
@property (nonatomic,readonly) char supportsIdentification; 
+(id)sharedInstance;
+(char)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2 ;
-(char)isPhoneNumberEmergencyNumber:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(id)SIMForIdentifier:(id)arg1 ;
-(id)currentSIMsWithError:(id*)arg1 ;
-(char)supportsIdentification;
-(char)isPNRNumber:(id)arg1 andPhoneBookNumber:(id)arg2 differentEnoughFromSIMIdentifier:(id)arg3 toReregisterWithNewNumber:(id*)arg4 ;
-(char)dualSIMCapabilityEnabled;
-(char)isAnySIMUsable;
-(char)isAnySIMInserted;
-(id)carrierBundleValueFromAllSIMsForKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3 ;
-(id)carrierBundleValueFromSIM:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 withFallback:(id)arg4 ;
-(id)CTPNRForSIM:(id)arg1 ;
@end

