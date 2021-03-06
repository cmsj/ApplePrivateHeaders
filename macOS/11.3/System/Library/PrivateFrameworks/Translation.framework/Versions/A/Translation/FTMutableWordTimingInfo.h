/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTWordTimingInfo.h>

@class NSString;

@interface FTMutableWordTimingInfo : FTWordTimingInfo

@property (nonatomic,copy) NSString * word; 
@property (assign,nonatomic) unsigned sample_idx; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) unsigned length; 
@property (assign,nonatomic) float timestamp; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned)length;
-(void)setLength:(unsigned)arg1 ;
-(unsigned)offset;
-(float)timestamp;
-(void)setOffset:(unsigned)arg1 ;
-(void)setTimestamp:(float)arg1 ;
-(NSString *)word;
-(void)setWord:(NSString *)arg1 ;
-(unsigned)sample_idx;
-(void)setSample_idx:(unsigned)arg1 ;
@end

