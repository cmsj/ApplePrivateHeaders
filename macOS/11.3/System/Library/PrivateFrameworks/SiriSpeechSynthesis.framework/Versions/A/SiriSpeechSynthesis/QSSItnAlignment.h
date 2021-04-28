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

@class NSMutableDictionary, NSData;

@interface QSSItnAlignment : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ItnAlignment* _root;

}

@property (nonatomic,readonly) int first_pre_itn_token_index; 
@property (nonatomic,readonly) int last_pre_itn_token_index; 
@property (nonatomic,readonly) int first_post_itn_char_pos; 
@property (nonatomic,readonly) int last_post_itn_char_pos; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 root:(const ItnAlignment*)arg2 verify:(char)arg3 ;
-(Offset<siri::speech::schema_fb::ItnAlignment>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ItnAlignment*)arg2 ;
-(int)first_pre_itn_token_index;
-(int)last_pre_itn_token_index;
-(int)first_post_itn_char_pos;
-(int)last_post_itn_char_pos;
@end
