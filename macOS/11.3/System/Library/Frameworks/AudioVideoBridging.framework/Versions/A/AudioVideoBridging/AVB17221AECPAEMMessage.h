/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AudioVideoBridging.framework/Versions/A/AudioVideoBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioVideoBridging/AudioVideoBridging-Structs.h>
#import <AudioVideoBridging/AVB17221AECPMessage.h>

@class NSData;

@interface AVB17221AECPAEMMessage : AVB17221AECPMessage {

	unsigned short rawCommandType;
	NSData* commandSpecificData;

}

@property (assign) unsigned short rawCommandType; 
@property (assign) unsigned short commandType; 
@property (getter=isUnsolicited) char unsolicited; 
@property (getter=isControllerRequest) char controllerRequest; 
@property (copy) NSData * commandSpecificData; 
+(id)responseMessage;
+(id)commandMessage;
+(id)errorForStatusCode:(unsigned char)arg1 ;
+(id)keyPathsForValuesAffectingCommandType;
+(id)keyPathsForValuesAffectingUnsolicited;
+(id)keyPathsForValuesAffectingControllerRequest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned short)commandType;
-(void)setCommandType:(unsigned short)arg1 ;
-(NSData *)commandSpecificData;
-(unsigned short)rawCommandType;
-(void)setRawCommandType:(unsigned short)arg1 ;
-(void)setCommandSpecificData:(NSData *)arg1 ;
-(char)isUnsolicited;
-(char)isControllerRequest;
-(void)setUnsolicited:(char)arg1 ;
-(void)setControllerRequest:(char)arg1 ;
@end

