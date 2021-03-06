/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <SafariSharedUI/WBSWebExtensionAPIObject.h>

@class NSMapTable;

@interface WBSWebExtensionAPIWebRequestEventObjC : WBSWebExtensionAPIObject {

	NSMapTable* _listeners;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) WBSWebExtensionAPIWebRequestEvent* cpp; 
+(id)eventWithExtensionIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(WBSWebExtensionAPIWebRequestEvent*)cpp;
-(BOOL)hasListenerWithBrowserContextController:(id)arg1 listener:(id)arg2 ;
-(void)removeListenerWithBrowserContextController:(id)arg1 listener:(id)arg2 ;
-(void)invokeListenersWithArgument:(id)arg1 tabID:(double)arg2 windowID:(double)arg3 resourceLoad:(id)arg4 ;
-(void)addListener:(id)arg1 filter:(id)arg2 extraInfoSpec:(id)arg3 browserContextController:(id)arg4 outExceptionString:(id*)arg5 ;
@end

