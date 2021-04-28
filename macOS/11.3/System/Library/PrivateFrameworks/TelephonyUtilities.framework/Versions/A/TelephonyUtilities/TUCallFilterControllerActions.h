/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/Versions/A/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUCallFilterControllerActions <NSObject>
@required
-(char)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
-(char)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(char)arg3;
-(unsigned long long)filterStatusForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
-(char)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(char)arg3;
-(char)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;

@end
