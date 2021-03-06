/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:24 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject {

	HMDStreamDataSequenceNumber* _sequenceNumber;
	NSData* _data;
	NSString* _type;

}

@property (copy,readonly) HMDStreamDataSequenceNumber * sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (copy,readonly) NSData * data;                                             //@synthesize data=_data - In the implementation block
@property (copy,readonly) NSString * type;                                           //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(NSString *)type;
-(HMDStreamDataSequenceNumber *)sequenceNumber;
-(id)attributeDescriptions;
-(id)initWithSequenceNumber:(id)arg1 data:(id)arg2 type:(id)arg3 ;
@end

