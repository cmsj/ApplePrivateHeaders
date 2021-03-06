/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUICoreFamilyInfoFetching.h>

@protocol CNUICoreContactStoreFacade, CNSchedulerProvider;
@class FAFetchFamilyCircleRequest, CNFuture, NSString;

@interface CNUICoreFamilyInfoRetriever : NSObject <CNUICoreFamilyInfoFetching> {

	char _matchFamilyMembersWithContacts;
	id<CNUICoreContactStoreFacade> _mainContactStore;
	FAFetchFamilyCircleRequest* _fetchFamilyCircleRequest;
	id<CNSchedulerProvider> _schedulerProvider;
	CNFuture* _familyFuture;

}

@property (nonatomic,readonly) id<CNUICoreContactStoreFacade> mainContactStore;                    //@synthesize mainContactStore=_mainContactStore - In the implementation block
@property (nonatomic,readonly) FAFetchFamilyCircleRequest * fetchFamilyCircleRequest;              //@synthesize fetchFamilyCircleRequest=_fetchFamilyCircleRequest - In the implementation block
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider;                          //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,readonly) char matchFamilyMembersWithContacts;                                //@synthesize matchFamilyMembersWithContacts=_matchFamilyMembersWithContacts - In the implementation block
@property (nonatomic,retain) CNFuture * familyFuture;                                              //@synthesize familyFuture=_familyFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keysToFetch;
+(id)meContactFromStore:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)familyCircleFromRequest:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 matchedWithContactsInContactStore:(id)arg3 ;
+(id)familyInfoWithFamilyMembers:(id)arg1 meContact:(id)arg2 ;
+(id)contactsMatchingFamilyMember:(id)arg1 inContactStore:(id)arg2 ;
-(id)init;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNUICoreContactStoreFacade>)mainContactStore;
-(id)initWithMainContactStoreFacade:(id)arg1 matchFamilyMembersWithContacts:(char)arg2 schedulerProvider:(id)arg3 ;
-(id)familyInfo;
-(id)initWithMainContactStoreFacade:(id)arg1 fetchFamilyCircleRequest:(id)arg2 matchFamilyMembersWithContacts:(char)arg3 schedulerProvider:(id)arg4 ;
-(id)createFamilyFuture;
-(char)matchFamilyMembersWithContacts;
-(FAFetchFamilyCircleRequest *)fetchFamilyCircleRequest;
-(CNFuture *)familyFuture;
-(void)setFamilyFuture:(CNFuture *)arg1 ;
@end

