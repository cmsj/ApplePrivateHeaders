/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface CRKFetchBooksRequest : CATTaskRequest {

	char _includeImages;

}

@property (assign,nonatomic) char includeImages;              //@synthesize includeImages=_includeImages - In the implementation block
+(char)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isValidWithError:(id*)arg1 ;
-(char)includeImages;
-(void)setIncludeImages:(char)arg1 ;
@end

