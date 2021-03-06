/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PAImaging.framework/Versions/A/PAImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject, DGDescription;

@interface PAAdjustmentDataCacheEntry : NSObject {

	NSObject*<OS_dispatch_group> _group;
	DGDescription* _renderDescription;
	long long _disposition;

}

@property (retain) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (retain) DGDescription * renderDescription;               //@synthesize renderDescription=_renderDescription - In the implementation block
@property (assign) long long disposition;                           //@synthesize disposition=_disposition - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)initWithAsset:(id)arg1 ;
-(void)_load:(id)arg1 ;
-(long long)disposition;
-(void)setDisposition:(long long)arg1 ;
-(DGDescription *)renderDescription;
-(void)setRenderDescription:(DGDescription *)arg1 ;
-(void)deliverOn:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

