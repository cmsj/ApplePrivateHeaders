/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSDate, NSNumber;

@interface PHImportDuplicateInfo : NSObject {

	NSMutableDictionary* _info;

}

@property (nonatomic,retain) NSMutableDictionary * info;                     //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSString * fileName; 
@property (nonatomic,readonly) NSDate * imageDate; 
@property (nonatomic,retain) NSDate * alternateImportImageDate; 
@property (nonatomic,readonly) NSNumber * fileSize; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) NSString * fingerprint; 
@property (nonatomic,readonly) NSString * avchdFingerprint; 
@property (nonatomic,readonly) double timezoneOffset; 
@property (nonatomic,readonly) char hasVideoComplement; 
-(id)description;
-(char)isInTrash;
-(char)isLegacy;
-(NSMutableDictionary *)info;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(NSNumber *)fileSize;
-(id)objectID;
-(NSString *)fileName;
-(NSString *)fingerprint;
-(double)timezoneOffset;
-(id)initWithAssetInfo:(id)arg1 ;
-(NSDate *)imageDate;
-(NSDate *)alternateImportImageDate;
-(void)setAlternateImportImageDate:(NSDate *)arg1 ;
-(char)hasVideoComplement;
-(NSString *)avchdFingerprint;
-(id)originatingAssetIdentifier;
@end
