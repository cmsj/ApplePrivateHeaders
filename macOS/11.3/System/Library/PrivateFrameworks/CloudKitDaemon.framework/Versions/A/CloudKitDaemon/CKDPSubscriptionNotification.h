/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPSubscriptionNotificationAlert, NSString;

@interface CKDPSubscriptionNotification : PBCodable <NSCopying> {

	NSMutableArray* _additionalFields;
	CKDPSubscriptionNotificationAlert* _alert;
	NSString* _collapseIdKey;
	char _shouldBadge;
	char _shouldSendContentAvailable;
	char _shouldSendMutableContent;
	SCD_Struct_CK16 _has;

}

@property (nonatomic,readonly) char hasAlert; 
@property (nonatomic,retain) CKDPSubscriptionNotificationAlert * alert;              //@synthesize alert=_alert - In the implementation block
@property (assign,nonatomic) char hasShouldBadge; 
@property (assign,nonatomic) char shouldBadge;                                       //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalFields;                      //@synthesize additionalFields=_additionalFields - In the implementation block
@property (assign,nonatomic) char hasShouldSendContentAvailable; 
@property (assign,nonatomic) char shouldSendContentAvailable;                        //@synthesize shouldSendContentAvailable=_shouldSendContentAvailable - In the implementation block
@property (assign,nonatomic) char hasShouldSendMutableContent; 
@property (assign,nonatomic) char shouldSendMutableContent;                          //@synthesize shouldSendMutableContent=_shouldSendMutableContent - In the implementation block
@property (nonatomic,readonly) char hasCollapseIdKey; 
@property (nonatomic,retain) NSString * collapseIdKey;                               //@synthesize collapseIdKey=_collapseIdKey - In the implementation block
+(Class)additionalFieldsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(CKDPSubscriptionNotificationAlert *)alert;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setShouldSendContentAvailable:(char)arg1 ;
-(char)shouldBadge;
-(char)shouldSendContentAvailable;
-(char)shouldSendMutableContent;
-(void)setShouldBadge:(char)arg1 ;
-(void)setShouldSendMutableContent:(char)arg1 ;
-(void)setAlert:(CKDPSubscriptionNotificationAlert *)arg1 ;
-(NSString *)collapseIdKey;
-(NSMutableArray *)additionalFields;
-(char)hasAlert;
-(void)setAdditionalFields:(NSMutableArray *)arg1 ;
-(void)setCollapseIdKey:(NSString *)arg1 ;
-(void)addAdditionalFields:(id)arg1 ;
-(unsigned long long)additionalFieldsCount;
-(void)clearAdditionalFields;
-(id)additionalFieldsAtIndex:(unsigned long long)arg1 ;
-(void)setHasShouldBadge:(char)arg1 ;
-(char)hasShouldBadge;
-(void)setHasShouldSendContentAvailable:(char)arg1 ;
-(char)hasShouldSendContentAvailable;
-(void)setHasShouldSendMutableContent:(char)arg1 ;
-(char)hasShouldSendMutableContent;
-(char)hasCollapseIdKey;
@end
