/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/Versions/A/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSProcessIdentity.h>

@class RBSXPCServiceIdentity;

@interface RBSXPCServiceProcessIdentity : RBSProcessIdentity {

	RBSXPCServiceIdentity* _serviceIdentity;

}
+(char)shouldManageExtensionWithExtensionPoint:(id)arg1 ;
-(unsigned long long)hash;
-(id)uuid;
-(id)hostIdentifier;
-(void)encodeWithRBSXPCCoder:(id)arg1 ;
-(id)initWithRBSXPCCoder:(id)arg1 ;
-(id)_initWithXPCServiceID:(id)arg1 pid:(int)arg2 euid:(unsigned)arg3 ;
-(unsigned char)defaultManageFlags;
-(char)isExtension;
-(id)xpcServiceIdentifier;
-(char)_matchesIdentity:(id)arg1 ;
-(id)copyWithEuid:(unsigned)arg1 ;
-(char)isXPCService;
-(char)isAnonymous;
-(id)hostIdentity;
-(char)inheritsCoalitionBand;
-(id)encodeForJob;
-(id)initWithDecodeFromJob:(id)arg1 ;
-(char)isEqualToIdentity:(id)arg1 ;
@end

