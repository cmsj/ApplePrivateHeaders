/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/Versions/A/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
@interface AXVNEspressoDetectedObject : NSObject {

	CGRect _bounds;
	float _confidence;
	long long _objectType;

}

@property (assign) long long objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (assign) CGRect bounds;                     //@synthesize bounds=_bounds - In the implementation block
@property (readonly) CGPoint center; 
@property (assign) float confidence;                  //@synthesize confidence=_confidence - In the implementation block
-(float)confidence;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGPoint)center;
-(long long)objectType;
-(void)setConfidence:(float)arg1 ;
-(id)initWithObjectType:(long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 ;
-(void)setObjectType:(long long)arg1 ;
@end

