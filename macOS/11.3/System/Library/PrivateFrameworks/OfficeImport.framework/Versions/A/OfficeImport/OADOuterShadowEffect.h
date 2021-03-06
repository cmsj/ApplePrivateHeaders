/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShadowEffect.h>

@interface OADOuterShadowEffect : OADShadowEffect {

	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	char mRotateWithShape;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setAlignment:(int)arg1 ;
-(int)alignment;
-(void)setRotateWithShape:(char)arg1 ;
-(char)rotateWithShape;
-(float)xScale;
-(void)setXScale:(float)arg1 ;
-(float)yScale;
-(void)setYScale:(float)arg1 ;
-(float)xSkew;
-(void)setXSkew:(float)arg1 ;
-(float)ySkew;
-(void)setYSkew:(float)arg1 ;
@end

