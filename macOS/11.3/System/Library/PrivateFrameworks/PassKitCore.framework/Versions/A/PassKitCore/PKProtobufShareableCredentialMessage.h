/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying> {

	NSString* _dataString;
	NSString* _messageCaption;
	NSData* _passThumbnailImage;
	NSString* _policyIdentifier;
	NSMutableArray* _shareableCredentials;
	unsigned _version;

}

@property (assign,nonatomic) unsigned version;                                   //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareableCredentials;              //@synthesize shareableCredentials=_shareableCredentials - In the implementation block
@property (nonatomic,readonly) char hasMessageCaption; 
@property (nonatomic,retain) NSString * messageCaption;                          //@synthesize messageCaption=_messageCaption - In the implementation block
@property (nonatomic,readonly) char hasDataString; 
@property (nonatomic,retain) NSString * dataString;                              //@synthesize dataString=_dataString - In the implementation block
@property (nonatomic,readonly) char hasPolicyIdentifier; 
@property (nonatomic,retain) NSString * policyIdentifier;                        //@synthesize policyIdentifier=_policyIdentifier - In the implementation block
@property (nonatomic,readonly) char hasPassThumbnailImage; 
@property (nonatomic,retain) NSData * passThumbnailImage;                        //@synthesize passThumbnailImage=_passThumbnailImage - In the implementation block
+(Class)shareableCredentialsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)dataString;
-(NSData *)passThumbnailImage;
-(void)setDataString:(NSString *)arg1 ;
-(void)setPassThumbnailImage:(NSData *)arg1 ;
-(char)hasDataString;
-(char)hasPassThumbnailImage;
-(void)addShareableCredentials:(id)arg1 ;
-(unsigned long long)shareableCredentialsCount;
-(void)clearShareableCredentials;
-(id)shareableCredentialsAtIndex:(unsigned long long)arg1 ;
-(void)setMessageCaption:(NSString *)arg1 ;
-(void)setPolicyIdentifier:(NSString *)arg1 ;
-(char)hasMessageCaption;
-(char)hasPolicyIdentifier;
-(NSMutableArray *)shareableCredentials;
-(void)setShareableCredentials:(NSMutableArray *)arg1 ;
-(NSString *)messageCaption;
-(NSString *)policyIdentifier;
@end
