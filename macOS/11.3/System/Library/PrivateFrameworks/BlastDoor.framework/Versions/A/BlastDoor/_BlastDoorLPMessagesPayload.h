/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/Versions/A/BlastDoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPMessagesPayload : NSObject <NSSecureCoding> {

	char _placeholder;
	char _needsSubresourceFetch;
	char _needsCompleteFetch;
	_BlastDoorLPLinkMetadata* _metadata;

}

@property (nonatomic,copy) _BlastDoorLPLinkMetadata * metadata;                  //@synthesize metadata=_metadata - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) char placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) char needsSubresourceFetch;                         //@synthesize needsSubresourceFetch=_needsSubresourceFetch - In the implementation block
@property (assign,nonatomic) char needsCompleteFetch;                            //@synthesize needsCompleteFetch=_needsCompleteFetch - In the implementation block
+(char)supportsSecureCoding;
+(id)linkWithDataRepresentation:(id)arg1 attachments:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isPlaceholder;
-(_BlastDoorLPLinkMetadata *)metadata;
-(void)setMetadata:(_BlastDoorLPLinkMetadata *)arg1 ;
-(void)setPlaceholder:(char)arg1 ;
-(void)setNeedsSubresourceFetch:(char)arg1 ;
-(void)setNeedsCompleteFetch:(char)arg1 ;
-(char)_needsWorkaroundForAppStoreTransformerCrash;
-(id)dataRepresentationWithOutOfLineAttachments:(id*)arg1 ;
-(char)needsCompleteFetch;
-(char)needsSubresourceFetch;
@end

