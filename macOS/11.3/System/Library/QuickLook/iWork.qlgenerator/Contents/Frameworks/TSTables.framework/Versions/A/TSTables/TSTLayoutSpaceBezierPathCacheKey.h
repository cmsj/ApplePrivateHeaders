/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTLayoutSpaceBezierPathCacheKey : NSObject <NSCopying> {

	char _reoriginToZero;
	double _inset;
	SCD_Struct_TS115 _gridRange;
	CGAffineTransform _transform;

}

@property (assign,nonatomic) SCD_Struct_TS115 gridRange;               //@synthesize gridRange=_gridRange - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) double inset;                             //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) char reoriginToZero;                      //@synthesize reoriginToZero=_reoriginToZero - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(double)inset;
-(void)setInset:(double)arg1 ;
-(void)setGridRange:(SCD_Struct_TS115)arg1 ;
-(SCD_Struct_TS115)gridRange;
-(char)reoriginToZero;
-(void)setReoriginToZero:(char)arg1 ;
@end
