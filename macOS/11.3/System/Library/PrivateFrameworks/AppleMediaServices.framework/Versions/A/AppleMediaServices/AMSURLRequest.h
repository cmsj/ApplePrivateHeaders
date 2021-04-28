/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <CFNetwork/NSMutableURLRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying> {

	AMSURLRequestProperties* _properties;

}

@property (retain) AMSURLRequestProperties * properties;              //@synthesize properties=_properties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(AMSURLRequestProperties *)properties;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 bag:(id)arg2 ;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
-(id)initWithRequest:(id)arg1 properties:(id)arg2 ;
@end
