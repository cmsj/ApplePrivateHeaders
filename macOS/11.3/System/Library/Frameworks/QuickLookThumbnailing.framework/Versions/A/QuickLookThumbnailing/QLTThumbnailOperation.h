/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/Versions/A/QuickLookThumbnailing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLookThumbnailing/QLThumbnailRequestOperation.h>

@class UIImage, NSError;

@interface QLTThumbnailOperation : QLThumbnailRequestOperation {

	UIImage* _image;
	NSError* _error;
	/*^block*/id _needsAdditionalTime;

}

@property (readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (copy) id needsAdditionalTime;              //@synthesize needsAdditionalTime=_needsAdditionalTime - In the implementation block
-(NSError *)error;
-(UIImage *)image;
-(id)needsAdditionalTime;
-(void)setNeedsAdditionalTime:(id)arg1 ;
@end

