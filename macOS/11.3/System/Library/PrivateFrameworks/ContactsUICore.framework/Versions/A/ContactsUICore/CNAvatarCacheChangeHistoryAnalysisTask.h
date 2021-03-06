/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNTask.h>

@class CNContactStore, NSData, CNChangeHistoryFetchRequest, CNResult, NSArray;

@interface CNAvatarCacheChangeHistoryAnalysisTask : CNTask {

	CNContactStore* _store;
	NSData* _startingToken;
	CNChangeHistoryFetchRequest* _request;
	CNResult* _enumerator;
	NSData* _finalToken;
	NSArray* _identifiers;

}

@property (nonatomic,readonly) CNContactStore * store;                           //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSData * startingToken;                           //@synthesize startingToken=_startingToken - In the implementation block
@property (nonatomic,retain) CNChangeHistoryFetchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) CNResult * enumerator;                              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,retain) NSData * finalToken;                                //@synthesize finalToken=_finalToken - In the implementation block
@property (nonatomic,retain) NSArray * identifiers;                              //@synthesize identifiers=_identifiers - In the implementation block
-(CNContactStore *)store;
-(CNResult *)enumerator;
-(CNChangeHistoryFetchRequest *)request;
-(NSArray *)identifiers;
-(void)setRequest:(CNChangeHistoryFetchRequest *)arg1 ;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(id)run:(id*)arg1 ;
-(NSData *)startingToken;
-(id)initWithContactStore:(id)arg1 startingToken:(id)arg2 ;
-(void)makeRequest;
-(void)executeRequest;
-(void)extractIdentifiers;
-(NSData *)finalToken;
-(void)setEnumerator:(CNResult *)arg1 ;
-(void)setFinalToken:(NSData *)arg1 ;
@end

