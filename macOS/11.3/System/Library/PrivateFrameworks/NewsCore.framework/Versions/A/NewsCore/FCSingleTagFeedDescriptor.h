/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedDescriptor.h>

@protocol FCTagProviding, FCPaidAccessCheckerType;
@interface FCSingleTagFeedDescriptor : FCFeedDescriptor {

	id<FCTagProviding> _tag;
	long long _feedType;
	long long _feedSortMethod;
	long long _feedFilterOptions;
	long long _feedPersonalizationConfigurationSet;
	id<FCTagProviding> _masterTag;
	id<FCPaidAccessCheckerType> _paidAccessChecker;

}

@property (nonatomic,copy) id<FCTagProviding> tag;                                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) id<FCTagProviding> masterTag;                        //@synthesize masterTag=_masterTag - In the implementation block
@property (nonatomic,retain) id<FCPaidAccessCheckerType> paidAccessChecker;              //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
-(char)isEqual:(id)arg1 ;
-(id)name;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setTag:(id<FCTagProviding>)arg1 ;
-(id<FCTagProviding>)tag;
-(id)theme;
-(void)setFeedType:(long long)arg1 ;
-(long long)feedType;
-(id)iAdCategories;
-(id)iAdKeywords;
-(char)hideAccessoryText;
-(char)isSubscribable;
-(long long)iAdContentProvider;
-(id)iAdPrimaryAudience;
-(id)iAdFeedID;
-(id)iAdSectionID;
-(id)languagesWithSubscriptionController:(id)arg1 ;
-(char)subscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 error:(id*)arg3 ;
-(char)isMutedWithSubscriptionController:(id)arg1 ;
-(void)unsubscribeToWithSubscriptionController:(id)arg1 eventInitiationLevel:(long long)arg2 ;
-(char)isSubscribedToWithSubscriptionController:(id)arg1 ;
-(char)hasNotificationsEnabledWithSubscriptionController:(id)arg1 ;
-(id)backingTag;
-(id)backingChannel;
-(id)backingChannelID;
-(id)backingSectionID;
-(id)backingTopicID;
-(long long)feedSortMethod;
-(long long)feedFilterOptions;
-(long long)feedPersonalizationConfigurationSet;
-(id)initWithContext:(id)arg1 tag:(id)arg2 sortMethod:(long long)arg3 filterOptions:(long long)arg4 personalizationConfigurationSet:(long long)arg5 paidAccessChecker:(id)arg6 ;
-(id<FCTagProviding>)masterTag;
-(id)initWithContext:(id)arg1 tag:(id)arg2 paidAccessChecker:(id)arg3 ;
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(void)setPaidAccessChecker:(id<FCPaidAccessCheckerType>)arg1 ;
@end
