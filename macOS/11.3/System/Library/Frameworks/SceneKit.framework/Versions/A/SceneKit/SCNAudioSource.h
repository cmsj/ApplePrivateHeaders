/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioFile, AVAudioPCMBuffer, NSURL, NSString;

@interface SCNAudioSource : NSObject <NSCopying, NSSecureCoding> {

	AVAudioFile* _audioFile;
	AVAudioPCMBuffer* _audioBuffer;
	NSURL* _audioURL;
	NSString* _audioName;
	char _loops;
	char _shouldStream;
	char _loaded;
	char positional;
	float volume;
	float rate;
	float reverbBlend;

}

@property (assign,getter=isPositional,nonatomic) char positional; 
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) float rate; 
@property (assign,nonatomic) float reverbBlend; 
@property (assign,nonatomic) char loops;                                       //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) char shouldStream;                                //@synthesize shouldStream=_shouldStream - In the implementation block
+(char)supportsSecureCoding;
+(id)audioSourceNamed:(id)arg1 ;
+(id)audioSourceWithAVAudioPCMBuffer:(id)arg1 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)load;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(float)volume;
-(double)duration;
-(id)fileName;
-(void)setVolume:(float)arg1 ;
-(void)setLoops:(char)arg1 ;
-(char)loops;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)_load;
-(id)audioBuffer;
-(void)loadIfNeeded;
-(char)shouldStream;
-(void)setShouldStream:(char)arg1 ;
-(long long)renderingAlgorithm;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(id)audioFile;
-(id)audioBufferFormat;
-(id)initWithAVAudioPCMBuffer:(id)arg1 ;
-(void)setPositional:(char)arg1 ;
-(char)isPositional;
-(void)_loadURLWithBundle:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 inBundle:(id)arg2 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)_customEncodingOfSCNAudioSource:(id)arg1 ;
-(void)_customDecodingOfSCNAudioSource:(id)arg1 ;
@end

