/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString;

@interface CAStateControllerAnimation : NSObject {

	CALayer* _layer;
	NSString* _key;

}

@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSString * key;               //@synthesize key=_key - In the implementation block
-(void)dealloc;
-(NSString *)key;
-(CALayer *)layer;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
@end
