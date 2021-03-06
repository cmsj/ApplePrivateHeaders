/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString, AMSProcessInfo;


@protocol AMSBagProtocol <NSObject>
@property (getter=isExpired,readonly) char expired; 
@property (readonly) NSDate * expirationDate; 
@property (copy,readonly) NSString * profile; 
@property (copy,readonly) NSString * profileVersion; 
@property (copy,readonly) AMSProcessInfo * processInfo; 
@optional
-(AMSProcessInfo *)processInfo;
-(id)URLForKey:(id)arg1 account:(id)arg2;

@required
-(id)boolForKey:(id)arg1;
-(id)URLForKey:(id)arg1;
-(id)stringForKey:(id)arg1;
-(id)arrayForKey:(id)arg1;
-(id)dictionaryForKey:(id)arg1;
-(id)integerForKey:(id)arg1;
-(id)doubleForKey:(id)arg1;
-(NSDate *)expirationDate;
-(char)isExpired;
-(NSString *)profile;
-(NSString *)profileVersion;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1;

@end

