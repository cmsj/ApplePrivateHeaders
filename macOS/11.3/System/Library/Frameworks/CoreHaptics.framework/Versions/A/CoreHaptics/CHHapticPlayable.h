/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol CHHapticPlayable <NSObject>
@property (readonly) NSArray * events; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSArray * parameterCurves; 
@property (readonly) double duration; 
@required
-(double)duration;
-(NSArray *)parameters;
-(NSArray *)events;
-(id)resolveExternalResources:(id)arg1 error:(id*)arg2;
-(NSArray *)parameterCurves;

@end
