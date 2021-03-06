/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPassImageSet.h>

@class PKImage, NSData;

@interface PKPassPreviewImageSet : PKPassImageSet {

	PKImage* _iconImage1x;
	PKImage* _iconImage2x;
	PKImage* _iconImage;
	PKImage* _notificationIconImage;
	PKImage* _rawIcon;
	NSData* _iconImageICNSData;

}

@property (nonatomic,retain) PKImage * iconImage;                          //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) PKImage * notificationIconImage;              //@synthesize notificationIconImage=_notificationIconImage - In the implementation block
@property (nonatomic,retain) PKImage * rawIcon;                            //@synthesize rawIcon=_rawIcon - In the implementation block
@property (nonatomic,retain) NSData * iconImageICNSData;                   //@synthesize iconImageICNSData=_iconImageICNSData - In the implementation block
+(char)supportsSecureCoding;
+(unsigned)currentVersion;
+(long long)imageSetType;
+(id)archiveName;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKImage *)iconImage;
-(void)setIconImage:(PKImage *)arg1 ;
-(PKImage *)rawIcon;
-(PKImage *)notificationIconImage;
-(NSData *)iconImageICNSData;
-(id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(double)arg3 suffix:(id)arg4 ;
-(void)preheatImages;
-(void)setNotificationIconImage:(PKImage *)arg1 ;
-(void)setRawIcon:(PKImage *)arg1 ;
-(void)setIconImageICNSData:(NSData *)arg1 ;
@end

