/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TrialProto-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface TRISystemDimensions : PBCodable <NSCopying> {

	NSString* _deviceClass;
	NSString* _osBuild;
	NSMutableArray* _userKeyboardEnabledInputModeIdentifiers;
	NSString* _userSettingsLanguageCode;
	NSString* _userSettingsRegionCode;
	NSString* _versionTag;
	char _isBetaUser;
	char _isInternalBuild;
	SCD_Struct_TR1 _has;

}

@property (nonatomic,readonly) char hasDeviceClass; 
@property (nonatomic,retain) NSString * deviceClass;                                                //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) char hasIsInternalBuild; 
@property (assign,nonatomic) char isInternalBuild;                                                  //@synthesize isInternalBuild=_isInternalBuild - In the implementation block
@property (assign,nonatomic) char hasIsBetaUser; 
@property (assign,nonatomic) char isBetaUser;                                                       //@synthesize isBetaUser=_isBetaUser - In the implementation block
@property (nonatomic,readonly) char hasVersionTag; 
@property (nonatomic,retain) NSString * versionTag;                                                 //@synthesize versionTag=_versionTag - In the implementation block
@property (nonatomic,readonly) char hasOsBuild; 
@property (nonatomic,retain) NSString * osBuild;                                                    //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,readonly) char hasUserSettingsLanguageCode; 
@property (nonatomic,retain) NSString * userSettingsLanguageCode;                                   //@synthesize userSettingsLanguageCode=_userSettingsLanguageCode - In the implementation block
@property (nonatomic,readonly) char hasUserSettingsRegionCode; 
@property (nonatomic,retain) NSString * userSettingsRegionCode;                                     //@synthesize userSettingsRegionCode=_userSettingsRegionCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * userKeyboardEnabledInputModeIdentifiers;              //@synthesize userKeyboardEnabledInputModeIdentifiers=_userKeyboardEnabledInputModeIdentifiers - In the implementation block
+(id)systemDimensions;
+(Class)userKeyboardEnabledInputModeIdentifiersType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)osBuild;
-(NSString *)deviceClass;
-(char)isInternalBuild;
-(void)setDeviceClass:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(char)hasOsBuild;
-(char)hasDeviceClass;
-(void)addUserKeyboardEnabledInputModeIdentifiers:(id)arg1 ;
-(void)setVersionTag:(NSString *)arg1 ;
-(void)setUserSettingsLanguageCode:(NSString *)arg1 ;
-(void)setUserSettingsRegionCode:(NSString *)arg1 ;
-(unsigned long long)userKeyboardEnabledInputModeIdentifiersCount;
-(void)clearUserKeyboardEnabledInputModeIdentifiers;
-(id)userKeyboardEnabledInputModeIdentifiersAtIndex:(unsigned long long)arg1 ;
-(void)setIsInternalBuild:(char)arg1 ;
-(void)setHasIsInternalBuild:(char)arg1 ;
-(char)hasIsInternalBuild;
-(void)setIsBetaUser:(char)arg1 ;
-(void)setHasIsBetaUser:(char)arg1 ;
-(char)hasIsBetaUser;
-(char)hasVersionTag;
-(char)hasUserSettingsLanguageCode;
-(char)hasUserSettingsRegionCode;
-(char)isBetaUser;
-(NSString *)versionTag;
-(NSString *)userSettingsLanguageCode;
-(NSString *)userSettingsRegionCode;
-(NSMutableArray *)userKeyboardEnabledInputModeIdentifiers;
-(void)setUserKeyboardEnabledInputModeIdentifiers:(NSMutableArray *)arg1 ;
@end

