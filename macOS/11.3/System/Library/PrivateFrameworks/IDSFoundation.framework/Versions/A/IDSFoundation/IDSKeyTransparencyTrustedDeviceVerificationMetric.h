/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/Versions/A/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTRTCMetric.h>

@class NSString, NSDictionary;

@interface IDSKeyTransparencyTrustedDeviceVerificationMetric : NSObject <CUTRTCMetric> {

	char _cloudKitSuccess;
	char _accountKeySuccess;
	unsigned long long _keyTransparencyVersion;
	NSString* _cloudKitErrorDomain;
	long long _cloudKitErrorCode;
	NSString* _cloudKitUnderlyingErrorDomain;
	long long _cloudKitUnderlyingErrorCode;
	double _cloudKitOperationTimeInterval;
	NSString* _accountKeyErrorDomain;
	long long _accountKeyErrorCode;
	NSString* _accountKeyUnderlyingErrorDomain;
	long long _accountKeyUnderlyingErrorCode;
	double _accountKeyOperationTimeInterval;
	unsigned long long _numberOfTotalDevices;
	unsigned long long _numberOfCandidateDevices;
	unsigned long long _numberOfMatchesFromCloudKit;
	unsigned long long _numberOfMatchesFromAccountKey;

}

@property (nonatomic,readonly) unsigned long long keyTransparencyVersion;                     //@synthesize keyTransparencyVersion=_keyTransparencyVersion - In the implementation block
@property (nonatomic,readonly) char cloudKitSuccess;                                          //@synthesize cloudKitSuccess=_cloudKitSuccess - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitErrorDomain;                                //@synthesize cloudKitErrorDomain=_cloudKitErrorDomain - In the implementation block
@property (nonatomic,readonly) long long cloudKitErrorCode;                                   //@synthesize cloudKitErrorCode=_cloudKitErrorCode - In the implementation block
@property (nonatomic,readonly) NSString * cloudKitUnderlyingErrorDomain;                      //@synthesize cloudKitUnderlyingErrorDomain=_cloudKitUnderlyingErrorDomain - In the implementation block
@property (nonatomic,readonly) long long cloudKitUnderlyingErrorCode;                         //@synthesize cloudKitUnderlyingErrorCode=_cloudKitUnderlyingErrorCode - In the implementation block
@property (nonatomic,readonly) double cloudKitOperationTimeInterval;                          //@synthesize cloudKitOperationTimeInterval=_cloudKitOperationTimeInterval - In the implementation block
@property (nonatomic,readonly) char accountKeySuccess;                                        //@synthesize accountKeySuccess=_accountKeySuccess - In the implementation block
@property (nonatomic,readonly) NSString * accountKeyErrorDomain;                              //@synthesize accountKeyErrorDomain=_accountKeyErrorDomain - In the implementation block
@property (nonatomic,readonly) long long accountKeyErrorCode;                                 //@synthesize accountKeyErrorCode=_accountKeyErrorCode - In the implementation block
@property (nonatomic,readonly) NSString * accountKeyUnderlyingErrorDomain;                    //@synthesize accountKeyUnderlyingErrorDomain=_accountKeyUnderlyingErrorDomain - In the implementation block
@property (nonatomic,readonly) long long accountKeyUnderlyingErrorCode;                       //@synthesize accountKeyUnderlyingErrorCode=_accountKeyUnderlyingErrorCode - In the implementation block
@property (nonatomic,readonly) double accountKeyOperationTimeInterval;                        //@synthesize accountKeyOperationTimeInterval=_accountKeyOperationTimeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfTotalDevices;                       //@synthesize numberOfTotalDevices=_numberOfTotalDevices - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCandidateDevices;                   //@synthesize numberOfCandidateDevices=_numberOfCandidateDevices - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMatchesFromCloudKit;                //@synthesize numberOfMatchesFromCloudKit=_numberOfMatchesFromCloudKit - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMatchesFromAccountKey;              //@synthesize numberOfMatchesFromAccountKey=_numberOfMatchesFromAccountKey - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) unsigned short rtcType; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)name;
-(NSDictionary *)dictionaryRepresentation;
-(unsigned short)rtcType;
-(unsigned long long)keyTransparencyVersion;
-(char)cloudKitSuccess;
-(NSString *)cloudKitErrorDomain;
-(long long)cloudKitErrorCode;
-(NSString *)cloudKitUnderlyingErrorDomain;
-(long long)cloudKitUnderlyingErrorCode;
-(double)cloudKitOperationTimeInterval;
-(char)accountKeySuccess;
-(NSString *)accountKeyErrorDomain;
-(long long)accountKeyErrorCode;
-(NSString *)accountKeyUnderlyingErrorDomain;
-(long long)accountKeyUnderlyingErrorCode;
-(double)accountKeyOperationTimeInterval;
-(unsigned long long)numberOfTotalDevices;
-(unsigned long long)numberOfCandidateDevices;
-(unsigned long long)numberOfMatchesFromCloudKit;
-(unsigned long long)numberOfMatchesFromAccountKey;
-(id)initWithKeyTransparencyVersion:(unsigned long long)arg1 cloudKitSuccess:(char)arg2 cloudKitErrorDomain:(id)arg3 cloudKitErrorCode:(long long)arg4 cloudKitUnderlyingErrorDomain:(id)arg5 cloudKitUnderlyingErrorCode:(long long)arg6 cloudKitOperationTimeInterval:(double)arg7 accountKeySuccess:(char)arg8 accountKeyErrorDomain:(id)arg9 accountKeyErrorCode:(long long)arg10 accountKeyUnderlyingErrorDomain:(id)arg11 accountKeyUnderlyingErrorCode:(long long)arg12 accountKeyOperationTimeInterval:(double)arg13 numberOfTotalDevices:(unsigned long long)arg14 numberOfCandidateDevices:(unsigned long long)arg15 numberOfMatchesFromCloudKit:(unsigned long long)arg16 numberOfMatchesFromAccountKey:(unsigned long long)arg17 ;
@end
