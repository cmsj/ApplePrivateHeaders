/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ClassKit.framework/Versions/A/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/CLSRelationable.h>
#import <libobjc.A.dylib/CLSGraphVertex.h>
#import <libobjc.A.dylib/NSLocking.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLSDataStore, NSString, NSMutableDictionary, NSDate;

@interface CLSObject : NSObject <CLSRelationable, CLSGraphVertex, NSLocking, NSSecureCoding> {

	char _deleted;
	char _modified;
	char _enforceImmutability;
	CLSDataStore* _dataStore;
	NSString* _parentObjectID;
	NSString* _appIdentifier;
	NSMutableDictionary* _childrenByID;
	CLSObject* _parent;
	os_unfair_recursive_lock_s _lock;
	char _needsRepair;
	char _temporary;
	unsigned _generation;
	NSDate* _dateCreated;
	NSDate* _dateLastModified;
	NSString* _objectID;
	NSDate* _dateExpires;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isTemporary,nonatomic) char temporary;                                   //@synthesize temporary=_temporary - In the implementation block
@property (assign) unsigned generation;                                                           //@synthesize generation=_generation - In the implementation block
@property (nonatomic,copy) NSString * appIdentifier; 
@property (nonatomic,copy) NSString * objectID;                                                   //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * parentObjectID; 
@property (assign,nonatomic,__weak) CLSObject * parent; 
@property (assign,nonatomic,__weak) CLSDataStore * dataStore; 
@property (assign,getter=isDeleted,nonatomic) char deleted; 
@property (assign,getter=isModified,nonatomic) char modified; 
@property (nonatomic,retain) NSDate * dateCreated;                                                //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,retain) NSDate * dateLastModified;                                           //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,retain) NSDate * dateExpires;                                                //@synthesize dateExpires=_dateExpires - In the implementation block
@property (assign,getter=isImmutabilityEnforced,nonatomic) char enforceImmutability; 
@property (nonatomic,readonly) id vertexID; 
+(char)supportsSecureCoding;
+(id)dateFormatter;
+(id)relations;
-(void)acceptVisitor:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)lock;
-(void)unlock;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)generation;
-(id)_init;
-(CLSObject *)parent;
-(id)dictionaryRepresentation;
-(void)addChild:(id)arg1 ;
-(NSString *)objectID;
-(id)identity;
-(void)removeChild:(id)arg1 ;
-(void)setParent:(CLSObject *)arg1 ;
-(char)isDeleted;
-(char)isTemporary;
-(NSDate *)dateCreated;
-(void)setModified:(char)arg1 ;
-(void)setDeleted:(char)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(char)isModified;
-(CLSDataStore *)dataStore;
-(void)setTemporary:(char)arg1 ;
-(void)setGeneration:(unsigned)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)_addChild:(id)arg1 ;
-(char)validateObject:(id*)arg1 ;
-(void)mergeWithObject:(id)arg1 ;
-(NSString *)parentObjectID;
-(NSDate *)dateLastModified;
-(void)setDateLastModified:(NSDate *)arg1 ;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(void)addChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(id)childrenOfClass:(Class)arg1 ;
-(id)vertexID;
-(void)setObjectID:(NSString *)arg1 ;
-(void)setParentObjectID:(NSString *)arg1 ;
-(void)removeChild:(id)arg1 changedPropertyName:(id)arg2 ;
-(long long)effectiveAuthorizationStatus;
-(void)setDataStore:(CLSDataStore *)arg1 ;
-(void)didSaveObject;
-(void)willSaveObject;
-(id)initWithDeletedObjectID:(id)arg1 ;
-(void)enumerateChildren:(/*^block*/id)arg1 ;
-(void)_addChild:(id)arg1 lock:(char)arg2 ;
-(void)enumerateTree:(/*^block*/id)arg1 ;
-(NSDate *)dateExpires;
-(id)ancestorOfClass:(Class)arg1 ;
-(char)isImmutabilityEnforced;
-(void)setEnforceImmutability:(char)arg1 ;
-(char)needsRepair;
-(void)setNeedsRepair:(char)arg1 ;
-(void)setDateExpires:(NSDate *)arg1 ;
@end
