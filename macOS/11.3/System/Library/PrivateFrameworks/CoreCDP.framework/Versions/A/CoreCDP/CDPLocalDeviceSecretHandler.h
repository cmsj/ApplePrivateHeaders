/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/Versions/A/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPLocalDeviceSecretHandlerProtocol;
@class CDPContext;

@interface CDPLocalDeviceSecretHandler : NSObject {

	id<CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
	CDPContext* _context;

}

@property (nonatomic,readonly) CDPContext * context;              //@synthesize context=_context - In the implementation block
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 handler:(id)arg2 ;
-(void)userDidCancelWithError:(id)arg1 ;
-(void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2 ;
@end
