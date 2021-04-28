/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDAbstractLayout.h>
#import <TSDrawables/TSDAdaptiveLayout.h>

@class TSDLayoutController, TSURetainedPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {

	TSDLayoutController* _layoutController;
	char _supportsAdaptiveLayout;
	TSURetainedPointerKeyDictionary* _shiftedObjects;

}

@property (nonatomic,__weak,readonly) TSDLayoutController * layoutController;              //@synthesize layoutController=_layoutController - In the implementation block
-(TSDLayoutController *)layoutController;
-(char)isRootLayoutForInspectorGeometry;
-(id)initWithLayoutController:(id)arg1 ;
-(char)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3 ;
-(char)isRootLevelForInlineGeometry;
-(id)childLayoutsInRect:(CGRect)arg1 deep:(char)arg2 ;
-(CGPoint)adjustMappingPointForInfo:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(char)isSavedShiftForInfo:(id)arg1 equalToOffset:(CGPoint)arg2 ;
-(void)updateRootLayoutShiftFor:(id)arg1 offset:(CGPoint)arg2 ;
-(void)resetLayout:(id)arg1 forInfo:(id)arg2 ;
-(CGRect)clippedRectInRoot:(CGRect)arg1 ;
@end
