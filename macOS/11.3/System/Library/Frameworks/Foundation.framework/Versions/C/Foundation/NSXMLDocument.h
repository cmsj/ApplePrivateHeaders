/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSXMLNode.h>

@class NSString, NSXMLDTD, NSArray, NSXMLElement, NSData;

@interface NSXMLDocument : NSXMLNode {

	NSString* _encoding;
	NSString* _version;
	NSXMLDTD* _docType;
	NSArray* _children;
	char _childrenHaveMutated;
	char _standalone;
	char padding[2];
	NSXMLElement* _rootElement;
	NSString* _URI;
	id _extraIvars;
	unsigned long long _fidelityMask;
	unsigned long long _contentKind;

}

@property (copy) NSString * characterEncoding; 
@property (copy) NSString * version; 
@property (getter=isStandalone) char standalone; 
@property (assign) unsigned long long documentContentKind; 
@property (copy) NSString * MIMEType; 
@property (copy) NSXMLDTD * DTD; 
@property (copy,readonly) NSData * XMLData; 
+(id)_nodeFromLibXML2Node:(void*)arg1 ;
+(void)_loadXSLT;
+(Class)replacementClassForClass:(Class)arg1 ;
+(void)_setInstancesShouldLoadExternalEntities:(char)arg1 ;
+(char)_instancesShouldLoadExternalEntities;
+(void)_setXMLTagsAllowableInHTML:(id)arg1 ;
+(id)_contentsOfHTMLData:(id)arg1 encoding:(id)arg2 strippingTagsSeparatedByString:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(id)stringValue;
-(NSString *)version;
-(NSString *)MIMEType;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setVersion:(NSString *)arg1 ;
-(id)objectValue;
-(void)setObjectValue:(id)arg1 ;
-(id)initWithKind:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)childCount;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeChildAtIndex:(unsigned long long)arg1 ;
-(void)replaceChildAtIndex:(unsigned long long)arg1 withNode:(id)arg2 ;
-(void)addChild:(id)arg1 ;
-(id)rootElement;
-(id)children;
-(id)_children;
-(void)insertChildren:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setChildren:(id)arg1 ;
-(unsigned long long)countOfChildren;
-(id)objectInChildrenAtIndex:(unsigned long long)arg1 ;
-(void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1 ;
-(void)replaceObjectInChildrenAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(id)canonicalXMLStringPreservingComments:(char)arg1 ;
-(id)XPath;
-(void)setCharacterEncoding:(NSString *)arg1 ;
-(void)setMIMEType:(NSString *)arg1 ;
-(void)setDTD:(NSXMLDTD *)arg1 ;
-(id)_tidyWithData:(id)arg1 error:(id*)arg2 isXML:(char)arg3 detectedEncoding:(unsigned)arg4 ;
-(void)_setContentKindAndEncoding;
-(void)setDocumentContentKind:(unsigned long long)arg1 ;
-(NSString *)characterEncoding;
-(void)setRootElement:(id)arg1 ;
-(void)_initWithLibTidyDoc:(TidyDoc*)arg1 child:(TidyNode*)arg2 encoding:(unsigned)arg3 ;
-(unsigned long long)documentContentKind;
-(char)isStandalone;
-(NSXMLDTD *)DTD;
-(id)_canonicalXMLStringPreservingComments:(char)arg1 namespaceString:(id)arg2 relationships:(id)arg3 ;
-(id)XMLDataWithOptions:(unsigned long long)arg1 ;
-(id)XMLStringWithOptions:(unsigned long long)arg1 ;
-(id)objectByApplyingXSLTString:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(id)objectByApplyingXSLTAtURL:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(id)_applyStylesheet:(xmlDoc*)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(id)objectByApplyingXSLT:(id)arg1 arguments:(id)arg2 error:(id*)arg3 ;
-(xmlDoc*)_libxml2TreeRepresentation;
-(char)_validateWithSchemaAndReturnError:(id*)arg1 ;
-(void)setStringValue:(id)arg1 resolvingEntities:(char)arg2 ;
-(id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 validExternalEntityURLs:(id)arg3 error:(id*)arg4 ;
-(id)_initWithData:(id)arg1 encoding:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithRootElement:(id)arg1 ;
-(void)setStandalone:(char)arg1 ;
-(NSData *)XMLData;
-(id)objectByApplyingXSLT:(id)arg1 error:(id*)arg2 ;
-(id)objectByApplyingXSLTAtURL:(id)arg1 error:(id*)arg2 ;
-(char)validateAndReturnError:(id*)arg1 ;
@end

