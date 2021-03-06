/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSDMatchingAlgorithm : NSObject {

	long long* mCostMatrix;
	char* mMaskMatrix;
	char* mIsStarInColumn;
	char* mIsStarInRow;
	char* mIsColCovered;
	char* mIsRowCovered;
	NSMutableArray* mObjectMapping;
	long long mMatrixDimension;
	long long mZ0Row;
	long long mZ0Col;
	NSMutableArray* mResults;

}
+(id)bestMatchesFromArray:(id)arg1 ;
-(char)p_step4FindAZeroAndReturnRow:(int*)arg1 column:(int*)arg2 ;
-(int)p_step4IndexOfStarredZeroInRow:(int)arg1 ;
-(void)p_allocateMatrices;
-(int)p_doStep1;
-(int)p_doStep2;
-(int)p_doStep3;
-(int)p_doStep4;
-(int)p_doStep5;
-(int)p_doStep6;
-(void)p_deallocateMatrices;
-(id)p_bestMatchesFromArray:(id)arg1 ;
@end

