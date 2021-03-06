/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/Versions/A/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFBCWriteDnuForSubmission : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * filePrefix; 
@property (nonatomic,copy) NSString * submittedData; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)writeDnuForSubmission;
+(id)writeDnuForSubmissionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)filePrefix;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
-(void)setFilePrefix:(NSString *)arg1 ;
-(NSString *)submittedData;
-(void)setSubmittedData:(NSString *)arg1 ;
@end

