/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ABCNMultiValueDiff : NSObject {

	NSArray* _updates;

}
+(id)emptyDiff;
-(void)dealloc;
-(id)description;
-(char)isEmpty;
-(id)initWithUpdates:(id)arg1 ;
-(void)applyToABMutableMultiValue:(id)arg1 transform:(/*^block*/id)arg2 ;
-(id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2 ;
@end
