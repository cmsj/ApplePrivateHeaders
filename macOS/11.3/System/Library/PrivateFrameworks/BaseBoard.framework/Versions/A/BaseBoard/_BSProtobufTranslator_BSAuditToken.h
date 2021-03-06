/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/Versions/A/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSData, NSString;

@interface _BSProtobufTranslator_BSAuditToken : NSObject <BSProtobufSerializable> {

	NSData* _tokenData;
	NSString* _bundleID;

}

@property (retain) NSData * tokenData;                              //@synthesize tokenData=_tokenData - In the implementation block
@property (retain) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)protobufSchema;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(id)initProtobufTranslatorForObject:(id)arg1 ;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
@end

