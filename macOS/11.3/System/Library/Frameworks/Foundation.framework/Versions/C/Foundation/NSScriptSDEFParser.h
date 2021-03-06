/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSData, NSBundle, NSDictionary, NSMutableArray, NSArray, NSString;

@interface NSScriptSDEFParser : NSObject <NSXMLParserDelegate> {

	NSData* _data;
	NSBundle* _bundle;
	NSDictionary* _descriptionCreationMethodsByElementName;
	NSDictionary* _validSubelementNamesPerArrayElementName;
	NSMutableArray* _elementsBeingParsed;
	NSArray* _suiteDescriptions;
	char _parsesCocoaElements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_valueForOptionalCocoaAttributeKey:(id)arg1 fromElement:(id)arg2 ;
-(unsigned long long)_accessValueForAttributeKey:(id)arg1 fromElement:(id)arg2 ;
-(id)_implementationAttribute:(id)arg1 fromElement:(id)arg2 withName:(id)arg3 capitalizing:(char)arg4 ;
-(id)_argumentKeyFromElement:(id)arg1 withName:(id)arg2 ;
-(char)_booleanValueForAttributeKey:(id)arg1 fromElement:(id)arg2 ;
-(id)_typeNameFromElement:(id)arg1 isOptional:(char)arg2 ;
-(id)_currentSuiteName;
-(id)_classNameFromElement:(id)arg1 withName:(id)arg2 ;
-(id)_propertyKeyFromElement:(id)arg1 withName:(id)arg2 ;
-(unsigned long long)_propertyAccessFromElement:(id)arg1 ;
-(id)_methodSelectorFromElement:(id)arg1 withName:(id)arg2 ;
-(char)_booleanValueForCocoaAttributeKey:(id)arg1 fromElement:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(void)setBundle:(id)arg1 ;
-(void)setParsesCocoaElements:(char)arg1 ;
-(id)_valueForRequiredCocoaAttributeKey:(id)arg1 fromElement:(id)arg2 ;
-(id)_createArgumentDescriptionFromElement:(id)arg1 ;
-(id)_createClassDescriptionFromElement:(id)arg1 ;
-(id)_createClassExtensionDescriptionFromElement:(id)arg1 ;
-(id)_createCocoaDescriptionFromElement:(id)arg1 ;
-(id)_createCommandDescriptionFromElement:(id)arg1 ;
-(id)_createAccessGroupDescriptionFromElement:(id)arg1 ;
-(id)_createEnumerationDescriptionFromElement:(id)arg1 ;
-(id)_createEnumeratorDescriptionFromElement:(id)arg1 ;
-(id)_createPropertyDescriptionFromElement:(id)arg1 ;
-(id)_createRecordTypeDescriptionFromElement:(id)arg1 ;
-(id)_createRespondsToDescriptionFromElement:(id)arg1 ;
-(id)_createResultDescriptionFromElement:(id)arg1 ;
-(id)_createSuiteDescriptionFromElement:(id)arg1 ;
-(id)_createSynonymDescriptionFromElement:(id)arg1 ;
-(id)_createSuiteDescriptionArrayFromDictionaryElement:(id)arg1 ;
-(id)_createToManyRelationshipDescriptionFromElement:(id)arg1 ;
-(id)_createToOneRelationshipDescriptionFromElement:(id)arg1 ;
-(id)_createTypeDescriptionFromElement:(id)arg1 ;
-(id)_createValueTypeDescriptionFromElement:(id)arg1 ;
-(id)suiteDescriptions;
@end

