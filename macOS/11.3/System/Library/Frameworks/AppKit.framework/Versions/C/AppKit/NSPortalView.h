/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSView.h>

@protocol NSPortalViewImplementation;
@class NSView;

@interface NSPortalView : NSView {

	NSView* _sourceView;
	NSView*<NSPortalViewImplementation> _portalView;

}

@property (retain) NSView * sourceView; 
+(char)automaticallyNotifiesObserversOfSourceView;
-(void)dealloc;
-(void)layout;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(NSView *)sourceView;
-(void)setSourceView:(NSView *)arg1 ;
@end

