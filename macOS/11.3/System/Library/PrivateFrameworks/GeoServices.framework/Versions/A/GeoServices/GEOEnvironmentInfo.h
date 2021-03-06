/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSError, NSDictionary, GEOResourceManifestDownload;

@interface GEOEnvironmentInfo : NSObject {

	NSString* _name;
	NSString* _displayName;
	NSString* _releaseName;
	NSString* _actualName;
	long long _state;
	NSData* _manifestData;
	NSError* _lastLoadingError;
	NSDictionary* _originalDictionaryRepresentation;

}

@property (nonatomic,readonly) NSError * lastLoadingError;                                  //@synthesize lastLoadingError=_lastLoadingError - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * releaseName;                                      //@synthesize releaseName=_releaseName - In the implementation block
@property (nonatomic,readonly) NSString * actualName;                                       //@synthesize actualName=_actualName - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestDownload * resourceManifest; 
-(NSString *)name;
-(long long)state;
-(NSString *)displayName;
-(char)isActive;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)reloadManifestDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)urlDictionary;
-(id)_manifestURLString;
-(void)makeActive;
-(GEOResourceManifestDownload *)resourceManifest;
-(void)updateWithURLs:(id)arg1 ;
-(id)serviceURLs;
-(id)overrideURLs;
-(id)useProxyAuth;
-(NSString *)releaseName;
-(NSString *)actualName;
-(NSError *)lastLoadingError;
@end

