/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/StoreKit.framework/Versions/A/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSString, NSURL, NSError, SKPaymentTransaction;

@interface SKDownload : NSObject {

	id _internal;

}

@property (setter=_setDownloadID:,getter=_downloadID,nonatomic,copy) NSNumber * _downloadID; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long downloadState; 
@property (nonatomic,copy,readonly) NSNumber * contentLength; 
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,readonly) NSString * contentVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) SKPaymentTransaction * transaction; 
+(void)deleteContentForProductID:(id)arg1 ;
+(id)contentURLForProductID:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(long long)state;
-(NSError *)error;
-(void)_setError:(id)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(float)progress;
-(void)_setContentIdentifier:(id)arg1 ;
-(NSURL *)contentURL;
-(SKPaymentTransaction *)transaction;
-(NSString *)contentIdentifier;
-(NSNumber *)contentLength;
-(long long)expectedContentLength;
-(NSString *)contentVersion;
-(double)timeRemaining;
-(long long)downloadState;
-(void)_setProgress:(float)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)_downloadID;
-(void)_setVersion:(id)arg1 ;
-(void)_setContentLength:(id)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(void)_setDownloadState:(long long)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setDownloadID:(id)arg1 ;
@end

