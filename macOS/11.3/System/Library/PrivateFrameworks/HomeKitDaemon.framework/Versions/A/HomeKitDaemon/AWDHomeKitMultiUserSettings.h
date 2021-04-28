/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:25 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDHomeKitMultiUserSettings : PBCodable <NSCopying> {

	NSMutableArray* _homeKitMultiUserSettingsValuesByKeyPaths;
	char _isOwner;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) char hasIsOwner; 
@property (assign,nonatomic) char isOwner;                                                           //@synthesize isOwner=_isOwner - In the implementation block
@property (nonatomic,retain) NSMutableArray * homeKitMultiUserSettingsValuesByKeyPaths;              //@synthesize homeKitMultiUserSettingsValuesByKeyPaths=_homeKitMultiUserSettingsValuesByKeyPaths - In the implementation block
+(Class)homeKitMultiUserSettingsValuesByKeyPathType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)isOwner;
-(void)setIsOwner:(char)arg1 ;
-(void)setHasIsOwner:(char)arg1 ;
-(char)hasIsOwner;
-(void)setHomeKitMultiUserSettingsValuesByKeyPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)homeKitMultiUserSettingsValuesByKeyPaths;
-(void)addHomeKitMultiUserSettingsValuesByKeyPath:(id)arg1 ;
-(unsigned long long)homeKitMultiUserSettingsValuesByKeyPathsCount;
-(void)clearHomeKitMultiUserSettingsValuesByKeyPaths;
-(id)homeKitMultiUserSettingsValuesByKeyPathAtIndex:(unsigned long long)arg1 ;
@end
