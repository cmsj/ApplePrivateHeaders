/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SASClientBoundConfusionNetwork : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * rawRecognition; 
@property (nonatomic,copy) NSString * sessionId; 
+(id)clientBoundConfusionNetwork;
+(id)clientBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)encodedClassName;
-(char)requiresResponse;
-(SASRecognition *)rawRecognition;
-(void)setRawRecognition:(SASRecognition *)arg1 ;
@end
