/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/Versions/A/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ASStreamFormat, NSMutableArray;

@interface ASCLIENTStreamPrefs : PBCodable <NSCopying> {

	double _scalarVolume;
	unsigned _dSPFlavor;
	int _muteState;
	ASStreamFormat* _streamFormat;
	unsigned _streamToken;
	NSMutableArray* _virtualPortUIDs;
	SCD_Struct_AS28 _has;

}

@property (assign,nonatomic) unsigned streamToken;                          //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) char hasDSPFlavor; 
@property (assign,nonatomic) unsigned dSPFlavor;                            //@synthesize dSPFlavor=_dSPFlavor - In the implementation block
@property (nonatomic,readonly) char hasStreamFormat; 
@property (nonatomic,retain) ASStreamFormat * streamFormat;                 //@synthesize streamFormat=_streamFormat - In the implementation block
@property (assign,nonatomic) char hasScalarVolume; 
@property (assign,nonatomic) double scalarVolume;                           //@synthesize scalarVolume=_scalarVolume - In the implementation block
@property (assign,nonatomic) char hasMuteState; 
@property (assign,nonatomic) int muteState;                                 //@synthesize muteState=_muteState - In the implementation block
@property (nonatomic,retain) NSMutableArray * virtualPortUIDs;              //@synthesize virtualPortUIDs=_virtualPortUIDs - In the implementation block
+(Class)virtualPortUIDsType;
-(void)addVirtualPortUIDs:(id)arg1 ;
-(unsigned long long)virtualPortUIDsCount;
-(void)clearVirtualPortUIDs;
-(id)virtualPortUIDsAtIndex:(unsigned long long)arg1 ;
-(void)setDSPFlavor:(unsigned)arg1 ;
-(void)setHasDSPFlavor:(char)arg1 ;
-(char)hasDSPFlavor;
-(char)hasStreamFormat;
-(void)setScalarVolume:(double)arg1 ;
-(void)setHasScalarVolume:(char)arg1 ;
-(char)hasScalarVolume;
-(int)muteState;
-(void)setMuteState:(int)arg1 ;
-(void)setHasMuteState:(char)arg1 ;
-(char)hasMuteState;
-(id)muteStateAsString:(int)arg1 ;
-(int)StringAsMuteState:(id)arg1 ;
-(unsigned)dSPFlavor;
-(double)scalarVolume;
-(NSMutableArray *)virtualPortUIDs;
-(void)setVirtualPortUIDs:(NSMutableArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)streamToken;
-(void)setStreamToken:(unsigned)arg1 ;
-(ASStreamFormat *)streamFormat;
-(void)setStreamFormat:(ASStreamFormat *)arg1 ;
@end

