/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CKServerChangeToken, NSError;

@interface FCCKPrivateFetchDatabaseChangesSingleDestinationResult : NSObject {

	char _moreComing;
	long long _destination;
	NSArray* _changedZoneIDs;
	NSArray* _deletedZoneIDs;
	CKServerChangeToken* _serverChangeToken;
	NSError* _error;

}

@property (assign,nonatomic) long long destination;                                //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSArray * changedZoneIDs;                             //@synthesize changedZoneIDs=_changedZoneIDs - In the implementation block
@property (nonatomic,retain) NSArray * deletedZoneIDs;                             //@synthesize deletedZoneIDs=_deletedZoneIDs - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) char moreComing;                                      //@synthesize moreComing=_moreComing - In the implementation block
@property (nonatomic,retain) NSError * error;                                      //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)destination;
-(void)setDestination:(long long)arg1 ;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setMoreComing:(char)arg1 ;
-(char)moreComing;
-(NSArray *)changedZoneIDs;
-(NSArray *)deletedZoneIDs;
-(void)setChangedZoneIDs:(NSArray *)arg1 ;
-(void)setDeletedZoneIDs:(NSArray *)arg1 ;
@end

