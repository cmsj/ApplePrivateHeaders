/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Intents.framework/Versions/A/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INReadAnnouncementIntentExport.h>

@class NSString;

@interface INReadAnnouncementIntent : INIntent <INReadAnnouncementIntentExport>

@property (readonly) long long readType; 
@property (copy,readonly) NSString * startAnnouncementIdentifier; 
@property (readonly) long long userNotificationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)domain;
-(id)_metadata;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setVerb:(id)arg1 ;
-(id)_typedBackingStore;
-(void)_setMetadata:(id)arg1 ;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(long long)readType;
-(void)setReadType:(long long)arg1 ;
-(NSString *)startAnnouncementIdentifier;
-(void)setStartAnnouncementIdentifier:(NSString *)arg1 ;
-(long long)userNotificationType;
-(void)setUserNotificationType:(long long)arg1 ;
-(id)initWithReadType:(long long)arg1 startAnnouncementIdentifier:(id)arg2 userNotificationType:(long long)arg3 ;
@end

