/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/Versions/A/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSData;

@interface ICDataCryptor : NSObject <NSSecureCoding> {

	NSMutableDictionary* _tagDictionary;
	NSString* _cloudSyncingObjectIdentifier;
	NSMutableDictionary* _initializationVectorDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * tagDictionary;                               //@synthesize tagDictionary=_tagDictionary - In the implementation block
@property (nonatomic,retain) NSString * cloudSyncingObjectIdentifier;                           //@synthesize cloudSyncingObjectIdentifier=_cloudSyncingObjectIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initializationVectorDictionary;              //@synthesize initializationVectorDictionary=_initializationVectorDictionary - In the implementation block
@property (nonatomic,readonly) NSData * unwrappedKey; 
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCloudSyncingObjectIdentifier:(id)arg1 ;
-(id)encryptData:(id)arg1 identifier:(id)arg2 ;
-(id)decryptEncryptedData:(id)arg1 identifier:(id)arg2 ;
-(NSString *)cloudSyncingObjectIdentifier;
-(NSData *)unwrappedKey;
-(NSMutableDictionary *)tagDictionary;
-(NSMutableDictionary *)initializationVectorDictionary;
-(void)setTagDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCloudSyncingObjectIdentifier:(NSString *)arg1 ;
-(void)setInitializationVectorDictionary:(NSMutableDictionary *)arg1 ;
@end

