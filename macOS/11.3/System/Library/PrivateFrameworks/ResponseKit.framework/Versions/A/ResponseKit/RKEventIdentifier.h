/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class RKMontrealModel, RKNLEventTokenizer;

@interface RKEventIdentifier : NSObject {

	RKMontrealModel* _model;
	RKNLEventTokenizer* _tokenizer;
	const IOMappings* _ioMappings;
	int _outputPermutation[5];

}
-(id)init;
-(id)identifyText:(id)arg1 ;
-(id)initWithLanguageID:(id)arg1 ;
-(id)_identifyOwnedTokenSequences:(id)arg1 ;
-(id)_identifyStrings:(id)arg1 otherDateCount:(unsigned long long)arg2 otherDates:(RKEventIdentifierRange*)arg3 ;
-(void)resetEventIdentifierModel;
-(id)identifyStrings:(id)arg1 ;
-(id)identifyMessage:(id)arg1 ;
@end
