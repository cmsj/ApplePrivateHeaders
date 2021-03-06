/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/Versions/A/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGHarvestEligibility : NSObject
+(char)searchableItemIsEligibleForDeferredHarvesting:(id)arg1 ;
+(char)searchableItemIsEligibleForDissectorPipeline:(id)arg1 ;
+(char)searchableItemIsEligibleForHarvesting:(id)arg1 eligibleExceptForAge:(char*)arg2 ;
+(char)searchableItemIsStoredEncryptedWithGetterBlock:(/*^block*/id)arg1 bundleIdentifier:(id)arg2 ;
+(char)searchableItemIsEligibleForHarvestingWithGetterBlock:(/*^block*/id)arg1 bundleIdentifier:(id)arg2 eligibleExceptForAge:(char*)arg3 ;
+(/*^block*/id)mailAppItemEligibilityCheckBlock;
+(/*^block*/id)messagesAppItemEligibilityCheckBlock;
+(/*^block*/id)genericItemIneligibleBlock;
+(/*^block*/id)genericItemEligibleBlock;
@end

