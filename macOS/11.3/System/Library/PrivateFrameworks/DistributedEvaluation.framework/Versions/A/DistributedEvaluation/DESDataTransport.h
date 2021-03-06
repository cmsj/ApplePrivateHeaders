/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/Versions/A/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DistributedEvaluation/DistributedEvaluation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class DESBfloat16Transport, DESBinary32Transport, DESBinary64Transport;

@interface DESDataTransport : PBCodable <NSCopying> {

	DESBfloat16Transport* _bfloat16;
	DESBinary32Transport* _binary32;
	DESBinary64Transport* _binary64;

}

@property (nonatomic,readonly) char hasBinary64; 
@property (nonatomic,retain) DESBinary64Transport * binary64;              //@synthesize binary64=_binary64 - In the implementation block
@property (nonatomic,readonly) char hasBinary32; 
@property (nonatomic,retain) DESBinary32Transport * binary32;              //@synthesize binary32=_binary32 - In the implementation block
@property (nonatomic,readonly) char hasBfloat16; 
@property (nonatomic,retain) DESBfloat16Transport * bfloat16;              //@synthesize bfloat16=_bfloat16 - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBinary64:(DESBinary64Transport *)arg1 ;
-(void)setBinary32:(DESBinary32Transport *)arg1 ;
-(void)setBfloat16:(DESBfloat16Transport *)arg1 ;
-(char)hasBinary64;
-(char)hasBinary32;
-(char)hasBfloat16;
-(DESBinary64Transport *)binary64;
-(DESBinary32Transport *)binary32;
-(DESBfloat16Transport *)bfloat16;
@end

