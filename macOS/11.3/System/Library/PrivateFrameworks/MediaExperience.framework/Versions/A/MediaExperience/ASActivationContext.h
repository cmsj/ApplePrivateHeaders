/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ASActivationContext : PBCodable <NSCopying> {

	unsigned _accessibilityPreference;
	unsigned _callDirection;
	NSString* _deviceUID;
	unsigned _trigger;
	SCD_Struct_AS29 _has;

}

@property (assign,nonatomic) unsigned trigger;                              //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) char hasDeviceUID; 
@property (nonatomic,retain) NSString * deviceUID;                          //@synthesize deviceUID=_deviceUID - In the implementation block
@property (assign,nonatomic) char hasAccessibilityPreference; 
@property (assign,nonatomic) unsigned accessibilityPreference;              //@synthesize accessibilityPreference=_accessibilityPreference - In the implementation block
@property (assign,nonatomic) char hasCallDirection; 
@property (assign,nonatomic) unsigned callDirection;                        //@synthesize callDirection=_callDirection - In the implementation block
-(unsigned)accessibilityPreference;
-(unsigned)callDirection;
-(char)hasDeviceUID;
-(void)setAccessibilityPreference:(unsigned)arg1 ;
-(void)setHasAccessibilityPreference:(char)arg1 ;
-(char)hasAccessibilityPreference;
-(void)setCallDirection:(unsigned)arg1 ;
-(void)setHasCallDirection:(char)arg1 ;
-(char)hasCallDirection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)trigger;
-(void)setTrigger:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)deviceUID;
-(void)setDeviceUID:(NSString *)arg1 ;
@end

