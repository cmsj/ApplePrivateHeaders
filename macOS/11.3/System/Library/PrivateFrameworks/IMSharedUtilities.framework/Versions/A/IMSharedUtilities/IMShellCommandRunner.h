/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSString, NSError;

@interface IMShellCommandRunner : NSObject {

	NSMutableString* _standardOut;
	NSMutableString* _standardErr;
	int _exitCode;

}

@property (readonly) NSString * standardErr;              //@synthesize standardErr=_standardErr - In the implementation block
@property (readonly) NSString * standardOut;              //@synthesize standardOut=_standardOut - In the implementation block
@property (readonly) int exitCode;                        //@synthesize exitCode=_exitCode - In the implementation block
@property (readonly) NSError * error; 
+(id)runCommand:(id)arg1 args:(id)arg2 ;
+(id)runBashScript:(id)arg1 args:(id)arg2 ;
-(NSError *)error;
-(void)handleStdoutChanged:(id)arg1 ;
-(void)_setStdoutOnTask:(id)arg1 ;
-(void)_setStderrOnTask:(id)arg1 ;
-(int)exitCode;
-(NSString *)standardErr;
-(void)run:(id)arg1 args:(id)arg2 ;
-(id)stringFromPipe:(id)arg1 ;
-(NSString *)standardOut;
@end

