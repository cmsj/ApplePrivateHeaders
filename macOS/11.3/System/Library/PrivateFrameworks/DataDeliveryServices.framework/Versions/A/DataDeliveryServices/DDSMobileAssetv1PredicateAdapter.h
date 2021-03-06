/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/Versions/A/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DDSMobileAssetv1PredicateAdapter : NSObject
+(id)predicateForQuery:(id)arg1 compatibilityVersion:(unsigned long long)arg2 internalInstall:(char)arg3 ;
+(id)predicateForKey:(id)arg1 matchingAnyStringIn:(id)arg2 ;
+(id)predicateForKey:(id)arg1 matchingAnyDictionaryIn:(id)arg2 acceptUnspecifiedValue:(char)arg3 acceptUnspecifiedAttribute:(char)arg4 lenientMatch:(char)arg5 ;
+(id)compatibilityPredicateForCompatabilityVersion:(unsigned long long)arg1 internalInstall:(char)arg2 ;
+(id)regionKeys;
+(id)predicateForKey:(id)arg1 matchingString:(id)arg2 ;
+(id)predicateForAssetQuery:(id)arg1 compatiblilityVersion:(unsigned long long)arg2 ;
+(id)extractRegionDictFromFilter:(id)arg1 ;
@end

