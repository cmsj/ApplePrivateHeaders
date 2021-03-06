/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/Versions/A/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardServices/CRSResponse.h>

@protocol CRCard;
@class CRSCardRequest;

@interface CRSCardResponse : CRSResponse {

	CRSCardRequest* _request;
	id<CRCard> _card;

}

@property (nonatomic,retain) CRSCardRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<CRCard> card;                       //@synthesize card=_card - In the implementation block
-(CRSCardRequest *)request;
-(void)setRequest:(CRSCardRequest *)arg1 ;
-(id<CRCard>)card;
-(void)setCard:(id<CRCard>)arg1 ;
@end

