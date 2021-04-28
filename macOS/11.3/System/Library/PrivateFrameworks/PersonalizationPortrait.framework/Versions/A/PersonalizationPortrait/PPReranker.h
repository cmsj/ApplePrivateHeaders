/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/Versions/A/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PPFeedbackAccepting.h>
#import <libobjc.A.dylib/PPClientStore.h>

@class PPNamedEntityStore, PPClientFeedbackHelper, _PASLock, NSString;

@interface PPReranker : NSObject <PPFeedbackAccepting, PPClientStore> {

	PPNamedEntityStore* _namedEntityStore;
	PPClientFeedbackHelper* _clientFeedbackHelper;
	_PASLock* _dataLock;

}

@property (nonatomic,retain) NSString * clientIdentifier; 
-(id)init;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)registerFeedback:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithNamedEntityStore:(id)arg1 ;
-(id)_lazyLoadEntityRankMapWithError:(id*)arg1 ;
-(id)rerankedMediaItems:(id)arg1 error:(id*)arg2 ;
@end
