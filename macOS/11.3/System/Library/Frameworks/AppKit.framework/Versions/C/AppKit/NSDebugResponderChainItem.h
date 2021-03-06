/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSDebugResponderChainItem : NSObject {

	void* _address;
	NSString* _className;
	NSString* _responderDescription;

}

@property (assign) void* address;                               //@synthesize address=_address - In the implementation block
@property (copy) NSString * className;                          //@synthesize className=_className - In the implementation block
@property (copy) NSString * responderDescription;               //@synthesize responderDescription=_responderDescription - In the implementation block
@property (readonly) NSString * prettyDescription; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)className;
-(void*)address;
-(void)setAddress:(void*)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(void)setResponderDescription:(NSString *)arg1 ;
-(NSString *)prettyDescription;
-(NSString *)responderDescription;
@end

