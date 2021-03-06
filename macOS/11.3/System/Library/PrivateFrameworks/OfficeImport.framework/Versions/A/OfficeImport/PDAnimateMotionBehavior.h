/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/PDAnimateScaleBehavior.h>

@class OITSUBezierPath, NSString;

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior {

	OITSUBezierPath* mPath;
	char mHasAngle;
	double mAngle;
	NSString* mPointsTypes;
	char mHasOriginType;
	int mOriginType;
	char mHasRotationCenter;
	CGPoint mRotationCenter;
	char mHasPathEditMode;
	int mPathEditMode;

}
+(id)bezierPathFromNSString:(id)arg1 ;
+(id)NSStringForBezierPath:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)path;
-(void)setPath:(id)arg1 ;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(char)hasAngle;
-(char)hasPath;
-(void)setOriginType:(int)arg1 ;
-(id)pointsTypes;
-(char)hasOriginType;
-(int)originType;
-(char)hasRotationCenter;
-(CGPoint)rotationCenter;
-(char)hasPathEditMode;
-(int)pathEditMode;
-(void)setPointsTypes:(id)arg1 ;
-(void)setRotationCenter:(CGPoint)arg1 ;
-(void)setPathEditMode:(int)arg1 ;
@end

