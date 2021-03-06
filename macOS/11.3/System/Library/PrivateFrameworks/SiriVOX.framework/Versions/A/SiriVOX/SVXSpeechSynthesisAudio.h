/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/Versions/A/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriVOX/SiriVOX-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, SVXAudioStreamBasicDescription;

@interface SVXSpeechSynthesisAudio : NSObject <NSCopying, NSSecureCoding> {

	NSData* _data;
	SVXAudioStreamBasicDescription* _decoderASBD;
	SVXAudioStreamBasicDescription* _playerASBD;

}

@property (nonatomic,copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) SVXAudioStreamBasicDescription * decoderASBD;              //@synthesize decoderASBD=_decoderASBD - In the implementation block
@property (nonatomic,copy,readonly) SVXAudioStreamBasicDescription * playerASBD;               //@synthesize playerASBD=_playerASBD - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 decoderASBD:(id)arg2 playerASBD:(id)arg3 ;
-(SVXAudioStreamBasicDescription *)decoderASBD;
-(SVXAudioStreamBasicDescription *)playerASBD;
@end

