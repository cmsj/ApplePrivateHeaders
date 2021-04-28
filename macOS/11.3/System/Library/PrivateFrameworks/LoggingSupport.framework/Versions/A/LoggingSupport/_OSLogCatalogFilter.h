/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableSet;

@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor> {

	NSMutableSet* _pidAccept;
	NSMutableSet* _processLookupSubstr;
	NSMutableSet* _senderLookupSubstr;
	NSMutableSet* _subsysSubstrAccept;
	NSMutableSet* _uuidAccept;
	char* _uuidtext_path;
	char _hasItems;
	char _hasSharedCacheItems;

}
-(char)isKeptCatalog:(catalog_s*)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 collection:(id)arg2 ;
-(char)containsProcessID:(id)arg1 ;
-(void)addSubsystem:(id)arg1 ;
-(char)containsSubsystemSubstr:(id)arg1 ;
-(char)containsUUID:(id)arg1 ;
-(void)addProcessLookupSubstr:(id)arg1 ;
-(void)addSenderLookupSubstr:(id)arg1 ;
-(char)containsProcessLookupSubstr:(id)arg1 ;
-(char)containsSenderLookupSubstr:(id)arg1 ;
-(void)generateUUIDSet;
-(void)readDSOUUIDs;
-(void)handleDSOFile:(ftsent*)arg1 ;
-(void)readDSCUUIDs;
-(uuiddb_dsc_map_s*)getDSCMap;
-(void)handleDSCContents:(uuiddb_dsc_map_s*)arg1 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 ;
-(void)dealloc;
-(void)visitPredicateExpression:(id)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)addUUID:(id)arg1 ;
-(void)addProcessID:(id)arg1 ;
@end
