/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString;

@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * utterance; 
+(id)userUtteranceEditableTextSnippet;
+(id)userUtteranceEditableTextSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)encodedClassName;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
@end

