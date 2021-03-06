/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, AVAsset;

@interface _ISPlayerItemChefOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _workQueue;
	char _includeVideo;
	char _includeAudio;
	AVAsset* _asset;
	/*^block*/id _resultHandler;
	SCD_Struct_IS1 _photoTime;
	SCD_Struct_IS7 _trimmedTimeRange;

}

@property (nonatomic,readonly) AVAsset * asset;                              //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS7 trimmedTimeRange;              //@synthesize trimmedTimeRange=_trimmedTimeRange - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 photoTime;                     //@synthesize photoTime=_photoTime - In the implementation block
@property (nonatomic,readonly) char includeVideo;                            //@synthesize includeVideo=_includeVideo - In the implementation block
@property (nonatomic,readonly) char includeAudio;                            //@synthesize includeAudio=_includeAudio - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(void)main;
-(AVAsset *)asset;
-(id)resultHandler;
-(SCD_Struct_IS1)photoTime;
-(id)initWithAsset:(id)arg1 trimmedTimeRange:(SCD_Struct_IS7)arg2 photoTime:(SCD_Struct_IS1)arg3 includeAudio:(char)arg4 includeVideo:(char)arg5 resultHandler:(/*^block*/id)arg6 ;
-(SCD_Struct_IS7)trimmedTimeRange;
-(char)includeVideo;
-(char)includeAudio;
-(void)_handleValuesDidLoad;
-(void)_preparePlayerItem;
@end

