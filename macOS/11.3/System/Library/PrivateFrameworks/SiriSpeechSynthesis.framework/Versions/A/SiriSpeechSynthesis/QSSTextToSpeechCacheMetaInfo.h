/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/Versions/A/SiriSpeechSynthesis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, QSSTextToSpeechMeta, QSSAudioDescription, NSString;

@interface QSSTextToSpeechCacheMetaInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechCacheMetaInfo* _root;

}

@property (nonatomic,readonly) QSSTextToSpeechMeta * meta_info; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) QSSAudioDescription * decoder_description; 
@property (nonatomic,readonly) QSSAudioDescription * playback_description; 
@property (nonatomic,readonly) int audio_length; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * original_session_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechCacheMetaInfo*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechCacheMetaInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechCacheMetaInfo*)arg2 ;
-(QSSAudioDescription *)decoder_description;
-(QSSTextToSpeechMeta *)meta_info;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(QSSAudioDescription *)playback_description;
-(int)audio_length;
-(NSString *)original_session_id;
@end

