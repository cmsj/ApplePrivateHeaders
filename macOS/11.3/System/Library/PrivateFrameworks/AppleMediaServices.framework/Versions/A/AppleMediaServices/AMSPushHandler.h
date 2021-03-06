/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AMSBagProtocol, AMSPushHandlerContract;
@class AMSPushConfiguration;

@interface AMSPushHandler : NSObject {

	id<AMSBagProtocol> _bag;
	AMSPushConfiguration* _configuration;
	id<AMSPushHandlerContract> _bagContract;

}

@property (readonly) id<AMSPushHandlerContract> bagContract;              //@synthesize bagContract=_bagContract - In the implementation block
@property (readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (__weak) id<AMSPushHandlerDelegate> delegate; 
@property (readonly) AMSPushConfiguration * configuration;                //@synthesize configuration=_configuration - In the implementation block
-(id<AMSPushHandlerDelegate>)delegate;
-(void)setDelegate:(id<AMSPushHandlerDelegate>)arg1 ;
-(AMSPushConfiguration *)configuration;
-(void)handleNotification:(id)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id<AMSPushHandlerContract>)bagContract;
-(id)_enabledParsables;
-(id)initWithConfiguration:(id)arg1 bag:(id)arg2 ;
-(char)shouldHandleNotification:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 bagContract:(id)arg2 ;
@end

