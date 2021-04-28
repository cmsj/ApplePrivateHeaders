/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUIPRLikenessProvider;
@class NSMutableArray, CNAvatarCache, CNContact;

@interface CNAvatarCacheEntry : NSObject {

	NSMutableArray* _delegates;
	CNAvatarCache* _cache;
	CNContact* _contact;
	id<CNUIPRLikenessProvider> _likeness;

}

@property (nonatomic,copy,readonly) CNContact * contact;                         //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) id<CNUIPRLikenessProvider> likeness;              //@synthesize likeness=_likeness - In the implementation block
-(id)description;
-(id)init;
-(CNContact *)contact;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegates:(id)arg1 ;
-(id<CNUIPRLikenessProvider>)likeness;
-(id)initWithContact:(id)arg1 cache:(id)arg2 ;
-(void)updateLikeness:(id)arg1 contact:(id)arg2 ;
@end
