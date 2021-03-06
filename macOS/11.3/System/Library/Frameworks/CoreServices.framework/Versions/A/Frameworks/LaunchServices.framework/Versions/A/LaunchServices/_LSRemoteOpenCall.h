/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, _LSRemoteOpenCallInputs, _LSRemoteOpenCallOutputs;

@interface _LSRemoteOpenCall : NSObject <NSSecureCoding> {

	NSObject*<OS_xpc_object> _connection;
	_LSRemoteOpenCallInputs* _inputs;
	_LSRemoteOpenCallOutputs* _outputs;

}
+(char)supportsSecureCoding;
+(char)canInvokeLocally;
+(char)canInvokeRemotely;
+(void)invokeWithXPCConnection:(id)arg1 object:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void)setInURLs:(CFArrayRef)arg1 ;
-(void)setInRoleMask:(unsigned)arg1 ;
-(void)setInAEParam:(const AEKeyDesc*)arg1 ;
-(void)setInAppParams:(const LSApplicationParameters_V1*)arg1 ;
-(void)setInAnnotations:(const AEDesc*)arg1 ;
-(void)setInOptions2:(id)arg1 ;
-(void)setInPSNCount:(unsigned long long)arg1 ;
-(char)invokeWithError:(id*)arg1 ;
-(void)getOutPSNs:(ProcessSerialNumber*)arg1 ;
-(void)getOutAppURL:(id*)arg1 ;
-(void)getOutAppWasLaunched:(char*)arg1 ;
-(char)invokeWithXPCConnection:(id)arg1 error:(id*)arg2 ;
@end

