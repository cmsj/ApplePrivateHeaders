/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/PreferencePanes.framework/Versions/A/PreferencePanes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencePanes/PreferencePanes-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSArray, NSMutableDictionary, NSPreferencePane, NSImage, NSBundle, NSMutableArray;

@interface NSPrefPaneBundle : NSObject <NSSecureCoding> {

	NSString* _path;
	NSString* _iconLabel;
	NSString* _shortName;
	NSString* _longName;
	NSString* _description;
	NSString* _identifier;
	NSString* _hardwareTestTool;
	NSString* _ioServiceToMatch;
	NSDictionary* _ioServiceAttributesToMatch;
	NSString* _searchGroupsPath;
	NSNumber* _isDisabledOnServer;
	NSString* _bestLocale;
	NSArray* _localizations;
	NSString* _shortVersion;
	NSMutableDictionary* _localizedNames;
	NSMutableDictionary* _localizedIconLabels;
	NSString* _remoteViewClass;
	NSPreferencePane* _prefPaneObject;
	NSImage* _icon;
	NSString* _iconName;
	char _iconNameUsesAssetCatalog;
	NSImage* _largeIcon;
	NSBundle* _bundle;
	char _enabled;
	char _visible;
	char _overrideVisible;
	char _favorite;
	char _devVersion;
	unsigned long long _nameIconVariant;
	NSMutableArray* _searchAnchors;

}

@property (assign) char favorite;                                              //@synthesize favorite=_favorite - In the implementation block
@property (assign) char overrideVisible;                                       //@synthesize overrideVisible=_overrideVisible - In the implementation block
@property (getter=isVisible) char visible; 
@property (getter=isEnabled) char enabled;                                     //@synthesize enabled=_enabled - In the implementation block
@property (readonly) NSString * path;                                          //@synthesize path=_path - In the implementation block
@property (readonly) char shouldAlwaysAllowOpenDocument; 
@property (readonly) char supportsAutoLayout; 
@property (readonly) char allowsXAppleSystemPreferencesURLScheme; 
@property (assign) unsigned long long nameIconVariant;                         //@synthesize nameIconVariant=_nameIconVariant - In the implementation block
@property (readonly) NSString * remoteViewClass; 
@property (readonly) char hasRemoteView; 
@property (getter=isDevVersion) char devVersion;                               //@synthesize devVersion=_devVersion - In the implementation block
@property (readonly) NSPreferencePane * prefPaneObject;                        //@synthesize prefPaneObject=_prefPaneObject - In the implementation block
+(char)supportsSecureCoding;
+(void)setUserInterfaceLayoutDirection:(long long)arg1 ;
+(char)numberingSystemIsArabic;
-(id)description;
-(id)name;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)identifier;
-(NSString *)path;
-(char)isEnabled;
-(id)localizedNames;
-(id)objectSpecifier;
-(id)initWithPath:(id)arg1 ;
-(id)bundle;
-(char)isVisible;
-(id)icon;
-(void)setVisible:(char)arg1 ;
-(char)hasEntitlement:(id)arg1 ;
-(id)iconName;
-(id)shortName;
-(void)setFavorite:(char)arg1 ;
-(char)favorite;
-(id)anchors;
-(id)iconLabel;
-(id)mainView;
-(id)largeIcon;
-(id)shortVersion;
-(id)longName;
-(void)reveal:(id)arg1 ;
-(char)isApple;
-(char)_isSignedByAppleUsingStaticCodeRef:(const _SecCode*)arg1 ;
-(id)bestLocaleForCurrentUser;
-(id)localizedIconLabels;
-(unsigned long long)nameIconVariant;
-(id)altNameIconTestTool;
-(NSString *)remoteViewClass;
-(id)_iconNameForKey:(id)arg1 ;
-(id)_localeAwareIconNames:(id)arg1 ;
-(void)instantiatePrefPaneObjectWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)searchGroupsPath;
-(id)hardwareTestTool;
-(id)ioServiceToMatch;
-(id)ioServiceAttributesToMatch;
-(char)isDisabledOnServer;
-(char)isSignedByApple;
-(char)shouldAlwaysAllowOpenDocument;
-(char)supportsAutoLayout;
-(char)allowsXAppleSystemPreferencesURLScheme;
-(char)hasRemoteView;
-(char)wantsCache;
-(char)instantiatePrefPaneObject;
-(void)authorize:(id)arg1 ;
-(char)overrideVisible;
-(void)setOverrideVisible:(char)arg1 ;
-(NSPreferencePane *)prefPaneObject;
-(void)setNameIconVariant:(unsigned long long)arg1 ;
-(char)isDevVersion;
-(void)setDevVersion:(char)arg1 ;
-(void)_IOServiceDidMatch;
@end

