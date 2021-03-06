/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Vision.framework/Versions/A/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNObservation.h>

@class NSData;

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long elementCount; 
@property (readonly) NSData * data; 
+(char)supportsSecureCoding;
-(NSData *)data;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(char)computeDistance:(float*)arg1 toFeaturePrintObservation:(id)arg2 error:(id*)arg3 ;
-(float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id*)arg2 ;
@end

