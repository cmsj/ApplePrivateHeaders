/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation {

	FCNewsletterEndpointConnection* _endpointConnection;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FCNewsletterEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)performOperation;
-(FCNewsletterEndpointConnection *)endpointConnection;
-(void)setEndpointConnection:(FCNewsletterEndpointConnection *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
