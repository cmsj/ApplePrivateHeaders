/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/Versions/A/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSData, TRIFile;

@interface TRILevel : TRIPBMessage

@property (nonatomic,readonly) int levelOneOfCase; 
@property (assign,nonatomic) char booleanValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) int intValue; 
@property (assign,nonatomic) long long longValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,copy) NSData * binaryValue; 
@property (nonatomic,retain) TRIFile * fileValue; 
@property (nonatomic,retain) TRIFile * directoryValue; 
+(id)descriptor;
-(id)object;
-(id)fileOrDirectoryLevelWithIsDir:(char*)arg1 ;
@end

