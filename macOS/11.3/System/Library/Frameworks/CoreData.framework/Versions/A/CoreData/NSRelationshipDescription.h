/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSEntityDescription, NSString, NSData;

@interface NSRelationshipDescription : NSPropertyDescription {

	void* _reserved5;
	void* _reserved6;
	NSEntityDescription* _destinationEntity;
	NSString* _lazyDestinationEntityName;
	NSRelationshipDescription* _inverseRelationship;
	NSString* _lazyInverseRelationshipName;
	unsigned long long _maxCount;
	unsigned long long _minCount;
	unsigned long long _deleteRule;

}

@property (assign,nonatomic) NSEntityDescription * destinationEntity; 
@property (assign,nonatomic) NSRelationshipDescription * inverseRelationship; 
@property (assign) unsigned long long maxCount; 
@property (assign) unsigned long long minCount; 
@property (assign) unsigned long long deleteRule; 
@property (getter=isToMany,readonly) char toMany; 
@property (copy,readonly) NSData * versionHash; 
@property (getter=isOrdered) char ordered; 
+(void)initialize;
+(char)supportsSecureCoding;
-(char)_isToManyRelationship;
-(char)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_setLazyDestinationEntityName:(id)arg1 ;
-(char)_isSchemaEqual:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(char)_isRelationship;
-(void)_updateInverse:(id)arg1 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3 ;
-(char)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithName:(id)arg1 ;
-(NSEntityDescription *)destinationEntity;
-(unsigned long long)maxCount;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(char)isToMany;
-(NSRelationshipDescription *)inverseRelationship;
-(void)setOrdered:(char)arg1 ;
-(unsigned long long)deleteRule;
-(unsigned long long)minCount;
-(char)isOrdered;
-(NSData *)versionHash;
-(unsigned long long)_propertyType;
-(char)isIndexed;
-(void)setMinCount:(unsigned long long)arg1 ;
-(void)setDestinationEntity:(NSEntityDescription *)arg1 ;
-(void)setInverseRelationship:(NSRelationshipDescription *)arg1 ;
-(void)setDeleteRule:(unsigned long long)arg1 ;
@end

