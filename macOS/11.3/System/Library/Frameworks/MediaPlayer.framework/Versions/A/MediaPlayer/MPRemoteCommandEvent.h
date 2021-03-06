/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/Versions/A/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, MPRemoteCommand;

@interface MPRemoteCommandEvent : NSObject {

	NSDictionary* _mediaRemoteOptions;
	NSString* _contextID;
	NSString* _commandID;
	MPRemoteCommand* _command;
	double _timestamp;

}

@property (nonatomic,readonly) MPRemoteCommand * command;              //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
+(id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(id)description;
-(id)init;
-(double)timestamp;
-(id)contextID;
-(MPRemoteCommand *)command;
-(id)sourceID;
-(id)commandID;
-(id)contentItemID;
-(long long)playbackQueueOffset;
-(id)mediaRemoteOptions;
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(unsigned)mediaRemoteCommandType;
-(id)interfaceID;
@end

