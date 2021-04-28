/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Payload.h>

@class NSArray;

@interface NEIKEv2ChildSAPayload : NEIKEv2Payload {

	char _includeDHGroup;
	NSArray* _proposals;

}

@property (retain) NSArray * proposals;              //@synthesize proposals=_proposals - In the implementation block
@property (assign) char includeDHGroup;              //@synthesize includeDHGroup=_includeDHGroup - In the implementation block
+(id)copyTypeDescription;
-(NSArray *)proposals;
-(void)setProposals:(NSArray *)arg1 ;
-(void)setIncludeDHGroup:(char)arg1 ;
-(char)generatePayloadData;
-(char)parsePayloadData;
-(char)includeDHGroup;
-(id)description;
-(unsigned long long)type;
-(char)hasRequiredFields;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end
