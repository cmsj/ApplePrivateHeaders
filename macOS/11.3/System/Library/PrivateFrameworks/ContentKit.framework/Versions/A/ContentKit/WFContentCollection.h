/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFCoercionOptions, NSMutableArray, NSLock, NSArray, WFContentAttributionSet;

@interface WFContentCollection : NSObject <NSCopying, NSSecureCoding> {

	WFCoercionOptions* _defaultCoercionOptions;
	NSMutableArray* _mutableItems;
	NSLock* _itemWriteLock;

}

@property (nonatomic,retain) NSMutableArray * mutableItems;                           //@synthesize mutableItems=_mutableItems - In the implementation block
@property (nonatomic,retain) NSLock * itemWriteLock;                                  //@synthesize itemWriteLock=_itemWriteLock - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,retain) WFCoercionOptions * defaultCoercionOptions;              //@synthesize defaultCoercionOptions=_defaultCoercionOptions - In the implementation block
@property (nonatomic,readonly) WFContentAttributionSet * attributionSet; 
+(char)supportsSecureCoding;
+(id)collectionWithItems:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addItem:(id)arg1 ;
-(long long)numberOfItems;
-(void)removeItem:(id)arg1 ;
-(void)addFile:(id)arg1 ;
-(NSArray *)items;
-(void)addItems:(id)arg1 ;
-(id)extensionItems;
-(id)minimalExtensionItems;
-(id)initWithDefaultCoercionOptions:(id)arg1 ;
-(id)initWithItems:(id)arg1 defaultCoercionOptions:(id)arg2 ;
-(NSMutableArray *)mutableItems;
-(WFContentAttributionSet *)attributionSet;
-(void)addObject:(id)arg1 named:(id)arg2 ;
-(id)collectionByMergingAttributionSet:(id)arg1 ;
-(void)enumerateObjectRepresentations:(/*^block*/id)arg1 forClass:(Class)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enumerateFileRepresentations:(/*^block*/id)arg1 forType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getObjectRepresentation:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(void)getObjectRepresentationAndAttributionSet:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(void)getFileRepresentation:(/*^block*/id)arg1 forType:(id)arg2 ;
-(void)getFileRepresentationAndAttributionSet:(/*^block*/id)arg1 forType:(id)arg2 ;
-(char)canPerformCoercion:(id)arg1 ;
-(void)performCoercion:(id)arg1 ;
-(id)effectiveCoercionOptionsForRequest:(id)arg1 ;
-(void)getObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)getFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)generateCollectionByCoercingToItemClasses:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)collectionByFilteringItemsWithBlock:(/*^block*/id)arg1 excludedItems:(id*)arg2 ;
-(id)collectionByFilteringToItemClass:(Class)arg1 excludedItems:(id*)arg2 ;
-(void)generateCollectionByEvaluatingQuery:(id)arg1 forContentItemClass:(Class)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getStringRepresentation:(/*^block*/id)arg1 ;
-(void)getStringRepresentations:(/*^block*/id)arg1 ;
-(void)getObjectRepresentations:(/*^block*/id)arg1 forClass:(Class)arg2 ;
-(void)getFileRepresentations:(/*^block*/id)arg1 forType:(id)arg2 ;
-(char)isCoercibleToItemClass:(Class)arg1 ;
-(char)isCoercibleToItemClasses:(id)arg1 ;
-(void)generateCollectionByCoercingToItemClass:(Class)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateCollectionByCoercingToItemClasses:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFCoercionOptions *)defaultCoercionOptions;
-(void)setDefaultCoercionOptions:(WFCoercionOptions *)arg1 ;
-(void)setMutableItems:(NSMutableArray *)arg1 ;
-(NSLock *)itemWriteLock;
-(void)setItemWriteLock:(NSLock *)arg1 ;
-(void)transformItemsAndFlattenUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transformItemsUsingBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transformObjectRepresentationsForClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transformFileRepresentationsForType:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transformFirstObjectRepresentationForClass:(Class)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)transformFirstFileRepresentationForType:(id)arg1 usingBlock:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

