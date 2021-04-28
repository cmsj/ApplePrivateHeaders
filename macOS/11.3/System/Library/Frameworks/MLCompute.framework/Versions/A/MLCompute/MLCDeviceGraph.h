/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MLCompute.framework/Versions/A/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLCDevice, NSMutableArray, NSMutableSet;

@interface MLCDeviceGraph : NSObject {

	MLCDevice* _device;
	NSMutableArray* _graphLayerList;
	NSMutableSet* _liveOutputs;
	NSMutableSet* _liveInputs;

}

@property (nonatomic,retain,readonly) MLCDevice * device;                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSMutableArray * graphLayerList;                //@synthesize graphLayerList=_graphLayerList - In the implementation block
@property (assign,nonatomic,__weak) NSMutableSet * liveOutputs;              //@synthesize liveOutputs=_liveOutputs - In the implementation block
@property (assign,nonatomic,__weak) NSMutableSet * liveInputs;               //@synthesize liveInputs=_liveInputs - In the implementation block
+(id)deviceGraphWithLayers:(id)arg1 device:(id)arg2 ;
-(MLCDevice *)device;
-(id)initDeviceGraphWithLayers:(id)arg1 device:(id)arg2 ;
-(NSMutableArray *)graphLayerList;
-(void)setGraphLayerList:(NSMutableArray *)arg1 ;
-(NSMutableSet *)liveOutputs;
-(void)setLiveOutputs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)liveInputs;
-(void)setLiveInputs:(NSMutableSet *)arg1 ;
@end
