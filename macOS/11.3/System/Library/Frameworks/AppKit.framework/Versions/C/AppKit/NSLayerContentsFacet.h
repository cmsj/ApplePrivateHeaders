/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSImage;

@interface NSLayerContentsFacet : NSObject {

	id _contents;
	CGRect _contentsCenter;
	double _contentsScale;
	CGRect _drawingRect;
	NSImage* _image;

}

@property (retain) NSImage * image;                    //@synthesize image=_image - In the implementation block
@property (retain) id contents;                        //@synthesize contents=_contents - In the implementation block
@property (assign) CGRect contentsCenter;              //@synthesize contentsCenter=_contentsCenter - In the implementation block
@property (assign) double contentsScale;               //@synthesize contentsScale=_contentsScale - In the implementation block
@property (assign) CGRect drawingRect;                 //@synthesize drawingRect=_drawingRect - In the implementation block
-(void)dealloc;
-(void)setImage:(NSImage *)arg1 ;
-(id)contents;
-(NSImage *)image;
-(void)setContents:(id)arg1 ;
-(void)setContentsScale:(double)arg1 ;
-(CGRect)contentsCenter;
-(double)contentsScale;
-(void)setContentsCenter:(CGRect)arg1 ;
-(void)dropToImage;
-(double)totalSize;
-(CGRect)drawingRect;
-(void)setDrawingRect:(CGRect)arg1 ;
@end

