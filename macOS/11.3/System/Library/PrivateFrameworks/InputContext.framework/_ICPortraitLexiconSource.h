/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ICLexiconSourcing.h>
#import <libobjc.A.dylib/_ICFeedbackAccepting.h>

@class _ICLexiconManager, PPContactStore, PPContactNameRecordLoadingDelegate, PPNamedEntityStore, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {

	_ICLexiconManager* _manager;
	PPContactStore* _contactStore;
	PPContactNameRecordLoadingDelegate* _contactDelegate;
	PPNamedEntityStore* _namedEntityStore;
	PPNamedEntityRecordLoadingDelegate* _namedEntityDelegate;

}
-(id)init;
-(void)warmUp;
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3 ;
-(void)hibernate;
-(id)_makePPNamedEntityStore;
-(id)_makeContactDelegate;
-(id)_makeNamedEntityDelegate;
-(void)startLoadingWithManager:(id)arg1 ;
-(void)_reloadNamedEntityDataAfterReset;
@end

