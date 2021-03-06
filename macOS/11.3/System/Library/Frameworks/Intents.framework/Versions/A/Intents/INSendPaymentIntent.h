/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSendPaymentIntentExport.h>

@class INPerson, INCurrencyAmount, NSString;

@interface INSendPaymentIntent : INIntent <INSendPaymentIntentExport>

@property (copy,readonly) INPerson * payee; 
@property (copy,readonly) INCurrencyAmount * currencyAmount; 
@property (copy,readonly) NSString * note; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(NSString *)note;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setNote:(NSString *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(char)_isUserConfirmationRequired;
-(char)configureAttributeSet:(id)arg1 includingData:(char)arg2 ;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(INCurrencyAmount *)arg1 ;
-(INPerson *)payee;
-(void)setPayee:(INPerson *)arg1 ;
-(id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3 ;
@end

