/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSCharts.framework/Versions/A/TSCharts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSCharts/TSCharts-Structs.h>
#import <TSCharts/TSSPropertyValueArchiving.h>

@class TSDFill, TSCH3DLightingModel, TSCH3DFillSetIdentifier;

@interface TSCHDEPRECATED3DFill : NSObject <TSSPropertyValueArchiving> {

	TSDFill* _fill;
	TSCH3DLightingModel* _lightingModel;
	TSCH3DFillSetIdentifier* _identifier;

}
+(id)instanceWithArchive:(const DEPRECATEDChart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithArchive:(const DEPRECATEDChart3DFillArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(DEPRECATEDChart3DFillArchive*)arg1 archiver:(id)arg2 ;
-(id)convertToTSDFill;
@end
