/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/Versions/A/RTTUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSIndexPath, TUCall;

@interface RTTUtteranceRequest : NSObject {

	unsigned long long _index;
	NSString* _string;
	NSIndexPath* _cellIndexPath;
	TUCall* _call;

}

@property (assign,nonatomic) unsigned long long index;                        //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * string;                               //@synthesize string=_string - In the implementation block
@property (assign,nonatomic,__weak) NSIndexPath * cellIndexPath;              //@synthesize cellIndexPath=_cellIndexPath - In the implementation block
@property (nonatomic,retain) TUCall * call;                                   //@synthesize call=_call - In the implementation block
+(id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3 call:(id)arg4 ;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(TUCall *)call;
-(void)setCall:(TUCall *)arg1 ;
-(void)setCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)cellIndexPath;
@end

