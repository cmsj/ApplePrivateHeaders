/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeechDictation.h>

@class NSDictionary, NSArray;

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSDictionary * queryParameters; 
@property (nonatomic,copy) NSArray * searchTypes; 
+(id)startVoiceSearchRequest;
+(id)startVoiceSearchRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDictionary *)queryParameters;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(id)encodedClassName;
-(char)requiresResponse;
-(NSArray *)searchTypes;
-(void)setSearchTypes:(NSArray *)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
@end

