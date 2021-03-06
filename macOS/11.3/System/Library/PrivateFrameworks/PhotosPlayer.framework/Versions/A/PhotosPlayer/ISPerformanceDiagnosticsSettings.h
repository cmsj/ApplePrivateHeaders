/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/Versions/A/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPerformanceDiagnosticsSettings : ISSettings {

	char _shouldTracePerformance;

}

@property (assign,nonatomic) char shouldTracePerformance;              //@synthesize shouldTracePerformance=_shouldTracePerformance - In the implementation block
+(id)sharedInstance;
-(void)setDefaultValues;
-(char)shouldTracePerformance;
-(void)setShouldTracePerformance:(char)arg1 ;
@end

