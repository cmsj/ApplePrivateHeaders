/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Geode.framework/Versions/A/Geode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Geode/Geode-Structs.h>
#import <libobjc.A.dylib/DGOperationCoding.h>

@class NSString;

@interface DGDetectedEdge : NSObject <DGOperationCoding> {

	double _angle0;
	double _angle1;
	CGPoint _pt0;
	CGPoint _pt1;

}

@property (readonly) CGPoint pt0;                                   //@synthesize pt0=_pt0 - In the implementation block
@property (readonly) double angle0;                                 //@synthesize angle0=_angle0 - In the implementation block
@property (readonly) CGPoint pt1;                                   //@synthesize pt1=_pt1 - In the implementation block
@property (readonly) double angle1;                                 //@synthesize angle1=_angle1 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)detectedEdgeWithPt0:(CGPoint)arg1 angle0:(double)arg2 pt1:(CGPoint)arg3 angle1:(double)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(CGPoint)pt0;
-(double)angle0;
-(CGPoint)pt1;
-(double)angle1;
@end

