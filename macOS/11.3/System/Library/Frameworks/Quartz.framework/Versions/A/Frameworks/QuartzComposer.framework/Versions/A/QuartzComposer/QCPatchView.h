/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/GFGraphView.h>

@class QCPatch;

@interface QCPatchView : GFGraphView {

	char _hasSelectedPatches;
	CGPoint _triggerPatchLinkStart;
	CGPoint _triggerPatchLinkEnd;
	QCPatch* _triggerPatchLinkCandidate;
	double _cascadeDistance;
	void** _unused2[4];

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)copy:(id)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_finishInitialization;
-(void)duplicate:(id)arg1 ;
-(void)setGraph:(id)arg1 ;
-(id)_colorForConnection:(id)arg1 ;
-(char)_editNode:(id)arg1 ;
-(CGRect)_boundsForSelection;
-(id)menuForGraph;
-(void)_drawConnection:(id)arg1 fromPort:(id)arg2 point:(CGPoint)arg3 toPoint:(CGPoint)arg4 ;
-(void)setNeedsDisplayForNode:(id)arg1 ;
-(id)_createSubgraphFromSelection:(id)arg1 ;
-(CGPoint)_pastePoint;
-(void)_writeSelectionToArchiver:(id)arg1 fromPoint:(CGPoint)arg2 ;
-(char)_readSelectionFromUnarchiver:(id)arg1 toPoint:(CGPoint)arg2 ;
-(id)patch;
-(void)setPatch:(id)arg1 ;
-(char)trackTriggerPatch:(id)arg1 fromNode:(id)arg2 ;
-(char)_hasSelectedPatches;
-(void)_explodeSubgraphFromSelection:(id)arg1 ;
-(int)connectionTypeForConnection:(id)arg1 ;
-(char)__filterAll:(id)arg1 ;
-(void)__removeUnusedPatchesFromGraph:(id)arg1 recursively:(char)arg2 ;
-(void)__computeOrder:(id)arg1 context:(void*)arg2 ;
-(void)__explode:(id)arg1 context:(void*)arg2 ;
-(void)_removeUnusedPatches:(id)arg1 ;
-(void)_selectionUpdated:(id)arg1 ;
-(Class)classForPath:(id)arg1 ;
-(char)acceptDroppedFile:(id)arg1 ;
-(void)drawTriggerPatchLink;
-(char)performDroppedFile:(id)arg1 atPosition:(CGPoint)arg2 ;
-(void)_addSubgraph:(id)arg1 ;
@end

