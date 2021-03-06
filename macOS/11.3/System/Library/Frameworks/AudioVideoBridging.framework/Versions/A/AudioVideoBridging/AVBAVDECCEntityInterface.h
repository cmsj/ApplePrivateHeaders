/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVBInterface, AVB17221Entity;

@interface AVBAVDECCEntityInterface : NSObject {

	AVBInterface* _interface;
	AVB17221Entity* _entity;

}

@property (nonatomic,retain) AVBInterface * interface;              //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) AVB17221Entity * entity;               //@synthesize entity=_entity - In the implementation block
-(AVB17221Entity *)entity;
-(void)setEntity:(AVB17221Entity *)arg1 ;
-(AVBInterface *)interface;
-(void)setInterface:(AVBInterface *)arg1 ;
@end

