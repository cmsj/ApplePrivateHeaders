/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/Versions/A/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCPersistedState.h>

@class NSDate, CKServerChangeToken, CKOperationGroup;

@interface BRCSideCarSyncPersistedState : BRCPersistedState {

	char _needsSync;
	NSDate* _lastSyncDownDate;
	CKServerChangeToken* _serverChangeToken;
	unsigned long long _requestID;
	CKOperationGroup* _ckGroup;

}

@property (readonly) NSDate * lastSyncDownDate;                                      //@synthesize lastSyncDownDate=_lastSyncDownDate - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (nonatomic,readonly) unsigned long long requestID;                         //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) char needsSync;                                         //@synthesize needsSync=_needsSync - In the implementation block
@property (nonatomic,retain) CKOperationGroup * ckGroup;                             //@synthesize ckGroup=_ckGroup - In the implementation block
+(char)supportsSecureCoding;
+(id)loadFromClientStateInSession:(id)arg1 options:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(unsigned long long)requestID;
-(char)needsSync;
-(void)updateWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 ;
-(unsigned long long)allocateNextRequestID;
-(NSDate *)lastSyncDownDate;
-(void)setCkGroup:(CKOperationGroup *)arg1 ;
-(void)setNeedsSync:(char)arg1 ;
-(CKOperationGroup *)ckGroup;
-(void)sideCarZoneWasReset;
-(id)initWithZoneHealthState:(id)arg1 ;
@end
