/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/Frameworks/WebCore.framework/Versions/A/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@class NSString;

@interface WK_RTCVideoEncoderSettings : NSObject {

	unsigned short _width;
	unsigned short _height;
	unsigned _startBitrate;
	unsigned _maxBitrate;
	unsigned _minBitrate;
	unsigned _maxFramerate;
	unsigned _qpMax;
	NSString* _name;
	unsigned long long _mode;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned short width;                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned short height;                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned startBitrate;                //@synthesize startBitrate=_startBitrate - In the implementation block
@property (assign,nonatomic) unsigned maxBitrate;                  //@synthesize maxBitrate=_maxBitrate - In the implementation block
@property (assign,nonatomic) unsigned minBitrate;                  //@synthesize minBitrate=_minBitrate - In the implementation block
@property (assign,nonatomic) unsigned maxFramerate;                //@synthesize maxFramerate=_maxFramerate - In the implementation block
@property (assign,nonatomic) unsigned qpMax;                       //@synthesize qpMax=_qpMax - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned short)arg1 ;
-(void)setHeight:(unsigned short)arg1 ;
-(unsigned short)width;
-(unsigned short)height;
-(unsigned long long)mode;
-(id)initWithNativeVideoCodec:(const VideoCodec*)arg1 ;
-(unsigned)maxFramerate;
-(void)setMaxFramerate:(unsigned)arg1 ;
-(unsigned)startBitrate;
-(void)setStartBitrate:(unsigned)arg1 ;
-(void)setMaxBitrate:(unsigned)arg1 ;
-(void)setMinBitrate:(unsigned)arg1 ;
-(void)setQpMax:(unsigned)arg1 ;
-(unsigned)maxBitrate;
-(unsigned)minBitrate;
-(unsigned)qpMax;
-(VideoCodec)nativeVideoCodec;
@end
