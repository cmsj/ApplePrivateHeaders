/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CHDSeries.h>

@class CHDData;

@interface CHDBubbleSeries : CHDSeries {

	CHDData* mSizeData;
	BOOL mBubble3D;
	BOOL mInvertIfNegative;
	BOOL mShowBubbleSize;

}
-(BOOL)isShowBubbleSize;
-(void)setShowBubbleSize:(BOOL)arg1 ;
-(void)setCategoryData:(id)arg1 ;
-(BOOL)isBubble3D;
-(id)sizeData;
-(void)setSizeData:(id)arg1 ;
-(void)setBubble3D:(BOOL)arg1 ;
-(BOOL)isInvertIfNegative;
-(void)setInvertIfNegative:(BOOL)arg1 ;
@end

