/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/Versions/A/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JetEngine/JetEngine-Structs.h>
@interface JEBrotliEncoder : NSObject {

	unsigned _quality;
	unsigned _sizeHint;
	BrotliEncoderStateStructRef _encoder;

}

@property (nonatomic,readonly) BrotliEncoderStateStructRef encoder;              //@synthesize encoder=_encoder - In the implementation block
@property (assign,nonatomic) unsigned quality;                                   //@synthesize quality=_quality - In the implementation block
@property (assign,nonatomic) unsigned sizeHint;                                  //@synthesize sizeHint=_sizeHint - In the implementation block
@property (nonatomic,readonly) char isFinished; 
-(void)dealloc;
-(id)init;
-(char)isFinished;
-(unsigned)quality;
-(void)setQuality:(unsigned)arg1 ;
-(BrotliEncoderStateStructRef)encoder;
-(void)setSizeHint:(unsigned)arg1 ;
-(unsigned)sizeHint;
-(char)compressStreamWithOperation:(long long)arg1 availableIn:(unsigned long long*)arg2 nextIn:(const char**)arg3 availableOut:(unsigned long long*)arg4 nextOut:(char**)arg5 ;
@end

