/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/Versions/A/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WFCoreDataObjectChange : NSObject {

	NSString* _URIRepresentation;
	unsigned long long _objectType;
	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * URIRepresentation;               //@synthesize URIRepresentation=_URIRepresentation - In the implementation block
@property (nonatomic,readonly) unsigned long long objectType;              //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)objectType;
-(NSString *)URIRepresentation;
-(id)initWithObjectID:(id)arg1 objectType:(unsigned long long)arg2 identifier:(id)arg3 ;
@end

