/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSRestrictions : NSObject
+(id)setOfActiveRestrictionUUIDs;
+(void)isRestrictionsPasscodeSet:(/*^block*/id)arg1 ;
+(char)_isExplicitContentDisallowedInCurrentStoreFront;
+(char)_calculateIsRestrictionsPasscodeSet;
+(char)isActiveAccountAllowedToUpdateRestrictions;
+(char)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+(void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)isExplicitContentDisallowedInCurrentStoreFront:(/*^block*/id)arg1 ;
+(void)setAllowExplicitContent;
+(void)shouldDisplayExplicitRestrictionAlertOfType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
+(void)didDisplayExplicitRestrictionAlertOfType:(long long)arg1 ;
@end
