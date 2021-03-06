/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>

@class ML3Predicate, ML3Container, NSArray;

@interface ML3ContainerQuery : ML3Query {

	ML3Predicate* _containerPredicate;
	ML3Container* _container;
	NSArray* _limitedPersistentIDs;

}

@property (nonatomic,readonly) NSArray * limitedPersistentIDs;              //@synthesize limitedPersistentIDs=_limitedPersistentIDs - In the implementation block
@property (nonatomic,readonly) ML3Container * container;                    //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) char requiresSmartLimiting; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ML3Container *)container;
-(unsigned long long)countOfEntities;
-(char)hasEntities;
-(unsigned long long)countOfDistinctRowsForColumn:(id)arg1 ;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(char)arg2 ;
-(id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3 ;
-(id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2 ;
-(char)requiresSmartLimiting;
-(id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4 ;
-(id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(char)arg2 ;
-(NSArray *)limitedPersistentIDs;
@end

