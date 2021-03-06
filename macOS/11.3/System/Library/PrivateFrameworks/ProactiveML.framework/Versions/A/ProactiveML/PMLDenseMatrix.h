/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/Versions/A/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PMLDenseVector;

@interface PMLDenseMatrix : NSObject {

	PMLDenseVector* _data;
	unsigned long long _numberOfRows;
	unsigned long long _numberOfColumns;

}

@property (nonatomic,readonly) unsigned long long numberOfRows;                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
+(id)denseMatrixFromData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 ;
+(id)denseMatrixFromNumbers:(id)arg1 ;
-(const float*)values;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(void)enumerateNonZeroValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 numberOfRows:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 ;
@end

