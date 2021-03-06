/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUIAddViews, NSString, SAUIImageResource, NSDictionary, NSURL, NSArray;

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (nonatomic,retain) SAUIAddViews * alternativePunchOut; 
@property (assign,nonatomic) char appAvailableInStorefront; 
@property (nonatomic,copy) NSString * appDisplayName; 
@property (nonatomic,retain) SAUIImageResource * appIcon; 
@property (nonatomic,copy) NSDictionary * appIconMap; 
@property (assign,nonatomic) char appInstalled; 
@property (nonatomic,copy) NSURL * appStoreUri; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSArray * launchOptions; 
@property (assign,nonatomic) char launchOverSiri; 
@property (nonatomic,copy) NSString * predefinedButtonType; 
@property (nonatomic,copy) NSString * providerId; 
@property (nonatomic,copy) NSString * punchOutName; 
@property (nonatomic,copy) NSURL * punchOutUri; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * themeIcons; 
+(id)appPunchOut;
+(id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(NSArray *)launchOptions;
-(id)encodedClassName;
-(char)requiresResponse;
-(char)mutatingCommand;
-(SAUIAddViews *)alternativePunchOut;
-(void)setAlternativePunchOut:(SAUIAddViews *)arg1 ;
-(char)appAvailableInStorefront;
-(void)setAppAvailableInStorefront:(char)arg1 ;
-(NSString *)appDisplayName;
-(void)setAppDisplayName:(NSString *)arg1 ;
-(SAUIImageResource *)appIcon;
-(void)setAppIcon:(SAUIImageResource *)arg1 ;
-(NSDictionary *)appIconMap;
-(void)setAppIconMap:(NSDictionary *)arg1 ;
-(char)appInstalled;
-(void)setAppInstalled:(char)arg1 ;
-(NSURL *)appStoreUri;
-(void)setAppStoreUri:(NSURL *)arg1 ;
-(void)setLaunchOptions:(NSArray *)arg1 ;
-(char)launchOverSiri;
-(void)setLaunchOverSiri:(char)arg1 ;
-(NSString *)predefinedButtonType;
-(void)setPredefinedButtonType:(NSString *)arg1 ;
-(NSString *)punchOutName;
-(void)setPunchOutName:(NSString *)arg1 ;
-(NSURL *)punchOutUri;
-(void)setPunchOutUri:(NSURL *)arg1 ;
-(NSArray *)themeIcons;
-(void)setThemeIcons:(NSArray *)arg1 ;
@end

