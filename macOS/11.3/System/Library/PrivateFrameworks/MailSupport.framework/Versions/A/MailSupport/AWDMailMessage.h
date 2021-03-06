/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/Versions/A/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailSupport/MailSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDMailMessageBody, NSString;

@interface AWDMailMessage : PBCodable <NSCopying> {

	AWDMailMessageBody* _body;
	NSString* _messageId;

}

@property (nonatomic,readonly) char hasMessageId; 
@property (nonatomic,retain) NSString * messageId;                   //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,readonly) char hasBody; 
@property (nonatomic,retain) AWDMailMessageBody * body;              //@synthesize body=_body - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBody:(AWDMailMessageBody *)arg1 ;
-(AWDMailMessageBody *)body;
-(char)hasBody;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(char)hasMessageId;
-(id)initWithMailMessage:(id)arg1 ;
@end

