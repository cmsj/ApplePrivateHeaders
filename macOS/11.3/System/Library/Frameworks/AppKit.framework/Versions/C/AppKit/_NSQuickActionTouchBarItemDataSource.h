/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, NSString, _NSQuickAction, NSImage, NSColor;

@interface _NSQuickActionTouchBarItemDataSource : NSObject {

	NSOperationQueue* _backgroundLoadingQueue;
	NSString* _identifier;
	_NSQuickAction* _action;
	NSString* _label;
	NSImage* _image;
	NSColor* _backgroundColor;
	void* _observationInfo;
	char _enabled;
	char _needsUpdatedImage;
	char _needsUpdatedBackgroundColor;

}

@property (copy,readonly) NSString * quickActionIdentifier;              //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (readonly) NSImage * image;                                    //@synthesize image=_image - In the implementation block
@property (readonly) NSColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (getter=isEnabled,readonly) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
+(char)accessInstanceVariablesDirectly;
+(char)automaticallyNotifiesObserversOfEnabled;
+(char)automaticallyNotifiesObserversOfImage;
+(char)automaticallyNotifiesObserversOfLabel;
+(char)automaticallyNotifiesObserversOfBackgroundColor;
-(void)dealloc;
-(void)setObservationInfo:(void*)arg1 ;
-(char)isEnabled;
-(NSString *)label;
-(void*)observationInfo;
-(NSImage *)image;
-(NSColor *)backgroundColor;
-(char)needsInvocationFromClient;
-(id)initWithQuickActionIdentifier:(id)arg1 backgroundLoadingQueue:(id)arg2 ;
-(void)updateWithQuickAction:(id)arg1 ;
-(void)updateEnabled:(char)arg1 ;
-(char)invokeWithoutClient;
-(NSString *)quickActionIdentifier;
@end

