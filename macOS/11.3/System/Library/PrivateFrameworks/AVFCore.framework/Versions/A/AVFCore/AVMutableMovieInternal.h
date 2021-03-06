/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFCore/AVFCore-Structs.h>
@class NSURL, NSData, NSDictionary, NSObject, NSMutableArray, AVDispatchOnce;

@interface AVMutableMovieInternal : NSObject {

	OpaqueFigMutableMovieRef figMutableMovie;
	OpaqueFigFormatReaderRef formatReader;
	OpaqueFigAssetRef figAsset;
	NSURL* URL;
	NSData* data;
	NSDictionary* initializationOptions;
	NSObject*<OS_dispatch_semaphore> trackWaitingSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataWaitingSemaphore;
	NSMutableArray* tracks;
	AVDispatchOnce* makeTracksArrayOnce;

}
@end

