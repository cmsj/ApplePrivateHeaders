/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/Versions/A/PodcastsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString, NSNumber;

@interface MTKeyRequestData : NSObject {

	NSData* _keyData;
	NSString* _keyIdentifier;
	NSString* _contentAdamId;
	NSNumber* _secureInvalidationDsid;

}

@property (nonatomic,retain) NSData * keyData;                               //@synthesize keyData=_keyData - In the implementation block
@property (nonatomic,retain) NSString * keyIdentifier;                       //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSString * contentAdamId;                       //@synthesize contentAdamId=_contentAdamId - In the implementation block
@property (nonatomic,retain) NSNumber * secureInvalidationDsid;              //@synthesize secureInvalidationDsid=_secureInvalidationDsid - In the implementation block
-(NSString *)keyIdentifier;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(NSData *)keyData;
-(void)setKeyData:(NSData *)arg1 ;
-(NSNumber *)secureInvalidationDsid;
-(NSString *)contentAdamId;
-(void)setContentAdamId:(NSString *)arg1 ;
-(void)setSecureInvalidationDsid:(NSNumber *)arg1 ;
@end

