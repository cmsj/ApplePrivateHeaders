/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IDSCTPNRInfo : NSObject {

	NSString* _PNRPhoneNumber;
	NSString* _phoneBookNumber;

}

@property (nonatomic,readonly) NSString * PLMN; 
@property (nonatomic,readonly) NSString * IMSI; 
@property (nonatomic,readonly) NSString * PNRPhoneNumber;               //@synthesize PNRPhoneNumber=_PNRPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * phoneBookNumber;              //@synthesize phoneBookNumber=_phoneBookNumber - In the implementation block
-(NSString *)PLMN;
-(NSString *)IMSI;
-(NSString *)PNRPhoneNumber;
-(NSString *)phoneBookNumber;
@end

