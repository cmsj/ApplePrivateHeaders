/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _WKFrameHandle;

@interface PrintSheetConfigurationInfo : NSObject {

	char _waitUntilDone;
	_WKFrameHandle* _frameHandle;

}

@property (getter=shouldWaitUntilDone,nonatomic,readonly) char waitUntilDone;              //@synthesize waitUntilDone=_waitUntilDone - In the implementation block
@property (nonatomic,readonly) _WKFrameHandle * frameHandle;                               //@synthesize frameHandle=_frameHandle - In the implementation block
-(id)init;
-(_WKFrameHandle *)frameHandle;
-(char)shouldWaitUntilDone;
-(id)initWithFrameHandle:(id)arg1 shouldWaitUntilDone:(char)arg2 ;
@end

