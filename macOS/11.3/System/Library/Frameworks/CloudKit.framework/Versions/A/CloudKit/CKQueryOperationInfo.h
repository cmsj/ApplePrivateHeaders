/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CloudKit.framework/Versions/A/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKQuery, CKRecordZoneID, CKQueryCursor, NSArray, NSDictionary;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	char _shouldFetchAssetContent;
	char _fetchAllResults;
	CKQuery* _query;
	CKRecordZoneID* _zoneID;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	NSDictionary* _assetTransferOptionsByKey;

}

@property (nonatomic,retain) CKQuery * query;                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                               //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                                //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                       //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) char fetchAllResults;                                  //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByKey;              //@synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKQuery *)query;
-(void)setQuery:(CKQuery *)arg1 ;
-(CKQueryCursor *)cursor;
-(CKRecordZoneID *)zoneID;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(unsigned long long)resultsLimit;
-(char)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(NSArray *)desiredKeys;
-(NSDictionary *)assetTransferOptionsByKey;
-(void)setAssetTransferOptionsByKey:(NSDictionary *)arg1 ;
-(char)fetchAllResults;
-(void)setFetchAllResults:(char)arg1 ;
@end

