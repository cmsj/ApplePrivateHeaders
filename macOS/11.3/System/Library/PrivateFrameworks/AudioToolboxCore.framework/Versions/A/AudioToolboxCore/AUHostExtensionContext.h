/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/Versions/A/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@class NSExtension, AUHostDelegate, NSXPCConnection;

@interface AUHostExtensionContext : NSExtensionContext {

	NSExtension* _extension;
	AUHostDelegate* _delegate;

}

@property (nonatomic,retain) NSExtension * extension;                               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) AUHostDelegate * delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * xpcConnection; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(AUHostDelegate *)delegate;
-(void)setDelegate:(AUHostDelegate *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
@end

