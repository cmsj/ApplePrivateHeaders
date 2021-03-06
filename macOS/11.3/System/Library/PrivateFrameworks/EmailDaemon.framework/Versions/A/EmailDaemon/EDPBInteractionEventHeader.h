/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/Versions/A/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/EDPETMessageFrameTypeIntrospectable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface EDPBInteractionEventHeader : PBCodable <EDPETMessageFrameTypeIntrospectable, NSCopying> {

	long long _deviceId;
	long long _userId;
	NSString* _locale;
	int _timezoneOffset;
	unsigned _userSegment;
	unsigned _version;
	char _categoryRootInstalled;
	SCD_Struct_ED8 _has;

}

@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                           //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) char hasUserId; 
@property (assign,nonatomic) long long userId;                           //@synthesize userId=_userId - In the implementation block
@property (assign,nonatomic) char hasDeviceId; 
@property (assign,nonatomic) long long deviceId;                         //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,readonly) char hasLocale; 
@property (nonatomic,retain) NSString * locale;                          //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) char hasTimezoneOffset; 
@property (assign,nonatomic) int timezoneOffset;                         //@synthesize timezoneOffset=_timezoneOffset - In the implementation block
@property (assign,nonatomic) char hasUserSegment; 
@property (assign,nonatomic) unsigned userSegment;                       //@synthesize userSegment=_userSegment - In the implementation block
@property (assign,nonatomic) char hasCategoryRootInstalled; 
@property (assign,nonatomic) char categoryRootInstalled;                 //@synthesize categoryRootInstalled=_categoryRootInstalled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)deviceId;
-(char)hasVersion;
-(void)setHasVersion:(char)arg1 ;
-(char)hasLocale;
-(void)setDeviceId:(long long)arg1 ;
-(long long)userId;
-(void)setUserId:(long long)arg1 ;
-(int)timezoneOffset;
-(void)setTimezoneOffset:(int)arg1 ;
-(char)hasDeviceId;
-(void)setHasDeviceId:(char)arg1 ;
-(char)hasUserId;
-(int)messageFrameType;
-(void)setHasUserId:(char)arg1 ;
-(void)setHasTimezoneOffset:(char)arg1 ;
-(char)hasTimezoneOffset;
-(void)setUserSegment:(unsigned)arg1 ;
-(void)setHasUserSegment:(char)arg1 ;
-(char)hasUserSegment;
-(void)setCategoryRootInstalled:(char)arg1 ;
-(void)setHasCategoryRootInstalled:(char)arg1 ;
-(char)hasCategoryRootInstalled;
-(unsigned)userSegment;
-(char)categoryRootInstalled;
@end

