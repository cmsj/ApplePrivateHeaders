/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, IMNicknameFieldEncryptionKey, IMNicknameFieldTaggingKey, IMNicknameRecordTaggingKey;

@interface IMNicknameEncryptionPreKey : NSObject {

	NSData* _generatedData;
	NSData* _derivedData;

}

@property (nonatomic,readonly) IMNicknameFieldEncryptionKey * fieldEncryptionKey; 
@property (nonatomic,readonly) IMNicknameFieldTaggingKey * fieldTaggingKey; 
@property (nonatomic,readonly) IMNicknameRecordTaggingKey * recordTaggingKey; 
+(id)preKeyWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)generatePreKeyWithError:(id*)arg1 ;
-(void)dealloc;
-(id)dataRepresentation;
-(IMNicknameFieldEncryptionKey *)fieldEncryptionKey;
-(IMNicknameFieldTaggingKey *)fieldTaggingKey;
-(IMNicknameRecordTaggingKey *)recordTaggingKey;
-(id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2 ;
-(id)_subDerviedKeyDataAtIndex:(unsigned long long)arg1 ;
@end

