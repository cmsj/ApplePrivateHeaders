/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/QSSLanguageParameters.h>

@class NSString;

@interface QSSMutableLanguageParameters : QSSLanguageParameters

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * request_locale; 
@property (nonatomic,copy) NSString * fork_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)request_locale;
-(void)setRequest_locale:(NSString *)arg1 ;
-(NSString *)fork_id;
-(void)setFork_id:(NSString *)arg1 ;
@end

