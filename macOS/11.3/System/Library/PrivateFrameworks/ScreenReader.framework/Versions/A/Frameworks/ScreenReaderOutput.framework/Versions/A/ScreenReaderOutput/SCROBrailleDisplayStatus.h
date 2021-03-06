/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/ScreenReaderOutput.framework/Versions/A/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface SCROBrailleDisplayStatus : NSObject {

	int _virtualAlignment;
	NSData* _realData;
	NSData* _virtualData;
	NSData* _aggregatedData;
	long long _masterStatusCellIndex;

}

@property (nonatomic,retain) NSData * realData;                            //@synthesize realData=_realData - In the implementation block
@property (nonatomic,retain) NSData * virtualData;                         //@synthesize virtualData=_virtualData - In the implementation block
@property (nonatomic,retain) NSData * aggregatedData;                      //@synthesize aggregatedData=_aggregatedData - In the implementation block
@property (assign,nonatomic) int virtualAlignment;                         //@synthesize virtualAlignment=_virtualAlignment - In the implementation block
@property (assign,nonatomic) long long masterStatusCellIndex;              //@synthesize masterStatusCellIndex=_masterStatusCellIndex - In the implementation block
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(long long)masterStatusCellIndex;
-(NSData *)realData;
-(void)setRealData:(NSData *)arg1 ;
-(NSData *)virtualData;
-(void)setVirtualData:(NSData *)arg1 ;
-(NSData *)aggregatedData;
-(void)setAggregatedData:(NSData *)arg1 ;
-(int)virtualAlignment;
-(void)setVirtualAlignment:(int)arg1 ;
@end

