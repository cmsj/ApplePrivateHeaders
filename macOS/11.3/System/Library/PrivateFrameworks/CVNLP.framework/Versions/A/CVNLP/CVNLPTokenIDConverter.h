/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/Versions/A/CVNLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVNLP/CVNLP-Structs.h>
@interface CVNLPTokenIDConverter : NSObject {

	unique_ptr<cvnlp::AbstractVocabulary, std::__1::default_delete<cvnlp::AbstractVocabulary>>* _vocabTokenizer;
	unsigned _bosTokenID;
	unsigned _eosTokenID;
	unsigned _unkTokenID;

}

@property (readonly) unsigned bosTokenID;              //@synthesize bosTokenID=_bosTokenID - In the implementation block
@property (readonly) unsigned eosTokenID;              //@synthesize eosTokenID=_eosTokenID - In the implementation block
@property (readonly) unsigned unkTokenID;              //@synthesize unkTokenID=_unkTokenID - In the implementation block
-(id)initWithResource:(id)arg1 andTokenType:(int)arg2 ;
-(void)enumerateTokenIDsForText:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned)bosTokenID;
-(unsigned)eosTokenID;
-(unsigned)unkTokenID;
@end

