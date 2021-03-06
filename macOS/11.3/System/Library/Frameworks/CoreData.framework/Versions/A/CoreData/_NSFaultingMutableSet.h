/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@class NSManagedObject, NSPropertyDescription;

@interface _NSFaultingMutableSet : NSMutableSet {

	int _cd_rc;
	struct {
		unsigned _isFault : 1;
		unsigned _mustPropagateDelete : 1;
		unsigned _reserved : 14;
		unsigned _relationship : 16;
	}  _flags;
	id _realSet;
	NSManagedObject* _source;

}

@property (nonatomic,readonly) NSManagedObject * source; 
@property (nonatomic,readonly) NSPropertyDescription * relationship; 
@property (getter=isFault,nonatomic,readonly) char fault; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
+(Class)classForKeyedUnarchiver;
+(char)accessInstanceVariablesDirectly;
-(id)initWithSource:(id)arg1 forRelationship:(id)arg2 asFault:(char)arg3 ;
-(char)_isIdenticalFault:(id)arg1 ;
-(void)willReadWithContents:(id)arg1 ;
-(void)willRead;
-(id)initWithSource:(id)arg1 destinations:(id)arg2 forRelationship:(id)arg3 inContext:(id)arg4 ;
-(void)turnIntoFault;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)isFault;
-(unsigned long long)count;
-(id)objectEnumerator;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS12*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)allObjects;
-(void)removeObject:(id)arg1 ;
-(id)member:(id)arg1 ;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(Class)classForCoder;
-(char)containsObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)getObjects:(id*)arg1 ;
-(id)objectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 ;
-(void)makeObjectsPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(char)isEqualToSet:(id)arg1 ;
-(id)anyObject;
-(char)intersectsSet:(id)arg1 ;
-(char)isSubsetOfSet:(id)arg1 ;
-(NSManagedObject *)source;
-(id)valueForKey:(id)arg1 ;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(NSPropertyDescription *)relationship;
@end

