/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/AMBundleAction.h>

@class OSAScript;

@interface AMAppleScriptAction : AMBundleAction {

	OSAScript* _script;

}

@property (nonatomic,copy) OSAScript * script;              //@synthesize script=_script - In the implementation block
-(id)init;
-(id)initWithBundle:(id)arg1 ;
-(void)closed;
-(void)activated;
-(void)_closed;
-(void)updateParameters;
-(id)resolvedParameters;
-(OSAScript *)script;
-(void)setScript:(OSAScript *)arg1 ;
-(void)willOpen;
-(void)willBecomeActive;
-(void)opened;
-(id)richTextOutput;
-(id)runWithInput:(id)arg1 error:(id*)arg2 ;
-(id)_emptyInput;
-(void)parametersUpdated;
-(id)executeScript:(id)arg1 withParameter:(id)arg2 error:(id*)arg3 ;
-(void)_executeWithInfo:(id)arg1 ;
-(void)_richTextOutputFromScriptOnMainThreadWithDict:(id)arg1 ;
@end

