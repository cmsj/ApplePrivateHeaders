/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, EDColorReference;

@interface EDBorder : NSObject {

	EDResources* mResources;
	int mType;
	EDColorReference* mColorReference;
	int mDiagonalType;

}
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 resources:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(void)setDiagonalType:(int)arg1 ;
-(id)colorReference;
-(int)diagonalType;
-(char)isEqualToBorder:(id)arg1 ;
@end

