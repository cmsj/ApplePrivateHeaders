/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Versions/A/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTSpeechTranslationPartialRecognitionResponse.h>

@class NSString;

@interface FTMutableSpeechTranslationPartialRecognitionResponse : FTSpeechTranslationPartialRecognitionResponse

@property (nonatomic,copy) NSString * conversation_id; 
@property (nonatomic,copy) NSString * request_id; 
@property (assign,nonatomic) int return_code; 
@property (nonatomic,copy) NSString * return_str; 
@property (nonatomic,copy) NSString * source_locale; 
@property (nonatomic,copy) NSString * recognition_text; 
@property (assign,nonatomic) int confidence; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(int)confidence;
-(void)setConfidence:(int)arg1 ;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_str;
-(void)setRequest_id:(NSString *)arg1 ;
-(void)setReturn_code:(int)arg1 ;
-(void)setReturn_str:(NSString *)arg1 ;
-(NSString *)recognition_text;
-(void)setRecognition_text:(NSString *)arg1 ;
-(NSString *)source_locale;
-(void)setSource_locale:(NSString *)arg1 ;
-(NSString *)conversation_id;
-(void)setConversation_id:(NSString *)arg1 ;
@end

