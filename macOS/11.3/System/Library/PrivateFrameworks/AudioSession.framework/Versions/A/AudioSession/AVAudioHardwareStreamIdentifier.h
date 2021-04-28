/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/Versions/A/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVAudioHardwareStreamIdentifier : NSObject {

	unsigned direction;
	NSString* deviceUID;
	unsigned long long streamIndex;

}

@property (nonatomic,readonly) NSString * deviceUID; 
@property (nonatomic,readonly) unsigned direction; 
@property (nonatomic,readonly) unsigned long long streamIndex; 
-(unsigned)direction;
-(NSString *)deviceUID;
-(unsigned long long)streamIndex;
@end
