/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/Versions/A/CoreHaptics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CHHapticDeviceCapability
@property (readonly) char supportsHaptics; 
@property (readonly) char supportsAudio; 
@required
-(id)attributesForEventParameter:(id)arg1 eventType:(id)arg2 error:(id*)arg3;
-(id)attributesForDynamicParameter:(id)arg1 error:(id*)arg2;
-(char)supportsHaptics;
-(char)supportsAudio;

@end
