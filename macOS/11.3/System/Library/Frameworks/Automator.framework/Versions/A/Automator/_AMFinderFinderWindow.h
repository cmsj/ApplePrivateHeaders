/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/_AMFinderWindow.h>

@class SBObject, _AMFinderIconViewOptions, _AMFinderListViewOptions, _AMFinderColumnViewOptions;

@interface _AMFinderFinderWindow : _AMFinderWindow

@property (copy) SBObject * target; 
@property (assign) int currentView; 
@property (copy,readonly) _AMFinderIconViewOptions * iconViewOptions; 
@property (copy,readonly) _AMFinderListViewOptions * listViewOptions; 
@property (copy,readonly) _AMFinderColumnViewOptions * columnViewOptions; 
@property (assign) char toolbarVisible; 
@property (assign) char statusbarVisible; 
@property (assign) long long sidebarWidth; 
-(void)setTarget:(SBObject *)arg1 ;
-(SBObject *)target;
-(int)currentView;
-(void)setCurrentView:(int)arg1 ;
-(long long)sidebarWidth;
-(void)setSidebarWidth:(long long)arg1 ;
-(_AMFinderIconViewOptions *)iconViewOptions;
-(_AMFinderListViewOptions *)listViewOptions;
-(_AMFinderColumnViewOptions *)columnViewOptions;
-(char)toolbarVisible;
-(void)setToolbarVisible:(char)arg1 ;
-(char)statusbarVisible;
-(void)setStatusbarVisible:(char)arg1 ;
@end
