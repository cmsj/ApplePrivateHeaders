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

@interface AVB17221AECPAVCMessage : AVB17221AECPMessage {

	NSData* commandResponse;

}

@property (copy) NSData * commandResponse; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)commandResponse;
-(void)setCommandResponse:(NSData *)arg1 ;
@end

