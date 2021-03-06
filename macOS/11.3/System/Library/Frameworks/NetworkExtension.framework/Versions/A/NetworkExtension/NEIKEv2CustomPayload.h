/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSData;

@interface NEIKEv2CustomPayload : NEIKEv2Payload {

	unsigned long long _customType;
	NSData* _customData;

}

@property (assign) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NSData * customData;                        //@synthesize customData=_customData - In the implementation block
+(id)copyTypeDescription;
-(void)setCustomData:(NSData *)arg1 ;
-(char)generatePayloadData;
-(char)parsePayloadData;
-(unsigned long long)type;
-(char)hasRequiredFields;
-(void)setCustomType:(unsigned long long)arg1 ;
-(unsigned long long)customType;
-(NSData *)customData;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

