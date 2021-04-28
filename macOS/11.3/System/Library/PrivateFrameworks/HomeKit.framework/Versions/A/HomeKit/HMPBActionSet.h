/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKit.framework/Versions/A/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NSData;

@interface HMPBActionSet : PBCodable <NSCopying> {

	NSString* _actionSetType;
	NSMutableArray* _actions;
	NSData* _homeUUID;
	NSString* _name;
	NSData* _uuid;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) char hasActionSetType; 
@property (nonatomic,retain) NSString * actionSetType;              //@synthesize actionSetType=_actionSetType - In the implementation block
@property (nonatomic,readonly) char hasUuid; 
@property (nonatomic,retain) NSData * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) char hasHomeUUID; 
@property (nonatomic,retain) NSData * homeUUID;                     //@synthesize homeUUID=_homeUUID - In the implementation block
+(Class)actionsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSData *)uuid;
-(void)setUuid:(NSData *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)homeUUID;
-(NSString *)actionSetType;
-(char)hasName;
-(NSMutableArray *)actions;
-(char)hasUuid;
-(void)addActions:(id)arg1 ;
-(unsigned long long)actionsCount;
-(void)clearActions;
-(id)actionsAtIndex:(unsigned long long)arg1 ;
-(void)setActionSetType:(NSString *)arg1 ;
-(void)setHomeUUID:(NSData *)arg1 ;
-(char)hasActionSetType;
-(char)hasHomeUUID;
@end
