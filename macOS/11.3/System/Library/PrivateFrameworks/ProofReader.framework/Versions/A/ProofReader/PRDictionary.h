/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/Versions/A/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData, NSDictionary;

@interface PRDictionary : NSObject {

	NSURL* _url;
	NSData* _data;
	NSDictionary* _offsetsDictionary;
	NSDictionary* _numEntriesDictionary;
	NSDictionary* _dictionariesDictionary;
	PRDictionary* _fallbackDictionary;

}
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 fallbackURL:(id)arg2 ;
-(char)checkWordBuffer:(char*)arg1 length:(unsigned long long)arg2 encoding:(unsigned)arg3 index:(unsigned long long)arg4 caseInsensitive:(char)arg5 ;
-(id)dictionaryAtIndex:(unsigned long long)arg1 ;
-(id)fallbackDictionary;
@end

