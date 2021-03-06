/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHVisualization.h>

@class CHRecognitionSessionResult, NSSet;

@interface CHStrokeGroupBasedVisualization : CHVisualization {

	char _newGroupsDefaultToActive;
	CHRecognitionSessionResult* _resultDrawn;
	NSSet* _activeStrokeGroupAncestorIdentifiers;

}

@property (nonatomic,retain) CHRecognitionSessionResult * resultDrawn;                          //@synthesize resultDrawn=_resultDrawn - In the implementation block
@property (nonatomic,copy) NSSet * activeStrokeGroupAncestorIdentifiers;                        //@synthesize activeStrokeGroupAncestorIdentifiers=_activeStrokeGroupAncestorIdentifiers - In the implementation block
@property (assign,nonatomic) id<CHStrokeGroupBasedVisualizationDelegate> delegate; 
@property (nonatomic,readonly) char newGroupsDefaultToActive;                                   //@synthesize newGroupsDefaultToActive=_newGroupsDefaultToActive - In the implementation block
-(void)dealloc;
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(CHRecognitionSessionResult *)resultDrawn;
-(CGRect)dirtyRectForStrokeGroup:(id)arg1 ;
-(NSSet *)activeStrokeGroupAncestorIdentifiers;
-(void)recognitionSessionDidUpdateRecognitionResult;
-(void)toggleVisualizationRegionAtPoint:(CGPoint)arg1 ;
-(void)setResultDrawn:(CHRecognitionSessionResult *)arg1 ;
-(char)newGroupsDefaultToActive;
-(void)_markStrokeGroupsAsActive:(id)arg1 ;
-(void)setActiveStrokeGroupAncestorIdentifiers:(NSSet *)arg1 ;
@end

