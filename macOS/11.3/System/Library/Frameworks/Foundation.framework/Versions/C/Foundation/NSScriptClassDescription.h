/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSClassDescription.h>

@class NSString, NSObject, NSArray, NSDictionary;

@interface NSScriptClassDescription : NSClassDescription {

	NSString* _suiteName;
	NSString* _objcClassName;
	unsigned _appleEventCode;
	NSObject* _superclassNameOrDescription;
	NSArray* _attributeDescriptions;
	NSArray* _toOneRelationshipDescriptions;
	NSArray* _toManyRelationshipDescriptions;
	NSDictionary* _commandMethodSelectorsByName;
	id _moreVars;

}

@property (copy,readonly) NSString * suiteName; 
@property (copy,readonly) NSString * className; 
@property (copy,readonly) NSString * implementationClassName; 
@property (retain,readonly) NSScriptClassDescription * superclassDescription; 
@property (readonly) unsigned appleEventCode; 
@property (copy,readonly) NSString * defaultSubcontainerAttributeKey; 
+(id)classDescriptionForClass:(Class)arg1 ;
+(id)_sortedAETEPropertyDescriptions:(id)arg1 ;
+(id)_sortedAETEElementClassDescriptions:(id)arg1 ;
+(id)_propertyDescriptionsOfClass:(Class)arg1 fromImplDeclarations:(id)arg2 presoDeclarations:(id)arg3 suiteName:(id)arg4 className:(id)arg5 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(char)_isHidden;
-(unsigned)appleEventCode;
-(id)keyWithAppleEventCode:(unsigned)arg1 ;
-(void)_forKey:(id)arg1 getType:(id*)arg2 andSuite:(id*)arg3 ;
-(unsigned)appleEventCodeForKey:(id)arg1 ;
-(id)attributeKeys;
-(id)toOneRelationshipKeys;
-(id)toManyRelationshipKeys;
-(id)inverseForRelationshipKey:(id)arg1 ;
-(char)hasOrderedToManyRelationshipForKey:(id)arg1 ;
-(char)_isToManyRelationshipOrderedForKey:(id)arg1 ;
-(char)hasPropertyForKey:(id)arg1 ;
-(NSString *)implementationClassName;
-(char)_isFromSDEF;
-(id)_contentsTypeDescription;
-(char)isLocationRequiredToCreateForKey:(id)arg1 ;
-(NSString *)suiteName;
-(NSString *)className;
-(id)_typeDescriptionForKey:(id)arg1 ;
-(id)_propertyDescriptionForAppleEventCode:(unsigned)arg1 checkSubclasses:(char)arg2 ;
-(id)_presentablePluralName;
-(char)hasReadablePropertyForKey:(id)arg1 ;
-(id)classDescriptionForKey:(id)arg1 ;
-(char)hasWritablePropertyForKey:(id)arg1 ;
-(NSScriptClassDescription *)superclassDescription;
-(char)_shouldByDefaultInsertAtBeginningOfRelationshipForKey:(id)arg1 ;
-(id)_propertyDescriptionForKey:(id)arg1 checkSubclasses:(char)arg2 ;
-(id)_aetePropertyDescriptions;
-(id)_aeteElementClassDescriptions;
-(id)_presentableDescription;
-(id)_presentableNames;
-(char)_hasHiddenParts;
-(unsigned short)_appendObjectClassDeclarationsToAETEData:(id)arg1 includingParts:(int)arg2 ;
-(char)supportsCommand:(id)arg1 ;
-(char)matchesAppleEventCode:(unsigned)arg1 ;
-(id)_primitiveTypeDescription;
-(id)_synonymDescriptions;
-(NSString *)defaultSubcontainerAttributeKey;
-(id)_initWithSuiteName:(id)arg1 className:(id)arg2 implDeclaration:(id)arg3 presoDeclaration:(id)arg4 ;
-(id)_methodNameForCommand:(id)arg1 ;
-(id)_propertyDescriptionsByKey;
-(void)_getKeys:(id)arg1 forPropertyDescriptionKind:(int)arg2 ;
-(id)_keysForPropertyDescriptionKind:(int)arg1 ;
-(id)initWithSuiteName:(id)arg1 className:(id)arg2 dictionary:(id)arg3 ;
-(SEL)selectorForCommand:(id)arg1 ;
-(id)typeForKey:(id)arg1 ;
-(id)_commandMethodSelectorsByName;
-(char)isReadOnlyKey:(id)arg1 ;
-(id)_firstPresentableName;
-(void)_addAccessGroups:(id)arg1 ;
-(id)_initWithProperties:(const SCD_Struct_NS64*)arg1 primitiveType:(id)arg2 ;
-(id)_propertyDescriptionForAppleEventCode:(unsigned)arg1 checkSubclasses:(char)arg2 superclasses:(char)arg3 ;
-(id)_propertyDescriptionForPresentableName:(id)arg1 checkSubclasses:(char)arg2 superclasses:(char)arg3 ;
-(id)_propertyDescriptionForKey:(id)arg1 checkSubclasses:(char)arg2 superclasses:(char)arg3 ;
-(id)_initWithProperties:(const SCD_Struct_NS64*)arg1 defaultSubcontainerAttributeKey:(id)arg2 inverseRelationshipKeys:(id)arg3 ;
-(id)_initWithClassDescription:(id)arg1 synonymDescription:(id)arg2 ;
-(void)_reconcileToSuiteRegistry:(id)arg1 ;
-(void)_reconcileToExtensionDescription:(id)arg1 suiteRegistry:(id)arg2 ;
-(char)_isSynonym;
-(id)_descriptionWithTabCount:(unsigned long long)arg1 ;
@end

