/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/Versions/A/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CUMessageRequestEntry : NSObject {

	/*^block*/id _handler;
	NSDictionary* _options;

}

@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

