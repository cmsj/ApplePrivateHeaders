/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/ICNFIMAPResponse.h>

@class NSString, NSArray;

@interface ICNFIMAPQuotaResponse : ICNFIMAPResponse {

	NSString* _quotaRootName;
	NSArray* _quotas;

}

@property (nonatomic,copy) NSString * quotaRootName;              //@synthesize quotaRootName=_quotaRootName - In the implementation block
@property (nonatomic,copy) NSArray * quotas;                      //@synthesize quotas=_quotas - In the implementation block
+(char)handlesResponseWithName:(const char*)arg1 ofLength:(unsigned long long)arg2 ;
-(id)description;
-(NSString *)quotaRootName;
-(void)setQuotaRootName:(NSString *)arg1 ;
-(void)setQuotas:(NSArray *)arg1 ;
-(NSArray *)quotas;
@end

