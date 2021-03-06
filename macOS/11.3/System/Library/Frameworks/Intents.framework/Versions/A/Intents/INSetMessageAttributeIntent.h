/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetMessageAttributeIntentExport.h>

@class NSArray, NSString;

@interface INSetMessageAttributeIntent : INIntent <INSetMessageAttributeIntentExport>

@property (copy,readonly) NSArray * identifiers; 
@property (readonly) long long attribute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(long long)attribute;
-(id)_metadata;
-(void)setAttribute:(long long)arg1 ;
-(NSArray *)identifiers;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setIdentifiers:(NSArray *)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg1 attribute:(long long)arg2 ;
@end

