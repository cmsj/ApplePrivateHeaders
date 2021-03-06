/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFAuthorization : NSObject <NSSecureCoding> {

	AuthorizationOpaqueRefRef _authorization;
	id _reserved;

}
+(char)supportsSecureCoding;
+(id)authorization;
+(id)authorizationWithFlags:(unsigned)arg1 rights:(const SCD_Struct_SF1*)arg2 environment:(const SCD_Struct_SF1*)arg3 ;
-(id)initWithFlags:(unsigned)arg1 rights:(const SCD_Struct_SF1*)arg2 environment:(const SCD_Struct_SF1*)arg3 ;
-(int)permitWithRights:(const SCD_Struct_SF1*)arg1 flags:(unsigned)arg2 environment:(const SCD_Struct_SF1*)arg3 authorizedRights:(SCD_Struct_SF1*)arg4 ;
-(int)permitWithRight:(char*)arg1 flags:(unsigned)arg2 ;
-(void)invalidateCredentials:(char)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(char)obtainWithRight:(char*)arg1 flags:(unsigned)arg2 error:(id*)arg3 ;
-(AuthorizationOpaqueRefRef)authorizationRef;
-(char)obtainWithRights:(const SCD_Struct_SF1*)arg1 flags:(unsigned)arg2 environment:(const SCD_Struct_SF1*)arg3 authorizedRights:(/*function pointer*/void**)arg4 error:(id*)arg5 ;
-(void)invalidateCredentials;
@end

