/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/IFTaskElement.h>

@class NSString, IFDiskObject;

@interface IFScriptElement : IFTaskElement {

	NSString* _action;
	char _runScriptInTemp;
	IFDiskObject* _targetVolume;

}
-(long long)run;
-(void)dealloc;
-(id)description;
-(id)logDescription;
-(id)initWithAction:(id)arg1 stateDelegate:(id)arg2 targetVolume:(id)arg3 packageController:(id)arg4 ;
-(void)setRunScriptInTemp:(char)arg1 ;
-(void)setTaskEnvironment;
@end

