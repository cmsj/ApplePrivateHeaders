/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@protocol OMSlideshowMediaItemLookupDelegate;
@class NSArray;

@interface OMSlideshowKeyedUnarchiver : NSKeyedUnarchiver {

	NSArray* _mediaURLs;
	id<OMSlideshowMediaItemLookupDelegate> _mediaItemLookupDelegate;

}

@property (assign,nonatomic) NSArray * mediaURLs;                                                         //@synthesize mediaURLs=_mediaURLs - In the implementation block
@property (assign,nonatomic) id<OMSlideshowMediaItemLookupDelegate> mediaItemLookupDelegate;              //@synthesize mediaItemLookupDelegate=_mediaItemLookupDelegate - In the implementation block
-(void)setMediaItemLookupDelegate:(id<OMSlideshowMediaItemLookupDelegate>)arg1 ;
-(void)setMediaURLs:(NSArray *)arg1 ;
-(id<OMSlideshowMediaItemLookupDelegate>)mediaItemLookupDelegate;
-(NSArray *)mediaURLs;
@end

