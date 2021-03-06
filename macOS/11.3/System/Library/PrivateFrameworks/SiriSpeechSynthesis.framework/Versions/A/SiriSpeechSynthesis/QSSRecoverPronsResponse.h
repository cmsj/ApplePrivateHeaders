/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray;

@interface QSSRecoverPronsResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const RecoverPronsResponse* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) int error_code; 
@property (nonatomic,readonly) NSString * error_str; 
@property (nonatomic,readonly) NSArray * recovery_return_codes; 
@property (nonatomic,readonly) NSArray * voc_tokens; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecoverPronsResponse*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::RecoverPronsResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const RecoverPronsResponse*)arg2 ;
-(NSString *)speech_id;
-(int)error_code;
-(NSString *)error_str;
-(NSString *)session_id;
-(NSArray *)recovery_return_codes;
-(NSArray *)voc_tokens;
@end

