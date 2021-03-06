/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/Versions/A/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAUtil : NSObject
+(id)deviceName;
+(unsigned long long)getAWDTimestamp;
+(id)_getBasePersistenceKeychainQuery;
+(id)getObscureKey;
+(id)_getBaseTokenStorageKeychainQueryWithIdentifer:(id)arg1 ;
+(id)unobscureModelData:(id)arg1 forModelkey:(id)arg2 ;
+(id)rotateUUIDsForMessage:(id)arg1 ;
+(id)getCopyOfMessage:(id)arg1 withNumericalValuesSubstractedByValuesInMessage:(id)arg2 ;
+(id)rotateObscureKey;
+(char)storeToken:(id)arg1 withIdentifier:(id)arg2 ;
+(id)getTokenForIdentifier:(id)arg1 ;
+(id)getMessageInstanceForKey:(id)arg1 andGroupType:(long long)arg2 ;
+(id)groupTypeToString:(long long)arg1 ;
+(id)groupTypeToAWDComponentID;
+(id)trimTokenForLogging:(id)arg1 ;
+(id)getValueForEntitlementForCurrentProcess:(id)arg1 ;
+(id)_generateInvocationForMethod:(void*)arg1 ;
@end

