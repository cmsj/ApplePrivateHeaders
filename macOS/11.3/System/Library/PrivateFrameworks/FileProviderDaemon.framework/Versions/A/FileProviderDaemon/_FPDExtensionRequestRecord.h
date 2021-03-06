/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPXPCAutomaticErrorProxy, NSDate;

@interface _FPDExtensionRequestRecord : NSObject {

	FPXPCAutomaticErrorProxy* _proxy;
	SEL _selector;
	NSDate* _timeout;

}

@property (__weak) FPXPCAutomaticErrorProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (assign,nonatomic) SEL selector;                        //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) NSDate * timeout;                    //@synthesize timeout=_timeout - In the implementation block
-(id)description;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(NSDate *)timeout;
-(void)setTimeout:(NSDate *)arg1 ;
-(FPXPCAutomaticErrorProxy *)proxy;
-(void)setProxy:(FPXPCAutomaticErrorProxy *)arg1 ;
@end

