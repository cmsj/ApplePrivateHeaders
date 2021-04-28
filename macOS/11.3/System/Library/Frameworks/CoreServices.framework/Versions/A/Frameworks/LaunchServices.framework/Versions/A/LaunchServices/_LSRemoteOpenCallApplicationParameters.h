/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSAppleEventDescriptor, NSArray, NSURL;

@interface _LSRemoteOpenCallApplicationParameters : NSObject <NSSecureCoding> {

	unsigned _flags;
	void* _asyncLaunchRefCon;
	NSDictionary* _environment;
	NSAppleEventDescriptor* _initialEvent;
	NSArray* _architectures;
	NSURL* _applicationURL;
	ProcessSerialNumber _applicationPSN;
	char _hasApplicationPSN;

}

@property (nonatomic,readonly) const LSApplicationParameters_V1* applicationParameters; 
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithApplicationParameters_V1:(const LSApplicationParameters_V1*)arg1 ;
-(const LSApplicationParameters_V1*)applicationParameters;
@end
