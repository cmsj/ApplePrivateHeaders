/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AVFAudio.framework/Versions/A/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioNode.h>

@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode

@property (nonatomic,readonly) AudioComponentDescription audioComponentDescription; 
@property (nonatomic,readonly) ComponentInstanceRecord* audioUnit; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturerName; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)instantiateWithComponentDescription:(AudioComponentDescription)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)name;
-(unsigned long long)version;
-(ComponentInstanceRecord*)audioUnit;
-(NSString *)manufacturerName;
-(id)initWithAudioComponentDescription:(AudioComponentDescription)arg1 ;
-(AudioComponentDescription)audioComponentDescription;
-(char)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)setValue:(float)arg1 forParam:(unsigned)arg2 ;
-(float)valueForParam:(unsigned)arg1 ;
@end

