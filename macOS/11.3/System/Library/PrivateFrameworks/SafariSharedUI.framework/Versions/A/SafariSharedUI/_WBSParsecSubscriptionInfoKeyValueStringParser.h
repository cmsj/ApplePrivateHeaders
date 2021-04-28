/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject {

	NSString* _string;
	unsigned long long _index;

}
+(id)parseKeyValuePairsFromString:(id)arg1 ;
-(id)_initWithString:(id)arg1 ;
-(char)_isAtEnd;
-(id)_parseKeyValuePairs;
-(char)_parseKeyValuePairWithKey:(id*)arg1 value:(id*)arg2 ;
-(unsigned short)_previewCharacter;
-(unsigned short)_consumeCharacter;
-(void)_skipWhitespace;
-(id)_parseKey;
-(id)_parseValue;
-(id)_parseUpToCharacterFromSet:(id)arg1 ;
-(id)_parseJSONValue;
@end
