/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSCollectionViewItem.h>
#import <libobjc.A.dylib/ICCameraDeviceDownloadDelegate.h>

@class NSImageView, NSClickGestureRecognizer, CALayer, NSString;

@interface IKCameraCollectionViewItem : NSCollectionViewItem <ICCameraDeviceDownloadDelegate> {

	NSImageView* _imageView;
	NSClickGestureRecognizer* _clickGestureRecognizer;
	NSClickGestureRecognizer* _doubleClick;
	CALayer* _selectedLayer;
	CALayer* _downloadedLayer;

}

@property (nonatomic,retain) NSClickGestureRecognizer * clickGestureRecognizer;              //@synthesize clickGestureRecognizer=_clickGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSClickGestureRecognizer * doubleClick;                         //@synthesize doubleClick=_doubleClick - In the implementation block
@property (nonatomic,retain) CALayer * selectedLayer;                                        //@synthesize selectedLayer=_selectedLayer - In the implementation block
@property (nonatomic,retain) CALayer * downloadedLayer;                                      //@synthesize downloadedLayer=_downloadedLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDoubleClick:(NSClickGestureRecognizer *)arg1 ;
-(void)setSelectedLayer:(CALayer *)arg1 ;
-(void)setDownloadedLayer:(CALayer *)arg1 ;
-(void)onDoubleClick:(id)arg1 ;
-(void)removeBadgeOnLayer:(unsigned long long)arg1 ;
-(void)badgeIconWithImage:(id)arg1 onLayer:(unsigned long long)arg2 ;
-(void)uninstallGestureRecognizer;
-(void)toggleSelection:(id)arg1 ;
-(CALayer *)downloadedLayer;
-(void)enableDoubleClick;
-(void)disableDoubleClick;
-(void)updateDownloadBadge;
-(void)installGestureRecognizer;
-(void)updateBadgeLocation;
-(void)dealloc;
-(id)init;
-(void)prepareForReuse;
-(id)animationForKey:(id)arg1 ;
-(char)isSelectable;
-(void)setSelected:(char)arg1 ;
-(char)isSelected;
-(void)setHighlightState:(long long)arg1 ;
-(id)draggingImageComponents;
-(char)isDownloaded;
-(void)setClickGestureRecognizer:(NSClickGestureRecognizer *)arg1 ;
-(NSClickGestureRecognizer *)clickGestureRecognizer;
-(CALayer *)selectedLayer;
-(void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4 ;
-(NSClickGestureRecognizer *)doubleClick;
@end

