/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/Versions/A/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class NSImageView, NSURL, NSString, NSBundle;

@interface SiriUIDownloadableImageView : NSView {

	NSImageView* _imageView;
	NSURL* _imageURL;
	char _showingPlaceHolderImage;
	NSString* _placeHolderImageName;
	NSBundle* _placeHolderImageBundle;
	double _placeHolderVerticalOffset;

}
-(void)layout;
-(void)setImageURL:(id)arg1 ;
-(void)showPlaceHolderImage;
-(void)_setImage:(id)arg1 isPlaceHolder:(char)arg2 ;
-(id)initWithImageURL:(id)arg1 placeHolderImageName:(id)arg2 placeHolderImageBundle:(id)arg3 ;
-(void)setPlaceHolderImageName:(id)arg1 ;
-(void)setPlaceHolderVerticalOffset:(double)arg1 ;
@end

