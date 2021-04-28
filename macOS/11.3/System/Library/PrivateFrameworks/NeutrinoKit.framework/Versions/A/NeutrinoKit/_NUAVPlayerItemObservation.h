/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/Versions/A/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayerItem;

@interface _NUAVPlayerItemObservation : NSObject {

	char _registeredKVO;
	AVPlayerItem* _playerItem;

}

@property (nonatomic,retain) AVPlayerItem * playerItem;              //@synthesize playerItem=_playerItem - In the implementation block
@property (assign,nonatomic) char registeredKVO;                     //@synthesize registeredKVO=_registeredKVO - In the implementation block
-(AVPlayerItem *)playerItem;
-(void)setPlayerItem:(AVPlayerItem *)arg1 ;
-(char)registeredKVO;
-(void)setRegisteredKVO:(char)arg1 ;
@end
