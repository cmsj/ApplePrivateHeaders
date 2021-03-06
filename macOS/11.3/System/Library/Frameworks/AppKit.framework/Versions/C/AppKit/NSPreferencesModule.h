/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSPreferencesModule.h>

@protocol NSPreferencesModule
@optional
-(id)helpAnchor;
-(id)helpBook;

@required
-(id)viewForPreferenceNamed:(id)arg1;
-(id)imageForPreferenceNamed:(id)arg1;
-(void)didChange;
-(char)hasChangesPending;
-(void)saveChanges;
-(char)moduleCanBeRemoved;
-(void)moduleWillBeRemoved;
-(void)initializeFromDefaults;
-(void)willBeDisplayed;
-(void)moduleWasInstalled;
-(char)preferencesWindowShouldClose;

@end


@class NSView;

@interface NSPreferencesModule : NSObject <NSPreferencesModule> {

	NSView* _preferencesView;
	CGSize _minSize;
	char _hasChanges;
	void* _reserved;

}

@property (retain) NSView * preferencesView;              //@synthesize preferencesView=_preferencesView - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)helpAnchor;
-(CGSize)minSize;
-(char)isResizable;
-(void)setMinSize:(CGSize)arg1 ;
-(id)preferencesNibName;
-(id)viewForPreferenceNamed:(id)arg1 ;
-(id)titleForIdentifier:(id)arg1 ;
-(id)imageForPreferenceNamed:(id)arg1 ;
-(id)helpBook;
-(void)didChange;
-(char)hasChangesPending;
-(void)saveChanges;
-(char)moduleCanBeRemoved;
-(void)moduleWillBeRemoved;
-(void)initializeFromDefaults;
-(void)willBeDisplayed;
-(void)moduleWasInstalled;
-(char)preferencesWindowShouldClose;
-(void)setPreferencesView:(NSView *)arg1 ;
-(void)set_preferencesView:(id)arg1 ;
-(NSView *)preferencesView;
@end

