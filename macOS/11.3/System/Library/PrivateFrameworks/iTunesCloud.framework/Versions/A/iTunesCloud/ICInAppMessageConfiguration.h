/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/Versions/A/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface ICInAppMessageConfiguration : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSURL * reportEventURL; 
@property (nonatomic,readonly) NSURL * serialCheckURL; 
@property (nonatomic,readonly) NSURL * syncURL; 
@property (nonatomic,readonly) NSURL * resourceDomainURL; 
@property (nonatomic,readonly) long long syncPollingInterval; 
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)reportEventURL;
-(NSURL *)serialCheckURL;
-(NSURL *)syncURL;
-(NSURL *)resourceDomainURL;
-(long long)syncPollingInterval;
@end

