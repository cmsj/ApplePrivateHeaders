/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSItemType.h>

@class NSString;

@interface EWSDistributionListType : EWSItemType {

	NSString* _FileAs;
	NSString* _DisplayName;
	long long _ContactSource;

}

@property (nonatomic,copy) NSString * FileAs;                      //@synthesize FileAs=_FileAs - In the implementation block
@property (nonatomic,copy) NSString * DisplayName;                 //@synthesize DisplayName=_DisplayName - In the implementation block
@property (assign,nonatomic) long long ContactSource;              //@synthesize ContactSource=_ContactSource - In the implementation block
+(id)definition;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)DisplayName;
-(void)setContactSource:(long long)arg1 ;
-(NSString *)FileAs;
-(void)setFileAs:(NSString *)arg1 ;
-(long long)ContactSource;
@end

