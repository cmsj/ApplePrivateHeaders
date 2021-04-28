/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVExportSessionHelper.h>

@protocol AVExportSessionHelperDelegate;
@class NSURL, AVAssetExportSession, AVAsset, AVVideoComposition, AVAudioMix, NSTimer, NSString;

@interface AVFoundationExportSession : NSObject <AVExportSessionHelper> {

	NSURL* _outputURL;
	AVAssetExportSession* _avSession;
	id<AVExportSessionHelperDelegate> _delegate;
	AVAsset* _sourceAsset;
	AVVideoComposition* _sourceVideoComposition;
	AVAudioMix* _sourceAudioMix;
	NSTimer* _exportProgressTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportPresetForAsset:(id)arg1 videoComposition:(id)arg2 ;
-(void)updateProgress:(id)arg1 ;
-(void)cancel;
-(id)initWithAsset:(id)arg1 videoComposition:(id)arg2 audioMix:(id)arg3 exportTimeRange:(SCD_Struct_AV20)arg4 sessionDelegate:(id)arg5 outputURL:(id)arg6 ;
-(void)createExportSessionwithPresetIdentifier:(id)arg1 exportTimeRange:(SCD_Struct_AV20)arg2 videoComposition:(id)arg3 audioMix:(id)arg4 ;
@end
