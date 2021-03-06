/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewViewDelegate <NSObject>
@optional
-(void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 didLoadPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 willShowPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 didShowPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 timedOutLoadingPreviewItem:(id)arg2;
-(char)previewView:(id)arg1 shouldPreviewItem:(id)arg2;
-(id)previewView:(id)arg1 customViewForPreviewItem:(id)arg2;
-(unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3;
-(char)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3;
-(char)previewView:(id)arg1 writePreviewItem:(id)arg2 toPasteboard:(id)arg3;
-(id)previewView:(id)arg1 pasteboardWriterForPreviewItem:(id)arg2;
-(id)previewView:(id)arg1 draggingItemsForPreviewItem:(id)arg2;
-(unsigned long long)previewView:(id)arg1 draggingSourceOperationMaskForLocal:(char)arg2;
-(char)previewView:(id)arg1 canShowPathForItem:(id)arg2;

@end

