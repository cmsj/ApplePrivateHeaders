/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSItem, NSMutableDictionary, NSString, NSArray, NSSet, SSItemMedia, SSDialog, SSNetworkConstraints;

@interface SSItemOffer : NSObject <NSCopying> {

	SSItem* _item;
	NSMutableDictionary* _offerDictionary;
	NSString* _offerIdentifier;
	NSArray* _supportedDevices;

}

@property (assign,setter=_setOfferItem:,getter=_offerItem,nonatomic) SSItem * _offerItem;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSSet * accountIdentifiers; 
@property (nonatomic,readonly) NSString * actionType; 
@property (nonatomic,readonly) long long estimatedDiskSpaceNeeded; 
@property (nonatomic,readonly) id requiredSoftwareCapabilities; 
@property (nonatomic,readonly) char shouldShowPlusIcon; 
@property (nonatomic,readonly) NSString * offerIdentifier;                                             //@synthesize offerIdentifier=_offerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * buyParameters; 
@property (nonatomic,readonly) NSString * priceDisplay; 
@property (nonatomic,readonly) NSString * actionDisplayName; 
@property (getter=isOneTapOffer,nonatomic,readonly) char oneTapOffer; 
@property (getter=isPreorder,nonatomic,readonly) char preorder; 
@property (nonatomic,readonly) SSItemMedia * offerMedia; 
@property (nonatomic,readonly) SSDialog * confirmationDialog; 
@property (nonatomic,readonly) SSDialog * successDialog; 
@property (nonatomic,readonly) NSArray * supportedDevices; 
@property (nonatomic,readonly) SSNetworkConstraints * networkConstraints; 
+(id)_preferredOfferIdentifiers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)actionType;
-(NSSet *)accountIdentifiers;
-(NSString *)offerIdentifier;
-(NSString *)buyParameters;
-(char)isPreorder;
-(SSNetworkConstraints *)networkConstraints;
-(NSString *)priceDisplay;
-(void)setBuyParameters:(NSString *)arg1 ;
-(NSArray *)supportedDevices;
-(void)setPriceDisplay:(NSString *)arg1 ;
-(id)playableMedia;
-(id)allowedToneStyles;
-(void)_setOfferItem:(id)arg1 ;
-(id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2 ;
-(SSItemMedia *)offerMedia;
-(NSString *)actionDisplayName;
-(SSDialog *)confirmationDialog;
-(id)documentCannotOpenDialog;
-(id)documentRequiredHandlers;
-(id)documentUTI;
-(char)isOneTapOffer;
-(SSDialog *)successDialog;
-(long long)estimatedDiskSpaceNeeded;
-(id)requiredSoftwareCapabilities;
-(void)setActionDisplayName:(NSString *)arg1 ;
-(void)setOneTapOffer:(char)arg1 ;
-(char)shouldShowPlusIcon;
-(SSItem *)_offerItem;
@end
