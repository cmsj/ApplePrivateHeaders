/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class PBOXRemoteMediaBrowserPanel;

@interface NSMediaLibraryBrowserController : NSObject {

	id _browserProxy;

}

@property (readonly) PBOXRemoteMediaBrowserPanel * browserProxy;              //@synthesize browserProxy=_browserProxy - In the implementation block
@property (getter=isVisible) char visible; 
@property (assign) CGRect frame; 
@property (assign) unsigned long long mediaLibraries; 
+(unsigned long long)maskForMediaTypeEnum:(unsigned long long)arg1 ;
+(unsigned long long)mediaTypeEnumForMask:(unsigned long long)arg1 ;
+(id)sharedMediaLibraryBrowserController;
-(void)dealloc;
-(id)init;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(char)isVisible;
-(void)orderOut:(id)arg1 ;
-(void)orderFront:(id)arg1 ;
-(void)setVisible:(char)arg1 ;
-(id)frameAutosaveName;
-(void)setFrameAutosaveName:(id)arg1 ;
-(PBOXRemoteMediaBrowserPanel *)browserProxy;
-(unsigned long long)mediaLibraries;
-(void)setMediaLibraries:(unsigned long long)arg1 ;
-(void)togglePanel:(id)arg1 ;
@end
