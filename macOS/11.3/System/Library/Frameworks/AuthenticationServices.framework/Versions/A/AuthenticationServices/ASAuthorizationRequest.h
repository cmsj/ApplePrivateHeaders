/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/Versions/A/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/AuthenticationServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ASAuthorizationProvider;
@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding> {

	id<ASAuthorizationProvider> _provider;

}

@property (nonatomic,readonly) id<ASAuthorizationProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)new;
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(id<ASAuthorizationProvider>)provider;
@end
