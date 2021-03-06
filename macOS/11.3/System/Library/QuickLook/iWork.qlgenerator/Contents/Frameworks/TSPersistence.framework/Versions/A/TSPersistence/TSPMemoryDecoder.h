/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPDecoder.h>

@protocol TSPMemoryDecoderDelegate, OS_dispatch_data;
@class NSObject, NSString;

@interface TSPMemoryDecoder : NSObject <TSPDecoder> {

	id<TSPMemoryDecoderDelegate> _delegate;
	NSObject*<OS_dispatch_data> _metadataDispatchData;
	NSObject*<OS_dispatch_data> _rootObjectComponentDispatchData;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> metadataDispatchData;                         //@synthesize metadataDispatchData=_metadataDispatchData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> rootObjectComponentDispatchData;              //@synthesize rootObjectComponentDispatchData=_rootObjectComponentDispatchData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;
-(id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2 ;
-(NSObject*<OS_dispatch_data>)rootObjectComponentDispatchData;
-(NSObject*<OS_dispatch_data>)metadataDispatchData;
-(id)initWithMetadataDispatchData:(id)arg1 rootObjectComponentDispatchData:(id)arg2 delegate:(id)arg3 ;
-(id)initWithEncodedData:(id)arg1 delegate:(id)arg2 ;
@end

