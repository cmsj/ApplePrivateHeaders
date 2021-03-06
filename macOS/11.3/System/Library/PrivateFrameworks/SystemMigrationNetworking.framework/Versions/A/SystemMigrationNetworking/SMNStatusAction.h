/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SMNAction.h>

@class NSNumber, NSString, NSArray;

@interface SMNStatusAction : SMNAction {

	NSNumber* _timeRemaining;
	NSNumber* _percentDone;
	NSString* _text;
	NSArray* _arguments;
	NSArray* _errorsAndWarnings;
	NSString* _sourceInterfaceTypeString;
	unsigned long long _sourceInterfaceType;
	unsigned long long _sourceInterfaceIconType;

}

@property (retain) NSNumber * timeRemaining;                                //@synthesize timeRemaining=_timeRemaining - In the implementation block
@property (retain) NSNumber * percentDone;                                  //@synthesize percentDone=_percentDone - In the implementation block
@property (retain) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (retain) NSArray * arguments;                                     //@synthesize arguments=_arguments - In the implementation block
@property (retain) NSArray * errorsAndWarnings;                             //@synthesize errorsAndWarnings=_errorsAndWarnings - In the implementation block
@property (retain) NSString * sourceInterfaceTypeString;                    //@synthesize sourceInterfaceTypeString=_sourceInterfaceTypeString - In the implementation block
@property (assign) unsigned long long sourceInterfaceType;                  //@synthesize sourceInterfaceType=_sourceInterfaceType - In the implementation block
@property (assign) unsigned long long sourceInterfaceIconType;              //@synthesize sourceInterfaceIconType=_sourceInterfaceIconType - In the implementation block
+(int)actionID;
+(id)actionWithPayload:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setArguments:(NSArray *)arg1 ;
-(NSArray *)arguments;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)timeRemaining;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(void)setPercentDone:(NSNumber *)arg1 ;
-(char)keepAlive;
-(NSNumber *)percentDone;
-(char)expectsAResult;
-(void)setErrorsAndWarnings:(NSArray *)arg1 ;
-(void)setSourceInterfaceTypeString:(NSString *)arg1 ;
-(void)setSourceInterfaceType:(unsigned long long)arg1 ;
-(void)setSourceInterfaceIconType:(unsigned long long)arg1 ;
-(unsigned long long)sourceInterfaceIconType;
-(unsigned long long)sourceInterfaceType;
-(NSString *)sourceInterfaceTypeString;
-(NSArray *)errorsAndWarnings;
-(id)requestPayload;
-(char)returnsData;
@end

