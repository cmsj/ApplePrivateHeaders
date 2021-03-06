/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSExtension, SafariWebExtension, NSString, NSURL, NSImage, NSDictionary, NSArray;

@interface ExtensionWrapper : NSObject {

	NSExtension* _appExtension;
	NSExtension* _contentBlockerAppExtension;
	SafariWebExtension* _webExtension;
	NSString* _iconDataURLString;

}

@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * displayVersion; 
@property (nonatomic,copy,readonly) NSString * containingAppDisplayName; 
@property (nonatomic,readonly) NSURL * containingAppURL; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,readonly) NSImage * preferencesIcon; 
@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,copy,readonly) NSDictionary * websiteAccess; 
@property (nonatomic,readonly) NSExtension * appExtension; 
@property (nonatomic,copy,readonly) NSArray * errorStrings; 
@property (nonatomic,readonly) SafariWebExtension * webExtension; 
@property (nonatomic,readonly) char isContentBlocker; 
+(id)extensionWrapperWithExtension:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(char)isEnabled;
-(NSString *)displayName;
-(void)disable;
-(NSURL *)containingAppURL;
-(NSString *)descriptionText;
-(NSString *)containingAppDisplayName;
-(char)canEnable;
-(NSString *)displayVersion;
-(NSDictionary *)websiteAccess;
-(SafariWebExtension *)webExtension;
-(void)enableFromExtensionPreferences;
-(NSArray *)errorStrings;
-(NSImage *)preferencesIcon;
-(void)_enableWebExtensionAndPromptForNewTabOverrideIfNecessary;
-(id)initWithComposedIdentifier:(id)arg1 ;
-(NSExtension *)appExtension;
-(void)enableFromOutsideExtensionPreferences;
-(char)isContentBlocker;
@end

