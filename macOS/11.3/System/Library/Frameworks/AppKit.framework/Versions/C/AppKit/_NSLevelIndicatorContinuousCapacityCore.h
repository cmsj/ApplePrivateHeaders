/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/_NSLevelIndicatorCore.h>

@class CALayer, NSString;

@interface _NSLevelIndicatorContinuousCapacityCore : NSObject <_NSLevelIndicatorCore> {

	CALayer* _primaryFillLayer;
	CALayer* _secondaryFillLayer;
	CALayer* _tertiaryFillLayer;
	CALayer* _outlineLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_fakeDrawFillInRect:(CGRect)arg1 withTintColor:(id)arg2 ;
-(void)_forEachTieredZoneInRect:(CGRect)arg1 forState:(SCD_Struct_NS38)arg2 performBlock:(/*^block*/id)arg3 ;
-(void)_fakeCreateOrUpdateFillLayer:(id*)arg1 withTintColor:(id)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 forState:(SCD_Struct_NS38)arg2 ;
-(id)_layerForTieredZone:(int)arg1 ;
-(void)drawInRect:(CGRect)arg1 inContext:(id)arg2 forState:(SCD_Struct_NS38)arg3 ;
-(int)vibrancyBlendModeForState:(SCD_Struct_NS38)arg1 ;
-(CGSize)indicatorSizeForState:(SCD_Struct_NS38)arg1 ;
-(NSEdgeInsets)alignmentRectInsetsForState:(SCD_Struct_NS38)arg1 ;
-(void)updateLayer:(id)arg1 forState:(SCD_Struct_NS38)arg2 ;
-(void)drawFocusRingMaskInRect:(CGRect)arg1 inContext:(id)arg2 forState:(SCD_Struct_NS38)arg3 ;
@end
