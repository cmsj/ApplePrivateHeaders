/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/Versions/A/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableDictionary;

@interface DSIDRecord : NSObject <NSCopying> {

	char _dirty;
	int _nextReconcileTimestamp;
	char _accountIsT13;
	char _accountIsU13;
	char _accountIsU18;
	char _accountAgeUnknown;
	char _isActiveRecord;
	char _isRestrictedByEU_GDPR;
	char _isDPIDManatee;
	char _isPlaceholderAccount;
	char _lastSentPersonalizedAdsStatus;
	char _notificationRequired;
	int _personalizedAdsTimestamp;
	int _segmentDataTimestamp;
	int _lastSentSegmentDataTimestamp;
	int _lastSegmentServedTimestamp;
	int _lastSentPersonalizedAdsTimestamp;
	NSString* _DSID;
	NSString* _iCloudDSID;
	NSString* _segmentData;
	NSString* _iAdIDBeforeReset;
	NSMutableDictionary* _ADIDRecords;
	long long _lastJingleAccountStatus;

}

@property (nonatomic,retain) NSString * iCloudDSID; 
@property (assign,nonatomic) char accountIsT13; 
@property (assign,nonatomic) char accountIsU13; 
@property (assign,nonatomic) char accountIsU18; 
@property (assign,nonatomic) char accountAgeUnknown; 
@property (assign,nonatomic) char isDPIDManatee; 
@property (assign,nonatomic) int personalizedAdsTimestamp; 
@property (nonatomic,retain) NSString * segmentData; 
@property (assign,nonatomic) int segmentDataTimestamp; 
@property (assign,nonatomic) int lastSentSegmentDataTimestamp; 
@property (assign,nonatomic) int lastSegmentServedTimestamp; 
@property (nonatomic,retain) NSString * iAdIDBeforeReset; 
@property (nonatomic,retain) NSString * DSID;                                   //@synthesize DSID=_DSID - In the implementation block
@property (nonatomic,retain) NSString * iCloudDSID;                             //@synthesize iCloudDSID=_iCloudDSID - In the implementation block
@property (assign,nonatomic) char accountIsT13;                                 //@synthesize accountIsT13=_accountIsT13 - In the implementation block
@property (assign,nonatomic) char accountIsU13;                                 //@synthesize accountIsU13=_accountIsU13 - In the implementation block
@property (assign,nonatomic) char accountIsU18;                                 //@synthesize accountIsU18=_accountIsU18 - In the implementation block
@property (assign,nonatomic) char accountAgeUnknown;                            //@synthesize accountAgeUnknown=_accountAgeUnknown - In the implementation block
@property (assign,nonatomic) char isDPIDManatee;                                //@synthesize isDPIDManatee=_isDPIDManatee - In the implementation block
@property (assign,nonatomic) int personalizedAdsTimestamp;                      //@synthesize personalizedAdsTimestamp=_personalizedAdsTimestamp - In the implementation block
@property (nonatomic,retain) NSString * segmentData;                            //@synthesize segmentData=_segmentData - In the implementation block
@property (assign,nonatomic) int segmentDataTimestamp;                          //@synthesize segmentDataTimestamp=_segmentDataTimestamp - In the implementation block
@property (assign,nonatomic) int lastSentSegmentDataTimestamp;                  //@synthesize lastSentSegmentDataTimestamp=_lastSentSegmentDataTimestamp - In the implementation block
@property (assign,nonatomic) int lastSegmentServedTimestamp;                    //@synthesize lastSegmentServedTimestamp=_lastSegmentServedTimestamp - In the implementation block
@property (nonatomic,retain) NSString * iAdIDBeforeReset;                       //@synthesize iAdIDBeforeReset=_iAdIDBeforeReset - In the implementation block
@property (assign,nonatomic) char isPlaceholderAccount;                         //@synthesize isPlaceholderAccount=_isPlaceholderAccount - In the implementation block
@property (retain) NSMutableDictionary * ADIDRecords;                           //@synthesize ADIDRecords=_ADIDRecords - In the implementation block
@property (assign,nonatomic) long long lastJingleAccountStatus;                 //@synthesize lastJingleAccountStatus=_lastJingleAccountStatus - In the implementation block
@property (assign,nonatomic) char lastSentPersonalizedAdsStatus;                //@synthesize lastSentPersonalizedAdsStatus=_lastSentPersonalizedAdsStatus - In the implementation block
@property (assign,nonatomic) int lastSentPersonalizedAdsTimestamp;              //@synthesize lastSentPersonalizedAdsTimestamp=_lastSentPersonalizedAdsTimestamp - In the implementation block
@property (assign,nonatomic) int nextReconcileTimestamp; 
@property (assign,nonatomic) char dirty; 
@property (assign,nonatomic) char notificationRequired;                         //@synthesize notificationRequired=_notificationRequired - In the implementation block
@property (nonatomic,readonly) char isActiveRecord;                             //@synthesize isActiveRecord=_isActiveRecord - In the implementation block
@property (nonatomic,readonly) char isRestrictedByApple; 
@property (nonatomic,readonly) char isRestrictedByEU_GDPR;                      //@synthesize isRestrictedByEU_GDPR=_isRestrictedByEU_GDPR - In the implementation block
-(char)isEqual:(id)arg1 ;
-(void)removeIDForClientType:(long long)arg1 ;
-(char)hasIDForClientType:(long long)arg1 ;
-(void)resetiAdIDs;
-(void)ensureiAdIDs;
-(void)resetiAdIDsAndDPID:(/*^block*/id)arg1 ;
-(char)isActiveRecord;
-(void)retrieveSegmentDataFromiTunes:(/*^block*/id)arg1 ;
-(void)sendSegmentDataToAdPlatforms:(/*^block*/id)arg1 ;
-(void)sendPersonalizedAdsStatusToAdPlatforms:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setDirty:(char)arg1 ;
-(id)dictionaryRepresentation;
-(char)dirty;
-(void)setDSID:(NSString *)arg1 ;
-(NSString *)DSID;
-(NSString *)iCloudDSID;
-(void)setICloudDSID:(NSString *)arg1 ;
-(id)idForClientType:(long long)arg1 ;
-(char)isRestrictedByApple;
-(char)isDPIDManatee;
-(void)setID:(id)arg1 forClientType:(long long)arg2 ;
-(void)setIsDPIDManatee:(char)arg1 ;
-(NSMutableDictionary *)ADIDRecords;
-(void)setLastSentSegmentDataTimestamp:(int)arg1 ;
-(void)setPersonalizedAdsTimestamp:(int)arg1 ;
-(void)setLastSentPersonalizedAdsTimestamp:(int)arg1 ;
-(NSString *)segmentData;
-(char)accountIsT13;
-(char)accountIsU18;
-(char)accountIsU13;
-(char)lastSentPersonalizedAdsStatus;
-(int)personalizedAdsTimestamp;
-(int)lastSentSegmentDataTimestamp;
-(int)segmentDataTimestamp;
-(int)lastSentPersonalizedAdsTimestamp;
-(int)lastSegmentServedTimestamp;
-(char)isActiveRecord;
-(char)accountAgeUnknown;
-(NSString *)iAdIDBeforeReset;
-(id)initWithDSID:(id)arg1 serializedRecord:(id)arg2 version:(int)arg3 ;
-(void)setSegmentDataTimestamp:(int)arg1 ;
-(id)idAccountsDictionaryRepresentation;
-(char)shouldSendNotification;
-(void)setNotificationRequired:(char)arg1 ;
-(long long)lastJingleAccountStatus;
-(void)setNextReconcileTimestamp:(int)arg1 ;
-(int)nextReconcileTimestamp;
-(char)isPlaceholderAccount;
-(id)encryptedIDForClientType:(long long)arg1 ;
-(void)setLastSentPersonalizedAdsStatus:(char)arg1 ;
-(void)setLastJingleAccountStatus:(long long)arg1 ;
-(void)setAccountAgeUnknown:(char)arg1 ;
-(void)setLastSegmentServedTimestamp:(int)arg1 ;
-(void)setSegmentData:(NSString *)arg1 ;
-(void)setAccountIsU13:(char)arg1 ;
-(void)setAccountIsT13:(char)arg1 ;
-(void)setAccountIsU18:(char)arg1 ;
-(char)isRestrictedByEU_GDPR;
-(void)setADIDRecords:(NSMutableDictionary *)arg1 ;
-(char)iAdIDRecordsDirty;
-(char)notificationRequired;
-(void)setIAdIDBeforeReset:(NSString *)arg1 ;
-(void)setIsPlaceholderAccount:(char)arg1 ;
@end
