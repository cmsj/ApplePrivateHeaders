/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ACDEClient.framework/Versions/A/ACDEClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACDEClient/ACDEClient-Structs.h>
#import <ACDEClient/ACFCertificateStoragePolicy.h>

@class NSString;

@interface ACDECertificateStoragePolicy : NSObject <ACFCertificateStoragePolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)environmnetPreferencesForRealm:(id)arg1 ;
-(char)removeCertificateWithLabel:(id)arg1 realm:(id)arg2 ;
-(char)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2 ;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2 ;
@end

