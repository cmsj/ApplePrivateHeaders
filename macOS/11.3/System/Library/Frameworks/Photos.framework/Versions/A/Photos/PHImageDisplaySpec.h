/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDisplaySpec : NSObject {

	long long _contentMode;
	CGSize _targetSize;
	CGRect _normalizedCropRect;

}

@property (assign,nonatomic) long long contentMode;                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                      //@synthesize targetSize=_targetSize - In the implementation block
@property (assign,nonatomic) CGRect normalizedCropRect;              //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
-(id)description;
-(id)init;
-(id)shortDescription;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 ;
-(id)initWithTargetSize:(CGSize)arg1 contentMode:(long long)arg2 normalizedCropRect:(CGRect)arg3 ;
-(char)hasExplicitCrop;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(CGSize)requestSizeFromFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(char)isTargetingMaximumSizeWithFullSizedWidth:(long long)arg1 height:(long long)arg2 ;
-(CGRect)normalizedCropRect;
@end
