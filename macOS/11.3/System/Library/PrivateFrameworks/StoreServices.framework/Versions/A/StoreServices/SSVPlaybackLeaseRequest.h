/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSURL, NSMutableDictionary, NSString, NSDictionary;

@interface SSVPlaybackLeaseRequest : NSObject <NSCopying> {

	long long _actionType;
	NSData* _certificateData;
	NSURL* _certificateURL;
	NSMutableDictionary* _httpHeaderFields;
	unsigned long long _kdChannelIdentifier;
	unsigned long long _kdMovieIdentifier;
	long long _leaseType;
	NSMutableDictionary* _parameters;
	char _startsLeaseSession;
	NSURL* _url;

}

@property (getter=_actionParameterValue,nonatomic,copy,readonly) NSString * _actionParameterValue; 
@property (getter=_URLBagKey,nonatomic,copy,readonly) NSString * _URLBagKey; 
@property (assign,setter=_setActionType:,getter=_actionType,nonatomic) long long _actionType;                                            //@synthesize actionType=_actionType - In the implementation block
@property (getter=_leaseType,nonatomic,readonly) long long _leaseType;                                                                   //@synthesize leaseType=_leaseType - In the implementation block
@property (assign,setter=_setKDMovieIdentifier:,getter=_KDMovieIdentifier,nonatomic) unsigned long long _KDMovieIdentifier;              //@synthesize kdMovieIdentifier=_kdMovieIdentifier - In the implementation block
@property (setter=_setCertificateData:,getter=_certificateData,nonatomic,copy) NSData * _certificateData;                                //@synthesize certificateData=_certificateData - In the implementation block
@property (setter=_setURL:,getter=_URL,nonatomic,copy) NSURL * _URL;                                                                     //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) unsigned long long KDChannelIdentifier;                                                                     //@synthesize kdChannelIdentifier=_kdChannelIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * parameterValues;                                                                               //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSDictionary * HTTPHeaderFields;                                                                              //@synthesize httpHeaderFields=_httpHeaderFields - In the implementation block
@property (assign,nonatomic) char startsLeaseSession;                                                                                    //@synthesize startsLeaseSession=_startsLeaseSession - In the implementation block
+(id)_requestWithType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)_URL;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(long long)_actionType;
-(void)_setURL:(id)arg1 ;
-(NSData *)_certificateData;
-(void)setValue:(id)arg1 forParameter:(id)arg2 ;
-(id)valueForParameter:(id)arg1 ;
-(void)_applyValuesToCopy:(id)arg1 ;
-(NSString *)_actionParameterValue;
-(void)setKDChannelIdentifier:(unsigned long long)arg1 ;
-(void)_setKDMovieIdentifier:(unsigned long long)arg1 ;
-(void)setParameterValues:(NSDictionary *)arg1 ;
-(void)setStartsLeaseSession:(char)arg1 ;
-(void)setHTTPHeaderFields:(NSDictionary *)arg1 ;
-(void)_setActionType:(long long)arg1 ;
-(void)_setCertificateData:(id)arg1 ;
-(id)_copyWithLeaseType:(long long)arg1 ;
-(id)_copyBodyDictionaryWithFairPlaySession:(void*)arg1 ;
-(NSString *)_URLBagKey;
-(unsigned long long)KDChannelIdentifier;
-(NSDictionary *)parameterValues;
-(NSDictionary *)HTTPHeaderFields;
-(char)startsLeaseSession;
-(long long)_leaseType;
-(unsigned long long)_KDMovieIdentifier;
@end

