/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKPassImageSet.h>

@class PKImage;

@interface PKPassPlaceHolderImageSet : PKPassImageSet {

	PKImage* _placeHolderImage;
	CGRect _logoRect;

}

@property (nonatomic,retain) PKImage * placeHolderImage;              //@synthesize placeHolderImage=_placeHolderImage - In the implementation block
@property (assign,nonatomic) CGRect logoRect;                         //@synthesize logoRect=_logoRect - In the implementation block
+(char)supportsSecureCoding;
+(unsigned)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)placeHolderImage;
-(CGRect)logoRect;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(id)_initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 frontFaceImageSet:(id)arg5 ;
-(void)preheatImages;
-(void)setLogoRect:(CGRect)arg1 ;
-(void)setPlaceHolderImage:(PKImage *)arg1 ;
@end

