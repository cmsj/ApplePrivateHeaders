/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/Versions/A/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSString, NSMutableSet, NSXMLParser, NSMutableString, NSMutableDictionary;

@interface _EARPlsParser : NSObject <NSXMLParserDelegate> {

	NSString* _currentGrapheme;
	NSMutableSet* _currentPhonemes;
	NSXMLParser* _parser;
	NSMutableString* _elementValue;
	NSMutableDictionary* _lexemes;

}

@property (nonatomic,retain) NSMutableDictionary * lexemes;              //@synthesize lexemes=_lexemes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithData:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)initWithFilePath:(id)arg1 ;
-(NSMutableDictionary *)lexemes;
-(void)setLexemes:(NSMutableDictionary *)arg1 ;
@end

