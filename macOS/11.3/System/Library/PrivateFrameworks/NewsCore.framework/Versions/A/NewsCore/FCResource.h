/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCContentArchivable.h>

@class FCContentArchive, NSString, FCAssetHandle, NTPBResourceRecord, FCInterestToken, NSURL;

@interface FCResource : NSObject <FCContentArchivable> {

	NSString* _resourceID;
	FCAssetHandle* _assetHandle;
	NTPBResourceRecord* _resourceRecord;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBResourceRecord * resourceRecord;              //@synthesize resourceRecord=_resourceRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * resourceID;                          //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * assetHandle;                    //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL; 
@property (getter=isOnDisk,nonatomic,readonly) char onDisk; 
@property (nonatomic,readonly) FCContentArchive * contentArchive; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)fileURL;
-(NSString *)resourceID;
-(char)isOnDisk;
-(FCAssetHandle *)assetHandle;
-(FCContentArchive *)contentArchive;
-(id)initWithResourceID:(id)arg1 assetHandle:(id)arg2 ;
-(NTPBResourceRecord *)resourceRecord;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3 ;
-(id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3 ;
-(void)setResourceRecord:(NTPBResourceRecord *)arg1 ;
-(FCInterestToken *)interestToken;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
@end

