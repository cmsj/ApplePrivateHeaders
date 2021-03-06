/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSWindow, NSImage, NSPasteboard;


@protocol NSDraggingInfo <NSObject>
@property (readonly) NSWindow * draggingDestinationWindow; 
@property (readonly) unsigned long long draggingSourceOperationMask; 
@property (readonly) CGPoint draggingLocation; 
@property (readonly) CGPoint draggedImageLocation; 
@property (readonly) NSImage * draggedImage; 
@property (readonly) NSPasteboard * draggingPasteboard; 
@property (readonly) id draggingSource; 
@property (readonly) long long draggingSequenceNumber; 
@property (assign) long long draggingFormation; 
@property (assign) char animatesToDestination; 
@property (assign) long long numberOfValidItemsForDrop; 
@property (readonly) long long springLoadingHighlight; 
@required
-(id)draggingSource;
-(CGPoint)draggingLocation;
-(unsigned long long)draggingSourceOperationMask;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
-(long long)springLoadingHighlight;
-(NSPasteboard *)draggingPasteboard;
-(void)slideDraggedImageTo:(CGPoint)arg1;
-(long long)draggingFormation;
-(void)setDraggingFormation:(long long)arg1;
-(void)resetSpringLoading;
-(NSWindow *)draggingDestinationWindow;
-(void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(/*^block*/id)arg5;
-(CGPoint)draggedImageLocation;
-(NSImage *)draggedImage;
-(long long)draggingSequenceNumber;
-(char)animatesToDestination;
-(void)setAnimatesToDestination:(char)arg1;
-(long long)numberOfValidItemsForDrop;
-(void)setNumberOfValidItemsForDrop:(long long)arg1;

@end

