/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputContext/InputContext-Structs.h>
@class NSString;

@interface _ICTransientLexicon : NSObject {

	LXLexiconRef _lexicon;
	int _count;
	unsigned char _typeFlags;
	NSString* _name;
	unsigned long long _entryCount;

}

@property (nonatomic,readonly) unsigned char typeFlags;                    //@synthesize typeFlags=_typeFlags - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long entryCount;              //@synthesize entryCount=_entryCount - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(char)contains:(id)arg1 ;
-(id)getEntries;
-(void)removeAllEntries;
-(LXLexiconRef)getLexiconImplementation;
-(unsigned char)typeFlags;
-(LXEntryRef)copyEntryForString:(id)arg1 ;
-(id)initWithName:(id)arg1 typeFlags:(unsigned char)arg2 ;
-(char)addEntry:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3 ;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(id)getSortKeyEquivalents:(id)arg1 ;
-(unsigned long long)entryCount;
-(id)getEntryRefCount:(id)arg1 ;
-(id)getUsageCount:(id)arg1 ;
@end

