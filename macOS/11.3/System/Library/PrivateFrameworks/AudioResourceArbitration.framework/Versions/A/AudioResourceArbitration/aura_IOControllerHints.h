/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface aura_IOControllerHints : NSObject <NSCopying> {

	unsigned char _ioControllerType;
	optional<unsigned int> _bufferSize;
	optional<double> _sampleRate;
	optional<std::__1::weak_ptr<aura::Clock>>* _clock;
	optional<std::__1::vector<aura_IOStreamHints *, std::__1::allocator<aura_IOStreamHints *>>>* _inputIOStreamHints;
	optional<std::__1::vector<aura_IOStreamHints *, std::__1::allocator<aura_IOStreamHints *>>>* _outputIOStreamHints;

}

@property (assign,nonatomic) unsigned char ioControllerType;                                                  //@synthesize ioControllerType=_ioControllerType - In the implementation block
@property (assign,nonatomic) optional<double> sampleRate;                                                     //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) optional<unsigned int> bufferSize;                                               //@synthesize bufferSize=_bufferSize - In the implementation block
@property (assign,nonatomic) optional<std::__1::weak_ptr<aura::Clock>>* clock;                                //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) optional<std::__1::vector<aura_IOStreamHints * inputIOStreamHints;               //@synthesize inputIOStreamHints=_inputIOStreamHints - In the implementation block
@property (assign,nonatomic) optional<std::__1::vector<aura_IOStreamHints * outputIOStreamHints;              //@synthesize outputIOStreamHints=_outputIOStreamHints - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(optional<double>)sampleRate;
-(unsigned char)ioControllerType;
-(void)setIoControllerType:(unsigned char)arg1 ;
-(void)setSampleRate:(optional<double>)arg1 ;
-(optional<unsigned int>)bufferSize;
-(optional<std::__1::vector<aura_IOStreamHints *)inputIOStreamHints;
-(optional<std::__1::vector<aura_IOStreamHints *)outputIOStreamHints;
-(void)setBufferSize:(optional<unsigned int>)arg1 ;
-(optional<std::__1::weak_ptr<aura::Clock>>*)clock;
-(void)setClock:(optional<std::__1::weak_ptr<aura::Clock>>*)arg1 ;
-(void)setInputIOStreamHints:(optional<std::__1::vector<aura_IOStreamHints *)arg1 ;
-(void)setOutputIOStreamHints:(optional<std::__1::vector<aura_IOStreamHints *)arg1 ;
@end

