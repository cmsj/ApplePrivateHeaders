/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTBatchTranslationRequest_Paragraph.h>

@class NSString, NSArray;

@interface FTMutableBatchTranslationRequest_Paragraph : FTBatchTranslationRequest_Paragraph

@property (nonatomic,copy) NSString * paragraph_id; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSArray * span; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)span;
-(void)setSpan:(NSArray *)arg1 ;
-(NSString *)paragraph_id;
-(void)setParagraph_id:(NSString *)arg1 ;
@end
