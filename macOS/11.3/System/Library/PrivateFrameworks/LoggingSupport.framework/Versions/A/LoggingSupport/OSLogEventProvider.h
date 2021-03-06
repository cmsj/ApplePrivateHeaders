/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;


@protocol OSLogEventProvider
@property (nonatomic,readonly) NSString * composedMessage; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long logType; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long timeToLive; 
@property (nonatomic,readonly) unsigned long long traceIdentifier; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) timeval* unixDate; 
@property (nonatomic,readonly) timezone* unixTimeZone; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) unsigned long long parentActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long transitionActivityIdentifier; 
@property (nonatomic,readonly) NSUUID * bootUUID; 
@property (nonatomic,readonly) unsigned long long continuousNanosecondsSinceBoot; 
@property (nonatomic,readonly) unsigned long long machContinuousTimestamp; 
@property (nonatomic,readonly) NSUUID * processImageUUID; 
@property (nonatomic,readonly) const char* processImageUUIDBytes; 
@property (nonatomic,readonly) NSString * processImagePath; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) NSUUID * senderImageUUID; 
@property (nonatomic,readonly) const char* senderImageUUIDBytes; 
@property (nonatomic,readonly) NSString * senderImagePath; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long senderImageOffset; 
@property (nonatomic,readonly) OSLogEventBacktrace * backtrace; 
@property (nonatomic,readonly) NSString * subsystem; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) OSLogEventDecomposedMessage * decomposedMessage; 
@property (nonatomic,readonly) unsigned long long signpostIdentifier; 
@property (nonatomic,readonly) unsigned long long signpostType; 
@property (nonatomic,readonly) unsigned long long signpostScope; 
@property (nonatomic,readonly) NSString * signpostName; 
@property (nonatomic,readonly) unsigned long long creatorActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long lossStartMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossStartUnixDate; 
@property (nonatomic,readonly) timezone* lossStartUnixTimeZone; 
@property (nonatomic,readonly) unsigned long long lossEndMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossEndUnixDate; 
@property (nonatomic,readonly) timezone* lossEndUnixTimeZone; 
@property (nonatomic,readonly) SCD_Struct_OS0 lossCount; 
@required
-(unsigned long long)size;
-(unsigned long long)type;
-(NSDate *)date;
-(NSTimeZone *)timeZone;
-(int)processIdentifier;
-(NSString *)category;
-(NSString *)sender;
-(unsigned long long)timeToLive;
-(NSString *)process;
-(unsigned long long)threadIdentifier;
-(unsigned long long)activityIdentifier;
-(unsigned long long)signpostType;
-(NSString *)subsystem;
-(NSString *)formatString;
-(OSLogEventBacktrace *)backtrace;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(OSLogEventDecomposedMessage *)decomposedMessage;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)machContinuousTimestamp;
-(timeval*)unixDate;
-(timezone*)unixTimeZone;
-(NSString *)signpostName;
-(NSString *)composedMessage;
-(unsigned long long)signpostIdentifier;
-(unsigned long long)signpostScope;
-(unsigned long long)logType;
-(NSUUID *)processImageUUID;
-(NSString *)processImagePath;
-(NSUUID *)bootUUID;
-(NSString *)senderImagePath;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)creatorActivityIdentifier;
-(NSUUID *)senderImageUUID;
-(SCD_Struct_OS0)lossCount;
-(const char*)senderImageUUIDBytes;
-(const char*)processImageUUIDBytes;
-(unsigned long long)senderImageOffset;
-(timezone*)lossEndUnixTimeZone;
-(timeval*)lossEndUnixDate;
-(timezone*)lossStartUnixTimeZone;
-(timeval*)lossStartUnixDate;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(unsigned long long)traceIdentifier;
-(unsigned long long)transitionActivityIdentifier;

@end

