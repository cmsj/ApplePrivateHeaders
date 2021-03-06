/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CRKCertificatesRequestResult : NSObject <NSCopying, NSSecureCoding> {

	char _validRequest;
	NSArray* _certificateDataCollection;

}

@property (getter=isValidRequest,nonatomic,readonly) char validRequest;               //@synthesize validRequest=_validRequest - In the implementation block
@property (nonatomic,copy,readonly) NSArray * certificateDataCollection;              //@synthesize certificateDataCollection=_certificateDataCollection - In the implementation block
+(char)supportsSecureCoding;
+(id)invalidResult;
+(id)resultWithCertificateDataCollection:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualToResult:(id)arg1 ;
-(char)isValidRequest;
-(NSArray *)certificateDataCollection;
-(id)initWithIsValidRequest:(char)arg1 certificateDataCollection:(id)arg2 ;
@end

