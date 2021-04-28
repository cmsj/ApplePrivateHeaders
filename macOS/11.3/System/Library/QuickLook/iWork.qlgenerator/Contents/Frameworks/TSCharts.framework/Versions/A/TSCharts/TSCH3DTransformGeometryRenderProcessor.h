/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCH3DRetargetRenderProcessor.h>

@class TSCH3DDataBuffer;

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor {

	TSCH3DDataBuffer* _buffer;

}

@property (nonatomic,readonly) TSCH3DDataBuffer * buffer;              //@synthesize buffer=_buffer - In the implementation block
+(id)processorWithOriginal:(id)arg1 ;
-(id)init;
-(TSCH3DDataBuffer *)buffer;
-(id)matrix;
-(void)setOriginal:(id)arg1 ;
-(void)geometry:(id)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
@end
