/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTLMessageFilter;

@interface _MTLMessageNotifier : NSObject {

	MTLMessageFilter* _filter;
	/*^block*/id _handler;

}

@property (retain,readonly) MTLMessageFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (readonly) id handler;                                    //@synthesize handler=_handler - In the implementation block
-(id)init:(/*^block*/id)arg1 filter:(id)arg2 ;
-(void)dealloc;
-(MTLMessageFilter *)filter;
-(id)handler;
@end

