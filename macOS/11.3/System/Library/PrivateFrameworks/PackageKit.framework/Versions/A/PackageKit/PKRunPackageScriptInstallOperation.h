/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PackageKit/PKInstallOperation.h>

@class NSString, PKPackageSpecifier;

@interface PKRunPackageScriptInstallOperation : PKInstallOperation {

	NSString* _scriptType;
	PKPackageSpecifier* _currentPackageSpecifier;
	unsigned _original_bootstrap_port;
	unsigned _original_security_session_port;

}
+(id)_sanitizeEnvironment:(id)arg1 ;
-(id)currentPackageSpecifier;
-(id)messageTracerDomain;
-(id)messageTracerComment;
-(id)initForScriptType:(id)arg1 request:(id)arg2 sandbox:(id)arg3 analyzer:(id)arg4 ;
-(char)_shouldSkipScriptForPackageSpecifier:(id)arg1 ;
-(id)_scriptTaskEnvironmentForPackage:(id)arg1 destination:(id)arg2 scriptName:(id)arg3 ;
-(void)_switchToUserContext;
-(void)_restoreContext;
-(SEL)_scriptPathSelectorForPackage:(id)arg1 returningScriptName:(id*)arg2 ;
-(int)_runPackageScript:(id)arg1 packageSpecifier:(id)arg2 component:(id)arg3 scriptName:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(id)description;
-(int)installState;
-(void)main;
@end
