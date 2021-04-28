/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioNode.h>
#import <AVFAudio/AVAudioMixing.h>

@class NSString;

@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>

@property (assign,nonatomic) float volume; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)pullInputBlockFromRenderBlock:(/*^block*/id)arg1 ;
-(id)initWithRenderBlock:(/*^block*/id)arg1 ;
-(id)initWithFormat:(id)arg1 renderBlock:(/*^block*/id)arg2 ;
@end
