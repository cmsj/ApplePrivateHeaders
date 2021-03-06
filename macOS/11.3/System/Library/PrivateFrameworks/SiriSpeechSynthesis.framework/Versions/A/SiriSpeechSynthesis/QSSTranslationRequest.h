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

@class NSMutableDictionary, NSData, NSString, NSArray, QSSSiriTranslationInfo, QSSSpeechTranslationInfo, QSSSiriPayloadTranslationInfo, QSSWebTranslationInfo;

@interface QSSTranslationRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TranslationRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) NSString * task; 
@property (nonatomic,readonly) NSString * source_language; 
@property (nonatomic,readonly) NSString * target_language; 
@property (nonatomic,readonly) NSArray * translation_phrase; 
@property (nonatomic,readonly) QSSSiriTranslationInfo * siri_translation_info; 
@property (nonatomic,readonly) QSSSpeechTranslationInfo * speech_translation_info; 
@property (nonatomic,readonly) QSSSiriPayloadTranslationInfo * siri_payload_translation_info; 
@property (nonatomic,readonly) NSString * sequence_id; 
@property (nonatomic,readonly) QSSWebTranslationInfo * web_translation_info; 
@property (nonatomic,readonly) BOOL disable_log; 
@property (nonatomic,readonly) long long opt_in_status; 
@property (nonatomic,readonly) NSString * app_id; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)task;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationRequest*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::TranslationRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TranslationRequest*)arg2 ;
-(NSString *)app_id;
-(NSString *)request_id;
-(NSString *)speech_id;
-(NSArray *)translation_phrase;
-(NSString *)source_language;
-(NSString *)target_language;
-(QSSSiriTranslationInfo *)siri_translation_info;
-(QSSSpeechTranslationInfo *)speech_translation_info;
-(QSSSiriPayloadTranslationInfo *)siri_payload_translation_info;
-(NSString *)sequence_id;
-(QSSWebTranslationInfo *)web_translation_info;
-(BOOL)disable_log;
-(long long)opt_in_status;
@end

