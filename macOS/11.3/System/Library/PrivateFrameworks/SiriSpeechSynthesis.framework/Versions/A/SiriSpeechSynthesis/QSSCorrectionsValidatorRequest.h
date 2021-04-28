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

@class NSMutableDictionary, NSData, NSString, QSSRecognitionResult;

@interface QSSCorrectionsValidatorRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const CorrectionsValidatorRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) QSSRecognitionResult * recognition_result; 
@property (nonatomic,readonly) NSString * original_utterance; 
@property (nonatomic,readonly) NSString * corrected_utterance; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const CorrectionsValidatorRequest*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::CorrectionsValidatorRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const CorrectionsValidatorRequest*)arg2 ;
-(NSString *)speech_id;
-(NSString *)session_id;
-(QSSRecognitionResult *)recognition_result;
-(NSString *)original_utterance;
-(NSString *)corrected_utterance;
@end
