/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuickLookUI.framework/Versions/A/QuickLookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewTextOverlayHostDelegate;
@class QLOverlayView, NSTextField, CALayer, NSView;

@interface QLPreviewTextOverlayController : NSObject {

	QLOverlayView* _overlayView;
	NSTextField* _textOverlayField;
	CALayer* _pathOverlayLayer;
	NSView*<QLPreviewTextOverlayHostDelegate> _hostView;

}

@property (retain) NSView * overlayView;                                            //@synthesize overlayView=_overlayView - In the implementation block
@property (retain) NSTextField * textOverlayField;                                  //@synthesize textOverlayField=_textOverlayField - In the implementation block
@property (assign) NSView*<QLPreviewTextOverlayHostDelegate> hostView;              //@synthesize hostView=_hostView - In the implementation block
-(void)setTextOverlayField:(NSTextField *)arg1 ;
-(NSTextField *)textOverlayField;
-(void)updateOverlayFrame;
-(void)createOverlay;
-(void)setShowOverlay:(char)arg1 ;
-(void)dealloc;
-(NSView *)overlayView;
-(void)setOverlayView:(NSView *)arg1 ;
-(NSView*<QLPreviewTextOverlayHostDelegate>)hostView;
-(void)setHostView:(NSView*<QLPreviewTextOverlayHostDelegate>)arg1 ;
-(char)hasRoundedCorners;
-(void)removeOverlay;
@end

