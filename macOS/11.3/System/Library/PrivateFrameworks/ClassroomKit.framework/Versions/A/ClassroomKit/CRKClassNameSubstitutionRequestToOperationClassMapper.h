/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKRequestToOperationClassMapping.h>

@class NSArray, NSString;

@interface CRKClassNameSubstitutionRequestToOperationClassMapper : NSObject <CRKRequestToOperationClassMapping> {

	NSArray* mAllowedPrefixes;
	NSString* mOperationPrefix;

}
-(id)init;
-(id)initWithAllowedRequestPrefixes:(id)arg1 operationPrefix:(id)arg2 ;
-(id)stringByApplyingOperationSuffixToString:(id)arg1 ;
-(id)stringByApplyingOperationPrefixToString:(id)arg1 ;
-(id)prefixForString:(id)arg1 ;
-(Class)operationClassForRequest:(id)arg1 ;
@end

