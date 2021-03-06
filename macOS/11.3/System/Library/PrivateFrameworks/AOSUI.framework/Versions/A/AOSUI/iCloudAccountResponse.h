/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AOSUI.framework/Versions/A/AOSUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSHTTPURLResponse, NSError, NSData, NSString, NSNumber;

@interface iCloudAccountResponse : NSObject {

	NSDictionary* _responseDictionary;
	NSHTTPURLResponse* _httpResponse;
	NSError* _error;
	long long _statusCode;
	NSData* _data;
	NSString* _protocolVersion;
	NSNumber* _maxAge;

}

@property (nonatomic,readonly) NSHTTPURLResponse * httpResponse;               //@synthesize httpResponse=_httpResponse - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * protocolVersion;                     //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) long long statusCode;                           //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSNumber * maxAge;                              //@synthesize maxAge=_maxAge - In the implementation block
-(NSData *)data;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)statusCode;
-(NSHTTPURLResponse *)httpResponse;
-(NSString *)protocolVersion;
-(NSNumber *)maxAge;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 bodyIsPlist:(char)arg3 ;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSDictionary *)responseDictionary;
-(void)_parsePlistResponse:(id)arg1 ;
@end

