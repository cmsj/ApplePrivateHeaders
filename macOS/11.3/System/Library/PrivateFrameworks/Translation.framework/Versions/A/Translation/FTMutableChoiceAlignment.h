/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTChoiceAlignment.h>

@class NSArray;

@interface FTMutableChoiceAlignment : FTChoiceAlignment

@property (nonatomic,copy) NSArray * post_itn_choice_indices; 
@property (nonatomic,copy) NSArray * pre_itn_token_to_post_itn_char_alignments; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)post_itn_choice_indices;
-(void)setPost_itn_choice_indices:(NSArray *)arg1 ;
-(NSArray *)pre_itn_token_to_post_itn_char_alignments;
-(void)setPre_itn_token_to_post_itn_char_alignments:(NSArray *)arg1 ;
@end
