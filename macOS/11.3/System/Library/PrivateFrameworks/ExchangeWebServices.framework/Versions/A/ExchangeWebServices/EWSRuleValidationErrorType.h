/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/XSDefinitionProvider.h>

@class NSString;

@interface EWSRuleValidationErrorType : NSObject <XSDefinitionProvider> {

	long long _RuleFieldURIType;
	long long _ErrorCode;
	NSString* _ErrorMessage;
	NSString* _FieldValue;

}

@property (assign,nonatomic) long long RuleFieldURIType;              //@synthesize RuleFieldURIType=_RuleFieldURIType - In the implementation block
@property (assign,nonatomic) long long ErrorCode;                     //@synthesize ErrorCode=_ErrorCode - In the implementation block
@property (nonatomic,copy) NSString * ErrorMessage;                   //@synthesize ErrorMessage=_ErrorMessage - In the implementation block
@property (nonatomic,copy) NSString * FieldValue;                     //@synthesize FieldValue=_FieldValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)definition;
-(void)setErrorCode:(long long)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(long long)RuleFieldURIType;
-(void)setRuleFieldURIType:(long long)arg1 ;
-(long long)ErrorCode;
-(NSString *)ErrorMessage;
-(NSString *)FieldValue;
-(void)setFieldValue:(NSString *)arg1 ;
@end

