/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBDomainAttributeManaging <NSObject>
@required
-(id)attributesForDomain:(id)arg1 andName:(id)arg2 targetProperties:(id)arg3 withError:(id*)arg4;
-(id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
-(id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
-(char)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
-(id)allEntitlements;
-(char)areTargetPropertiesValid:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
-(id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2;
-(id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2;

@end

