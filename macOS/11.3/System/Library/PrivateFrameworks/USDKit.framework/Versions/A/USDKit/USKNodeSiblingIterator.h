/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/Versions/A/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSiblingIterator : NSObject <USKIterator> {

	iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>* _range;
	UsdPrimSiblingIterator* _it;

}
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSiblingRange:(const iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>*)arg1 ;
-(id)nextObject;
@end

