/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ICPAPlayModeDictionary : PBCodable <NSCopying> {

	int _autoPlayMode;
	int _repeatPlayMode;
	int _shufflePlayMode;
	SCD_Struct_IC16 _has;

}

@property (assign,nonatomic) char hasRepeatPlayMode; 
@property (assign,nonatomic) int repeatPlayMode;                   //@synthesize repeatPlayMode=_repeatPlayMode - In the implementation block
@property (assign,nonatomic) char hasShufflePlayMode; 
@property (assign,nonatomic) int shufflePlayMode;                  //@synthesize shufflePlayMode=_shufflePlayMode - In the implementation block
@property (assign,nonatomic) char hasAutoPlayMode; 
@property (assign,nonatomic) int autoPlayMode;                     //@synthesize autoPlayMode=_autoPlayMode - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)repeatPlayMode;
-(void)setRepeatPlayMode:(int)arg1 ;
-(void)setHasRepeatPlayMode:(char)arg1 ;
-(char)hasRepeatPlayMode;
-(int)shufflePlayMode;
-(void)setShufflePlayMode:(int)arg1 ;
-(void)setHasShufflePlayMode:(char)arg1 ;
-(char)hasShufflePlayMode;
-(int)autoPlayMode;
-(void)setAutoPlayMode:(int)arg1 ;
-(void)setHasAutoPlayMode:(char)arg1 ;
-(char)hasAutoPlayMode;
@end

