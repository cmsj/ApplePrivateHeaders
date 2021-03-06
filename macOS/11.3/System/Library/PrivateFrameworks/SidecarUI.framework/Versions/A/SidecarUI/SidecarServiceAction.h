/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SidecarUI.framework/Versions/A/SidecarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_NSServiceAction.h>

@class NSString, NSSet, NSArray, NSKeyboardShortcut, NSUUID, SidecarService, NSMutableSet;

@interface SidecarServiceAction : NSObject <_NSServiceAction> {

	SidecarService* _sidecarService;
	NSKeyboardShortcut* _keyboardShortcut;
	NSMutableSet* _presentationModes;
	NSUUID* _uuid;

}

@property (nonatomic,readonly) SidecarService * sidecarService; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * categoryTitle; 
@property (nonatomic,readonly) NSString * localizedCategoryTitle; 
@property (nonatomic,readonly) NSString * bundlePath; 
@property (nonatomic,readonly) NSString * localizedServiceDescription; 
@property (nonatomic,copy) NSSet * presentationModes; 
@property (nonatomic,copy,readonly) NSSet * defaultPresentationModes; 
@property (nonatomic,copy,readonly) NSSet * availablePresentationModes; 
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
-(void)loadImageOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)hasBackgroundColor;
-(void)loadBackgroundColorOnQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSArray *)returnTypes;
-(char)invokeWithResponder:(id)arg1 ;
-(void)validateWithResponder:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isWorkflow;
-(NSArray *)combinedSendTypes;
-(char)invokeWithPasteboard:(id)arg1 ;
-(NSString *)localizedCategoryTitle;
-(void)resetToDefaultAvailability;
-(void)resetToDefaultKeyboardShortcut;
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
-(id)initWithService:(id)arg1 ;
-(SidecarService *)sidecarService;
-(char)_getIsAvailableInPresentationMode:(id)arg1 ;
-(void)_setIsAvailable:(char)arg1 inPresentationMode:(id)arg2 ;
@end

