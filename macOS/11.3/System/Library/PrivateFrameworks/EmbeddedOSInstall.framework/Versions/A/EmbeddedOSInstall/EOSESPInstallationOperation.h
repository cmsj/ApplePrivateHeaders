/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedOSInstall.framework/Versions/A/EmbeddedOSInstall
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedOSInstall/EOSOperation.h>

@class NSURL;

@interface EOSESPInstallationOperation : EOSOperation {

	NSURL* _sandboxURL;

}

@property (retain) NSURL * sandboxURL;              //@synthesize sandboxURL=_sandboxURL - In the implementation block
-(void)main;
-(NSURL *)sandboxURL;
-(id)activityObject;
-(id)initWithRestoreRequest:(id)arg1 ;
-(long long)restorePhase;
-(char)_copyComponentsFromPersonalizedBundleToSandbox;
-(char)_repairESP;
-(char)_mountESP;
-(void)_shoveSandboxToESP;
-(void)_unmountESP;
-(void)_verifyMembootImageChecksumAtPath:(id)arg1 ;
-(unsigned long long)_sizeOfDirectoryAtPath:(id)arg1 ;
-(void)setSandboxURL:(NSURL *)arg1 ;
@end

