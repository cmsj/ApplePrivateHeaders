/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Versions/A/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding> {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
	char _isFastCountable;

}

@property (nonatomic,readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (nonatomic,readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
@property (assign,nonatomic) char isFastCountable;                                  //@synthesize isFastCountable=_isFastCountable - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)entityClass;
-(unsigned long long)countOfEntities;
-(char)hasEntities;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(char)arg2 ;
-(id)persistentIDProperty;
-(char)sectionsPersistentIDColumnIsDistinct;
-(Class)aggregateEntityClass;
-(NSString *)foreignPersistentIDProperty;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(char)isFastCountable;
-(void)setIsFastCountable:(char)arg1 ;
@end

