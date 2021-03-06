/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <AppKit/NSView.h>

@class QCPatch, GFList, NSMutableArray;

@interface QCPatchParametersView : NSView {

	QCPatch* _patch;
	unsigned long long _mask;
	char _autosize;
	GFList* _patches;
	NSMutableArray* _ports;
	GFList* _labels;
	NSMutableArray* _views;
	CGSize _size;
	void** _unused[4];

}
+(void)initialize;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)isFlipped;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(Class)valueClassForBinding:(id)arg1 ;
-(void)_cleanup;
-(void)_setup;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)_finishInitialization;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(id)_labels;
-(id)patch;
-(void)setPatch:(id)arg1 ;
-(void)_setView:(id)arg1 enabled:(char)arg2 ;
-(char)isInputPortVisible:(id)arg1 ;
-(void)_layoutUpdated:(id)arg1 ;
-(void)_stateUpdated:(id)arg1 ;
-(void)_attributesUpdated:(id)arg1 ;
-(void)localizePortInfo:(id)arg1 ;
-(unsigned long long)inputsVisibilityMask;
-(void)setInputsVisibilityMask:(unsigned long long)arg1 ;
-(void)setAutoresize:(char)arg1 ;
-(char)autoresize;
-(unsigned long long)visibleInputs;
-(CGSize)bestSize;
@end

