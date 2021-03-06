/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <PreferencePanes/NSProxyPreferencePane.h>
#import <libobjc.A.dylib/NSRemoteViewDelegate.h>

@class NSString, NSRemoteView, NSXPCInterface;

@interface NSVBProxyPreferencePane : NSProxyPreferencePane <NSRemoteViewDelegate> {

	NSString* _remoteViewClass;
	NSRemoteView* _remoteView;

}

@property (retain) NSString * remoteViewClass;                            //@synthesize remoteViewClass=_remoteViewClass - In the implementation block
@property (retain) NSRemoteView * remoteView;                             //@synthesize remoteView=_remoteView - In the implementation block
@property (readonly) NSString * serviceName; 
@property (readonly) NSString * serviceSubclassName; 
@property (readonly) NSXPCInterface * remoteObjectInterface; 
@property (readonly) char shouldRetainExportedObject; 
-(NSString *)serviceName;
-(NSXPCInterface *)remoteObjectInterface;
-(NSRemoteView *)remoteView;
-(char)view:(id)arg1 shouldResize:(CGSize)arg2 ;
-(void)setRemoteView:(NSRemoteView *)arg1 ;
-(NSString *)serviceSubclassName;
-(void)didSelect;
-(void)didUnselect;
-(void)loadMainViewWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)reloadMainViewWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSString *)remoteViewClass;
-(id)initWithPrefPaneBundle:(id)arg1 ;
-(void)setRemoteViewClass:(NSString *)arg1 ;
-(id)initWithPrefPaneBundle:(id)arg1 xpcAddBundle:(char)arg2 ;
-(void)_createConnectionIfNeededWithCompletion:(/*^block*/id)arg1 ;
@end

