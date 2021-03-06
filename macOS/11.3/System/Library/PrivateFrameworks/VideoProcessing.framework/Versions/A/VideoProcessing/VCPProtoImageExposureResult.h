/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/VCPProtoResultLegacyConversionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoImageExposureResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {

	float _exposure;
	float _underExpose;
	SCD_Struct_VC51 _has;

}

@property (assign,nonatomic) float exposure;                   //@synthesize exposure=_exposure - In the implementation block
@property (assign,nonatomic) char hasUnderExpose; 
@property (assign,nonatomic) float underExpose;                //@synthesize underExpose=_underExpose - In the implementation block
+(id)resultFromLegacyDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(float)exposure;
-(void)setExposure:(float)arg1 ;
-(id)exportToLegacyDictionary;
-(void)setUnderExpose:(float)arg1 ;
-(void)setHasUnderExpose:(char)arg1 ;
-(char)hasUnderExpose;
-(float)underExpose;
@end

