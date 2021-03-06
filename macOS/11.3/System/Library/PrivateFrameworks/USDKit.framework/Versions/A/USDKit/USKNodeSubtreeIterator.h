/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/Versions/A/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSubtreeIterator : NSObject <USKIterator> {

	UsdPrimRange* _range;
	iterator* _it;

}
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSubtreeRange:(const UsdPrimRange*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)nextObject;
-(id)initWithScene:(const TfWeakPtr<pxrInternal_v0_20__pxrReserved__usdkit__::UsdStage>*)arg1 ;
@end

