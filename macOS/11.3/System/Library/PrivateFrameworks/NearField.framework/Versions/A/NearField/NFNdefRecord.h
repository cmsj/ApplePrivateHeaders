/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/Versions/A/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefRecord.h>
@class NSData;


@protocol NFNdefRecord <NSObject>
@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) char messageBegin; 
@property (assign,nonatomic) char messageEnd; 
@property (assign,nonatomic) char shortRecord; 
@property (assign,nonatomic) char chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
@required
-(void)setType:(id)arg1;
-(NSData *)type;
-(NSData *)identifier;
-(void)setIdentifier:(id)arg1;
-(unsigned char)header;
-(id)asData;
-(void)setPayload:(id)arg1;
-(NSData *)payload;
-(void)setHeader:(unsigned char)arg1;
-(id)decode;
-(id)initWithNDEFRecord:(id)arg1;
-(void)setTypeNameFormat:(unsigned char)arg1;
-(void)setShortRecord:(char)arg1;
-(unsigned char)typeNameFormat;
-(char)messageBegin;
-(char)messageEnd;
-(char)chunked;
-(char)shortRecord;
-(char)isURIRecord;
-(void)setMessageBegin:(char)arg1;
-(void)setMessageEnd:(char)arg1;
-(void)setChunked:(char)arg1;

@end


@class NSData, NSString;

@interface NFNdefRecord : NSObject <NSSecureCoding, NFNdefRecord> {

	unsigned char _firstOctet;
	NSData* _identifier;
	NSData* _type;
	NSData* _payload;

}

@property (assign,nonatomic) unsigned char header; 
@property (assign,nonatomic) char messageBegin; 
@property (assign,nonatomic) char messageEnd; 
@property (assign,nonatomic) char shortRecord; 
@property (assign,nonatomic) char chunked; 
@property (assign,nonatomic) unsigned char typeNameFormat; 
@property (nonatomic,retain) NSData * type; 
@property (nonatomic,retain) NSData * payload; 
@property (nonatomic,retain) NSData * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)emptyRecord;
+(id)recordsFromBytes:(const void*)arg1 length:(unsigned)arg2 ;
+(id)recordWithText:(id)arg1 lang:(id)arg2 ;
+(id)recordWithURI:(id)arg1 ;
+(id)recordWithTelephone:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)setType:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)type;
-(NSData *)identifier;
-(void)setIdentifier:(NSData *)arg1 ;
-(unsigned char)header;
-(id)asData;
-(void)setPayload:(NSData *)arg1 ;
-(NSData *)payload;
-(void)setHeader:(unsigned char)arg1 ;
-(id)decode;
-(id)initWithNDEFRecord:(id)arg1 ;
-(void)setTypeNameFormat:(unsigned char)arg1 ;
-(void)setShortRecord:(char)arg1 ;
-(void)_setIdLengthPresent:(char)arg1 ;
-(unsigned char)typeNameFormat;
-(char)messageBegin;
-(char)messageEnd;
-(char)chunked;
-(char)shortRecord;
-(char)isURIRecord;
-(void)setMessageBegin:(char)arg1 ;
-(void)setMessageEnd:(char)arg1 ;
-(void)setChunked:(char)arg1 ;
-(char)_idLengthPresent;
@end

