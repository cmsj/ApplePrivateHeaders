/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/Resources/libFontRegistry.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libFontRegistry.dylib/libFontRegistry.dylib-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableArray, NSXPCListener, NSString;

@interface TFontProviderClientXPC : NSObject <NSXPCListenerDelegate> {

	CFRunLoopSourceRef fRunLoopSource;
	CFRunLoopRef fPossibleRunLoop;
	/*^block*/id fCallback;
	NSMutableArray* fRequests;
	NSXPCListener* fListener;

}

@property (nonatomic,retain) NSMutableArray * fRequests; 
@property (nonatomic,retain) NSXPCListener * fListener; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFListener:(NSXPCListener *)arg1 ;
-(void)setFRequests:(NSMutableArray *)arg1 ;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 withCurrentRunLoop:(CFRunLoopRef)arg2 ;
-(void)callFontProvider;
-(NSMutableArray *)fRequests;
-(NSXPCListener *)fListener;
-(void)dealloc;
-(void)resume;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)signal;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(void)addRequest:(id)arg1 ;
@end
