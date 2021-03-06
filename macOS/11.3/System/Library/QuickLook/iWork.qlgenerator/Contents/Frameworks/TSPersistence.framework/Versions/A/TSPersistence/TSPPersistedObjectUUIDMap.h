/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <TSPersistence/TSPObjectInDocumentContaining.h>

@class NSMutableIndexSet, NSString;

@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying, TSPObjectInDocumentContaining> {

	NSUUIDMap<TSPObjectLocation>* _map;
	NSMutableIndexSet* _objectIdentifiers;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)count;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
-(char)isObjectIdentifierInDocument:(long long)arg1 ;
-(char)isAnyObjectIdentifierInDocument:(id)arg1 ;
-(id)initWithComponentObjectUUIDMapDictionary:(id)arg1 objectUUIDCount:(unsigned long long)arg2 isLoadingDocument:(char)arg3 objectReferenceMap:(id)arg4 delegate:(id)arg5 ;
-(void)didUpdateUUIDDuringRead:(id)arg1 forComponentIdentifier:(long long)arg2 objectIdentifier:(long long)arg3 originalUUID:(id)arg4 isDuplicatedUUID:(char)arg5 delegate:(id)arg6 ;
-(TSPObjectLocation)objectLocationForUUID:(id)arg1 ;
-(void)didUpdateObjectIdentifierDuringRead:(long long)arg1 forUUID:(id)arg2 componentIdentifier:(long long)arg3 originalObjectIdentifier:(long long)arg4 delegate:(id)arg5 ;
-(char)setObjectLocation:(TSPObjectLocation)arg1 forUUID:(id)arg2 objectReferenceMap:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPersistedObjectUUIDMap:(id)arg1 ;
-(id)descriptionForComponentIdentifier:(long long)arg1 objectIdentifier:(long long)arg2 delegate:(id)arg3 ;
@end

