/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATIDSMessage.h>

@protocol CATInitializingIDSServiceConnectionMessageContent;
@class NSUUID, NSDictionary;

@interface CATInitializingServiceConnectionIDSMessage : NSObject <CATIDSMessage> {

	NSUUID* _invitationIdentifier;
	id<CATInitializingIDSServiceConnectionMessageContent> _content;

}

@property (nonatomic,readonly) NSUUID * invitationIdentifier;                                              //@synthesize invitationIdentifier=_invitationIdentifier - In the implementation block
@property (nonatomic,readonly) id<CATInitializingIDSServiceConnectionMessageContent> content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) long long messageType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)instanceWithDictionary:(id)arg1 ;
-(id<CATInitializingIDSServiceConnectionMessageContent>)content;
-(NSDictionary *)dictionaryValue;
-(long long)messageType;
-(NSUUID *)invitationIdentifier;
-(id)initWithInvitationIdentifier:(id)arg1 content:(id)arg2 ;
@end

