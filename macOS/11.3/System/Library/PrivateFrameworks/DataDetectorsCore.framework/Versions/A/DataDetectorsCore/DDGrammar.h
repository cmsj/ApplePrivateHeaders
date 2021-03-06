/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableSet, DDNonTerminal, NSArray, NSMutableDictionary;

@interface DDGrammar : NSObject <NSSecureCoding> {

	NSMutableArray* _nonTerminals;
	NSMutableSet* _allNames;
	int _tokenGen;
	DDNonTerminal* _start;
	NSArray* _allProductionsCache;
	long long _nextNonTerminalId;
	CFDictionaryRef _terminalById;
	NSMutableDictionary* _nonTerminalByVariable;
	DDProtoLexemeCollectionRef _plCollection;

}
+(char)supportsSecureCoding;
-(long long)nextNonTerminalIdentifier;
-(id)freshNameWithBase:(id)arg1 ;
-(id)buildNonTerminalSymbolWithName:(id)arg1 ;
-(id)buildNonTerminalSymbol;
-(id)terminalSymbolWithTokenId:(long long)arg1 name:(id)arg2 ;
-(id)terminalSymbolWithLookupTokenId:(long long)arg1 name:(id)arg2 ;
-(void)feedWithTopLevelExpressions:(id)arg1 plCollection:(DDProtoLexemeCollectionRef)arg2 manager:(id)arg3 ;
-(id)grammarAsString;
-(id)allProductions;
-(DDProtoLexemeCollectionRef)plCollection;
-(id)nonTerminalSymbolForVariable:(id)arg1 ;
-(void)setNonTerminalSymbol:(id)arg1 forVariable:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)start;
-(id)locationString;
@end

