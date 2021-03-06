/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:26 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class SSFrameBuffer, CALayer, NSColor, NSTimer, NSArray, SSScreenInfo, NSString;

@interface SSFrameBufferRenderView : NSView <CALayerDelegate> {

	unsigned long long mScreenIdentifier;
	SSFrameBuffer* mFrameBuffer;
	CALayer* mCachedImageLayer;
	char useCachedImage;
	char _useAVConference;
	char _feedbackLayerNeedsTimedDisplay;
	unsigned _currentViewRotation;
	NSColor* _cursorColor;
	CALayer* _feedbackLayer;
	NSTimer* _feedbackLayerTimer;
	NSArray* _touchEventArray;

}

@property (readonly) SSScreenInfo * screen; 
@property (assign) unsigned long long screenIdentifier; 
@property (retain) SSFrameBuffer * frameBuffer; 
@property (assign) char useCachedImage; 
@property (assign) unsigned currentViewRotation;                     //@synthesize currentViewRotation=_currentViewRotation - In the implementation block
@property (assign) char useAVConference;                             //@synthesize useAVConference=_useAVConference - In the implementation block
@property (retain) NSColor * cursorColor;                            //@synthesize cursorColor=_cursorColor - In the implementation block
@property (retain) CALayer * feedbackLayer;                          //@synthesize feedbackLayer=_feedbackLayer - In the implementation block
@property (retain) NSTimer * feedbackLayerTimer;                     //@synthesize feedbackLayerTimer=_feedbackLayerTimer - In the implementation block
@property (assign) char feedbackLayerNeedsTimedDisplay;              //@synthesize feedbackLayerNeedsTimedDisplay=_feedbackLayerNeedsTimedDisplay - In the implementation block
@property (retain) NSArray * touchEventArray;                        //@synthesize touchEventArray=_touchEventArray - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SSScreenInfo *)screen;
-(void)setFrame:(CGRect)arg1 ;
-(char)isOpaque;
-(char)wantsUpdateLayer;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)rightMouseDown:(id)arg1 ;
-(void)resizeWithOldSuperviewSize:(CGSize)arg1 ;
-(char)useAVConference;
-(int)orientationForCurrentAngle;
-(SSFrameBuffer *)frameBuffer;
-(void)setFrameBuffer:(SSFrameBuffer *)arg1 ;
-(void)setCursorColor:(NSColor *)arg1 ;
-(void)setUseCachedImage:(char)arg1 ;
-(char)useCachedImage;
-(void)setTouchEvents:(id)arg1 ;
-(void)setUseAVConference:(char)arg1 ;
-(unsigned)currentViewRotation;
-(CGPoint)translateInBounds:(CGRect)arg1 xPercent:(double)arg2 yPercent:(double)arg3 enclosingRect:(CGRect)arg4 ;
-(void)setScreenIdentifier:(unsigned long long)arg1 ;
-(void)setCurrentViewRotation:(unsigned)arg1 ;
-(CALayer *)feedbackLayer;
-(void)setFeedbackLayer:(CALayer *)arg1 ;
-(void)setFeedbackLayerTimer:(NSTimer *)arg1 ;
-(void)setTouchEventArray:(NSArray *)arg1 ;
-(NSTimer *)feedbackLayerTimer;
-(char)feedbackLayerNeedsTimedDisplay;
-(void)setFeedbackLayerNeedsTimedDisplay:(char)arg1 ;
-(void)feedbackLayerThrottle;
-(unsigned long long)screenIdentifier;
-(NSColor *)cursorColor;
-(NSArray *)touchEventArray;
@end

