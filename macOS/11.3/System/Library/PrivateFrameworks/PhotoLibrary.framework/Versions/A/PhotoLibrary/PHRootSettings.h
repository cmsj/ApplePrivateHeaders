/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/Versions/A/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PHSettings.h>

@class PHImageManagerSettings, PHResourceDownloadSettings;

@interface PHRootSettings : PHSettings {

	PHImageManagerSettings* _imageManagerSettings;
	PHResourceDownloadSettings* _resourceDownloadSettings;

}

@property (nonatomic,readonly) PHImageManagerSettings * imageManagerSettings;                      //@synthesize imageManagerSettings=_imageManagerSettings - In the implementation block
@property (nonatomic,readonly) PHResourceDownloadSettings * resourceDownloadSettings;              //@synthesize resourceDownloadSettings=_resourceDownloadSettings - In the implementation block
+(id)sharedSettings;
-(void)setDefaultValues;
-(id)parentSettings;
-(PHImageManagerSettings *)imageManagerSettings;
-(PHResourceDownloadSettings *)resourceDownloadSettings;
@end

