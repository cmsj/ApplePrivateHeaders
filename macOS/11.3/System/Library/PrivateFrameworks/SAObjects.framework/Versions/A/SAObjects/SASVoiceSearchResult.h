/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSData, NSString, NSNumber;

@interface SASVoiceSearchResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * headers; 
@property (nonatomic,copy) NSData * result; 
@property (nonatomic,copy) NSString * searchType; 
@property (nonatomic,copy) NSNumber * statusCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)voiceSearchResult;
+(id)voiceSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)result;
-(void)setResult:(NSData *)arg1 ;
-(NSNumber *)statusCode;
-(id)groupIdentifier;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)searchType;
-(NSDictionary *)headers;
-(id)encodedClassName;
-(void)setHeaders:(NSDictionary *)arg1 ;
@end

