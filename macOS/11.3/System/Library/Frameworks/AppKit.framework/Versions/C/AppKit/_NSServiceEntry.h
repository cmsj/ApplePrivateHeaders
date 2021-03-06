/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/_NSServiceAction.h>

@class NSString, NSSet, NSArray, NSKeyboardShortcut, NSUUID;

@interface _NSServiceEntry : NSObject <_NSServiceAction> {

	NSString* menuItemTitle;
	NSSet* _availablePresentationModes;
	NSSet* _defaultPresentationModes;
	NSSet* _presentationModes;
	NSString* _iconName;
	NSString* _backgroundColorName;
	NSString* bundleIdentifier;
	NSString* bundlePath;
	NSString* executablePath;
	NSString* originalTitle;
	NSString* defaultTitle;
	NSString* localizedTitleWithoutSubstitutions;
	NSKeyboardShortcut* defaultKeyboardShortcut;
	NSKeyboardShortcut* keyboardShortcut;
	NSString* message;
	NSString* filter;
	NSString* portName;
	NSArray* sendPasteboardTypes;
	NSArray* sendFileTypes;
	NSArray* returnTypes;
	NSString* userData;
	NSArray* languages;
	NSArray* _serviceFilters;
	NSString* localizedServiceDescription;
	float timeout;
	unsigned char uuid[16];
	struct {
		unsigned track : 1;
		unsigned hadServiceFilterInPlist : 1;
		unsigned isSpellChecker : 1;
		unsigned filterRequireFilePath : 1;
		unsigned isWorkflow : 1;
		unsigned showApplicationNameWithMenuItemTitle : 1;
		unsigned serviceCategory : 5;
		unsigned checkedServiceDescription : 1;
		unsigned restricted : 1;
		unsigned reserved : 19;
	}  _flags;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * categoryTitle; 
@property (nonatomic,readonly) NSString * localizedCategoryTitle; 
@property (nonatomic,readonly) NSString * bundlePath; 
@property (nonatomic,readonly) NSString * localizedServiceDescription; 
@property (nonatomic,copy) NSSet * presentationModes;                                     //@synthesize presentationModes=_presentationModes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * defaultPresentationModes;                     //@synthesize defaultPresentationModes=_defaultPresentationModes - In the implementation block
@property (nonatomic,copy,readonly) NSSet * availablePresentationModes;                   //@synthesize availablePresentationModes=_availablePresentationModes - In the implementation block
@property (nonatomic,readonly) char hasCustomIcon; 
@property (nonatomic,readonly) char hasBackgroundColor; 
@property (nonatomic,readonly) NSArray * combinedSendTypes; 
@property (nonatomic,readonly) NSArray * sendFileTypes; 
@property (nonatomic,readonly) NSArray * returnTypes; 
@property (nonatomic,readonly) NSKeyboardShortcut * defaultKeyboardShortcut; 
@property (nonatomic,copy) NSKeyboardShortcut * keyboardShortcut; 
@property (nonatomic,copy) NSString * keyEquivalent; 
@property (nonatomic,readonly) NSUUID * serviceUUID; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) char isWorkflow; 
@property (nonatomic,readonly) char isRestricted; 
@property (assign,nonatomic) char isAvailableInContextMenu; 
@property (assign,nonatomic) char isAvailableInServicesMenu; 
@property (nonatomic,readonly) char isSpellChecker; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(char)isRestricted;
-(char)hasCustomIcon;
-(NSString *)keyEquivalent;
-(NSString *)bundlePath;
-(NSString *)title;
-(void)setKeyEquivalent:(NSString *)arg1 ;
-(NSSet *)presentationModes;
-(void)setPresentationModes:(NSSet *)arg1 ;
-(NSString *)localizedTitle;
-(NSSet *)availablePresentationModes;
-(id)serviceIdentifier;
-(void)loadImageOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)hasBackgroundColor;
-(void)loadBackgroundColorOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)returnTypes;
-(char)invokeWithResponder:(id)arg1 ;
-(void)validateWithResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isWorkflow;
-(NSArray *)combinedSendTypes;
-(id)internalRunService:(id)arg1 flags:(unsigned long long)arg2 cancelledHint:(const char*)arg3 ;
-(char)hasSendOrReturnTypes;
-(char)invokeWithPasteboard:(id)arg1 ;
-(id)titleForTracking;
-(void)applyServicesPreferences:(id)arg1 ;
-(char)hasKeyboardShortcut;
-(long long)compareServiceEntryByLocalizedTitle:(id)arg1 ;
-(id)menuItemTitle;
-(void)flushCachedMenuItemTitle;
-(unsigned long long)typeCategory;
-(NSString *)localizedCategoryTitle;
-(id)servicePreferences;
-(void)resetToDefaultAvailability;
-(void)resetToDefaultKeyboardShortcut;
-(unsigned long long)_inferServiceCategory;
-(unsigned long long)combinedSendTypeCount;
-(NSString *)categoryTitle;
-(NSString *)localizedServiceDescription;
-(NSSet *)defaultPresentationModes;
-(NSArray *)sendFileTypes;
-(NSKeyboardShortcut *)defaultKeyboardShortcut;
-(NSKeyboardShortcut *)keyboardShortcut;
-(void)setKeyboardShortcut:(NSKeyboardShortcut *)arg1 ;
-(NSUUID *)serviceUUID;
-(char)isAvailableInContextMenu;
-(void)setIsAvailableInContextMenu:(char)arg1 ;
-(char)isAvailableInServicesMenu;
-(void)setIsAvailableInServicesMenu:(char)arg1 ;
-(char)isSpellChecker;
-(char)hasSendTypes;
-(char)hasReturnTypes;
-(unsigned)enableStatus;
@end

