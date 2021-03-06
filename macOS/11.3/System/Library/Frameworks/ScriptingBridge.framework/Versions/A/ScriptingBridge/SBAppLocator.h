/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScriptingBridge/ScriptingBridge-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SBAppLocator : NSObject <NSCoding> {

	AEDesc* _address;
	char _isCurrentProcess;
	unsigned _launchFlags;

}
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)path;
-(id)bundleIdentifier;
-(const AEDesc*)address;
-(char)isRunning;
-(char)isCurrentProcess;
-(const AEDesc*)addressWithoutLaunching;
-(void)resetAddress;
-(const AEDesc*)launchWithFlags:(unsigned)arg1 ;
-(id)processInformation;
-(id)sdef;
@end

