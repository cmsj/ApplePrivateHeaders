/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLookUI/QuickLookUI-Structs.h>
@class NSImage;

@interface QLSeamlessOpeningItemInfo : NSObject {

	CGRect _sourceFrame;
	CGRect _contentRect;
	NSImage* _sourceImage;

}

@property (assign) CGRect sourceFrame;                 //@synthesize sourceFrame=_sourceFrame - In the implementation block
@property (assign) CGRect contentRect;                 //@synthesize contentRect=_contentRect - In the implementation block
@property (retain) NSImage * sourceImage;              //@synthesize sourceImage=_sourceImage - In the implementation block
+(id)info;
-(void)dealloc;
-(CGRect)sourceFrame;
-(void)setSourceFrame:(CGRect)arg1 ;
-(CGRect)contentRect;
-(NSImage *)sourceImage;
-(void)setContentRect:(CGRect)arg1 ;
-(void)setSourceImage:(NSImage *)arg1 ;
@end

