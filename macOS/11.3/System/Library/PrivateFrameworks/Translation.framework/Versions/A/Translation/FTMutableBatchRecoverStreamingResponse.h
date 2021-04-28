/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchRecoverStreamingResponse.h>

@class FTPronGuessResponse, FTBatchRecoverFinalResponse;

@interface FTMutableBatchRecoverStreamingResponse : FTBatchRecoverStreamingResponse

@property (assign,nonatomic) long long content_type; 
@property (nonatomic,copy) FTPronGuessResponse * contentAsFTPronGuessResponse; 
@property (nonatomic,copy) FTBatchRecoverFinalResponse * contentAsFTBatchRecoverFinalResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)content_type;
-(void)setContent_type:(long long)arg1 ;
-(FTPronGuessResponse *)contentAsFTPronGuessResponse;
-(void)setContentAsFTPronGuessResponse:(FTPronGuessResponse *)arg1 ;
-(FTBatchRecoverFinalResponse *)contentAsFTBatchRecoverFinalResponse;
-(void)setContentAsFTBatchRecoverFinalResponse:(FTBatchRecoverFinalResponse *)arg1 ;
@end
