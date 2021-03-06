/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Versions/A/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskRequest;

@interface CATTaskMessageStart : CATTaskMessage {

	CATTaskRequest* _request;

}

@property (nonatomic,retain) CATTaskRequest * request;              //@synthesize request=_request - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CATTaskRequest *)request;
-(void)setRequest:(CATTaskRequest *)arg1 ;
-(id)initWithTaskUUID:(id)arg1 request:(id)arg2 ;
@end

