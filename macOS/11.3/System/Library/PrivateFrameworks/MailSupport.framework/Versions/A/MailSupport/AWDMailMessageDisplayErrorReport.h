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

@class AWDMailMessage;

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _loadingError;
	AWDMailMessage* _message;
	int _mimeError;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasMimeError; 
@property (assign,nonatomic) int mimeError;                             //@synthesize mimeError=_mimeError - In the implementation block
@property (assign,nonatomic) char hasLoadingError; 
@property (assign,nonatomic) int loadingError;                          //@synthesize loadingError=_loadingError - In the implementation block
@property (nonatomic,readonly) char hasMessage; 
@property (nonatomic,retain) AWDMailMessage * message;                  //@synthesize message=_message - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(AWDMailMessage *)message;
-(void)setMessage:(AWDMailMessage *)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasMessage;
-(int)mimeError;
-(void)setMimeError:(int)arg1 ;
-(void)setHasMimeError:(char)arg1 ;
-(char)hasMimeError;
-(id)mimeErrorAsString:(int)arg1 ;
-(int)StringAsMimeError:(id)arg1 ;
-(int)loadingError;
-(void)setLoadingError:(int)arg1 ;
-(void)setHasLoadingError:(char)arg1 ;
-(char)hasLoadingError;
-(id)loadingErrorAsString:(int)arg1 ;
-(int)StringAsLoadingError:(id)arg1 ;
@end

