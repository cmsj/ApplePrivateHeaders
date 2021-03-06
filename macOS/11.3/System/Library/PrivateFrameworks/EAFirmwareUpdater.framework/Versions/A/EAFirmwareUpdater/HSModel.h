/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/Versions/A/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HSModelDelegate, OS_dispatch_queue;
@class NSObject;

@interface HSModel : NSObject {

	id<HSModelDelegate> delegate;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)getHSModelForEngineMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 numHSModels:(unsigned long long)arg3 modelBuffer:(char*)arg4 length:(unsigned long long)arg5 ;
@end

