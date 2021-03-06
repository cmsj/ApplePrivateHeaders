/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <Foundation/NSOperation.h>

@protocol FileTransferIconLoaderDelegate;
@class NSDictionary, NSURL, NSData;

@interface FileTransferIconLoaderOperation : NSOperation {

	NSDictionary* _options;
	NSURL* _url;
	NSData* _bookmark;
	id<FileTransferIconLoaderDelegate> _delegate;
	CGSize _thumbnailSize;

}

@property (nonatomic,copy) NSURL * url;                                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * bookmark;                                               //@synthesize bookmark=_bookmark - In the implementation block
@property (assign,nonatomic) CGSize thumbnailSize;                                            //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (assign,nonatomic,__weak) id<FileTransferIconLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<FileTransferIconLoaderDelegate>)delegate;
-(void)setDelegate:(id<FileTransferIconLoaderDelegate>)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)main;
-(NSData *)bookmark;
-(void)setBookmark:(NSData *)arg1 ;
-(CGSize)thumbnailSize;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)_notifyDelegate:(id)arg1 ;
@end

