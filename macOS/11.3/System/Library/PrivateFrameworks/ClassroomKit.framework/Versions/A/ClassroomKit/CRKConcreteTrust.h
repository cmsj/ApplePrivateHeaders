/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/CRKTrust.h>

@class NSString;

@interface CRKConcreteTrust : NSObject <CRKTrust> {

	SecTrustRef _underlyingTrust;

}

@property (nonatomic,readonly) id<CRKCertificate> leafCertificate; 
@property (nonatomic,readonly) SecTrustRef underlyingTrust;                     //@synthesize underlyingTrust=_underlyingTrust - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)initWithTrust:(SecTrustRef)arg1 ;
-(SecTrustRef)underlyingTrust;
-(id<CRKCertificate>)leafCertificate;
@end
