/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface _TVRCMRVirtualVoiceInputDeviceWrapper : NSObject {

	void* _deviceDescriptor;

}

@property (nonatomic,copy) NSArray * supportedFormats; 
@property (nonatomic,copy) NSDictionary * defaultAudioFormat; 
-(void)dealloc;
-(id)init;
-(NSArray *)supportedFormats;
-(void)setSupportedFormats:(NSArray *)arg1 ;
-(void*)deviceDescriptor;
-(NSDictionary *)defaultAudioFormat;
-(void)setDefaultAudioFormat:(NSDictionary *)arg1 ;
@end

