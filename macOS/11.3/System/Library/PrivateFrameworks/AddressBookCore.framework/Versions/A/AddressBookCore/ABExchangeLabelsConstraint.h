/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABLabelsConstraint.h>

@interface ABExchangeLabelsConstraint : ABLabelsConstraint
+(id)phoneLabels;
+(id)emailLabels;
+(id)addressLabels;
+(id)instantMessageLabels;
+(id)relatedNamesLabels;
+(id)urlLabels;
+(id)otherDatesLabels;
+(id)makePhoneLabels;
+(id)makeInstantMessageLabels;
+(id)makeAddressLabels;
+(id)makeRelatedNamesLabels;
+(id)unsupportedProperties;
+(id)propertyToValidLabelsDictionary;
+(id)propertyToInitialLabelDictionary;
-(id)initialLabelsForProperty:(id)arg1 ;
-(char)isPropertySupported:(id)arg1 ;
-(char)isLabelSupported:(id)arg1 forProperty:(id)arg2 ;
-(id)availableLabelsForProperty:(id)arg1 activeLabels:(id)arg2 ;
-(char)customLabelsSupported;
@end

