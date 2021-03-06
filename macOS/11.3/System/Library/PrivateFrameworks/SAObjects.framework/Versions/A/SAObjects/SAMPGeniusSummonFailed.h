/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * reason; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)geniusSummonFailed;
+(id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)geniusSummonFailedWithErrorCode:(long long)arg1 ;
+(id)geniusSummonFailedWithReason:(id)arg1 ;
-(NSString *)reason;
-(id)groupIdentifier;
-(void)setReason:(NSString *)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)initWithReason:(id)arg1 ;
-(id)encodedClassName;
-(char)requiresResponse;
-(id)initWithErrorCode:(long long)arg1 ;
@end

