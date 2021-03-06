/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDLayoutChangeObserver.h>
#import <TSDrawables/TSDPartitioner.h>
#import <TSDrawables/TSDCanvasDelegate.h>

@class TSDDrawableInfo, TSDCanvas, TSUPointerKeyDictionary, TSDDefaultPartitionerPrintingSettings, TSDLayout, NSString;

@interface TSDDefaultPartitioner : TSDLayoutChangeObserver <TSDPartitioner, TSDCanvasDelegate> {

	TSDDrawableInfo* _info;
	TSDCanvas* _canvas;
	TSUPointerKeyDictionary* _mainRepsByCanvas;
	TSUPointerKeyDictionary* _cachedImagesByCanvas;
	TSUPointerKeyDictionary* _partialRepsByCanvas;
	TSDDefaultPartitionerPrintingSettings* _lastPrintingSettings;
	char _paginateRightToLeft;

}

@property (nonatomic,readonly) TSDLayout * i_layout; 
@property (nonatomic,readonly) char paginateRightToLeft;                                    //@synthesize paginateRightToLeft=_paginateRightToLeft - In the implementation block
@property (nonatomic,readonly) CGRect totalPartitionFrame; 
@property (nonatomic,readonly) id<TSDCanvasProxyDelegate> canvasProxyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithInfo:(id)arg1 ;
-(void)reset;
-(id)documentRoot;
-(char)isPrintingCanvas;
-(TSDLayout *)i_layout;
-(char)shouldSuppressBackgrounds;
-(void)i_layoutRegistered:(id)arg1 ;
-(void)i_layoutUnregistered:(id)arg1 ;
-(void)p_generateLayouts;
-(void)p_teardownLayouts;
-(unsigned long long)p_edgesForHintBounds:(CGRect)arg1 ;
-(id)p_nextHintForSize:(CGSize)arg1 previousHint:(id)arg2 horizontally:(char)arg3 ;
-(id)p_firstHintForSize:(CGSize)arg1 ;
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(char)arg4 outFinished:(out char*)arg5 ;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2 ;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(char)arg4 outFinished:(out char*)arg5 ;
-(id)hintForLayout:(id)arg1 ;
-(id)i_repForCanvas:(id)arg1 ;
-(CGImageRef)i_cachedImageForCanvas:(id)arg1 ;
-(void)i_setCachedImage:(CGImageRef)arg1 forCanvas:(id)arg2 ;
-(void)i_removeCachedImageForCanvas:(id)arg1 ;
-(void)i_registerPartialRep:(id)arg1 ;
-(void)i_unregisterPartialRep:(id)arg1 ;
-(void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)processChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(void)didProcessAllChanges;
-(void)setLayoutPartititionsRightToLeft:(char)arg1 contentPartitionsRightToLeft:(char)arg2 ;
-(CGRect)totalPartitionFrame;
-(char)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(char)arg3 ;
-(void)p_generateLayoutsIfNeeded;
-(void)i_forceLayoutForChangedCanvasPrintingSettingsOfCanvas:(id)arg1 ;
-(id)p_layoutsForInfo:(id)arg1 ;
-(id)p_childRepForRep:(id)arg1 toNotifyForInfo:(id)arg2 ;
-(char)isCanvasDrawingIntoPDF;
-(id)p_repsForInfo:(id)arg1 ;
-(char)paginateRightToLeft;
@end

