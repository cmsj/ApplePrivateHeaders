/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaFoundation.framework/Versions/A/MediaFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFStateDumpable.h>

@class NSDictionary;

@interface MediaFoundation.ItemBufferProducer : _UKNOWN_SUPERCLASS_ <MFStateDumpable> {

	 maximumBufferLength;
	 hasReachedQueueEnd;
	 consumer;
	 buffer;
	 dataSource;
	 reporter;
	 cursor;

}

@property (readonly,nonatomic) NSDictionary * stateDictionary; 
-(NSDictionary *)stateDictionary;
@end

