/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDPathSource.h>
#import <TSDrawables/TSDMixing.h>

@class TSUBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {

	TSUBezierPath* mPath;
	char mIsRectangular;
	CGSize mNaturalSize;
	TSUBezierPath* mBezierPathWithoutFlips;

}

@property (assign,nonatomic) CGSize naturalSize; 
+(id)pathSourceWithBezierPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(char)isClosed;
-(char)isRectangular;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(char)isCircular;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(char)isRectangularForever;
-(id)initWithBezierPath:(id)arg1 ;
-(void)p_setBezierPath:(id)arg1 ;
-(CGAffineTransform)transformToNaturalSize;
-(id)initWithNaturalSize:(CGSize)arg1 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)inferredAccessibilityDescription;
-(id)initWithArchive:(const PathSourceArchive*)arg1 andBezierArchive:(const BezierPathSourceArchive*)arg2 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 andBezierArchive:(BezierPathSourceArchive*)arg2 ;
@end

