/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSTimeZone;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet {

	short _originalExifOrientation;
	NSString* _originalAssetsUUID;
	long long _originalHeight;
	long long _originalWidth;
	NSString* _originalFilename;
	unsigned long long _originalFilesize;
	NSTimeZone* _timeZone;
	long long _timeZoneOffset;

}

@property (nonatomic,readonly) NSString * originalAssetsUUID;                    //@synthesize originalAssetsUUID=_originalAssetsUUID - In the implementation block
@property (nonatomic,readonly) long long originalHeight;                         //@synthesize originalHeight=_originalHeight - In the implementation block
@property (nonatomic,readonly) long long originalWidth;                          //@synthesize originalWidth=_originalWidth - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename;                      //@synthesize originalFilename=_originalFilename - In the implementation block
@property (nonatomic,readonly) short originalExifOrientation;                    //@synthesize originalExifOrientation=_originalExifOrientation - In the implementation block
@property (nonatomic,readonly) unsigned long long originalFilesize;              //@synthesize originalFilesize=_originalFilesize - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) long long timeZoneOffset;                         //@synthesize timeZoneOffset=_timeZoneOffset - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSTimeZone *)timeZone;
-(short)originalExifOrientation;
-(long long)timeZoneOffset;
-(NSString *)originalFilename;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(char)arg3 ;
-(NSString *)originalAssetsUUID;
-(long long)originalHeight;
-(long long)originalWidth;
-(unsigned long long)originalFilesize;
@end
