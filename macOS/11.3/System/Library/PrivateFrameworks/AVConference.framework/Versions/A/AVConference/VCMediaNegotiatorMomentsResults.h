/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCMediaNegotiatorMomentsResults : NSObject {

	int _capabilities;
	int _imageType;
	int _videoCodec;
	int _multiwayCapabilities;

}

@property (assign,nonatomic) int capabilities;                               //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) int mulitwayCapabilities;                       //@synthesize multiwayCapabilities=_multiwayCapabilities - In the implementation block
@property (nonatomic,readonly) unsigned avcMomentsCapabilities; 
@property (assign,nonatomic) int imageType;                                  //@synthesize imageType=_imageType - In the implementation block
@property (assign,nonatomic) int videoCodec;                                 //@synthesize videoCodec=_videoCodec - In the implementation block
-(int)capabilities;
-(void)setCapabilities:(int)arg1 ;
-(int)imageType;
-(void)setImageType:(int)arg1 ;
-(int)videoCodec;
-(void)setVideoCodec:(int)arg1 ;
-(unsigned)avcMomentsCapabilities;
-(int)mulitwayCapabilities;
-(void)setMulitwayCapabilities:(int)arg1 ;
@end
