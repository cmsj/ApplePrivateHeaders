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

@class NSMutableDictionary, NSData, NSString, QSSTranslationLocalePair, NSArray;

@interface QSSSpeechTranslationMtResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const SpeechTranslationMtResponse* _root;

}

@property (nonatomic,readonly) NSString * conversation_id; 
@property (nonatomic,readonly) NSString * request_id; 
@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) QSSTranslationLocalePair * translation_locale_pair; 
@property (nonatomic,readonly) NSArray * n_best_translated_phrases; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationMtResponse*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::SpeechTranslationMtResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const SpeechTranslationMtResponse*)arg2 ;
-(NSString *)request_id;
-(int)return_code;
-(NSString *)return_str;
-(NSArray *)n_best_translated_phrases;
-(NSString *)conversation_id;
-(QSSTranslationLocalePair *)translation_locale_pair;
@end

