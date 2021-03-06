/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSWindowController.h>
#import <libobjc.A.dylib/NSWindowDelegate.h>

@class NSSegmentedControl, ILMediaBrowserView, NSPointerArray, NSArray, NSString;

@interface AMMediaPanel : NSWindowController <NSWindowDelegate> {

	NSSegmentedControl* _segmentedControl;
	ILMediaBrowserView* _mediaBrowserView;
	NSPointerArray* _observers;

}

@property (__weak) NSSegmentedControl * _segmentedControl;                  //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (__weak) ILMediaBrowserView * _mediaBrowserView;                  //@synthesize mediaBrowserView=_mediaBrowserView - In the implementation block
@property (retain) NSPointerArray * observers;                              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSArray * selectedMediaObjects; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMediaPanel;
+(char)shouldDisplayMediaGroup:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSPointerArray *)observers;
-(void)setObservers:(NSPointerArray *)arg1 ;
-(void)awakeFromNib;
-(void)showWindow:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(id)windowNibName;
-(NSSegmentedControl *)_segmentedControl;
-(void)togglePanel:(id)arg1 ;
-(char)mediaBrowserView:(id)arg1 shouldDisplayMediaGroup:(id)arg2 ;
-(ILMediaBrowserView *)_mediaBrowserView;
-(NSArray *)selectedMediaObjects;
-(void)displayAudioBrowser:(id)arg1 ;
-(void)displayImageBrowser:(id)arg1 ;
-(void)displayMovieBrowser:(id)arg1 ;
-(void)selectMediaType:(id)arg1 ;
-(void)set_segmentedControl:(NSSegmentedControl *)arg1 ;
-(void)set_mediaBrowserView:(ILMediaBrowserView *)arg1 ;
@end

