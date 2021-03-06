/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPEncoder.h>

@protocol OS_dispatch_queue, OS_dispatch_data;
@class NSError, NSObject, TSPMemoryComponentWriteChannel, NSString;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {

	NSError* _error;
	char _isFinished;
	NSObject*<OS_dispatch_queue> _accessQueue;
	ObjectSerializationDirectory* _directory;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;
	NSObject*<OS_dispatch_data> _encodedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newMetadataComponentWriteChannel;
-(id)newRootObjectComponentWriteChannel;
-(void)appendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishEncodingWithCompletion:(/*^block*/id)arg1 ;
@end

