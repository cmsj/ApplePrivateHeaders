/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveInputPredictions.framework/Versions/A/ProactiveInputPredictions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject;

@interface PSGWordBoundaryFSTGrammar : NSObject {

	NSCache* _lmWrapperCache;
	NSObject*<OS_dispatch_queue> _lmWrapperQueue;

}
+(id)sharedInstance;
-(id)init;
-(void*)_createLanguageModel:(id)arg1 ;
-(void*)_createLexicon:(id)arg1 ;
-(id)_getLMWrapper:(id)arg1 ;
-(id)_getPrimingToken:(void*)arg1 transientTokenID:(unsigned)arg2 ;
-(id)triggerAttributesForContext:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)warmUpForLocaleIdentifier:(id)arg1 ;
-(void)clearLMCache;
@end

