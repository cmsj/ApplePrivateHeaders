/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreSpeech/CoreSpeech-Structs.h>
@class NSURL;

@interface CSAudioInjectionFileOption : NSObject {

	float _scaleFactor;
	NSURL* _audioURL;
	OpaqueExtAudioFileRef _fFile;
	AudioStreamBasicDescription _outASBD;

}

@property (nonatomic,readonly) NSURL * audioURL;                               //@synthesize audioURL=_audioURL - In the implementation block
@property (assign,nonatomic) AudioStreamBasicDescription outASBD;              //@synthesize outASBD=_outASBD - In the implementation block
@property (assign,nonatomic) OpaqueExtAudioFileRef fFile;                      //@synthesize fFile=_fFile - In the implementation block
@property (nonatomic,readonly) float scaleFactor;                              //@synthesize scaleFactor=_scaleFactor - In the implementation block
-(id)description;
-(float)scaleFactor;
-(id)initWithAudioURL:(id)arg1 withScaleFactor:(float)arg2 outASBD:(AudioStreamBasicDescription)arg3 ;
-(NSURL *)audioURL;
-(AudioStreamBasicDescription)outASBD;
-(void)setOutASBD:(AudioStreamBasicDescription)arg1 ;
-(OpaqueExtAudioFileRef)fFile;
-(void)setFFile:(OpaqueExtAudioFileRef)arg1 ;
@end

