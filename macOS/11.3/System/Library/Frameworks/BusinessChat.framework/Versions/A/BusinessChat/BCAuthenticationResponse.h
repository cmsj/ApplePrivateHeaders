/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/Versions/A/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCDictionarySerializable.h>

@class NSString, NSArray, BCError, NSDictionary;

@interface BCAuthenticationResponse : NSObject <BCDictionarySerializable> {

	NSString* _status;
	NSString* _token;
	NSArray* _errors;

}

@property (assign,nonatomic) NSString * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * token;                              //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSArray * errors;                              //@synthesize errors=_errors - In the implementation block
@property (nonatomic,readonly) BCError * error; 
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
-(BCError *)error;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)status;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(NSArray *)errors;
-(void)setStatus:(NSString *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)setErrors:(NSArray *)arg1 ;
-(id)initWithToken:(id)arg1 error:(id)arg2 ;
@end

