/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactLikenessesFetchStrategyFactory.h>

@protocol CNUIParentContainerCache;
@class CNUIMeContactMonitor, PRPersonaStore, CNUIPRLikenessResolver;

@interface CNContactLikenessesFetchStrategyDefaultFactory : NSObject <CNContactLikenessesFetchStrategyFactory> {

	id<CNUIParentContainerCache> _parentContainerCache;
	CNUIMeContactMonitor* _meContactMonitor;
	PRPersonaStore* _personaStore;
	CNUIPRLikenessResolver* _likenessResolver;

}

@property (nonatomic,retain) id<CNUIParentContainerCache> parentContainerCache;              //@synthesize parentContainerCache=_parentContainerCache - In the implementation block
@property (nonatomic,retain) CNUIMeContactMonitor * meContactMonitor;                        //@synthesize meContactMonitor=_meContactMonitor - In the implementation block
@property (nonatomic,retain) PRPersonaStore * personaStore;                                  //@synthesize personaStore=_personaStore - In the implementation block
@property (nonatomic,retain) CNUIPRLikenessResolver * likenessResolver;                      //@synthesize likenessResolver=_likenessResolver - In the implementation block
-(CNUIPRLikenessResolver *)likenessResolver;
-(CNUIMeContactMonitor *)meContactMonitor;
-(void)setLikenessResolver:(CNUIPRLikenessResolver *)arg1 ;
-(PRPersonaStore *)personaStore;
-(void)setPersonaStore:(PRPersonaStore *)arg1 ;
-(id)strategyForContact:(id)arg1 ;
-(id<CNUIParentContainerCache>)parentContainerCache;
-(id)initWithMeContactMonitor:(id)arg1 personaStore:(id)arg2 likenessResolver:(id)arg3 parentContainerCache:(id)arg4 ;
-(void)setParentContainerCache:(id<CNUIParentContainerCache>)arg1 ;
-(void)setMeContactMonitor:(CNUIMeContactMonitor *)arg1 ;
@end

