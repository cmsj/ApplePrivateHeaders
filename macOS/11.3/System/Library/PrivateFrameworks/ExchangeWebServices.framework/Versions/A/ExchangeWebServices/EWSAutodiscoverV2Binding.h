/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EWSAutodiscoverV2BindingDelegate;
@interface EWSAutodiscoverV2Binding : NSObject {

	char _logsActivity;
	id<EWSAutodiscoverV2BindingDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<EWSAutodiscoverV2BindingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) char logsActivity;                                                             //@synthesize logsActivity=_logsActivity - In the implementation block
-(id)init;
-(id<EWSAutodiscoverV2BindingDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLogsActivity:(char)arg1 ;
-(char)logsActivity;
-(void)sendMessage:(id)arg1 withProtocol:(id)arg2 retrieveAuthURI:(char)arg3 ;
@end
