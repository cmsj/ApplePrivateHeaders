/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/Versions/A/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@class NSData;

@interface _RWITCPRelayMessage : NSObject {

	char _writtenHeader;
	unsigned long long _writtenPayloadOffset;
	NSData* _payload;

}

@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,copy,readonly) NSData * payload;                  //@synthesize payload=_payload - In the implementation block
+(id)TCPRelayMessageWithPayload:(id)arg1 ;
+(id)TCPRelayMessageFromDataStream:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)length;
-(id)initWithPayload:(id)arg1 ;
-(NSData *)payload;
-(long long)write:(int)arg1 ;
-(long long)writeInternal:(/*^block*/id)arg1 ;
-(long long)writeMobileDevice:(AMDServiceConnectionRef)arg1 ;
@end

