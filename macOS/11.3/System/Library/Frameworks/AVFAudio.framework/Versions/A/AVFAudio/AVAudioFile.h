/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSURL, AVAudioFormat;

@interface AVAudioFile : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) AVAudioFormat * fileFormat; 
@property (nonatomic,readonly) AVAudioFormat * processingFormat; 
@property (nonatomic,readonly) long long length; 
@property (assign,nonatomic) long long framePosition; 
-(void)dealloc;
-(long long)length;
-(NSURL *)url;
-(long long)framePosition;
-(void)setFramePosition:(long long)arg1 ;
-(AVAudioFormat *)fileFormat;
-(AVAudioFormat *)processingFormat;
-(char)readIntoBuffer:(id)arg1 frameCount:(unsigned)arg2 error:(id*)arg3 ;
-(char)readIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initForReading:(id)arg1 error:(id*)arg2 ;
-(id)initForReading:(id)arg1 commonFormat:(unsigned long long)arg2 interleaved:(char)arg3 error:(id*)arg4 ;
-(id)initForReadingFromExtAudioFile:(OpaqueExtAudioFileRef)arg1 error:(id*)arg2 ;
-(id)initForReadingFromExtAudioFile:(OpaqueExtAudioFileRef)arg1 commonFormat:(unsigned long long)arg2 interleaved:(char)arg3 error:(id*)arg4 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(id)initForWriting:(id)arg1 settings:(id)arg2 commonFormat:(unsigned long long)arg3 interleaved:(char)arg4 error:(id*)arg5 ;
-(id)initSecondaryReader:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(char)writeFromBuffer:(id)arg1 error:(id*)arg2 ;
@end

