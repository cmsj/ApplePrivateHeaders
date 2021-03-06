/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPSharing.framework/Versions/A/AMPSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, AMPSPublicSharingPrefs, AMPSHomeSharingPrefs, AMPSPhotoSharingPrefs, AMPLSharingClient;

@interface AMPSSharingPrefs : NSObject {

	unsigned long long _state;
	NSString* _libraryName;
	AMPSPublicSharingPrefs* _publicPrefs;
	AMPSHomeSharingPrefs* _homeSharingPrefs;
	AMPSPhotoSharingPrefs* _photoSharingPrefs;
	AMPLSharingClient* _client;

}

@property (nonatomic,retain) AMPLSharingClient * client;                               //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * libraryName;                                 //@synthesize libraryName=_libraryName - In the implementation block
@property (nonatomic,readonly) AMPSPublicSharingPrefs * publicPrefs;                   //@synthesize publicPrefs=_publicPrefs - In the implementation block
@property (nonatomic,readonly) AMPSHomeSharingPrefs * homeSharingPrefs;                //@synthesize homeSharingPrefs=_homeSharingPrefs - In the implementation block
@property (nonatomic,readonly) AMPSPhotoSharingPrefs * photoSharingPrefs;              //@synthesize photoSharingPrefs=_photoSharingPrefs - In the implementation block
-(id)init;
-(unsigned long long)state;
-(AMPLSharingClient *)client;
-(void)setClient:(AMPLSharingClient *)arg1 ;
-(char)setup;
-(NSString *)libraryName;
-(void)setSharedLibraryName:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(AMPSPublicSharingPrefs *)publicPrefs;
-(AMPSHomeSharingPrefs *)homeSharingPrefs;
-(AMPSPhotoSharingPrefs *)photoSharingPrefs;
-(void)loadPhotoSharingPrefs:(/*^block*/id)arg1 ;
-(void)loadHomeSharingPrefs:(/*^block*/id)arg1 ;
-(void)loadPublicSharingPrefs:(/*^block*/id)arg1 ;
-(void)loadMediaSharingPrefs:(/*^block*/id)arg1 ;
-(void)loadPrefs:(/*^block*/id)arg1 ;
@end

