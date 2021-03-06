/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSString, NSSQLModel, NSSQLEntity, NSFaultHandler, _PFFetchPlanHeader, NSSQLiteStatement, NSMutableSet, NSMutableArray, NSFetchRequest, NSDictionary, NSArray;

@interface NSSQLFetchRequestContext : NSSQLStoreRequestContext {

	NSString* _externalDataReferencesDirectory;
	NSString* _externalDataLinksDirectory;
	NSString* _fileBackedFuturesDirectory;
	NSSQLModel* _sqlModel;
	NSSQLEntity* _sqlEntity;
	NSFaultHandler* _faultHandler;
	_PFFetchPlanHeader* _fetchPlan;
	NSSQLiteStatement* _statement;
	NSMutableSet* _objectIDsToRegister;
	NSMutableSet* _objectsToAwaken;
	NSMutableArray* _resultFaultsThatWereFired;
	NSSQLFetchRequestContext* _parentContext;
	int _fileProtectionLevel;
	char _isFaultRequest;
	NSFetchRequest* _originalRequest;
	char _shouldUseBatches;
	char _storeIsUbiquitized;
	char _isUsingCachedStatement;
	NSMutableArray* _concurrentFetchingPipelineRows;
	NSDictionary* _prefetchingSubstitutionVariables;

}

@property (nonatomic,readonly) NSSQLFetchRequestContext * parentContext;                   //@synthesize parentContext=_parentContext - In the implementation block
@property (nonatomic,readonly) NSFetchRequest * request; 
@property (nonatomic,retain) NSSQLiteStatement * fetchStatement; 
@property (nonatomic,readonly) NSFetchRequest * originalRequest;                           //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,readonly) char storeIsUbiquitized;                                    //@synthesize storeIsUbiquitized=_storeIsUbiquitized - In the implementation block
@property (nonatomic,readonly) NSString * externalDataReferencesDirectory;                 //@synthesize externalDataReferencesDirectory=_externalDataReferencesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * externalDataLinksDirectory;                      //@synthesize externalDataLinksDirectory=_externalDataLinksDirectory - In the implementation block
@property (nonatomic,readonly) NSString * fileBackedFuturesDirectory;                      //@synthesize fileBackedFuturesDirectory=_fileBackedFuturesDirectory - In the implementation block
@property (nonatomic,readonly) int fileProtectionLevel;                                    //@synthesize fileProtectionLevel=_fileProtectionLevel - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel;                                      //@synthesize sqlModel=_sqlModel - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntityForFetchRequest;                     //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,readonly) NSFaultHandler * faultHandler;                              //@synthesize faultHandler=_faultHandler - In the implementation block
@property (nonatomic,readonly) _PFFetchPlanHeader * fetchPlan;                             //@synthesize fetchPlan=_fetchPlan - In the implementation block
@property (nonatomic,readonly) NSArray * objectIDsToRegisterWithContext; 
@property (nonatomic,readonly) NSArray * objectsToAwaken; 
@property (assign,nonatomic) char isFaultRequest;                                          //@synthesize isFaultRequest=_isFaultRequest - In the implementation block
@property (nonatomic,readonly) char shouldUseBatches;                                      //@synthesize shouldUseBatches=_shouldUseBatches - In the implementation block
@property (assign,nonatomic) char isUsingCachedStatement;                                  //@synthesize isUsingCachedStatement=_isUsingCachedStatement - In the implementation block
@property (nonatomic,retain) NSDictionary * prefetchingSubstitutionVariables;              //@synthesize prefetchingSubstitutionVariables=_prefetchingSubstitutionVariables - In the implementation block
@property (nonatomic,retain,readonly) NSArray * faultsThatWereFired;                       //@synthesize resultFaultsThatWereFired=_resultFaultsThatWereFired - In the implementation block
-(NSString *)externalDataReferencesDirectory;
-(id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2 ;
-(NSSQLModel *)sqlModel;
-(Class)objectIDFactoryForSQLEntity:(id)arg1 ;
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(void)setPrefetchingSubstitutionVariables:(NSDictionary *)arg1 ;
-(NSString *)externalDataLinksDirectory;
-(void)executePrologue;
-(void)executeEpilogue;
-(NSString *)fileBackedFuturesDirectory;
-(int)fileProtectionLevel;
-(NSSQLiteStatement *)fetchStatement;
-(char)executeRequestCore:(id*)arg1 ;
-(id)_createStatement;
-(id)initWithRequest:(id)arg1 connection:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 parentContext:(id)arg5 ;
-(void)_setupBindVariablesForCachedStatement:(id)arg1 usingValues:(id)arg2 ;
-(id)cachedStatement;
-(void)_fireFaultsForValue:(id)arg1 ;
-(void)_preparePredicate:(id)arg1 ;
-(NSArray *)objectIDsToRegisterWithContext;
-(void)persistRows:(id)arg1 ;
-(id)createChildContextForNestedFetchRequest:(id)arg1 ;
-(id)ubiquitousExternalReferenceLocationForUUID:(id)arg1 ;
-(void)addObjectIDsToRegister:(id)arg1 ;
-(void)addObjectsToAwaken:(id)arg1 ;
-(NSArray *)objectsToAwaken;
-(void)setFetchStatement:(NSSQLiteStatement *)arg1 ;
-(void)addFaultsThatWereFired:(id)arg1 ;
-(char)storeIsUbiquitized;
-(NSSQLEntity *)sqlEntityForFetchRequest;
-(_PFFetchPlanHeader *)fetchPlan;
-(char)isFaultRequest;
-(void)setIsFaultRequest:(char)arg1 ;
-(char)shouldUseBatches;
-(NSDictionary *)prefetchingSubstitutionVariables;
-(NSArray *)faultsThatWereFired;
-(char)isUsingCachedStatement;
-(void)setIsUsingCachedStatement:(char)arg1 ;
-(void)dealloc;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(NSFetchRequest *)request;
-(NSFetchRequest *)originalRequest;
-(NSSQLFetchRequestContext *)parentContext;
-(void)cacheStatement:(id)arg1 ;
-(NSFaultHandler *)faultHandler;
@end

