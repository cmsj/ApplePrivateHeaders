/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iPodUpdater.framework/Versions/A/iPodUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileHandle, NSDateFormatter;

@interface PodLogger : NSObject {

	int _loggingLevel;
	NSFileHandle* _logFile;
	NSDateFormatter* _formatter;

}
+(id)sharedLoggerWithPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)setLoggingLevel:(int)arg1 ;
-(int)loggingLevel;
-(void)logType:(int)arg1 inFunction:(const char*)arg2 atLine:(int)arg3 withString:(id)arg4 ;
-(void)logType:(int)arg1 inFunction:(const char*)arg2 atLine:(int)arg3 withFormat:(id)arg4 ;
-(void)logType:(int)arg1 withString:(id)arg2 ;
-(void)logType:(int)arg1 withFormat:(id)arg2 ;
-(id)logStringForType:(int)arg1 ;
-(void)writeLineToLog:(id)arg1 ;
@end

