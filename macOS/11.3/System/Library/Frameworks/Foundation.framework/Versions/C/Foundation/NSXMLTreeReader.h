/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSData, NSString, NSURL, NSSet, NSXMLNode, NSMutableString, NSMapTable;

@interface NSXMLTreeReader : NSObject {

	char _hadError;
	char _additiveContent;
	char _isSingleDTDNode;
	char _wasEmpty;
	char _isMissingDTD;
	char _elementClassOverridden;
	long long _externalEntityLoadingPolicy;
	unsigned long long _fidelityMask;
	NSData* _data;
	NSString* uri;
	NSURL* _url;
	NSSet* _allowedEntityURLs;
	NSXMLNode* _root;
	NSXMLNode* _current;
	id* _error;
	NSMutableString* _content;
	NSString* _whitespace;
	NSXMLNode* _text;
	NSMapTable* _xmlCharToNSString;
	NSMapTable* _xmlCharHashToNSString;
	/*function pointer*/void* _readerCharacters;
	xmlTextReader* _reader;
	Class _documentClass;
	Class _dtdClass;
	Class _dtdNodeClass;
	Class _elementClass;
	Class _nodeClass;

}

@property (copy,readonly) NSURL * url; 
+(id)currentReader;
+(void)setCurrentReader:(id)arg1 ;
-(void)dealloc;
-(NSURL *)url;
-(id)parse;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)initWithData:(id)arg1 documentClass:(Class)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setAllowedEntityURLs:(id)arg1 ;
-(void)setExternalEntityLoadingPolicy:(long long)arg1 ;
-(xmlParserInput*)_xmlExternalEntityWithURL:(const char*)arg1 identifier:(const char*)arg2 context:(xmlParserCtxt*)arg3 originalLoaderFunction:(/*function pointer*/void*)arg4 ;
-(void)setRoot:(id)arg1 ;
-(void)setCurrent:(id)arg1 ;
-(void)setContent:(id)arg1 ;
-(id)root;
-(void)setError:(long long)arg1 info:(id)arg2 fatal:(char)arg3 ;
-(void)_addContent;
-(void)_addEntity:(id)arg1 ;
-(id)initWithData:(id)arg1 documentClass:(Class)arg2 isSingleDTDNode:(char)arg3 options:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)_initializeReader;
-(void)processRealDocument:(xmlDoc*)arg1 ;
-(void)processNode:(xmlTextReader*)arg1 ;
-(id)DTDString;
-(void)processElement:(xmlTextReader*)arg1 ;
-(void)processText:(xmlTextReader*)arg1 ;
-(void)processCDATA:(xmlTextReader*)arg1 ;
-(void)processEntityReference:(xmlTextReader*)arg1 ;
-(void)processEntity:(xmlTextReader*)arg1 ;
-(void)processProcessingInstruction:(xmlTextReader*)arg1 ;
-(void)processComment:(xmlTextReader*)arg1 ;
-(void)processDocument:(xmlTextReader*)arg1 ;
-(void)processDocumentType:(xmlTextReader*)arg1 ;
-(void)processDocumentFragment:(xmlTextReader*)arg1 ;
-(void)processNotation:(xmlTextReader*)arg1 ;
-(void)processWhitespace:(xmlTextReader*)arg1 ;
-(void)processSignificantWhitespace:(xmlTextReader*)arg1 ;
-(void)processEndElement:(xmlTextReader*)arg1 ;
-(void)processEndEntity:(xmlTextReader*)arg1 ;
-(void)processXMLDeclaration:(xmlTextReader*)arg1 ;
-(id)createNamedNodeFromNode:(xmlNode*)arg1 reader:(xmlTextReader*)arg2 ;
-(long long)externalEntityLoadingPolicy;
-(id)allowedEntityURLs;
@end

