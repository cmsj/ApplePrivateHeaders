/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AMSSQLiteConnection, AMSSQLiteQueryDescriptor;

@interface AMSSQLiteQuery : NSObject {

	AMSSQLiteConnection* _connection;
	AMSSQLiteQueryDescriptor* _descriptor;

}

@property (readonly) AMSSQLiteConnection * connection; 
@property (readonly) AMSSQLiteQueryDescriptor * queryDescriptor; 
@property (readonly) long long countOfEntities; 
-(AMSSQLiteConnection *)connection;
-(AMSSQLiteQueryDescriptor *)queryDescriptor;
-(void)applyBinding:(id)arg1 atIndex:(inout int*)arg2 ;
-(id)copySelectSQLWithProperties:(id)arg1 ;
-(void)enumeratePersistentIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateMemoryEntitiesWithProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_newSelectSQLWithProperties:(id)arg1 ;
-(id)initOnConnection:(id)arg1 descriptor:(id)arg2 ;
-(id)copyEntityIdentifiers;
-(long long)countOfEntities;
-(char)createTemporaryTableWithName:(id)arg1 properties:(id)arg2 ;
-(char)deleteAllEntities;
-(void)enumerateMemoryEntitiesUsingBlock:(/*^block*/id)arg1 ;
@end

