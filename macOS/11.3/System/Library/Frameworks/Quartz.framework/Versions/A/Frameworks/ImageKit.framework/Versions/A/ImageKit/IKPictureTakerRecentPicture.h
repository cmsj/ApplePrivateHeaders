/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageKit/ImageKit-Structs.h>
@class NSString, NSDictionary, IKImageWrapper, NSData, NSImage;

@interface IKPictureTakerRecentPicture : NSObject {

	NSString* _originalImageName;
	NSDictionary* _cropInfo;
	CGSize _cropSize;
	IKImageWrapper* _originalImage;
	NSData* _smallIconData;
	NSImage* _smallIconCache;
	CGRect _crop;
	int _version;
	double _timeValue;
	char _isEmpty;
	char _isABMeImage;
	char _isPlaceholder;
	char _isForHUD;
	char _isCurrent;
	void* _userInfo;

}

@property (retain) NSString * originalImageName;              //@synthesize originalImageName=_originalImageName - In the implementation block
@property (assign,nonatomic) char isEmpty;                    //@synthesize isEmpty=_isEmpty - In the implementation block
@property (assign,nonatomic) char isABMeImage;                //@synthesize isABMeImage=_isABMeImage - In the implementation block
@property (assign,nonatomic) char isPlaceholder;              //@synthesize isPlaceholder=_isPlaceholder - In the implementation block
@property (assign,nonatomic) char isForHUD;                   //@synthesize isForHUD=_isForHUD - In the implementation block
@property (assign,nonatomic) char isCurrent;                  //@synthesize isCurrent=_isCurrent - In the implementation block
+(double)defaultThumbnailSize;
+(id)defaultRecentPictureWithImageWrapper:(id)arg1 cropSize:(CGSize)arg2 ;
+(id)defaultRecentPictureWithOriginalImage:(id)arg1 cropSize:(CGSize)arg2 ;
+(id)recentPicturePlaceholderForHUD:(char)arg1 ;
+(id)emptyRecentPictureWithIcon:(id)arg1 ;
+(id)defaultRecentPictureWithOriginalData:(id)arg1 cropSize:(CGSize)arg2 ;
-(CGSize)cropSize;
-(void)setCropSize:(CGSize)arg1 ;
-(NSString *)originalImageName;
-(id)initWithOriginalImage:(id)arg1 cropSize:(CGSize)arg2 cropInfo:(id)arg3 smallIcon:(id)arg4 ;
-(void)upgradeForCropSize:(CGSize)arg1 ;
-(void)setIsForHUD:(char)arg1 ;
-(void)setCropInfo:(id)arg1 smallIcon:(id)arg2 ;
-(id)editedImage;
-(char)hasSameThumbnailAsRecentPicture:(id)arg1 ;
-(void)setOriginalImageName:(NSString *)arg1 ;
-(char)isABMeImage;
-(void)setIsABMeImage:(char)arg1 ;
-(char)isForHUD;
-(void)finalize;
-(void)dealloc;
-(char)isEmpty;
-(void*)userInfo;
-(id)infoDictionary;
-(int)version;
-(char)isPlaceholder;
-(void)setUserInfo:(void*)arg1 ;
-(char)isCurrent;
-(void)setIsPlaceholder:(char)arg1 ;
-(double)timeValue;
-(void)setTimeValue:(double)arg1 ;
-(id)imageUID;
-(id)imageRepresentationType;
-(id)imageRepresentation;
-(id)smallIcon;
-(id)originalImage;
-(void)setIsEmpty:(char)arg1 ;
-(id)cropInfo;
-(void)setIsCurrent:(char)arg1 ;
@end

