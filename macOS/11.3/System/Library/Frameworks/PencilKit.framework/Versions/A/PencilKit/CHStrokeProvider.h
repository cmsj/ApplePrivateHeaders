/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PencilKit.framework/Versions/A/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSOrderedSet;


@protocol CHStrokeProvider <NSObject>
@property (retain,readonly) id<CHStrokeProviderVersion> strokeProviderVersion; 
@property (copy,readonly) NSArray * orderedStrokes; 
@property (readonly) long long groupingPriority; 
@property (readonly) CGSize drawingCanvasSize; 
@property (copy,readonly) NSOrderedSet * visibleStrokeEncodedIdentifiers; 
@optional
-(char)isStroke:(id)arg1 versionOfStrokeWithIdentifier:(id)arg2;
-(NSOrderedSet *)visibleStrokeEncodedIdentifiers;
-(CGSize)drawingCanvasSize;
-(long long)compareOrderOfStroke:(id)arg1 toStroke:(id)arg2;

@required
-(id<CHStrokeProviderVersion>)strokeProviderVersion;
-(id)strokeIdentifierFromData:(id)arg1;
-(id)strokeForIdentifier:(id)arg1;
-(long long)compareOrderOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
-(NSArray *)orderedStrokes;
-(id)encodedStrokeIdentifier:(id)arg1;
-(unsigned long long)compareStyleOfStrokeWithIdentifier:(id)arg1 toStrokeWithIdentifier:(id)arg2;
-(long long)groupingPriority;

@end

