/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/Versions/A/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKObject.h>

@class NSString, USKToken, NSArray, NSDictionary;

@interface USKNode : USKObject {

	UsdPrim* _prim;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) USKToken * typeName; 
@property (nonatomic,readonly) NSArray * schemaTypes; 
@property (nonatomic,readonly) NSDictionary * properties; 
-(id)initWithUsdPrim:(UsdPrim*)arg1 ;
-(char)setCustomMetadata:(id)arg1 value:(id)arg2 ;
-(UsdPrim*)usdPrim;
-(id)inheritedProperty:(id)arg1 ;
-(char)selectVariant:(id)arg1 variantSet:(id)arg2 ;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 variability:(char)arg4 ;
-(char)hasSchemaType:(id)arg1 ;
-(void)addReferenceWithURL:(id)arg1 nodePath:(id)arg2 ;
-(void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 ;
-(void)addReferenceWithPath:(id)arg1 nodePath:(id)arg2 offset:(id)arg3 ;
-(void)addVariantSet:(id)arg1 ;
-(void)addVariant:(id)arg1 variantSet:(id)arg2 ;
-(char)hasVariantSets;
-(char)hasVariantSet:(id)arg1 ;
-(id)variantSets;
-(id)variantsWithVariantSet:(id)arg1 ;
-(char)editVariant:(id)arg1 variantSet:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)isInstanceNode;
-(id)masterNode;
-(id)newCustomPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(id)subtreeIterator;
-(id)loadedSubtreeIterator;
-(NSArray *)schemaTypes;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)name;
-(NSString *)type;
-(id)path;
-(id)propertyList;
-(id)parent;
-(id)specifier;
-(id)metadata;
-(NSDictionary *)properties;
-(USKToken *)typeName;
-(char)removeProperty:(id)arg1 ;
-(id)childIterator;
-(id)newPropertyWithName:(id)arg1 type:(id)arg2 role:(id)arg3 ;
-(char)setDictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 value:(id)arg3 ;
-(char)setMetadataWithKey:(id)arg1 value:(id)arg2 ;
-(void)applyType:(id)arg1 ;
-(void)clearReferences;
-(id)property:(id)arg1 ;
-(id)metadataWithKey:(id)arg1 ;
-(id)customMetadataWithKey:(id)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(id)loadedChildIterator;
-(id)inheritedSkeletonBinding;
-(id)inheritedMaterialBinding;
-(id)inheritedSkeletonAnimationBinding;
-(id)dictionaryMetadataWithKey:(id)arg1 dictionaryKey:(id)arg2 ;
@end

