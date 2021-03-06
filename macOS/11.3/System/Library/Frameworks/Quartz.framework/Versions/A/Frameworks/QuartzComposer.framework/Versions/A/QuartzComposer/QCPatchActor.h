/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/GFNodeActor.h>

@class NSView, QCTableView, NSTableColumn, QCPatch, QCInspector;

@interface QCPatchActor : GFNodeActor {

	NSView* noSettingsView;
	NSView* noPublishingView;
	NSView* notApplicableView;
	NSView* noParametersView;
	NSView* publishingView;
	QCTableView* inputsTableView;
	QCTableView* outputsTableView;
	NSTableColumn* _inputsKeyColumn;
	NSTableColumn* _outputsKeyColumn;
	QCPatch* _currentPatch;
	QCInspector* _currentInspector;
	void** _unused2[4];

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(long long)numberOfRowsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
-(void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4 ;
-(unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4 ;
-(char)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3 ;
-(char)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3 ;
-(CGSize)sizeForNode:(id)arg1 ;
-(CGPoint)pointForPort:(id)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(id)portForPoint:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(void)drawNode:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 ;
-(char)trackMouse:(id)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 view:(id)arg4 ;
-(id)menuForNode:(id)arg1 view:(id)arg2 ;
-(void)resetInspectorViews;
-(id)setupInspectorViewsForNode:(id)arg1 ;
-(id)_portTextAttributesForNode:(id)arg1 ;
-(id)_titleTextAttributesForNode:(id)arg1 ;
-(id)_portForPoint:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 outBounds:(CGRect*)arg4 ;
-(void)_makeCGPathForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(id)_colorForNode:(id)arg1 ;
-(id)_portIsConnected:(id)arg1 view:(id)arg2 ;
-(CGColorRef)_overlayColorForNode:(id)arg1 view:(id)arg2 ;
-(id)tooltipStringForPoint:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 tooltipBounds:(CGRect*)arg4 ;
-(char)pointInConsumerOrderRect:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(void)_setLayer:(id)arg1 ;
-(char)pointInTitleRect:(CGPoint)arg1 inNode:(id)arg2 bounds:(CGRect)arg3 ;
-(void)setTitle:(id)arg1 forNode:(id)arg2 ;
-(char)dragsOnPortForNode:(id)arg1 ;
-(id)parametersViewForPatch:(id)arg1 ;
-(id)parametersViewForPatch:(id)arg1 ;
-(void)_updatedParameters:(id)arg1 ;
-(id)inspectorForPatch:(id)arg1 ;
-(void)_updatedPorts:(id)arg1 ;
-(void)_updatedState:(id)arg1 ;
-(id)tableView:(id)arg1 portForRow:(long long)arg2 ;
-(void)_explodeSubgraph:(id)arg1 ;
-(void)_parent:(id)arg1 ;
-(void)_local:(id)arg1 ;
-(void)_external:(id)arg1 ;
-(void)_refactor:(id)arg1 ;
-(void)_makeSelectionPathForNode:(id)arg1 border:(float)arg2 bounds:(CGRect)arg3 inContext:(CGContextRef)arg4 ;
-(void)_drawBackgroundGradientLayerForNode:(id)arg1 bounds:(CGRect)arg2 reflectionHeight:(double)arg3 inContext:(CGContextRef)arg4 ;
-(void)_drawHighLightForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawTitle:(id)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 withAttributes:(id)arg4 ;
-(double)_drawBadgeForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(double)_drawOrderForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawString:(id)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 withAttributes:(id)arg4 ;
-(CGLayerRef)_createPortRingWithColor:(CGColorRef)arg1 inContext:(CGContextRef)arg2 zoom:(double)arg3 ;
-(void)_drawNameForPort:(id)arg1 node:(id)arg2 atPoint:(CGPoint)arg3 bounds:(CGRect)arg4 inContext:(CGContextRef)arg5 ;
-(void)_drawOverlayForNode:(id)arg1 bounds:(CGRect)arg2 stroke:(char)arg3 view:(id)arg4 inContext:(CGContextRef)arg5 ;
-(SCD_Struct_QC4*)nodeMD5List:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 zoom:(double)arg4 outCount:(unsigned long long*)arg5 ;
-(void)_drawSelectionForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawOverlayForNode:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 inContext:(CGContextRef)arg4 ;
-(void)_drawTitleForNode:(id)arg1 bounds:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
-(void)_drawPortsForNode:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 inContext:(CGContextRef)arg4 ;
-(void)_drawPortColorsForNode:(id)arg1 bounds:(CGRect)arg2 view:(id)arg3 inContext:(CGContextRef)arg4 ;
-(id)_patchTypeTextAttributesForNode:(id)arg1 ;
@end

