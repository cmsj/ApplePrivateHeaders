/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface CKDShareTokenMetadata : NSObject <NSCopying> {

	char _forceDSRefetch;
	NSString* _routingKey;
	NSData* _shortSharingTokenData;
	NSData* _publicTokenData;
	NSData* _privateTokenData;

}

@property (nonatomic,retain) NSString * routingKey;                             //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenData;                    //@synthesize shortSharingTokenData=_shortSharingTokenData - In the implementation block
@property (nonatomic,readonly) NSString * shortSharingToken; 
@property (nonatomic,readonly) NSData * shortSharingTokenHashData; 
@property (assign,nonatomic) char forceDSRefetch;                               //@synthesize forceDSRefetch=_forceDSRefetch - In the implementation block
@property (nonatomic,retain) NSData * publicTokenData;                          //@synthesize publicTokenData=_publicTokenData - In the implementation block
@property (nonatomic,retain) NSData * privateTokenData;                         //@synthesize privateTokenData=_privateTokenData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(NSData *)shortSharingTokenData;
-(NSString *)shortSharingToken;
-(NSData *)shortSharingTokenHashData;
-(void)setPrivateTokenData:(NSData *)arg1 ;
-(void)setPublicTokenData:(NSData *)arg1 ;
-(char)forceDSRefetch;
-(void)setForceDSRefetch:(char)arg1 ;
-(NSData *)privateTokenData;
-(NSData *)publicTokenData;
-(void)setShortSharingTokenData:(NSData *)arg1 ;
@end

