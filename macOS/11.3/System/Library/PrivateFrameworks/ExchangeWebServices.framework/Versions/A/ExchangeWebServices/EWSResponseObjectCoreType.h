/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExchangeWebServices/EWSMessageType.h>

@class EWSItemIdType;

@interface EWSResponseObjectCoreType : EWSMessageType {

	EWSItemIdType* _ReferenceItemId;

}

@property (nonatomic,retain) EWSItemIdType * ReferenceItemId;              //@synthesize ReferenceItemId=_ReferenceItemId - In the implementation block
+(id)definition;
-(void)setReferenceItemId:(EWSItemIdType *)arg1 ;
-(EWSItemIdType *)ReferenceItemId;
@end

